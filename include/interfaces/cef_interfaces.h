#pragma once

#include "xbase.h"

#include "media_objects_interfaces.h"
#include "media_streams_interfaces.h"
#include "xmedia_structures.h"

#include <map>
#include <string>
#include <vector>

namespace xsdk::cef {

XENUM_CLASS(HtmlEventFlags,
            kCapsLockOn        = (1 << 0),
            kShiftDown         = (1 << 1),
            kControlDown       = (1 << 2),
            kAltDown           = (1 << 3),
            kLeftMouseButton   = (1 << 4),
            kMiddleMouseButton = (1 << 5),
            kRightMouseButton  = (1 << 6),
            kCommandDown       = (1 << 7),
            kNumLockOn         = (1 << 8),
            kIsKeyPad          = (1 << 9),
            kIsLeft            = (1 << 10),
            kIsRight           = (1 << 11))

XENUM_CLASS(HtmlKeyEventType,
            kRawKeyDown = 0,
            kKeyDown    = (kRawKeyDown + 1),
            kKeyUp      = (kKeyDown + 1),
            kChar       = (kKeyUp + 1))

XENUM_CLASS(HtmlMouseButtons, kNone = -1, kLeft = 0, kRight = (kLeft + 1), kMiddle = (kRight + 1))

XENUM_CLASS(HtmlBrowserCommand, kReload = 0, kGoForward, kGoBack, kStopLoad)

XENUM_CLASS(HtmlCSSType, kRemote = 0, kLocal, kString)

struct HtmlMouseEvent {
    HtmlEventFlags modifiers;
    int32_t        x;
    int32_t        y;
};

struct HtmlKeyEvent {
    HtmlKeyEventType type;
    uint32_t         modifiers;
    int32_t          windows_key_code;
    int32_t          native_key_code;
    int32_t          is_system_key;
    int32_t          character;
    int32_t          unmodified_character;
    int32_t          focus_on_editable_field;
};

class IHtmlViewer {

public:
    USING_PTRS(IHtmlViewer)

    virtual ~IHtmlViewer() = default;

    virtual std::error_code Open(const std::string_view    _open_url,
                                 const xsdk::XFormat&      _dest_format,
                                 const xsdk::INode::SPtrC& _hints) = 0;

    virtual std::error_code OpenContent(const std::string_view    _html_content,
                                        const xsdk::XFormat&      _dest_format,
                                        const xsdk::INode::SPtrC& _hints) = 0;

    virtual void Close() = 0;

    virtual std::error_code MouseClick(cef::HtmlMouseEvent*  _mouse_event,
                                       cef::HtmlMouseButtons _mouse_buttons,
                                       bool                  _mouse_up,
                                       int32_t               _click_count)                                                = 0;
    virtual std::error_code MouseMove(cef::HtmlMouseEvent* _mouse_event, bool _mouse_leave)                 = 0;
    virtual std::error_code MouseWheel(cef::HtmlMouseEvent* _mouse_event, int32_t _deltax, int32_t _deltay) = 0;
    virtual std::error_code KeyEvent(cef::HtmlKeyEvent* _key_event)                                         = 0;

    virtual std::error_code SetCSS(const std::string_view _url_file_or_string, cef::HtmlCSSType _type) = 0;
    virtual std::error_code JavascriptExecute(const std::string_view _java_script_as_string)           = 0;
    virtual std::error_code BrowserCommandExecute(const cef::HtmlBrowserCommand _command)              = 0;
};

} // namespace xsdk::cef
