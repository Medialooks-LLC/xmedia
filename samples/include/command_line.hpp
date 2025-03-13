#include "xnode.h"

#include <iostream>
#include <string>
#include <string_view>

namespace command_line {

inline std::string OptionName(const char* arg) { return (arg && arg[0] == '-' && arg[1] == '-') ? arg + 2 : ""; }

inline xsdk::INode::SPtrC ParseCommandLine(int argc, char** argv)
{
    assert(argc > 0 && argv);
    auto cmd_line_node = xsdk::xnode::CreateMap({}, argv[0]);

    int idx = 1;
    while (idx < argc) {
        auto key = OptionName(argv[idx]);
        if (!key.empty()) {
            if (idx + 1 < argc && OptionName(argv[idx + 1]).empty()) {
                cmd_line_node->Set(key, argv[idx + 1]);
                ++idx;
            }
            else {
                cmd_line_node->Set(key, true);
            }
        }
        else {
            std::cout << "SKIPPED: '" << argv[idx] << "' command line argument" << std::endl;
        }

        ++idx;
    }

    return cmd_line_node;
}

} // namespace command_line
