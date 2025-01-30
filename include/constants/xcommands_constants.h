#pragma once

#include <string>

namespace xsdk::xcommands {

namespace params {
    static const std::string kStopAtError = "stop_at_error";
}
namespace container_scheme {
    static const std::string kItemInsert          = "item_insert";
    static const std::string kTargetContainerMode = "target_container_mode";
    static const std::string kInsertAt            = "insert_at";
    static const std::string kItemName            = "item_name";
    static const std::string kItemIdx             = "item_idx";

    static const std::string kItemGet  = "item_get";
    static const std::string kItemDesc = "item_desc";

    static const std::string kItemsGet = "items_get";

    static const std::string kItemRemove = "item_remove";
    static const std::string kItemsClear = "items_clear";

} // namespace container_scheme

namespace links_scheme {
    static const std::string kLinkAdd = "link_add";
    // static const std::string kFromName      = "from_name";
    static const std::string kUpdateExisted = "update_existed";

    static const std::string kLinkRemove = "link_remove";
    static const std::string kLinksCount = "links_count";
} // namespace links_scheme

namespace media_handler {
    static const std::string kInit  = "init";
    static const std::string kClose = "close";
} // namespace media_handler

namespace active_output {
    static const std::string kOutputStart    = "output_start";
    static const std::string kOutputStop     = "output_stop";
    static const std::string kFlushData      = "flush_data";
    static const std::string kWaitForFinish  = "wait_for_finish";
    static const std::string kOutputHintsSet = "output_hints_set";
} // namespace active_output

} // namespace xsdk::xcommands
