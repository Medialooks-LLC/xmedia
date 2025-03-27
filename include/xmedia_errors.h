#pragma once

#include "xbase.h"

#include <iostream>
#include <sstream>
#include <string>
#include <system_error>

namespace xsdk {

/// @brief Errors enum
XENUM_CLASS(XError,
            Ok,
            Repeat,
            GeneralFailure  = -1,
            InvalidArgument = -1000,
            WrongFormat,
            NotEnoughData,
            NotInitialized,
            InitializationFailed,
            InvalidIndex,
            NullPointer,
            WrongMediatype,
            UnsupportedMediatype,
            OpenFailed,
            ParseFailed,
            NoReadyStreams,
            NotFound,
            Unexpected,
            InvalidCast,
            NotRegistered,
            NotImplemented,
            WrongStream,
            StreamsNotSpecified,
            DecoderNotFound,
            TimeGetFailed,
            BuffersIsFull,
            NotRunning,
            Stopped,
            Closed,
            NotSuitableData,
            StartError,
            Disabled,
            AlreadyStarted,
            Expired,
            DuplicatedName,
            DuplicatedUid,
            AlreadyExists,
            StreamNotInitialized,
            MediaNotSuitable,
            MaxCountExceeded,
            MissedStreamUid,
            InvalidFlowMode,
            LinksUsed,
            AlreadyInit,
            InvalidMode,
            LinkSourceAfterDest,
            LinkSourceNotFound,
            LinkSourceMissed,
            InBlankState,
            BlankStateRequired,
            MediaLinkRequired,
            InvalidWrapperType,
            WrongHandlerType,
            MissedFormat,
            ArrayNodeRequired,
            MapNodeRequired,
            TypeOrSubtypeMissed,
            CommandNotFound,
            CommandNoExecutors,
            CommandTargetNotFound,
            CommandNullResult,
            CommandNameMissed,
            CommandBodyMissed,
            CommandPathRequired,
            CommandPathNotFound,
            NotSupportedInSerialMode,
            NotContainer,
            NoEventsHanders,
            EndOfFile,
            EndOfStream,
            NotSupportChanges,
            UnwrapFailed,
            NoInputStreams,
            NoOutputStreams,
            CommandsNotSupported,
            CodecNotFound,
            Timeout,
            NotReady,
            RecreationInProgress,
            Corrupted,
            NotSupported,
            WrongTarget,
            PositionRequired,
            PositionTaken,
            InvalidItemFlags,
            OpenUrlMissed)

/**
 * @brief Creates an std::error_code object from an XError
 *
 * @param _error The XError to convert
 * @return An std::error_code object with the specified error code and error category
 */
std::error_code make_error_code(xsdk::XError _error);

namespace xerror {
    // 2Think: ToString() Move to xbase ? (and add something like XResult().ErrorStr())
    /**
     * @brief Creates a string representation of the current ErrorDump object
     * @return A std::string containing the error message associated with the current error code
     */
    std::string ToString(const std::error_code _err);
    /**
     * @brief Check is error_code from XError
     */
    bool IsXError(const std::error_code err);
} // namespace xerror

// Test class
/**
 * @brief Custom error code class that overloads the std::string conversion operator and provides a Dump() method to
 * display error messages
 */
class ErrorDump: public std::error_code {
public:
    /**
     * @brief Constructs an ErrorDump object from an std::error_code object
     * @param _err An std::error_code object to create a new ErrorDump object from
     */
    ErrorDump(std::error_code&& _err) noexcept : std::error_code(std::move(_err)) {}
    /**
     * @brief Constructs an ErrorDump object from a const std::error_code object
     * @param _err A const std::error_code object to create a new ErrorDump object from
     */
    ErrorDump(const std::error_code& _err) noexcept : std::error_code(_err) {}

    // For remove
    /**
     * @brief Creates a string representation of the current ErrorDump object
     * @return A std::string containing the error message associated with the current error code
     */
    std::string Dump() const
    {
        std::ostringstream out;
        out << (std::error_code)(*this) << "(" << (value() ? category().message(value()) : std::string("no_error"))
            << ")";
        return std::move(out).str();
    }
    /**
     * @brief Implicit conversion operator from ErrorDump to std::string
     * @return A std::string containing the error message associated with the current ErrorDump object
     */
    operator std::string() const { return Dump(); }
};

} // namespace xsdk

// Errors support
namespace std {

template <>
struct is_error_code_enum<xsdk::XError>: true_type {};

template <class _Elem, class _Traits>
basic_ostream<_Elem, _Traits>& operator<<(basic_ostream<_Elem, _Traits>& _Ostr, const xsdk::ErrorDump& _Errcode)
{
    // display error code
    return _Ostr << (error_code)_Errcode << "(" << _Errcode.category().message(_Errcode.value()) << ")";
}

} // namespace std
