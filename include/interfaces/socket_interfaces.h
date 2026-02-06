#pragma once

#include "xbase.h"
#include "xnode.h"

// Note: Expected to be moved into xnetwork library, thus, NO include of <xmedia.h> !!!

#include <string>
#include <string_view>
#include <vector>

namespace xsdk {

// 2Think: Separate interface for Options/Props, IObject base ?
class ISocket {
public:
    // Time for send rest data on closing
    static constexpr double kDefaultWaitForSendSec = 0.5;

    // Return false for stop receving data (could be continued via SocketReceive() call)
    using DataCallbackPf =
        std::function<bool(const std::optional<xbase::Uid> _from_uid, const xbase::IBuffer::SPtrC& _data_buffer)>;

    // Return false for cancel:
    // - reconnect
    // - new client connection (todo)
    // - for other cases return value is ignored
    enum class State { kBlank, kConnecting, kConnected, kListening, kReconnect, kClosing, kClosed, kError };
    using StateCallbackPf = std::function<bool(const xbase::Uid      _socket_uid,
                                               const std::error_code _err,
                                               const ISocket::State  _new_state,
                                               const ISocket::State  _from_state,
                                               const XValue&         _details)>;

public:
    USING_PTRS(ISocket)

    virtual ~ISocket() = default;

    virtual xbase::Uid          SocketUid() const                                                                  = 0;
    virtual std::string         SocketUrl() const                                                                  = 0;
    virtual const INode::SPtrC& SocketProps() const                                                                = 0;
    virtual INode::SPtrC        SocketStats() const                                                                = 0;
    virtual State               SocketState() const                                                                = 0;
    virtual std::error_code     SocketOpen(const DataCallbackPf& _on_data_pf, const StateCallbackPf& _on_state_pf) = 0;
    virtual std::error_code     SocketSend(const xbase::IBuffer::SPtrC&    _data_buffer,
                                           const std::optional<xbase::Uid> _dest_uid = {})                         = 0;
    virtual std::error_code     SocketBunchSend(const std::vector<xbase::IBuffer::SPtrC>& _data_buffers,
                                                const std::optional<xbase::Uid>           _dest_uid = {})                    = 0;
    virtual std::error_code     SocketReceive(const std::optional<xbase::Uid> _dest_uid = {})                      = 0;
    // Return number of dropped send items
    virtual size_t SocketClose(const std::string_view      _reason            = {},
                               const std::optional<double> _wait_for_send_sec = {}) = 0;
};

class ISocketServer: public ISocket {
public:
    USING_PTRS(ISocketServer)

    virtual xbase::XResult<std::vector<ISocket::SPtr>> SocketsGet(
        const std::optional<xbase::Uid> _socket_or_group_uid = {}) = 0;
};

class ISocketAssembler {
public:
    inline static const std::string kDefaultBinDataTag = "[[bin(%zd:%zd)]]";

    USING_PTRS(ISocketAssembler)

    virtual ~ISocketAssembler() = default;

    virtual xbase::XResult<XValue> ValueFromSocketBuffer(const std::optional<xbase::Uid> _from_uid,
                                                         const xbase::IBuffer::SPtrC&    _data_buffer,
                                                         const bool                      _flush_uncomplete) = 0;

    virtual xbase::XResult<std::vector<xbase::IBuffer::SPtrC>> ValueToSocketBuffers(const XValue& _value) const = 0;

    virtual xbase::XResult<XValue> FlushUncompleteBuffers(const std::optional<xbase::Uid> _from_uid) = 0;
    virtual size_t                 AssemblerReset()                                                  = 0;
};

class ISocketRpc {
public:
    // TODO: Move to assembler
    inline static const std::string kDefaultRequestIdField  = "request_id";
    inline static const std::string kDefaultResponceIdField = "response_id";
    inline static const std::string kDefaultRequestNode     = "request";
    inline static const std::string kDefaultResponceNode    = "response";
    inline static const std::string kDefaultMessageNode     = "message";

    struct Params {
        std::string bin_data_tag      = ISocketAssembler::kDefaultBinDataTag;
        std::string request_id_field  = ISocketRpc::kDefaultRequestIdField;
        std::string response_id_field = ISocketRpc::kDefaultResponceIdField;
        std::string request_node      = ISocketRpc::kDefaultRequestNode;
        std::string response_node     = ISocketRpc::kDefaultResponceNode;
        std::string message_node      = ISocketRpc::kDefaultMessageNode;

        std::optional<int32_t> def_timeout_msec;
    };

    // Return: The XValue for send back to sender or std::nullopt for stop receving data (?) (TODO: continued receiving)
    // Note:
    // * For requests (_request_id is specified) - have to return INode or empty XValue for correct response.
    // * For messages - any send back value accepted, empty XValue - no send back.
    // (WARNING !!! Correct is 'return XValue {}' as 'return {}' would be intepreted as std::optional<...> {} and
    // stop receving at all, 2Think - better approach)
    using OnMessageRecievedPf = std::function<std::optional<XValue>(const std::optional<xbase::Uid>   _from,
                                                                    const XValue&                     _message,
                                                                    const std::optional<std::string>& _request_id)>;

    // Return: {expected_repeat_after_sec, forwarded_value}
    //
    // forwarded_value: (optionally) updated value returned to user code via OnMessageRecievedPf after callback
    // processed. could be empty (no next data handling expected)
    //
    // expected_repeat_after_sec: optional expected response repeat time seconds (for keep request callback and use
    // correct timeout time)
    // using OnResponcePf = std::function<std::pair<std::optional<double>, XValue>(const std::error_code _err,
    //                                                                            const INode::SPtr&    _response,
    //                                                                            const xbase::Time64   _elapsed)>;

    // Return: optional expected response repeat time in seconds (for keep request callback and use
    // correct timeout)
    using OnResponcePf = std::function<
        std::optional<double>(const std::error_code _err, const XValue& _response, const xbase::Time64 _elapsed)>;

public:
    USING_PTRS(ISocketRpc)

    virtual ~ISocketRpc() = default;

    virtual const ISocketRpc::Params& RpcParams() const = 0;

    virtual const ISocket* Socket() const = 0;

    virtual const ISocketAssembler* Assembler() const = 0;

    virtual std::error_code SocketOpen(const OnMessageRecievedPf&      _on_message_pf,
                                       const ISocket::StateCallbackPf& _on_state_pf) = 0;

    // Return request id
    virtual xbase::XResult<std::string> SocketRequest(const std::optional<xbase::Uid> _dest_uid,
                                                      const XValue&                   _message,
                                                      OnResponcePf&&                  _response_pf,
                                                      const std::optional<int32_t>    _timeout_msec = {}) = 0;

    virtual std::error_code SocketMessage(const std::optional<xbase::Uid> _dest_uid, const XValue& _message) = 0;

    virtual std::error_code SocketResponce(const std::string&              _for_request_id,
                                           const std::optional<xbase::Uid> _dest_uid,
                                           const XValue&                   _message) = 0;

    virtual size_t RequestsCount() const = 0;

    virtual size_t RequestsReset(const std::error_code _callback_err) = 0;

    virtual void SocketClose(const std::string_view _reason, const std::error_code _callback_err) = 0;
};

namespace xsockets {

    std::string ToString(const ISocket::State _state);

    xbase::XResult<ISocket::SPtr> CreateSocketClient(const std::string&  _open_url,
                                                     const bool          _with_reconnect = false,
                                                     const INode::SPtrC& _props_node     = {},
                                                     INode::SPtr&&       _stat_node      = {});

    xbase::XResult<ISocketServer::SPtr> CreateSocketServer(const std::optional<size_t> _max_threads,
                                                           const std::string&          _open_url,
                                                           const INode::SPtrC&         _props_node = {},
                                                           INode::SPtr&&               _stat_node  = {});

    // Temp - have to be removed
    xbase::XResult<ISocket::SPtr> CreateAndOpenSocketClient(const std::string&              _open_url,
                                                            const ISocket::DataCallbackPf&  _on_data_pf,
                                                            const ISocket::StateCallbackPf& _on_state_pf,
                                                            const bool                      _with_reconnect = false,
                                                            const INode::SPtrC&             _props_node     = {},
                                                            INode::SPtr&&                   _stat_node      = {});

    // Temp - have to be removed
    xbase::XResult<ISocketServer::SPtr> CreateAndOpenSocketServer(const std::optional<size_t>     _max_threads,
                                                                  const std::string&              _open_url,
                                                                  const ISocket::DataCallbackPf&  _on_data_pf,
                                                                  const ISocket::StateCallbackPf& _on_state_pf,
                                                                  const INode::SPtrC&             _props_node = {},
                                                                  INode::SPtr&&                   _stat_node  = {});

    xbase::XResult<ISocketRpc::SPtr> CreateWebSocketClientRpc(const std::string&                     _open_url,
                                                              const ISocketRpc::OnMessageRecievedPf& _on_message_pf,
                                                              const ISocket::StateCallbackPf&        _on_state_pf,
                                                              const INode::SPtrC&                    _props_node = {},
                                                              INode::SPtr&&                          _stat_node  = {},
                                                              const ISocketRpc::Params&              _rtc_params = {});

    xbase::XResult<ISocketRpc::SPtr> CreateWebSocketServerRpc(const std::optional<size_t>            _max_threads,
                                                              const std::string&                     _open_url,
                                                              const ISocketRpc::OnMessageRecievedPf& _on_message_pf,
                                                              const ISocket::StateCallbackPf&        _on_state_pf,
                                                              const INode::SPtrC&                    _props_node = {},
                                                              INode::SPtr&&                          _stat_node  = {},
                                                              const ISocketRpc::Params&              _rtc_params = {});

    ISocketAssembler::UPtr CreateSocketAssembler(const ISocketRpc::Params& _rtc_params = {});

    // std::error_code SendCommand(ICommandsExecutor::Command&&    _command,
    //                             ISocket* const                  _dest_socket_p,
    //                             const std::optional<xbase::Uid> _dest_uid = {});

    xbase::XResult<std::map<std::string, xbase::IBuffer::SPtrC>> ValueToSocketBuffers(
        const XValue&      _value,
        const std::string& _bin_data_tag = ISocketAssembler::kDefaultBinDataTag);

    std::map<std::string, std::vector<XPath>> NodeBuffersSearh(
        const INode::SPtrC& _node_p,
        const std::string&  _bin_data_tag = ISocketAssembler::kDefaultBinDataTag);

} // namespace xsockets

} // namespace xsdk
