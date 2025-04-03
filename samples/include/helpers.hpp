#include "xmedia.h"
#include "xnode.h"

#include <algorithm>
#include <cmath>
#include <fstream>
#include <sstream>
#include <string>
#include <string_view>

namespace helpers {

using namespace xsdk;

static constexpr std::string_view kWhiteSpace = " \t\n\r\f\v";

// trim from end of string (right)
inline std::string& TrimRight(std::string& s, const std::string_view t = kWhiteSpace)
{
    s.erase(s.find_last_not_of(t) + 1);
    return s;
}

// trim from beginning of string (left)
inline std::string& TrimLeft(std::string& s, const std::string_view t = kWhiteSpace)
{
    s.erase(0, s.find_first_not_of(t));
    return s;
}

// trim from both ends of string (right then left)
inline std::string& Trim(std::string& s, const std::string_view t = kWhiteSpace)
{
    return TrimLeft(TrimRight(s, t), t);
}

inline bool SaveToFile(const std::string_view        _string_for_save,
                       const std::string&            _filename,
                       std::string*                  _error_p = nullptr,
                       const std::ios_base::openmode _mode    = std::ios_base::out)
{
    try {
        std::ofstream out(_filename, _mode);
        out << _string_for_save;
        out.close();
    }
    catch (const std::exception& ex) {
        if (_error_p)
            *_error_p = ex.what();

        return false;
    }

    return true;
}

inline std::string LoadFromFile(const std::string&            _filename,
                                std::string*                  _error_p = nullptr,
                                const std::ios_base::openmode _mode    = std::ios_base::in | std::ios::binary)
{
    std::string str;
    try {
        std::ifstream input(_filename, _mode);
        if (!input.is_open()) {
            if (_error_p)
                *_error_p = "open file:'" + _filename + "' failed.";

            return {};
        }

        input.seekg(0, std::ios::end);
        size_t len = input.tellg();
        if (len == std::ifstream::pos_type(-1)) {
            if (_error_p)
                *_error_p = "tellg() for:'" + _filename + "' failed.";

            return {};
        }
        if (len > 0) {
            str.resize(len);
            input.seekg(0, std::ios::beg);
            // looks to be faster: see https://stackoverflow.com/questions/2912520/read-file-contents-into-a-string-in-c
            input.rdbuf()->sgetn(str.data(), len);
            // str.assign(std::istreambuf_iterator<char>(input), std::istreambuf_iterator<char>());
        }
        input.close();
    }
    catch (const std::exception& ex) {
        if (_error_p)
            *_error_p = ex.what();

        return {};
    }

    return str;
}

inline INode::SPtr JsonFromFile(const std::string&            _filename,
                                std::string*                  _error_p = nullptr,
                                const std::ios_base::openmode _mode    = std::ios_base::in | std::ios::binary)
{
    auto json_string = LoadFromFile(_filename, _error_p, _mode);
    if (json_string.empty())
        return nullptr;

    auto [loaded_node, error_pos] = xnode::FromJson(json_string, _filename);
    if (!loaded_node && _error_p)
        *_error_p = "Error json parsing at pos:" + std::to_string(error_pos);

    return loaded_node;
}

inline void DrawCharacterBGRA(char                  _c,
                              size_t                _x,
                              size_t                _y,
                              size_t                _scale,
                              std::vector<uint8_t>& _frame,
                              int32_t               _width,
                              int32_t               _height)
{
    static const uint8_t font[95][7] = {
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // (space)
        {0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04}, // !
        {0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x00, 0x00}, // "
        {0x0A, 0x0A, 0x1F, 0x0A, 0x1F, 0x0A, 0x0A}, // #
        {0x04, 0x0F, 0x14, 0x0E, 0x05, 0x1E, 0x04}, // $
        {0x18, 0x19, 0x02, 0x04, 0x08, 0x13, 0x03}, // %
        {0x0C, 0x12, 0x14, 0x08, 0x15, 0x12, 0x0D}, // &
        {0x0C, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00}, // '
        {0x02, 0x04, 0x08, 0x08, 0x08, 0x04, 0x02}, // (
        {0x08, 0x04, 0x02, 0x02, 0x02, 0x04, 0x08}, // )
        {0x00, 0x04, 0x15, 0x0E, 0x15, 0x04, 0x00}, // *
        {0x00, 0x04, 0x04, 0x1F, 0x04, 0x04, 0x00}, // +
        {0x00, 0x00, 0x00, 0x00, 0x0C, 0x04, 0x08}, // ,
        {0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00}, // -
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C}, // .
        {0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x00}, // /
        {0x0E, 0x11, 0x13, 0x15, 0x19, 0x11, 0x0E}, // 0
        {0x04, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x0E}, // 1
        {0x0E, 0x11, 0x01, 0x02, 0x04, 0x08, 0x1F}, // 2
        {0x0E, 0x11, 0x01, 0x06, 0x01, 0x11, 0x0E}, // 3
        {0x02, 0x06, 0x0A, 0x12, 0x1F, 0x02, 0x02}, // 4
        {0x1F, 0x10, 0x1E, 0x01, 0x01, 0x11, 0x0E}, // 5
        {0x06, 0x08, 0x10, 0x1E, 0x11, 0x11, 0x0E}, // 6
        {0x1F, 0x01, 0x02, 0x04, 0x08, 0x08, 0x08}, // 7
        {0x0E, 0x11, 0x11, 0x0E, 0x11, 0x11, 0x0E}, // 8
        {0x0E, 0x11, 0x11, 0x0F, 0x01, 0x02, 0x0C}, // 9
        {0x00, 0x0C, 0x0C, 0x00, 0x0C, 0x0C, 0x00}, // :
        {0x00, 0x0C, 0x0C, 0x00, 0x0C, 0x04, 0x08}, // ;
        {0x02, 0x04, 0x08, 0x10, 0x08, 0x04, 0x02}, // <
        {0x00, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x00}, // =
        {0x08, 0x04, 0x02, 0x01, 0x02, 0x04, 0x08}, // >
        {0x0E, 0x11, 0x01, 0x02, 0x04, 0x00, 0x04}, // ?
        {0x0E, 0x11, 0x17, 0x15, 0x17, 0x10, 0x0F}, // @
        {0x04, 0x0A, 0x11, 0x11, 0x1F, 0x11, 0x11}, // A
        {0x1E, 0x11, 0x11, 0x1E, 0x11, 0x11, 0x1E}, // B
        {0x0E, 0x11, 0x10, 0x10, 0x10, 0x11, 0x0E}, // C
        {0x1E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1E}, // D
        {0x1F, 0x10, 0x10, 0x1E, 0x10, 0x10, 0x1F}, // E
        {0x1F, 0x10, 0x10, 0x1E, 0x10, 0x10, 0x10}, // F
        {0x0E, 0x11, 0x10, 0x17, 0x11, 0x11, 0x0F}, // G
        {0x11, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x11}, // H
        {0x0E, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0E}, // I
        {0x07, 0x02, 0x02, 0x02, 0x02, 0x12, 0x0C}, // J
        {0x11, 0x12, 0x14, 0x18, 0x14, 0x12, 0x11}, // K
        {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F}, // L
        {0x11, 0x1B, 0x15, 0x15, 0x11, 0x11, 0x11}, // M
        {0x11, 0x19, 0x15, 0x13, 0x11, 0x11, 0x11}, // N
        {0x0E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0E}, // O
        {0x1E, 0x11, 0x11, 0x1E, 0x10, 0x10, 0x10}, // P
        {0x0E, 0x11, 0x11, 0x11, 0x15, 0x12, 0x0D}, // Q
        {0x1E, 0x11, 0x11, 0x1E, 0x14, 0x12, 0x11}, // R
        {0x0F, 0x10, 0x10, 0x0E, 0x01, 0x01, 0x1E}, // S
        {0x1F, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04}, // T
        {0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0E}, // U
        {0x11, 0x11, 0x11, 0x11, 0x11, 0x0A, 0x04}, // V
        {0x11, 0x11, 0x11, 0x15, 0x15, 0x1B, 0x11}, // W
        {0x11, 0x11, 0x0A, 0x04, 0x0A, 0x11, 0x11}, // X
        {0x11, 0x11, 0x0A, 0x04, 0x04, 0x04, 0x04}, // Y
        {0x1F, 0x01, 0x02, 0x04, 0x08, 0x10, 0x1F}, // Z
        {0x0E, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0E}, // [
        {0x00, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00}, // backslash
        {0x0E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0E}, // ]
        {0x04, 0x0A, 0x11, 0x00, 0x00, 0x00, 0x00}, // ^
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F}, // _
        {0x08, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00}, // `
        {0x00, 0x00, 0x0E, 0x01, 0x0F, 0x11, 0x0F}, // a
        {0x10, 0x10, 0x16, 0x19, 0x11, 0x11, 0x1E}, // b
        {0x00, 0x00, 0x0E, 0x10, 0x10, 0x11, 0x0E}, // c
        {0x01, 0x01, 0x0D, 0x13, 0x11, 0x11, 0x0F}, // d
        {0x00, 0x00, 0x0E, 0x11, 0x1F, 0x10, 0x0E}, // e
        {0x06, 0x08, 0x08, 0x1C, 0x08, 0x08, 0x08}, // f
        {0x00, 0x0F, 0x11, 0x11, 0x0F, 0x01, 0x0E}, // g
        {0x10, 0x10, 0x16, 0x19, 0x11, 0x11, 0x11}, // h
        {0x04, 0x00, 0x0C, 0x04, 0x04, 0x04, 0x0E}, // i
        {0x02, 0x00, 0x06, 0x02, 0x02, 0x12, 0x0C}, // j
        {0x10, 0x10, 0x12, 0x14, 0x18, 0x14, 0x12}, // k
        {0x0C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0E}, // l
        {0x00, 0x00, 0x1A, 0x15, 0x15, 0x15, 0x15}, // m
        {0x00, 0x00, 0x16, 0x19, 0x11, 0x11, 0x11}, // n
        {0x00, 0x00, 0x0E, 0x11, 0x11, 0x11, 0x0E}, // o
        {0x00, 0x00, 0x1E, 0x11, 0x1E, 0x10, 0x10}, // p
        {0x00, 0x00, 0x0D, 0x13, 0x0F, 0x01, 0x01}, // q
        {0x00, 0x00, 0x16, 0x19, 0x10, 0x10, 0x10}, // r
        {0x00, 0x00, 0x0E, 0x10, 0x0E, 0x01, 0x1E}, // s
        {0x08, 0x08, 0x1C, 0x08, 0x08, 0x08, 0x06}, // t
        {0x00, 0x00, 0x11, 0x11, 0x11, 0x13, 0x0D}, // u
        {0x00, 0x00, 0x11, 0x11, 0x11, 0x0A, 0x04}, // v
        {0x00, 0x00, 0x11, 0x11, 0x15, 0x15, 0x0A}, // w
        {0x00, 0x00, 0x11, 0x0A, 0x04, 0x0A, 0x11}, // x
        {0x00, 0x00, 0x11, 0x11, 0x0F, 0x01, 0x0E}, // y
        {0x00, 0x00, 0x1F, 0x02, 0x04, 0x08, 0x1F}, // z
        {0x06, 0x08, 0x08, 0x10, 0x08, 0x08, 0x06}, // {
        {0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04}, // |
        {0x0C, 0x02, 0x02, 0x01, 0x02, 0x02, 0x0C}, // }
        {0x00, 0x00, 0x08, 0x15, 0x02, 0x00, 0x00}, // ~
    };
    if (_c < 32 || _c > 126)
        return;

    const uint8_t* char_data = font[_c - 32];

    for (int dy = 0; dy < 7; ++dy) {
        for (int dx = 0; dx < 5; ++dx) {
            if (char_data[dy] & (1 << (4 - dx))) {
                for (int sy = 0; sy < _scale; ++sy) {
                    for (int sx = 0; sx < _scale; ++sx) {
                        size_t px = _x + dx * _scale + sx;
                        size_t py = _y + dy * _scale + sy;
                        if (px < _width && py < _height) {
                            _frame[(py * _width + px) * 4 + 0] = 255; // B
                            _frame[(py * _width + px) * 4 + 1] = 255; // G
                            _frame[(py * _width + px) * 4 + 2] = 255; // R
                            _frame[(py * _width + px) * 4 + 3] = 255; // A
                        }
                    }
                }
            }
        }
    }
}

inline void DrawStringBGRA(const std::string&    _str,
                           size_t                _x,
                           size_t                _y,
                           size_t                _scale,
                           std::vector<uint8_t>& _frame,
                           int32_t               _width,
                           int32_t               _height)
{
    for (size_t i = 0; i < _str.size(); ++i) {
        DrawCharacterBGRA(_str[i], _x + i * 6 * _scale, _y, _scale, _frame, _width, _height);
    }
}

inline IMediaFrame::SPtrC GenerateBGRAVideoFrame(size_t  _frame_num,
                                                 double  _captured_time_msec,
                                                 bool    _eos    = false,
                                                 int32_t _width  = 720,
                                                 int32_t _height = 576,
                                                 double  _dur_ms = 40)
{
    XTime time_;
    time_.timestamp = _frame_num * time64::FromMsec(_dur_ms);
    XFormatV format;
    format.pixel_format = av_lib::pix_fmt::kBgra;
    format.width        = _width;
    format.height       = _height;
    std::string text    = "Frame: " + std::to_string(_frame_num);
    _frame_num          = _frame_num % format.width;

    format.fields_order = eXFieldsOrder::Progressive;
    format.frame_rate   = {25, 1};
    auto frame_props_   = xmedia::ObjectsFactory()->PropsCreate({1, 2, 3}, format).MoveResult();
    if (_eos) {
        return xmedia::MakeEndOfStreamT<IMediaFrame>(frame_props_.get());
    }
    XPlaneV plane_v_rgb;
    plane_v_rgb.width     = format.width;
    plane_v_rgb.height    = format.height;
    plane_v_rgb.row_bytes = plane_v_rgb.width * 4;

    auto video_data = std::vector<uint8_t>(_width * _height * 4, 127); // 4 - number of colors: BGRA
    for (size_t i = 0; i < format.height; i++) {
        video_data[plane_v_rgb.row_bytes * i + 4 * _frame_num]     = 255;
        video_data[plane_v_rgb.row_bytes * i + 4 * _frame_num + 1] = 255;
        video_data[plane_v_rgb.row_bytes * i + 4 * _frame_num + 2] = 255;
        video_data[plane_v_rgb.row_bytes * i + 4 * _frame_num + 3] = 255;
    }

    size_t scale = 8;
    size_t x     = (plane_v_rgb.width - text.size() * 6 * scale) / 2;
    size_t y     = (plane_v_rgb.height - 7 * scale) / 2;
    DrawStringBGRA(text, x, y, scale, video_data, plane_v_rgb.width, plane_v_rgb.height);
    scale = 2;
    text  = "time: " + std::to_string(_captured_time_msec) + "ms";
    x     = 4;
    y     = 4;
    DrawStringBGRA(text, x, y, scale, video_data, plane_v_rgb.width, plane_v_rgb.height);

    plane_v_rgb.video_p = video_data.data();
    std::vector<XPlaneV> plane_v_vec;
    plane_v_vec.push_back(plane_v_rgb);
    auto frame_xr = xmedia::ObjectsFactory()->FrameCreate(frame_props_.get(),
                                                          time_,
                                                          {},
                                                          std::move(plane_v_vec),
                                                          xdata::AnyWrap(std::move(video_data)),
                                                          std::nullopt,
                                                          {},
                                                          {});
    return frame_xr.MoveResult();
}

#define XM_PI 3.14159265358979323846 /* pi */
inline IMediaFrame::SPtrC GenerateAudioFrame(size_t  _audio_pos_in_samples,
                                             bool    _eos         = false,
                                             int32_t _num_samples = 1764)
{
    XFormatA format;
    format.channels      = 2;
    format.sample_format = av_lib::sample_fmt::kFlt;
    format.sample_rate   = 44100;
    auto frame_props_    = xmedia::ObjectsFactory()->PropsCreate({4, 5, 6}, format).MoveResult();
    if (_eos) {
        return xmedia::MakeEndOfStreamT<IMediaFrame>(frame_props_.get());
    }
    XTime time_;
    time_.timestamp     = time64::FromSec(_audio_pos_in_samples / (double)format.sample_rate);
    auto  dur_seconds   = _num_samples / (float)format.sample_rate;
    auto  audio_samples = std::vector<float>(_num_samples * 2, 0.0F); // 2 - number of audio channels
    float freq          = 1000.;                                      // 1000Hz
    // Generate the sine wave
    size_t tlast = _audio_pos_in_samples;
    for (auto t = tlast; t < _num_samples + _audio_pos_in_samples; ++t) {
        float angle                        = 2 * (float)XM_PI * t / (freq * dur_seconds);
        audio_samples[2 * (t - tlast)]     = std::sin(angle);
        angle                              = 2 * (float)XM_PI * t / (freq * dur_seconds) * 5;
        audio_samples[2 * (t - tlast) + 1] = std::sin(angle);
    }
    XPlaneA plane_a;
    plane_a.audio_p = (uint8_t*)audio_samples.data();
    plane_a.bytes   = _num_samples * 2 * sizeof(float);

    std::vector<XPlaneA> plane_a_vec;
    plane_a_vec.push_back(plane_a);
    auto frame_xr = xmedia::ObjectsFactory()->FrameCreate(frame_props_.get(),
                                                          time_,
                                                          std::move(plane_a_vec),
                                                          {},
                                                          xdata::AnyWrap(std::move(audio_samples)),
                                                          std::nullopt,
                                                          {},
                                                          {});
    return frame_xr.MoveResult();
}
} // namespace helpers
