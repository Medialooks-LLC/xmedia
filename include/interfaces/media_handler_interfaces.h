#pragma once

#include "media_objects_interfaces.h"
// xmedia
#include "xmedia_structures.h"

// xnode
#include "xbase.h"
#include "xnode.h"

#include <any>
#include <cassert>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace xsdk {

/// @brief The Type enum defines the different types of media handlers.
XENUM_CLASS(HandlerType,
            kUnknown,
            kInputDevice,
            kDemultiplexer,
            kDecoder,
            kEncoder,
            kMultiplexer,
            kOutputDevice,
            kProcessor,
            kContainer)

/**
 * @brief Interface for media handlers.
 * The IMediaHandler interface extends the IObject interface and defines additional
 * functions that are specific to media handlers.
 */
class IMediaHandler: public IObject {
public:
    USING_PTRS(IMediaHandler)

    // Note: The order of state is fixed (for check e.g. if State() > Ready)
    /// @brief The State enum defines the possible states of a media handler.
    enum class State { Error, Blank, Closed, Closing, WaitForData, Ready, Running };

    /**
     * @brief Function signature for custom function to reading data from a media source.
     *
     * @param _pos The position.
     * @param _data_bytes The size of the data in bytes.
     * @param _data_p The data pointer.
     * @return Number of bytes read
     */
    using ReadFunction = std::function<int32_t(int64_t _pos, size_t _data_bytes, void* _data_p)>;
    /**
     * @brief Function signature for custom function to writing data to a media destination.
     *
     * @tparam _pos The position.
     * @tparam _data_bytes The size of the data in bytes.
     * @tparam _data_p The data pointer.
     * @return Number of bytes written
     */
    using WriteFunction = std::function<int32_t(int64_t _pos, size_t _data_bytes, const void* _data_p)>;
    /**
     * @brief Variant type for initializing media handlers with a URL or a function.
     *
     * @tparam std::monostate A placeholder for no value.
     * @tparam std::string_view A view to a string representing a URL.
     * @tparam ReadFunction A function signature for reading data from a handler.
     * @tparam WriteFunction A function signature for writing data to a handler.
     */
    using InitParamsVariant = std::variant<std::monostate, std::string, ReadFunction, WriteFunction>;

    /// @brief A struct for storing stream properties.
    struct StreamProps {
        /// @brief The name of the stream.
        std::string stream_name;
        /// @brief The stream's properties.
        IMediaProps::SPtrC stream_props;
    };

    virtual ~IMediaHandler() = default;

public:
    /**
     * @brief Get the handler's type & name.
     * @return The type of the handler.
     */
    virtual std::pair<HandlerType, std::string> GetTypeSubtype() const = 0;
    /**
     * @brief Get a list of input streams.
     * @param _add_to An optional vector to which the input streams will be added.
     * @return A vector of input stream properties.
     */
    virtual std::vector<IMediaHandler::StreamProps> Inputs(
        std::vector<IMediaHandler::StreamProps>&& _add_to = {}) const = 0;
    /**
     * @brief Get a list of output streams.
     * @param _add_to An optional vector to which the output streams will be added.
     * @return A vector of output stream properties.
     */
    virtual std::vector<IMediaHandler::StreamProps> Outputs(
        std::vector<IMediaHandler::StreamProps>&& _add_to = {}) const = 0;
    /**
     * @brief Get the handler's state.
     * @return The state of the handler.
     */
    virtual IMediaHandler::State HandlerState() const = 0;

    /**
     * @brief Get the node at the given XPath from the statistics node.
     * @param _path The XPath to the node.
     * @return An shared pointer to the constant node with statistics.
     */
    virtual INode::SPtrC Stat(XPath&& _path = {}) const = 0;
    /**
     * @brief Get the node at the given XPath from properties node.
     * @param _path The XPath to the node.
     * @return An shared pointer to the constant node with properties.
     */
    virtual INode::SPtrC Props(XPath&& _path = {}) const = 0;

    // Expect be moved into factory
    /**
     * @brief Initialize the media handler instance.
     *
     * @param _init_url_or_func The initialization parameter, which can be either a URL or a function.
     * @param _init_props The initial properties, default is an empty map.
     * @param _input_streams_props The properties of the input streams, default is an empty vector.
     * @return An vector of unsupported (untaken) props, taken props could be obtained via Inputs() call
     */
    virtual xbase::XResult<MediaPropsVec> Init(InitParamsVariant&& _init_url_or_func,
                                               const INode::SPtrC& _init_props          = {},
                                               MediaPropsVec&&     _input_streams_props = {}) = 0;

    /**
     * @brief Put a media object into the media handler.
     * @param _media The media object to be put.
     * @param _hints Optional hints/properties for the operation.
     * @return An error code indicating the result of the operation.
     */
    virtual std::error_code MediaPut(const IMediaObject::SPtrC& _media, const INode::SPtrC& _hints = nullptr) = 0;
    /**
     * @brief Get a media object from the media handler.
     * @param _output_idx An optional index for the output stream.
     * @param _hints Optional hints/properties for the operation.
     * @return An XResult containing the result or error code.
     */
    virtual xbase::XResult<IMediaObject::SPtrC> MediaGet(const std::optional<size_t>& _output_idx = std::nullopt,
                                                         const INode::SPtrC&          _hints      = nullptr) = 0;

    /**
     * @brief Execute a command on the media handler.
     * @param _command The command to be executed.
     * @return An XResult containing the result of the command execution and an optional error code.
     */
    virtual xbase::XResult<INode::SPtrC> CommandExecute(const INode::SPtrC& _command) = 0;

    /**
     * @brief Change the property of the media handler using a XPath expression and a new value.
     * @param _path  The XPath expression for the property.
     * @param _value The new value for the property.
     * @return       A pair containing two items.
     *               - The first value is a bool indicating if the operation was successful or not.
     *               - The second value is the old value that was overwritten, if any.
     */
    virtual std::pair<bool, XValueRT> ChangeProps(XPath&& _path, XValue&& _value) = 0;
    /**
     * @brief Change the properties of the media handler using a vector of key-value pairs and a base XPath
     * expression.
     * @param _values A vector of key-value pairs for the properties to be changed.
     * @param_base_path The base XPath expression for the properties.
     * @return The number of properties changed.
     */
    virtual size_t ChangeProps(std::vector<std::pair<XKey, XValue>>&& _values, XPath&& _base_path = {}) = 0;
    /*
     * @brief Get error code when handler in Error state.
     * @return The error code of the problem.
     */
    virtual std::error_code Error() const { return {}; }

    // TODO: 2Think - return IMediaHandler::State (Closing, Closed, Blank)
    /// @brief Close the media handler.
    virtual void Close() = 0;
};

} // namespace xsdk
