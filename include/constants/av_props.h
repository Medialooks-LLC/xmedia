#pragma once

#include <string_view>

// 2Think: About public namespace ?
namespace xsdk::av_lib {
/**
 * @namespace codec_parameters
 * @brief Namespace containing various constant definitions related to codec parameters.
 */
namespace codec_parameters {
    /**
     * This is the fundamental unit of time (in seconds) in terms
     * of which frame timestamps are represented. For fixed-fps content,
     * timebase should be 1/framerate and timestamp increments should be
     * identically 1.
     * This often, but not always is the inverse of the frame rate or field rate
     * for video. 1/time_base is not the average frame rate if the frame rate is not
     * constant.
     *
     * Like containers, elementary streams also can store timestamps, 1/time_base
     * is the unit in which these timestamps are specified.
     * As example of such codec time base see ISO/IEC 14496-2:2001(E)
     * vop_time_increment_resolution and fixed_vop_rate
     * (fixed_vop_rate == 0 implies that it is different from the framerate)
     *
     * - encoding: MUST be set by user.
     * - decoding: unused.
     */
    static constexpr std::string_view kTimeBase = "time_base";
    /**
     * @brief Constant used for handling the number of bits per sample in the codedwords.
     *
     * This is basically the bitrate per sample. It is mandatory for a bunch of
     * formats to actually decode them. It's the number of bits for one sample in
     * the actual coded bitstream.
     *
     * This could be for example 4 for ADPCM
     * For PCM formats this matches bits_per_raw_sample
     * Can be 0
     */
    static constexpr std::string_view kBitsPerCodedSample = "bits_per_coded_sample";
    /**
     * @brief Constant used for handling the number of valid bits in each output sample.
     *
     * If the sample format has more bits, the least significant bits are additional
     * padding bits, which are always 0. Use right shifts to reduce the sample
     * to its actual size. For example, audio formats with 24 bit samples will
     * have bits_per_raw_sample set to 24, and format set to AV_SAMPLE_FMT_S32.
     * To get the original sample use "(int32_t)sample >> 8"."
     *
     * For ADPCM this might be 12 or 16 or similar
     * Can be 0
     */
    static constexpr std::string_view kBitsPerRawSample = "bits_per_raw_sample";
    /**
     * @brief Constant used for handling the codec profile.
     * @note Codec-specific bitstream restrictions that the stream conforms to.
     */
    static constexpr std::string_view kProfile = "profile";
    /**
     * @brief Constant used for handling the codec level.
     * @note Codec-specific bitstream restrictions that the stream conforms to.
     */
    static constexpr std::string_view kLevel = "level";
    /**
     * @name Video-frame specific characteristics.
     *
     * This group contains a set of static string constants used to define various video-frame characteristics.
     */
    ///@{
    /**
     * @brief Constant used for handling the width of video frame.
     * @note Video only.The dimensions of the video frame in pixels.
     */
    static constexpr std::string_view kWidth = "width";
    /**
     * @brief Constant used for handling the height of video frame.
     * @note Video only.The dimensions of the video frame in pixels.
     */
    static constexpr std::string_view kHeight = "height";
    /**
     * @brief Constant used for handling the aspect ratio (width / height) which a single pixel
     * should have when displayed.
     *
     * @note Video only. When the aspect ratio is unknown / undefined, the numerator should be
     * set to 0 (the denominator may have any value).
     */
    static constexpr std::string_view kSampleAspectRatio = "sample_aspect_ratio";
    /**
     * @brief Constant used for handling the aspect ratio (width / height) which a picture
     * should have when displayed.
     *
     * @note Video only.
     */
    static constexpr std::string_view kPictureAspectRatio = "picture_aspect_ratio";
    /**
     * @brief Constant used for handling the order of the fields in interlaced video.
     * @note Video only.
     */
    static constexpr std::string_view kFieldOrder = "field_order";
    /**
     * @brief Constant used for handling the number of delayed frames.
     * @note Video only.
     */
    static constexpr std::string_view kVideoDelay = "video_delay";
    ///@}

    /**
     * @name Additional video-specific color space characteristics.
     *
     * This group contains a set of static string constants used to define various video-related
     * color space characteristics.
     */
    ///@{
    /**
     * @brief Constant representing the identifier for color range.
     */
    static constexpr std::string_view kColorRange = "color_range";
    /**
     * @brief Constant representing the identifier for color primaries.
     */
    static constexpr std::string_view kColorPrimaries = "color_primaries";
    /**
     * @brief Constant representing the identifier for color transfer characteristic.
     */
    static constexpr std::string_view kColorTrc = "color_trc";
    /**
     * @brief Constant representing the identifier for color space.
     */
    static constexpr std::string_view kColorSpace = "color_space";
    /**
     * @brief Constant representing the identifier for chroma location.
     */
    static constexpr std::string_view kChromaLocation = "chroma_location";
    ///@}

    /**
     * @name Audio specific characteristics.
     *
     * This group contains a set of static string constants used to define various audio characteristics.
     */
    ///@{
    /**
     * @brief Constant representing the channel layout and number of channels.
     * @note Audio only.
     */
    static constexpr std::string_view kChannelLayout = "channel_layout";
    /**
     * @brief Constant representing the number of channels.
     * @note Audio only.
     */
    static constexpr std::string_view kChannels = "channels";
    /**
     * @brief Constant representing the number of audio samples per second.
     * @note Audio only.
     */
    static constexpr std::string_view kSampleRate = "sample_rate";
    /**
     * @brief Constant representing the number of bytes per coded audio frame, required by some
     * formats.
     *
     * @note Audio only. Corresponds to nBlockAlign in WAVEFORMATEX.
     */
    static constexpr std::string_view kBlockAlign = "block_align";
    /**
     * @brief Constant representing the audio frame size, if known. Required by some formats to be static.
     * @note Audio only.
     */
    static constexpr std::string_view kFrameSize = "frame_size";
    /**
     * @brief Constant representing the amount of padding (in samples) inserted by the encoder at
     * the beginning of the audio.
     * @details I.e. this number of leading decoded samples must be discarded by the caller to get the original audio
     * without leading padding.
     * @note Audio only.
     */
    static constexpr std::string_view kInitialPadding = "initial_padding";
    /**
     * @brief Constant representing the amount of padding (in samples) appended by the encoder to
     * the end of the audio.
     * @details I.e. this number of decoded samples must be
     * discarded by the caller from the end of the stream to get the original
     * audio without any trailing padding.
     * @note Audio only.
     */
    static constexpr std::string_view kTrailingPadding = "trailing_padding";
    /**
     * @brief Constant representing the number of samples to skip after a discontinuity.
     * @note Audio only.
     */
    static constexpr std::string_view kSeekPreroll = "seek_preroll";
    ///@}

    /**
     * @brief Constant representing the amount of entries in coded_side_data. TODO: add ref to coded_side_data
     * definition
     */
    static constexpr std::string_view kNbCodedSideData = "nb_coded_side_data";

    /**
     * @brief Constant representing the audio or video frame format
     * @par video:
     * the pixel format, the value corresponds to enum AVPixelFormat.
     * @par audio:
     * the sample format, the value corresponds to enum AVSampleFormat.
     */
    static constexpr std::string_view kFormat = "format";
    /**
     * @brief Constant representing the video frame
     * pixel format, the value corresponds to enum AVPixelFormat.
     */
    static constexpr std::string_view kPixelFormat = "pixel_format";
    /**
     * @brief Constant representing the audio
     * sample format, the value corresponds to enum AVSampleFormat.
     */
    static constexpr std::string_view kSampleFormat = "sample_format";
    /**
     * @brief Constant representing the general type of the encoded data, e.g. video, audio, subtitles.
     */
    static constexpr std::string_view kCodecType = "codec_type";
    /**
     * @brief Constant used for handling specific type of the encoded data (the codec used).
     */
    static constexpr std::string_view kCodecId = "codec_id";
    /**
     * @brief Constant representing the name of a codec.
     */
    static constexpr std::string_view kAvCodecName = "av_codec_name";
    /**
     * @brief Constant used for handling additional information about the codec (corresponds to the AVI FOURCC).
     */
    static constexpr std::string_view kCodecTag = "codec_tag";

    /**
     * @brief Constant used for handling the average bitrate of the encoded data(in bits per second).
     */
    static constexpr std::string_view kBitRate = "bit_rate";
} // namespace codec_parameters

namespace stream {
    /**
     * @brief This is the fundamental unit of time (in seconds) in terms
     * of which frame timestamps are represented.
     * @details
     * decoding: set by libavformat
     * encoding: May be set by the caller before avformat_write_header() to
     *           provide a hint to the muxer about the desired timebase. In
     *           avformat_write_header(), the muxer will overwrite this field
     *           with the timebase that will actually be used for the timestamps
     *           written into the file (which may or may not be related to the
     *           user-provided one, depending on the format).
     */
    static constexpr std::string_view kTimeBase = "time_base";
    /**
     * @brief Constant used for handling stream index in AVFormatContext
     */
    static constexpr std::string_view kAvStreamIdx = "av_stream_idx";
    /**
     * @brief Constant used for handling format-specific stream ID.
     * @details
     * decoding: set by libavformat
     * encoding: set by the user, replaced by libavformat if left unset
     * @note usually MPEG-TS PID
     */
    static constexpr std::string_view kAvStreamPid = "av_stream_pid";
    /**
     * @brief Frame rate of stream.
     */
    static constexpr std::string_view kFrameRate = "frame_rate";
    /**
     * @brief Constant used for handling real base framerate of the stream.
     * @details This is the lowest framerate with which all timestamps can be
     * represented accurately (it is the least common multiple of all
     * framerates in the stream). Note, this value is just a guess!
     * For example, if the time base is 1/90000 and all frames have either
     * approximately 3600 or 1800 timer ticks, then r_frame_rate will be 50/1.
     */
    static constexpr std::string_view kBaseFrameRate = "r_frame_rate";
    /**
     * @brief Average frame rate
     */
    static constexpr std::string_view kAvgFrameRate = "avg_frame_rate";
    ///@brief Constant used for handling number of frames in this stream.
    static constexpr std::string_view kNbFrames = "nb_frames";
    /**
     * @brief Constant used for handling media stream's duration.
     *
     * @par Decoding:
     * The duration property in decoding indicates the length of the media
     * stream in the time base of the stream. If a source file does not
     * specify a duration, but does specify a bitrate, this value will
     * be estimated from bitrate and file size.
     *
     * @par Encoding:
     * May be set by the caller before avformat_write_header() to
     * provide a hint to the muxer about the estimated duration.
     */
    static constexpr std::string_view kDuration = "duration";
    /**
     * @brief Constant used for handling media stream's pts of the first frame.
     * @par Decoding:
     * pts of the first frame of the stream in presentation order, in stream time base.
     * Only set this if you are absolutely 100% sure that the value you set
     * it to really is the pts of the first frame.
     * This may be undefined (AV_NOPTS_VALUE).
     * @note The ASF header does NOT contain a correct start_time the ASF
     * demuxer must NOT set this.
     */
    static constexpr std::string_view kStartTime = "start_time";
} // namespace stream

namespace program {
    /**
     * @brief Constant representing the program ID
     * A unique identifier for the program.
     * @note MPEG-TS Program idss
     */
    static constexpr std::string_view kAvProgramId = "av_program_id";

    /**
     * @brief Constant representing the program number
     * A unique number assigned to each program in the transport stream.
     */
    static constexpr std::string_view kProgramNumber = "program_number";
    /**
     * @brief Constant representing the PMT PID
     * The program map table PID.
     */
    static constexpr std::string_view kPmtPid = "pmt_pid";
    /**
     * @brief Constant representing the PCR PID
     * The program clock reference PID.
     */
    static constexpr std::string_view kPcrPid = "pcr_pid";
    /**
     * @brief Constant representing the PMT version
     * The version number of the program map table.
     */
    static constexpr std::string_view kPmtVersion = "pmt_version";

} // namespace program

namespace format_context {
    /**
     * @brief Constant representing the name of the direction property.
     */
    static constexpr std::string_view kDirection = "direction";
    /**
     * @brief Constant representing the value of the 'in' direction.
     */
    static constexpr std::string_view kIn = "in";
    /**
     * @brief Constant representing the value of the 'out' direction.
     */
    static constexpr std::string_view kOut = "out";

    /**
     * @brief Constant used for handling mime-type(s) of format.
     * @par For input format
     * Comma-separated list of mime types.
     * It is used check for matching mime types while probing.
     */
    static constexpr std::string_view kMimeType = "mime_type";
    /**
     * @brief Constant used for handling number of elements in AVFormatContext.streams.
     * @note Set by avformat_new_stream(), must not be modified by any other code.
     */
    static constexpr std::string_view kNbStreams = "nb_streams";
    /**
     * @brief Constant used for handling number of programs in AVProgram.
     */
    static constexpr std::string_view kNbPrograms = "nb_programs";
    /**
     * @brief Constant representing the array of programs.
     */
    static constexpr std::string_view kAvPrograms = "av_programs";
    /**
     * @brief Constant used for handling total stream bitrate in bit/s.
     * @note Total stream bitrate in bit/s, 0 if not
     * available. Never set it directly if the file_size and the
     * duration are known as FFmpeg can compute it automatically.
     */
    static constexpr std::string_view kBitRate = "bit_rate";
    // Not sure that it should be here
    /**
     * @brief Constant used for handling metadata that applies to the whole file.
     *
     * @par demuxing:
     * set by libavformat in avformat_open_input()
     * @par muxing:
     * may be set by the caller before avformat_write_header()
     *
     * @note Freed by libavformat in avformat_free_context().
     */
    static constexpr std::string_view kAvMetadata = "av_metadata";

    /**
     * @brief Constant used for handling first frame time.
     *
     * @par Decoding:
     * Position of the earliest frame of all streams, in seconds
     */
    static constexpr std::string_view kStartTime = "start_time";

    /**
     * @brief Constant used for handling context duration.
     *
     * @par Decoding:
     * Duration of the longest stream, in seconds.
     */
    static constexpr std::string_view kDuration = "duration";
} // namespace format_context

} // namespace xsdk::av_lib
