#pragma once

#include <string_view>

#include "av_codec_options/av_a_decoder_options.h"
#include "av_codec_options/av_a_encoder_options.h"
#include "av_codec_options/av_s_decoder_options.h"
#include "av_codec_options/av_s_encoder_options.h"
#include "av_codec_options/av_v_decoder_options.h"
#include "av_codec_options/av_v_encoder_options.h"

namespace xsdk::av_opt {
namespace source {
    static constexpr std::string_view kFifoSize = "fifo_size";

    namespace mpegts {

    }
} // namespace source
} // namespace xsdk::av_opt
