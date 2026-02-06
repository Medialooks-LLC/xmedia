#pragma once

#include "xbase.h"

#include <cstdint>

namespace xsdk {

/// @brief Enum class representing different types of XObjects.
XENUM_CLASS(XObjectType,
            None,
            Chunk       = 1,
            Props       = 2,
            Packet      = 4 | Props,
            Frame       = 8 | Props,
            ObjectTypes = Chunk | Props | Packet | Frame,

            Audio         = 0x100,
            Video         = 0x200,
            Subtitle      = 0x400,
            Data          = 0x800,
            AV            = Audio | Video,
            AudioS        = Audio | Subtitle,
            VideoS        = Video | Subtitle,
            AVS           = Audio | Video | Subtitle,
            AllMediaTypes = Audio | Video | Subtitle | Data,

            PropsAudio    = Props | Audio,
            PropsVideo    = Props | Video,
            PropsSubtitle = Props | Subtitle,
            PropsData     = Props | Data,
            PropsAV       = Props | AV,
            PropsAVS      = Props | AVS,

            ChunkAudio    = Chunk | Audio,
            ChunkVideo    = Chunk | Video,
            ChunkSubtitle = Chunk | Subtitle,
            ChunkData     = Chunk | Data,
            ChunkAV       = Chunk | AV,
            ChunkAVS      = Chunk | AVS,

            PacketAudio    = Packet | Audio,
            PacketVideo    = Packet | Video,
            PacketSubtitle = Packet | Subtitle,
            PacketData     = Packet | Data,
            PacketAV       = Packet | AV,
            PacketAVS      = Packet | AVS,

            FrameAudio    = Frame | Audio,
            FrameVideo    = Frame | Video,
            FrameSubtitle = Frame | Subtitle,
            FrameData     = Frame | Data,
            FrameAV       = Frame | AV,
            FrameAVS      = Frame | AVS,

            FrameOrPacketAudio    = Frame | Packet | Audio,
            FrameOrPacketVideo    = Frame | Packet | Video,
            FrameOrPacketSubtitle = Frame | Packet | Subtitle,
            FrameOrPacketData     = Frame | Packet | Data,
            FrameOrPacketAV       = Frame | Packet | AV,
            FrameOrPacketAVS      = Frame | Packet | AVS)

/// @brief Enum class representing different flags of media packet or frame
XENUM_CLASS(XMediaFlags,
            kRegular,
            kEndOfStream = 0x01,
            kDuplicated  = 0x02,
            kPaused      = 0x04,
            kStreamInfo  = 0x08,
            kKeyFrame    = 0x10,
            kNonKeyFrame = 0x20,
            kGrowingLast = 0x40)
/**
 * @brief Enum class representing different rate control modes.
 * @details This enum class represents different rate control modes, namely:
 *          - Rate controlled by destination (e.g. File streams)
 *          - Rate controlled by source (e.g. Live streams)
 *          - Rate controlled by hardware devices (e.g. SDI capture)
 */
XENUM_CLASS(RateControl,
            /**
             * Rate controlled by destination (e.g. File streams)
             */
            kFileStream = 0,
            /**
             * Rate controlled by destination (e.g. File streams)
             */
            kMasterFileStream = 1,
            /**
             * Rate controlled by source (e.g. Live streams)
             */
            kLiveStream = 2,
            /**
             * Rate controlled by harware devices (e.g. SDI capture)
             */
            kLiveWithOwnClock = 3);

// Direct map of AV_PKT_FLAG_xxx
XENUM_CLASS(PacketFlags,
            /**
             * No flags
             **/
            None = 0x00,
            /**
             * The packet contains a keyframe
             **/
            Key = 0x01,
            /**
             * The packet content is corrupted
             **/
            Corrupt = 0x02,
            /**
             * Flag is used to discard packets which are required to maintain valid
             * decoder state but are not required for output and should be dropped
             * after decoding.
             **/
            Discard = 0x04,
            /**
             * The packet comes from a trusted source.
             *
             * Otherwise-unsafe constructs such as arbitrary pointers to data
             * outside the packet may be followed.
             */
            Trusted = 0x08,
            /**
             * Flag is used to indicate packets that contain frames that can
             * be discarded by the decoder.  I.e. Non-reference frames.
             */
            Disposable = 0x10,

            KeyDiscard        = Key | Discard,
            KeyDiscardCorrupt = Key | Discard | Corrupt,
            KeyCorrupt        = Key | Corrupt,
            DiscardCorrupt    = Discard | Corrupt,
            TrustedCorrupt    = Trusted | Corrupt,
            DisposableCorrupt = Disposable | Corrupt,

            TrustedKeyDiscard        = Trusted | Key | Discard,
            TrustedKeyDiscardCorrupt = Trusted | Key | Discard | Corrupt,
            TrustedKeyCorrupt        = Trusted | Key | Corrupt,
            TrustedDiscardCorrupt    = Trusted | Discard | Corrupt,
            TrustedDisposableCorrupt = Trusted | Disposable | Corrupt)

// Copy of FFMpeg AV_PICTURE_TYPE
XENUM_CLASS(PictureType,
            None = 0x00,
            /**
             * AV_PICTURE_TYPE_I - intra
             */
            TypeI = 0x01,
            /**
             * AV_PICTURE_TYPE_P - Predicted
             */
            TypeP = 0x02,
            /**
             * AV_PICTURE_TYPE_B - Bi-dir predicted
             */
            TypeB = 0x03,
            /**
             * AV_PICTURE_TYPE_S - S(GMC)-VOP MPEG-4
             */
            TypeS = 0x04,
            /**
             * AV_PICTURE_TYPE_SI - Switching Intra
             */
            TypeSI = 0x05,
            /**
             * AV_PICTURE_TYPE_SP - Switching Predicted
             */
            TypeSP = 0x06,
            /**
             * AV_PICTURE_TYPE_BI - BI type
             */
            TypeBI = 0x07)

// Copy of FFmpeg AVPacketSideDataType
XENUM_CLASS(SideDataType,
            /**
             * For default not-specified value
             */
            EMPTY = -1,
            /**
             * An AV_PKT_DATA_PALETTE side data packet contains exactly AVPALETTE_SIZE
             * bytes worth of palette. This side data signals that a new palette is
             * present.
             */
            PALETTE,

            /**
             * The AV_PKT_DATA_NEW_EXTRADATA is used to notify the codec or the format
             * that the extradata buffer was changed and the receiving side should
             * act upon it appropriately. The new extradata is embedded in the side
             * data buffer and should be immediately used for processing the current
             * frame or packet.
             */
            NEW_EXTRADATA,

            /**
             * An AV_PKT_DATA_PARAM_CHANGE side data packet is laid out as follows:
             * @code
             * u32le param_flags
             * if (param_flags & AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_COUNT)
             *     s32le channel_count
             * if (param_flags & AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_LAYOUT)
             *     u64le channel_layout
             * if (param_flags & AV_SIDE_DATA_PARAM_CHANGE_SAMPLE_RATE)
             *     s32le sample_rate
             * if (param_flags & AV_SIDE_DATA_PARAM_CHANGE_DIMENSIONS)
             *     s32le width
             *     s32le height
             * @endcode
             */
            PARAM_CHANGE,

            /**
             * An AV_PKT_DATA_H263_MB_INFO side data packet contains a number of
             * structures with info about macroblocks relevant to splitting the
             * packet into smaller packets on macroblock edges (e.g. as for RFC 2190).
             * That is, it does not necessarily contain info about all macroblocks,
             * as long as the distance between macroblocks in the info is smaller
             * than the target payload size.
             * Each MB info structure is 12 bytes, and is laid out as follows:
             * @code
             * u32le bit offset from the start of the packet
             * u8    current quantizer at the start of the macroblock
             * u8    GOB number
             * u16le macroblock address within the GOB
             * u8    horizontal MV predictor
             * u8    vertical MV predictor
             * u8    horizontal MV predictor for block number 3
             * u8    vertical MV predictor for block number 3
             * @endcode
             */
            H263_MB_INFO,

            /**
             * This side data should be associated with an audio stream and contains
             * ReplayGain information in form of the AVReplayGain struct.
             */
            REPLAYGAIN,

            /**
             * This side data contains a 3x3 transformation matrix describing an affine
             * transformation that needs to be applied to the decoded video frames for
             * Correct presentation.
             *
             * See libavutil/display.h for a detailed description of the data.
             */
            DISPLAYMATRIX,

            /**
             * This side data should be associated with a video stream and contains
             * Stereoscopic 3D information in form of the AVStereo3D struct.
             */
            STEREO3D,

            /**
             * This side data should be associated with an audio stream and corresponds
             * to enum AVAudioServiceType.
             */
            AUDIO_SERVICE_TYPE,

            /**
             * This side data contains quality related information from the encoder.
             * @code
             * u32le quality factor of the compressed frame. Allowed range is between 1 (good) and FF_LAMBDA_MAX (bad).
             * u8    picture type
             * u8    error count
             * u16   reserved
             * u64le[error count] sum of squared differences between encoder in and output
             * @endcode
             */
            QUALITY_STATS,

            /**
             * This side data contains an integer value representing the stream index
             * of a "fallback" track.  A fallback track indicates an alternate
             * track to use when the current track can not be decoded for some reason.
             * e.g. no decoder available for codec.
             */
            FALLBACK_TRACK,

            /**
             * This side data corresponds to the AVCPBProperties struct.
             */
            CPB_PROPERTIES,

            /**
             * Recommmends skipping the specified number of samples
             * @code
             * u32le number of samples to skip from start of this packet
             * u32le number of samples to skip from end of this packet
             * u8    reason for start skip
             * u8    reason for end   skip (0=padding silence, 1=convergence)
             * @endcode
             */
            SKIP_SAMPLES,

            /**
             * An AV_PKT_DATA_JP_DUALMONO side data packet indicates that
             * the packet may contain "dual mono" audio specific to Japanese DTV
             * and if it is true, recommends only the selected channel to be used.
             * @code
             * u8    selected channels (0=main/left, 1=sub/right, 2=both)
             * @endcode
             */
            JP_DUALMONO,

            /**
             * A list of zero terminated key/value strings. There is no end marker for
             * the list, so it is required to rely on the side data size to stop.
             */
            STRINGS_METADATA,

            /**
             * Subtitle event position
             * @code
             * u32le x1
             * u32le y1
             * u32le x2
             * u32le y2
             * @endcode
             */
            SUBTITLE_POSITION,

            /**
             * Data found in BlockAdditional element of matroska container. There is
             * no end marker for the data, so it is required to rely on the side data
             * size to recognize the end. 8 byte id (as found in BlockAddId) followed
             * by data.
             */
            MATROSKA_BLOCKADDITIONAL,

            /**
             * The optional first identifier line of a WebVTT cue.
             */
            WEBVTT_IDENTIFIER,

            /**
             * The optional settings (rendering instructions) that immediately
             * follow the timestamp specifier of a WebVTT cue.
             */
            WEBVTT_SETTINGS,

            /**
             * A list of zero terminated key/value strings. There is no end marker for
             * the list, so it is required to rely on the side data size to stop. This
             * side data includes updated metadata which appeared in the stream.
             */
            METADATA_UPDATE,

            /**
             * MPEGTS stream ID as uint8_t, this is required to pass the stream ID
             * information from the demuxer to the corresponding muxer.
             */
            MPEGTS_STREAM_ID,

            /**
             * Mastering display metadata (based on SMPTE-2086:2014). This metadata
             * should be associated with a video stream and contains data in the form
             * of the AVMasteringDisplayMetadata struct.
             */
            MASTERING_DISPLAY_METADATA,

            /**
             * This side data should be associated with a video stream and corresponds
             * to the AVSphericalMapping structure.
             */
            SPHERICAL,

            /**
             * Content light level (based on CTA-861.3). This metadata should be
             * associated with a video stream and contains data in the form of the
             * AVContentLightMetadata struct.
             */
            CONTENT_LIGHT_LEVEL,

            /**
             * ATSC A53 Part 4 Closed Captions. This metadata should be associated with
             * a video stream. A53 CC bitstream is stored as uint8_t in AVPacketSideData.data.
             * The number of bytes of CC data is AVPacketSideData.size.
             */
            A53_CC,

            /**
             * This side data is encryption initialization data.
             * The format is not part of ABI, use av_encryption_init_info_* methods to
             * access.
             */
            ENCRYPTION_INIT_INFO,

            /**
             * This side data contains encryption info for how to decrypt the packet.
             * The format is not part of ABI, use av_encryption_info_* methods to access.
             */
            ENCRYPTION_INFO,

            /**
             * Active Format Description data consisting of a single byte as specified
             * in ETSI TS 101 154 using AVActiveFormatDescription enum.
             */
            AFD,

            /**
             * Producer Reference Time data corresponding to the AVProducerReferenceTime struct,
             * usually exported by some encoders (on demand through the prft flag set in the
             * AVCodecContext export_side_data field).
             */
            PRFT,

            /**
             * ICC profile data consisting of an opaque octet buffer following the
             * format described by ISO 15076-1.
             */
            ICC_PROFILE,

            /**
             * DOVI configuration
             * ref:
             * dolby-vision-bitstreams-within-the-iso-base-media-file-format-v2.1.2, section 2.2
             * dolby-vision-bitstreams-in-mpeg-2-transport-stream-multiplex-v1.2, section 3.3
             * Tags are stored in struct AVDOVIDecoderConfigurationRecord.
             */
            DOVI_CONF,

            /**
             * Timecode which conforms to SMPTE ST 12-1:2014. The data is an array of 4 uint32_t
             * where the first uint32_t describes how many (1-3) of the other timecodes are used.
             * The timecode format is described in the documentation of av_timecode_get_smpte_from_framenum()
             * function in libavutil/timecode.h.
             */
            S12M_TIMECODE,

            /**
             * HDR10+ dynamic metadata associated with a video frame. The metadata is in
             * the form of the AVDynamicHDRPlus struct and contains
             * information for color volume transform - application 4 of
             * SMPTE 2094-40:2016 standard.
             */
            DYNAMIC_HDR10_PLUS,

            /**
             * IAMF Mix Gain Parameter Data associated with the audio frame. This metadata
             * is in the form of the AVIAMFParamDefinition struct and contains information
             * defined in sections 3.6.1 and 3.8.1 of the Immersive Audio Model and
             * Formats standard.
             */
            IAMF_MIX_GAIN_PARAM,

            /**
             * IAMF Demixing Info Parameter Data associated with the audio frame. This
             * metadata is in the form of the AVIAMFParamDefinition struct and contains
             * information defined in sections 3.6.1 and 3.8.2 of the Immersive Audio Model
             * and Formats standard.
             */
            IAMF_DEMIXING_INFO_PARAM,

            /**
             * IAMF Recon Gain Info Parameter Data associated with the audio frame. This
             * metadata is in the form of the AVIAMFParamDefinition struct and contains
             * information defined in sections 3.6.1 and 3.8.3 of the Immersive Audio Model
             * and Formats standard.
             */
            IAMF_RECON_GAIN_INFO_PARAM,

            /**
             * Ambient viewing environment metadata, as defined by H.274. This metadata
             * should be associated with a video stream and contains data in the form
             * of the AVAmbientViewingEnvironment struct.
             */
            AMBIENT_VIEWING_ENVIRONMENT,

            /**
             * The number of side data types.
             * This is not part of the public API/ABI in the sense that it may
             * change when new side data types are added.
             * This must stay the last enum value.
             * If its value becomes huge, some code using it
             * needs to be updated as it assumes it to be smaller than other limits.
             */
            LAST_ENUM_VALUE)

// Direct copy of AVFrameSideDataType
XENUM_CLASS(FrameSideDataType,
            /**
             * For default not-specified value
             */
            EMPTY = -1,
            /**
             * The data is the AVPanScan struct defined in libavcodec.
             */
            PANSCAN,
            /**
             * ATSC A53 Part 4 Closed Captions.
             * A53 CC bitstream is stored as uint8_t in AVFrameSideData.data.
             * The number of bytes of CC data is AVFrameSideData.size.
             */
            A53_CC,
            /**
             * Stereoscopic 3d metadata.
             * The data is the AVStereo3D struct defined in libavutil/stereo3d.h.
             */
            STEREO3D,
            /**
             * The data is the AVMatrixEncoding enum defined in libavutil/channel_layout.h.
             */
            MATRIXENCODING,
            /**
             * Metadata relevant to a downmix procedure.
             * The data is the AVDownmixInfo struct defined in libavutil/downmix_info.h.
             */
            DOWNMIX_INFO,
            /**
             * ReplayGain information in the form of the AVReplayGain struct.
             */
            REPLAYGAIN,
            /**
             * This side data contains a 3x3 transformation matrix describing an affine
             * transformation that needs to be applied to the frame for Correct
             * presentation.
             *
             * See libavutil/display.h for a detailed description of the data.
             */
            DISPLAYMATRIX,
            /**
             * Active Format Description data consisting of a single byte as specified
             * in ETSI TS 101 154 using AVActiveFormatDescription enum.
             */
            AFD,
            /**
             * Motion vectors exported by some codecs (on demand through the export_mvs
             * flag set in the libavcodec AVCodecContext flags2 option).
             * The data is the AVMotionVector struct defined in
             * libavutil/motion_vector.h.
             */
            MOTION_VECTORS,
            /**
             * Recommmends skipping the specified number of samples. This is exported
             * only if the "skip_manual" AVOption is set in libavcodec.
             * This has the same format as AV_PKT_SKIP_SAMPLES.
             * @code
             * u32le number of samples to skip from start of this packet
             * u32le number of samples to skip from end of this packet
             * u8    reason for start skip
             * u8    reason for end   skip (0=padding silence, 1=convergence)
             * @endcode
             */
            SKIP_SAMPLES,
            /**
             * This side data must be associated with an audio frame and corresponds to
             * enum AVAudioServiceType defined in avcodec.h.
             */
            AUDIO_SERVICE_TYPE,
            /**
             * Mastering display metadata associated with a video frame. The payload is
             * an AVMasteringDisplayMetadata type and contains information about the
             * mastering display color volume.
             */
            MASTERING_DISPLAY_METADATA,
            /**
             * The GOP timecode in 25 bit timecode format. Data format is 64-bit integer.
             * This is set on the first frame of a GOP that has a temporal reference of 0.
             */
            GOP_TIMECODE,

            /**
             * The data represents the AVSphericalMapping structure defined in
             * libavutil/spherical.h.
             */
            SPHERICAL,

            /**
             * Content light level (based on CTA-861.3). This payload contains data in
             * the form of the AVContentLightMetadata struct.
             */
            CONTENT_LIGHT_LEVEL,

            /**
             * The data contains an ICC profile as an opaque octet buffer following the
             * format described by ISO 15076-1 with an optional name defined in the
             * metadata key entry "name".
             */
            ICC_PROFILE,

            /**
             * Timecode which conforms to SMPTE ST 12-1. The data is an array of 4 uint32_t
             * where the first uint32_t describes how many (1-3) of the other timecodes are used.
             * The timecode format is described in the documentation of av_timecode_get_smpte_from_framenum()
             * function in libavutil/timecode.h.
             */
            S12M_TIMECODE,

            /**
             * HDR dynamic metadata associated with a video frame. The payload is
             * an AVDynamicHDRPlus type and contains information for color
             * volume transform - application 4 of SMPTE 2094-40:2016 standard.
             */
            DYNAMIC_HDR_PLUS,

            /**
             * Regions Of Interest, the data is an array of AVRegionOfInterest type, the number of
             * array element is implied by AVFrameSideData.size / AVRegionOfInterest.self_size.
             */
            REGIONS_OF_INTEREST,

            /**
             * Encoding parameters for a video frame, as described by AVVideoEncParams.
             */
            VIDEO_ENC_PARAMS,

            /**
             * User data unregistered metadata associated with a video frame.
             * This is the H.26[45] UDU SEI message, and shouldn't be used for any other purpose
             * The data is stored as uint8_t in AVFrameSideData.data which is 16 bytes of
             * uuid_iso_iec_11578 followed by AVFrameSideData.size - 16 bytes of user_data_payload_byte.
             */
            SEI_UNREGISTERED,

            /**
             * Film grain parameters for a frame, described by AVFilmGrainParams.
             * Must be present for every frame which should have film grain applied.
             *
             * May be present multiple times, for example when there are multiple
             * alternative parameter sets for different video signal characteristics.
             * The user should select the most appropriate set for the application.
             */
            FILM_GRAIN_PARAMS,

            /**
             * Bounding boxes for object detection and classification,
             * as described by AVDetectionBBoxHeader.
             */
            DETECTION_BBOXES,

            /**
             * Dolby Vision RPU raw data, suitable for passing to x265
             * or other libraries. Array of uint8_t, with NAL emulation
             * bytes intact.
             */
            DOVI_RPU_BUFFER,

            /**
             * Parsed Dolby Vision metadata, suitable for passing to a software
             * implementation. The payload is the AVDOVIMetadata struct defined in
             * libavutil/dovi_meta.h.
             */
            DOVI_METADATA,

            /**
             * HDR Vivid dynamic metadata associated with a video frame. The payload is
             * an AVDynamicHDRVivid type and contains information for color
             * volume transform - CUVA 005.1-2021.
             */
            DYNAMIC_HDR_VIVID,

            /**
             * Ambient viewing environment metadata, as defined by H.274.
             */
            AMBIENT_VIEWING_ENVIRONMENT,

            /**
             * Provide encoder-specific hinting information about changed/unchanged
             * portions of a frame.  It can be used to pass information about which
             * macroblocks can be skipped because they didn't change from the
             * corresponding ones in the previous frame. This could be useful for
             * applications which know this information in advance to speed up
             * encoding.
             */
            VIDEO_HINT)

// Direct copy of AVColorPrimaries
/**
 * Chromaticity coordinates of the source primaries.
 * These values match the ones defined by ISO/IEC 23091-2_2019 subclause 8.1 and ITU-T H.273.
 */
XENUM_CLASS(ColorPrimaries,
            RESERVED0   = 0,
            BT709       = 1, ///< also ITU-R BT1361 / IEC 61966-2-4 / SMPTE RP 177 Annex B
            UNSPECIFIED = 2,
            RESERVED    = 3,
            BT470M      = 4, ///< also FCC Title 47 Code of Federal Regulations 73.682 (a)(20)

            BT470BG      = 5,  ///< also ITU-R BT601-6 625 / ITU-R BT1358 625 / ITU-R BT1700 625 PAL & SECAM
            SMPTE170M    = 6,  ///< also ITU-R BT601-6 525 / ITU-R BT1358 525 / ITU-R BT1700 NTSC
            SMPTE240M    = 7,  ///< identical to above, also called "SMPTE C" even though it uses D65
            FILM         = 8,  ///< colour filters using Illuminant C
            BT2020       = 9,  ///< ITU-R BT2020
            SMPTE428     = 10, ///< SMPTE ST 428-1 (CIE 1931 XYZ)
            SMPTEST428_1 = SMPTE428,
            SMPTE431     = 11, ///< SMPTE ST 431-2 (2011) / DCI P3
            SMPTE432     = 12, ///< SMPTE ST 432-1 (2010) / P3 D65 / Display P3
            EBU3213      = 22, ///< EBU Tech. 3213-E (nothing there) / one of JEDEC P22 group phosphors
            JEDEC_P22    = EBU3213)

// Direct copy of AVColorTransferCharacteristic
/**
 * Color Transfer Characteristic.
 * These values match the ones defined by ISO/IEC 23091-2_2019 subclause 8.2.
 */
XENUM_CLASS(ColorTransferCharacteristic,
            RESERVED0    = 0,
            BT709        = 1, ///< also ITU-R BT1361
            UNSPECIFIED  = 2,
            RESERVED     = 3,
            GAMMA22      = 4, ///< also ITU-R BT470M / ITU-R BT1700 625 PAL & SECAM
            GAMMA28      = 5, ///< also ITU-R BT470BG
            SMPTE170M    = 6, ///< also ITU-R BT601-6 525 or 625 / ITU-R BT1358 525 or 625 / ITU-R BT1700 NTSC
            SMPTE240M    = 7,
            LINEAR       = 8,  ///< "Linear transfer characteristics"
            LOG          = 9,  ///< "Logarithmic transfer characteristic (100:1 range)"
            LOG_SQRT     = 10, ///< "Logarithmic transfer characteristic (100 * Sqrt(10) : 1 range)"
            IEC61966_2_4 = 11, ///< IEC 61966-2-4
            BT1361_ECG   = 12, ///< ITU-R BT1361 Extended Colour Gamut
            IEC61966_2_1 = 13, ///< IEC 61966-2-1 (sRGB or sYCC)
            BT2020_10    = 14, ///< ITU-R BT2020 for 10-bit system
            BT2020_12    = 15, ///< ITU-R BT2020 for 12-bit system
            SMPTE2084    = 16, ///< SMPTE ST 2084 for 10-, 12-, 14- and 16-bit systems
            SMPTEST2084  = SMPTE2084,
            SMPTE428     = 17, ///< SMPTE ST 428-1
            SMPTEST428_1 = SMPTE428,
            ARIB_STD_B67 = 18 ///< ARIB STD-B67, known as "Hybrid log-gamma"
)

// Temp fix
#ifdef RGB
    #undef RGB
#endif
// Direct copy of AVColorSpace
/**
 * YUV colorspace type.
 * These values match the ones defined by ISO/IEC 23091-2_2019 subclause 8.3.
 */
XENUM_CLASS(
    ColorSpace,
    RGB         = 0, ///< order of coefficients is actually GBR, also IEC 61966-2-1 (sRGB), YZX and ST 428-1
    BT709       = 1, ///< also ITU-R BT1361 / IEC 61966-2-4 xvYCC709 / derived in SMPTE RP 177 Annex B
    UNSPECIFIED = 2,
    RESERVED    = 3, ///< reserved for future use by ITU-T and ISO/IEC just like 15-255 are
    FCC         = 4, ///< FCC Title 47 Code of Federal Regulations 73.682 (a)(20)
    BT470BG = 5, ///< also ITU-R BT601-6 625 / ITU-R BT1358 625 / ITU-R BT1700 625 PAL & SECAM / IEC 61966-2-4 xvYCC601
    SMPTE170M = 6, ///< also ITU-R BT601-6 525 / ITU-R BT1358 525 / ITU-R BT1700 NTSC / functionally identical to above
    SMPTE240M = 7, ///< derived from 170M primaries and D65 white point, 170M is derived from BT470 System M's primaries
    YCGCO     = 8, ///< used by Dirac / VC-2 and H.264 FRext, see ITU-T SG16
    YCOCG     = YCGCO,
    BT2020_NCL         = 9,  ///< ITU-R BT2020 non-constant luminance system
    BT2020_CL          = 10, ///< ITU-R BT2020 constant luminance system
    SMPTE2085          = 11, ///< SMPTE 2085, Y'D'zD'x
    CHROMA_DERIVED_NCL = 12, ///< Chromaticity-derived non-constant luminance system
    CHROMA_DERIVED_CL  = 13, ///< Chromaticity-derived constant luminance system
    ICTCP              = 14  ///< ITU-R BT.2100-0, ICtCp
)

// Direct copy of AVColorRange
/**
 * Visual content value range.
 *
 * These values are based on definitions that can be found in multiple
 * specifications, such as ITU-T BT.709 (3.4 - Quantization of RGB, luminance
 * and colour-difference signals), ITU-T BT.2020 (Table 5 - Digital
 * Representation) as well as ITU-T BT.2100 (Table 9 - Digital 10- and 12-bit
 * integer representation). At the time of writing, the BT.2100 one is
 * recommended, as it also defines the full range representation.
 *
 * Common definitions:
 *   - For RGB and luma planes such as Y in YCbCr and I in ICtCp,
 *     'E' is the original value in range of 0.0 to 1.0.
 *   - For chroma planes such as Cb,Cr and Ct,Cp, 'E' is the original
 *     value in range of -0.5 to 0.5.
 *   - 'n' is the output bit depth.
 *   - For additional definitions such as rounding and clipping to valid n
 *     bit unsigned integer range, please refer to BT.2100 (Table 9).
 */
XENUM_CLASS(ColorRange,
            UNSPECIFIED = 0,

            /**
             * Narrow or limited range content.
             *
             * - For luma planes:
             *
             *       (219 * E + 16) * 2^(n-8)
             *
             *   F.ex. the range of 16-235 for 8 bits
             *
             * - For chroma planes:
             *
             *       (224 * E + 128) * 2^(n-8)
             *
             *   F.ex. the range of 16-240 for 8 bits
             */
            MPEG = 1,

            /**
             * Full range content.
             *
             * - For RGB and luma planes:
             *
             *       (2^n - 1) * E
             *
             *   F.ex. the range of 0-255 for 8 bits
             *
             * - For chroma planes:
             *
             *       (2^n - 1) * E + 2^(n - 1)
             *
             *   F.ex. the range of 1-255 for 8 bits
             */
            JPEG = 2)

/**
 * Location of chroma samples.
 *
 * Illustration showing the location of the first (top left) chroma sample of the
 * image, the left shows only luma, the right
 * shows the location of the chroma sample, the 2 could be imagined to overlay
 * each other but are drawn separately due to limitations of ASCII
 *
 *                1st 2nd       1st 2nd horizontal luma sample positions
 *                 v   v         v   v
 *                 ______        ______
 *1st luma line > |X   X ...    |3 4 X ...     X are luma samples,
 *                |             |1 2           1-6 are possible chroma positions
 *2nd luma line > |X   X ...    |5 6 X ...     0 is undefined/unknown position
 */
XENUM_CLASS(ChromaLocation,
            UNSPECIFIED = 0,
            LEFT        = 1, ///< MPEG-2/4 4:2:0, H.264 default for 4:2:0
            CENTER      = 2, ///< MPEG-1 4:2:0, JPEG 4:2:0, H.263 4:2:0
            TOPLEFT     = 3, ///< ITU-R 601, SMPTE 274M 296M S314M(DV 4:1:1), mpeg2 4:2:2
            TOP         = 4,
            BOTTOMLEFT  = 5,
            BOTTOM      = 6)

// Indirect copy of AVFieldOrder. See at defs.h
XENUM_CLASS(eXFieldsOrder, // TODO: Rename to FieldsOrder
            Progressive = 1,
            TopFirst,               ///< Top coded_first, top displayed first
            BottomFirst,            ///< Bottom coded first, bottom displayed first
            TopCoded_BottomDisplay, ///< Top coded first, bottom displayed first
            BottomCoded_TopDisplay  ///< Bottom coded first, top displayed first
)

XENUM_CLASS(HWDeviceType,
            kNONE,
            kVDPAU,
            kCUDA,
            kVAAPI,
            kDXVA2,
            kQSV,
            kVIDEOTOOLBOX,
            kD3D11VA,
            kDRM,
            kOPENCL,
            kMEDIACODEC,
            kVULKAN,
            kD3D12VA)

} // namespace xsdk
