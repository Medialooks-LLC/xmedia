#include "xnode.h"

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

} // namespace helpers
