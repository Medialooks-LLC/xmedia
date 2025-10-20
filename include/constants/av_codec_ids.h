#pragma once

#include <string>

namespace xsdk::av_lib::codec_id {
static constexpr std::string_view kMpeg1video = "mpeg1video";
static constexpr std::string_view kMpeg2video = "mpeg2video";
static constexpr std::string_view kH261       = "h261";
static constexpr std::string_view kH263       = "h263";
static constexpr std::string_view kRv10       = "rv10";
static constexpr std::string_view kRv20       = "rv20";
static constexpr std::string_view kMjpeg      = "mjpeg";
// WARNING: ONLY Decoder for:mjpegb
static constexpr std::string_view kMjpegb = "mjpegb";
// WARNING: ONLY Encoder for:ljpeg
static constexpr std::string_view kLjpeg = "ljpeg";
// WARNING: ONLY Decoder for:sp5x
static constexpr std::string_view kSp5x     = "sp5x";
static constexpr std::string_view kJpegls   = "jpegls";
static constexpr std::string_view kMpeg4    = "mpeg4";
static constexpr std::string_view kRawvideo = "rawvideo";
// WARNING: ONLY Decoder for:msmpeg4v1
static constexpr std::string_view kMsmpeg4v1 = "msmpeg4v1";
static constexpr std::string_view kMsmpeg4v2 = "msmpeg4v2";
static constexpr std::string_view kMsmpeg4   = "msmpeg4";
static constexpr std::string_view kWmv1      = "wmv1";
static constexpr std::string_view kWmv2      = "wmv2";
static constexpr std::string_view kH263p     = "h263p";
// WARNING: ONLY Decoder for:h263i
static constexpr std::string_view kH263i = "h263i";
static constexpr std::string_view kFlv   = "flv";
static constexpr std::string_view kSvq1  = "svq1";
// WARNING: ONLY Decoder for:svq3
static constexpr std::string_view kSvq3    = "svq3";
static constexpr std::string_view kDvvideo = "dvvideo";
static constexpr std::string_view kHuffyuv = "huffyuv";
// WARNING: ONLY Decoder for:cyuv
static constexpr std::string_view kCyuv = "cyuv";
// WARNING: Encoder name is:libx264
static constexpr std::string_view kLibx264     = "libx264";
static constexpr std::string_view kH264        = "h264";
static constexpr std::string_view kLibopenh264 = "libopenh264";
// WARNING: ONLY Decoder for:indeo3
static constexpr std::string_view kIndeo3 = "indeo3";
// WARNING: ONLY Decoder for:vp3
static constexpr std::string_view kVp3 = "vp3";
// WARNING: Encoder name is:libtheora
static constexpr std::string_view kLibtheora = "libtheora";
static constexpr std::string_view kTheora    = "theora";
static constexpr std::string_view kAsv1      = "asv1";
static constexpr std::string_view kAsv2      = "asv2";
static constexpr std::string_view kFfv1      = "ffv1";
// WARNING: ONLY Decoder for:4xm
static constexpr std::string_view k4xm = "4xm";
// WARNING: ONLY Decoder for:vcr1
static constexpr std::string_view kVcr1 = "vcr1";
static constexpr std::string_view kCljr = "cljr";
// WARNING: ONLY Decoder for:mdec
static constexpr std::string_view kMdec     = "mdec";
static constexpr std::string_view kRoqvideo = "roqvideo";
// WARNING: ONLY Decoder for:interplayvideo
static constexpr std::string_view kInterplayvideo = "interplayvideo";
// WARNING: ONLY Decoder for:xan_wc3
static constexpr std::string_view kXan_wc3 = "xan_wc3";
// WARNING: ONLY Decoder for:xan_wc4
static constexpr std::string_view kXan_wc4 = "xan_wc4";
static constexpr std::string_view kRpza    = "rpza";
static constexpr std::string_view kCinepak = "cinepak";
// WARNING: ONLY Decoder for:vqavideo
static constexpr std::string_view kVqavideo = "vqavideo";
// WARNING: ONLY Decoder for:msrle
static constexpr std::string_view kMsrle    = "msrle";
static constexpr std::string_view kMsvideo1 = "msvideo1";
// WARNING: ONLY Decoder for:idcinvideo
static constexpr std::string_view kIdcinvideo = "idcinvideo";
// WARNING: ONLY Decoder for:8bps
static constexpr std::string_view k8bps = "8bps";
static constexpr std::string_view kSmc  = "smc";
// WARNING: ONLY Decoder for:flic
static constexpr std::string_view kFlic = "flic";
// WARNING: ONLY Decoder for:truemotion1
static constexpr std::string_view kTruemotion1 = "truemotion1";
// WARNING: ONLY Decoder for:vmdvideo
static constexpr std::string_view kVmdvideo = "vmdvideo";
// WARNING: ONLY Decoder for:mszh
static constexpr std::string_view kMszh  = "mszh";
static constexpr std::string_view kZlib  = "zlib";
static constexpr std::string_view kQtrle = "qtrle";
// WARNING: ONLY Decoder for:camtasia
static constexpr std::string_view kCamtasia = "camtasia";
// WARNING: ONLY Decoder for:ultimotion
static constexpr std::string_view kUltimotion = "ultimotion";
// WARNING: ONLY Decoder for:qdraw
static constexpr std::string_view kQdraw = "qdraw";
// WARNING: ONLY Decoder for:xl
static constexpr std::string_view kXl = "xl";
// WARNING: ONLY Decoder for:qpeg
static constexpr std::string_view kQpeg    = "qpeg";
static constexpr std::string_view kPng     = "png";
static constexpr std::string_view kPpm     = "ppm";
static constexpr std::string_view kPbm     = "pbm";
static constexpr std::string_view kPgm     = "pgm";
static constexpr std::string_view kPgmyuv  = "pgmyuv";
static constexpr std::string_view kPam     = "pam";
static constexpr std::string_view kFfvhuff = "ffvhuff";
// WARNING: ONLY Decoder for:rv30
static constexpr std::string_view kRv30 = "rv30";
// WARNING: ONLY Decoder for:rv40
static constexpr std::string_view kRv40 = "rv40";
// WARNING: ONLY Decoder for:vc1
static constexpr std::string_view kVc1 = "vc1";
// WARNING: ONLY Decoder for:wmv3
static constexpr std::string_view kWmv3 = "wmv3";
// WARNING: ONLY Decoder for:loco
static constexpr std::string_view kLoco = "loco";
// WARNING: ONLY Decoder for:wnv1
static constexpr std::string_view kWnv1 = "wnv1";
// WARNING: ONLY Decoder for:aasc
static constexpr std::string_view kAasc = "aasc";
// WARNING: ONLY Decoder for:indeo2
static constexpr std::string_view kIndeo2 = "indeo2";
// WARNING: ONLY Decoder for:fraps
static constexpr std::string_view kFraps = "fraps";
// WARNING: ONLY Decoder for:truemotion2
static constexpr std::string_view kTruemotion2 = "truemotion2";
static constexpr std::string_view kBmp         = "bmp";
// WARNING: ONLY Decoder for:camstudio
static constexpr std::string_view kCamstudio = "camstudio";
// WARNING: ONLY Decoder for:mmvideo
static constexpr std::string_view kMmvideo = "mmvideo";
static constexpr std::string_view kZmbv    = "zmbv";
// WARNING: ONLY Decoder for:avs
static constexpr std::string_view kAvs = "avs";
// WARNING: ONLY Decoder for:smackvid
static constexpr std::string_view kSmackvid = "smackvid";
// WARNING: ONLY Decoder for:nuv
static constexpr std::string_view kNuv = "nuv";
// WARNING: ONLY Decoder for:kmvc
static constexpr std::string_view kKmvc    = "kmvc";
static constexpr std::string_view kFlashsv = "flashsv";
// WARNING: ONLY Decoder for:cavs
static constexpr std::string_view kCavs     = "cavs";
static constexpr std::string_view kJpeg2000 = "jpeg2000";
// WARNING: ONLY Decoder for:vmnc
static constexpr std::string_view kVmnc = "vmnc";
// WARNING: ONLY Decoder for:vp5
static constexpr std::string_view kVp5 = "vp5";
// WARNING: ONLY Decoder for:vp6
static constexpr std::string_view kVp6 = "vp6";
// WARNING: ONLY Decoder for:vp6f
static constexpr std::string_view kVp6f  = "vp6f";
static constexpr std::string_view kTarga = "targa";
// WARNING: ONLY Decoder for:dsicinvideo
static constexpr std::string_view kDsicinvideo = "dsicinvideo";
// WARNING: ONLY Decoder for:tiertexseqvideo
static constexpr std::string_view kTiertexseqvideo = "tiertexseqvideo";
static constexpr std::string_view kTiff            = "tiff";
static constexpr std::string_view kGif             = "gif";
// WARNING: ONLY Decoder for:dxa
static constexpr std::string_view kDxa   = "dxa";
static constexpr std::string_view kDnxhd = "dnxhd";
// WARNING: ONLY Decoder for:thp
static constexpr std::string_view kThp = "thp";
static constexpr std::string_view kSgi = "sgi";
// WARNING: ONLY Decoder for:c93
static constexpr std::string_view kC93 = "c93";
// WARNING: ONLY Decoder for:bethsoftvid
static constexpr std::string_view kBethsoftvid = "bethsoftvid";
// WARNING: ONLY Decoder for:ptx
static constexpr std::string_view kPtx = "ptx";
// WARNING: ONLY Decoder for:txd
static constexpr std::string_view kTxd = "txd";
// WARNING: ONLY Decoder for:vp6a
static constexpr std::string_view kVp6a = "vp6a";
static constexpr std::string_view kAmv  = "amv";
// WARNING: ONLY Decoder for:vb
static constexpr std::string_view kVb      = "vb";
static constexpr std::string_view kPcx     = "pcx";
static constexpr std::string_view kSunrast = "sunrast";
// WARNING: ONLY Decoder for:indeo4
static constexpr std::string_view kIndeo4 = "indeo4";
// WARNING: ONLY Decoder for:indeo5
static constexpr std::string_view kIndeo5 = "indeo5";
// WARNING: ONLY Decoder for:mimic
static constexpr std::string_view kMimic = "mimic";
// WARNING: ONLY Decoder for:rl2
static constexpr std::string_view kRl2 = "rl2";
// WARNING: ONLY Decoder for:escape124
static constexpr std::string_view kEscape124 = "escape124";
// WARNING: Encoder name is:vc2
static constexpr std::string_view kVc2   = "vc2";
static constexpr std::string_view kDirac = "dirac";
// WARNING: ONLY Decoder for:bfi
static constexpr std::string_view kBfi = "bfi";
// WARNING: ONLY Decoder for:eacmv
static constexpr std::string_view kEacmv = "eacmv";
// WARNING: ONLY Decoder for:motionpixels
static constexpr std::string_view kMotionpixels = "motionpixels";
// WARNING: ONLY Decoder for:eatgv
static constexpr std::string_view kEatgv = "eatgv";
// WARNING: ONLY Decoder for:eatgq
static constexpr std::string_view kEatgq = "eatgq";
// WARNING: ONLY Decoder for:eatqi
static constexpr std::string_view kEatqi = "eatqi";
// WARNING: ONLY Decoder for:aura
static constexpr std::string_view kAura = "aura";
// WARNING: ONLY Decoder for:aura2
static constexpr std::string_view kAura2 = "aura2";
// WARNING: ONLY Decoder for:v210x
static constexpr std::string_view kV210x = "v210x";
// WARNING: ONLY Decoder for:tmv
static constexpr std::string_view kTmv  = "tmv";
static constexpr std::string_view kV210 = "v210";
static constexpr std::string_view kDpx  = "dpx";
// WARNING: ONLY Decoder for:eamad
static constexpr std::string_view kEamad = "eamad";
// WARNING: ONLY Decoder for:frwu
static constexpr std::string_view kFrwu     = "frwu";
static constexpr std::string_view kFlashsv2 = "flashsv2";
// WARNING: ONLY Decoder for:cdgraphics
static constexpr std::string_view kCdgraphics = "cdgraphics";
static constexpr std::string_view kR210       = "r210";
// WARNING: ONLY Decoder for:anm
static constexpr std::string_view kAnm = "anm";
// WARNING: ONLY Decoder for:binkvideo
static constexpr std::string_view kBinkvideo = "binkvideo";
// WARNING: ONLY Decoder for:iff
static constexpr std::string_view kIff = "iff";
// WARNING: ONLY Decoder for:kgv1
static constexpr std::string_view kKgv1 = "kgv1";
// WARNING: ONLY Decoder for:yop
static constexpr std::string_view kYop = "yop";
// WARNING: Encoder name is:libvpx
static constexpr std::string_view kLibvpx = "libvpx";
static constexpr std::string_view kVp8    = "vp8";
// WARNING: ONLY Decoder for:pictor
static constexpr std::string_view kPictor = "pictor";
// WARNING: ONLY Decoder for:ansi
static constexpr std::string_view kAnsi = "ansi";
// WARNING: ONLY Encoder for:a64multi
static constexpr std::string_view kA64multi = "a64multi";
// WARNING: ONLY Encoder for:a64multi5
static constexpr std::string_view kA64multi5 = "a64multi5";
static constexpr std::string_view kR10k      = "r10k";
// WARNING: ONLY Decoder for:mxpeg
static constexpr std::string_view kMxpeg = "mxpeg";
// WARNING: ONLY Decoder for:lagarith
static constexpr std::string_view kLagarith = "lagarith";
static constexpr std::string_view kProres   = "prores";
// WARNING: ONLY Decoder for:jv
static constexpr std::string_view kJv = "jv";
// WARNING: ONLY Decoder for:dfa
static constexpr std::string_view kDfa = "dfa";
// WARNING: ONLY Decoder for:wmv3image
static constexpr std::string_view kWmv3image = "wmv3image";
// WARNING: ONLY Decoder for:vc1image
static constexpr std::string_view kVc1image = "vc1image";
static constexpr std::string_view kUtvideo  = "utvideo";
// WARNING: ONLY Decoder for:bmv_video
static constexpr std::string_view kBmv_video = "bmv_video";
// WARNING: ONLY Decoder for:vble
static constexpr std::string_view kVble = "vble";
// WARNING: ONLY Decoder for:dxtory
static constexpr std::string_view kDxtory = "dxtory";
static constexpr std::string_view kV410   = "v410";
static constexpr std::string_view kXwd    = "xwd";
// WARNING: ONLY Decoder for:cdxl
static constexpr std::string_view kCdxl = "cdxl";
static constexpr std::string_view kXbm  = "xbm";
// WARNING: ONLY Decoder for:zerocodec
static constexpr std::string_view kZerocodec = "zerocodec";
// WARNING: ONLY Decoder for:mss1
static constexpr std::string_view kMss1 = "mss1";
// WARNING: ONLY Decoder for:msa1
static constexpr std::string_view kMsa1 = "msa1";
// WARNING: ONLY Decoder for:tscc2
static constexpr std::string_view kTscc2 = "tscc2";
// WARNING: ONLY Decoder for:mts2
static constexpr std::string_view kMts2 = "mts2";
// WARNING: ONLY Decoder for:cllc
static constexpr std::string_view kCllc = "cllc";
// WARNING: ONLY Decoder for:mss2
static constexpr std::string_view kMss2 = "mss2";
// WARNING: Encoder name is:libvpx-vp9
static constexpr std::string_view kLibvpx_vp9 = "libvpx-vp9";
static constexpr std::string_view kVp9        = "vp9";
// WARNING: ONLY Decoder for:aic
static constexpr std::string_view kAic = "aic";
// WARNING: ONLY Decoder for:escape130
static constexpr std::string_view kEscape130 = "escape130";
// WARNING: ONLY Decoder for:g2m
static constexpr std::string_view kG2m = "g2m";
// WARNING: Encoder name is:libwebp_anim
static constexpr std::string_view kLibwebp_anim = "libwebp_anim";
static constexpr std::string_view kWebp         = "webp";
// WARNING: ONLY Decoder for:hnm4video
static constexpr std::string_view kHnm4video = "hnm4video";
// WARNING: Encoder name is:libx265
static constexpr std::string_view kLibx265 = "libx265";
static constexpr std::string_view kHevc    = "hevc";
// WARNING: ONLY Decoder for:fic
static constexpr std::string_view kFic       = "fic";
static constexpr std::string_view kAlias_pix = "alias_pix";
// WARNING: ONLY Decoder for:brender_pix
static constexpr std::string_view kBrender_pix = "brender_pix";
// WARNING: ONLY Decoder for:paf_video
static constexpr std::string_view kPaf_video = "paf_video";
static constexpr std::string_view kExr       = "exr";
// WARNING: ONLY Decoder for:vp7
static constexpr std::string_view kVp7 = "vp7";
// WARNING: ONLY Decoder for:sanm
static constexpr std::string_view kSanm = "sanm";
// WARNING: ONLY Decoder for:sgirle
static constexpr std::string_view kSgirle = "sgirle";
// WARNING: ONLY Decoder for:mvc1
static constexpr std::string_view kMvc1 = "mvc1";
// WARNING: ONLY Decoder for:mvc2
static constexpr std::string_view kMvc2 = "mvc2";
// WARNING: ONLY Decoder for:hqx
static constexpr std::string_view kHqx = "hqx";
// WARNING: ONLY Decoder for:tdsc
static constexpr std::string_view kTdsc = "tdsc";
// WARNING: ONLY Decoder for:hq_hqa
static constexpr std::string_view kHq_hqa = "hq_hqa";
static constexpr std::string_view kHap    = "hap";
// WARNING: ONLY Decoder for:dds
static constexpr std::string_view kDds = "dds";
// WARNING: ONLY Decoder for:dxv
static constexpr std::string_view kDxv = "dxv";
// WARNING: ONLY Decoder for:screenpresso
static constexpr std::string_view kScreenpresso = "screenpresso";
// WARNING: ONLY Decoder for:rscc
static constexpr std::string_view kRscc = "rscc";
// WARNING: ONLY Decoder for:pgx
static constexpr std::string_view kPgx = "pgx";
// WARNING: ONLY Decoder for:msp2
static constexpr std::string_view kMsp2 = "msp2";
static constexpr std::string_view kY41p = "y41p";
static constexpr std::string_view kAvrp = "avrp";
// WARNING: ONLY Decoder for:012v
static constexpr std::string_view k012v = "012v";
static constexpr std::string_view kAvui = "avui";
static constexpr std::string_view kAyuv = "ayuv";
// WARNING: ONLY Decoder for:targa_y216
static constexpr std::string_view kTarga_y216 = "targa_y216";
static constexpr std::string_view kV308       = "v308";
static constexpr std::string_view kV408       = "v408";
static constexpr std::string_view kYuv4       = "yuv4";
// WARNING: ONLY Decoder for:avrn
static constexpr std::string_view kAvrn = "avrn";
// WARNING: ONLY Decoder for:cpia
static constexpr std::string_view kCpia  = "cpia";
static constexpr std::string_view kXface = "xface";
static constexpr std::string_view kSnow  = "snow";
// WARNING: ONLY Decoder for:smvjpeg
static constexpr std::string_view kSmvjpeg = "smvjpeg";
static constexpr std::string_view kApng    = "apng";
static constexpr std::string_view kCfhd    = "cfhd";
// WARNING: ONLY Decoder for:truemotion2rt
static constexpr std::string_view kTruemotion2rt = "truemotion2rt";
// WARNING: ONLY Decoder for:m101
static constexpr std::string_view kM101     = "m101";
static constexpr std::string_view kMagicyuv = "magicyuv";
// WARNING: ONLY Decoder for:sheervideo
static constexpr std::string_view kSheervideo = "sheervideo";
// WARNING: ONLY Decoder for:ylc
static constexpr std::string_view kYlc = "ylc";
// WARNING: ONLY Decoder for:psd
static constexpr std::string_view kPsd = "psd";
// WARNING: ONLY Decoder for:pixlet
static constexpr std::string_view kPixlet  = "pixlet";
static constexpr std::string_view kSpeedhq = "speedhq";
// WARNING: ONLY Decoder for:fmvc
static constexpr std::string_view kFmvc = "fmvc";
// WARNING: ONLY Decoder for:scpr
static constexpr std::string_view kScpr = "scpr";
// WARNING: ONLY Decoder for:clearvideo
static constexpr std::string_view kClearvideo = "clearvideo";
// WARNING: ONLY Decoder for:xpm
static constexpr std::string_view kXpm = "xpm";
// WARNING: Encoder name is:libaom-av1
static constexpr std::string_view kLibaom_av1 = "libaom-av1";
static constexpr std::string_view kLibdav1d   = "libdav1d";
static constexpr std::string_view kBitpacked  = "bitpacked";
// WARNING: ONLY Decoder for:mscc
static constexpr std::string_view kMscc = "mscc";
// WARNING: ONLY Decoder for:srgc
static constexpr std::string_view kSrgc = "srgc";
// WARNING: ONLY Decoder for:gdv
static constexpr std::string_view kGdv  = "gdv";
static constexpr std::string_view kFits = "fits";
// WARNING: ONLY Decoder for:imm4
static constexpr std::string_view kImm4 = "imm4";
// WARNING: ONLY Decoder for:prosumer
static constexpr std::string_view kProsumer = "prosumer";
// WARNING: ONLY Decoder for:mwsc
static constexpr std::string_view kMwsc = "mwsc";
// WARNING: ONLY Decoder for:wcmv
static constexpr std::string_view kWcmv = "wcmv";
// WARNING: ONLY Decoder for:rasc
static constexpr std::string_view kRasc = "rasc";
// WARNING: ONLY Decoder for:hymt
static constexpr std::string_view kHymt = "hymt";
// WARNING: ONLY Decoder for:arbc
static constexpr std::string_view kArbc = "arbc";
// WARNING: ONLY Decoder for:agm
static constexpr std::string_view kAgm = "agm";
// WARNING: ONLY Decoder for:lscr
static constexpr std::string_view kLscr = "lscr";
// WARNING: ONLY Decoder for:vp4
static constexpr std::string_view kVp4 = "vp4";
// WARNING: ONLY Decoder for:imm5
static constexpr std::string_view kImm5 = "imm5";
// WARNING: ONLY Decoder for:mvdv
static constexpr std::string_view kMvdv = "mvdv";
// WARNING: ONLY Decoder for:mvha
static constexpr std::string_view kMvha = "mvha";
// WARNING: ONLY Decoder for:cdtoons
static constexpr std::string_view kCdtoons = "cdtoons";
// WARNING: ONLY Decoder for:mv30
static constexpr std::string_view kMv30 = "mv30";
// WARNING: ONLY Decoder for:notchlc
static constexpr std::string_view kNotchlc = "notchlc";
static constexpr std::string_view kPfm     = "pfm";
// WARNING: ONLY Decoder for:mobiclip
static constexpr std::string_view kMobiclip = "mobiclip";
// WARNING: ONLY Decoder for:photocd
static constexpr std::string_view kPhotocd = "photocd";
// WARNING: ONLY Decoder for:ipu
static constexpr std::string_view kIpu = "ipu";
// WARNING: ONLY Decoder for:argo
static constexpr std::string_view kArgo = "argo";
// WARNING: ONLY Decoder for:cri
static constexpr std::string_view kCri = "cri";
// WARNING: ONLY Decoder for:simbiosis_imx
static constexpr std::string_view kSimbiosis_imx = "simbiosis_imx";
// WARNING: ONLY Decoder for:sga
static constexpr std::string_view kSga = "sga";
// WARNING: ONLY Decoder for:gem
static constexpr std::string_view kGem  = "gem";
static constexpr std::string_view kVbn  = "vbn";
static constexpr std::string_view kQoi  = "qoi";
static constexpr std::string_view kPhm  = "phm";
static constexpr std::string_view kHdr  = "hdr";
static constexpr std::string_view kWbmp = "wbmp";
// WARNING: ONLY Decoder for:media100
static constexpr std::string_view kMedia100 = "media100";
// WARNING: ONLY Decoder for:vqc
static constexpr std::string_view kVqc              = "vqc";
static constexpr std::string_view kPcm_s16le        = "pcm_s16le";
static constexpr std::string_view kPcm_s16be        = "pcm_s16be";
static constexpr std::string_view kPcm_u16le        = "pcm_u16le";
static constexpr std::string_view kPcm_u16be        = "pcm_u16be";
static constexpr std::string_view kPcm_s8           = "pcm_s8";
static constexpr std::string_view kPcm_u8           = "pcm_u8";
static constexpr std::string_view kPcm_mulaw        = "pcm_mulaw";
static constexpr std::string_view kPcm_alaw         = "pcm_alaw";
static constexpr std::string_view kPcm_s32le        = "pcm_s32le";
static constexpr std::string_view kPcm_s32be        = "pcm_s32be";
static constexpr std::string_view kPcm_u32le        = "pcm_u32le";
static constexpr std::string_view kPcm_u32be        = "pcm_u32be";
static constexpr std::string_view kPcm_s20le        = "pcm_s20le";
static constexpr std::string_view kPcm_s24le        = "pcm_s24le";
static constexpr std::string_view kPcm_s24be        = "pcm_s24be";
static constexpr std::string_view kPcm_u24le        = "pcm_u24le";
static constexpr std::string_view kPcm_u24be        = "pcm_u24be";
static constexpr std::string_view kPcm_s24daud      = "pcm_s24daud";
static constexpr std::string_view kPcm_s16le_planar = "pcm_s16le_planar";
static constexpr std::string_view kPcm_dvd          = "pcm_dvd";
static constexpr std::string_view kPcm_f32be        = "pcm_f32be";
static constexpr std::string_view kPcm_f32le        = "pcm_f32le";
static constexpr std::string_view kPcm_f64be        = "pcm_f64be";
static constexpr std::string_view kPcm_f64le        = "pcm_f64le";
static constexpr std::string_view kPcm_bluray       = "pcm_bluray";
// WARNING: ONLY Decoder for:pcm_lxf
static constexpr std::string_view kPcm_lxf          = "pcm_lxf";
static constexpr std::string_view kS302m            = "s302m";
static constexpr std::string_view kPcm_s8_planar    = "pcm_s8_planar";
static constexpr std::string_view kPcm_s20le_planar = "pcm_s20le_planar";
static constexpr std::string_view kPcm_s24le_planar = "pcm_s24le_planar";
static constexpr std::string_view kPcm_s32le_planar = "pcm_s32le_planar";
static constexpr std::string_view kPcm_s16be_planar = "pcm_s16be_planar";
static constexpr std::string_view kPcm_s64le        = "pcm_s64le";
static constexpr std::string_view kPcm_s64be        = "pcm_s64be";
// WARNING: ONLY Decoder for:pcm_f16le
static constexpr std::string_view kPcm_f16le = "pcm_f16le";
// WARNING: ONLY Decoder for:pcm_f24le
static constexpr std::string_view kPcm_f24le = "pcm_f24le";
static constexpr std::string_view kPcm_vidc  = "pcm_vidc";
// WARNING: ONLY Decoder for:pcm_sga
static constexpr std::string_view kPcm_sga       = "pcm_sga";
static constexpr std::string_view kAdpcm_ima_qt  = "adpcm_ima_qt";
static constexpr std::string_view kAdpcm_ima_wav = "adpcm_ima_wav";
// WARNING: ONLY Decoder for:adpcm_ima_dk3
static constexpr std::string_view kAdpcm_ima_dk3 = "adpcm_ima_dk3";
// WARNING: ONLY Decoder for:adpcm_ima_dk4
static constexpr std::string_view kAdpcm_ima_dk4 = "adpcm_ima_dk4";
static constexpr std::string_view kAdpcm_ima_ws  = "adpcm_ima_ws";
// WARNING: ONLY Decoder for:adpcm_ima_smjpeg
static constexpr std::string_view kAdpcm_ima_smjpeg = "adpcm_ima_smjpeg";
static constexpr std::string_view kAdpcm_ms         = "adpcm_ms";
// WARNING: ONLY Decoder for:adpcm_4xm
static constexpr std::string_view kAdpcm_4xm = "adpcm_4xm";
// WARNING: ONLY Decoder for:adpcm_xa
static constexpr std::string_view kAdpcm_xa  = "adpcm_xa";
static constexpr std::string_view kAdpcm_adx = "adpcm_adx";
// WARNING: ONLY Decoder for:adpcm_ea
static constexpr std::string_view kAdpcm_ea = "adpcm_ea";
static constexpr std::string_view kG726     = "g726";
// WARNING: ONLY Decoder for:adpcm_ct
static constexpr std::string_view kAdpcm_ct     = "adpcm_ct";
static constexpr std::string_view kAdpcm_swf    = "adpcm_swf";
static constexpr std::string_view kAdpcm_yamaha = "adpcm_yamaha";
// WARNING: ONLY Decoder for:adpcm_sbpro_4
static constexpr std::string_view kAdpcm_sbpro_4 = "adpcm_sbpro_4";
// WARNING: ONLY Decoder for:adpcm_sbpro_3
static constexpr std::string_view kAdpcm_sbpro_3 = "adpcm_sbpro_3";
// WARNING: ONLY Decoder for:adpcm_sbpro_2
static constexpr std::string_view kAdpcm_sbpro_2 = "adpcm_sbpro_2";
// WARNING: ONLY Decoder for:adpcm_thp
static constexpr std::string_view kAdpcm_thp     = "adpcm_thp";
static constexpr std::string_view kAdpcm_ima_amv = "adpcm_ima_amv";
// WARNING: ONLY Decoder for:adpcm_ea_r1
static constexpr std::string_view kAdpcm_ea_r1 = "adpcm_ea_r1";
// WARNING: ONLY Decoder for:adpcm_ea_r3
static constexpr std::string_view kAdpcm_ea_r3 = "adpcm_ea_r3";
// WARNING: ONLY Decoder for:adpcm_ea_r2
static constexpr std::string_view kAdpcm_ea_r2 = "adpcm_ea_r2";
// WARNING: ONLY Decoder for:adpcm_ima_ea_sead
static constexpr std::string_view kAdpcm_ima_ea_sead = "adpcm_ima_ea_sead";
// WARNING: ONLY Decoder for:adpcm_ima_ea_eacs
static constexpr std::string_view kAdpcm_ima_ea_eacs = "adpcm_ima_ea_eacs";
// WARNING: ONLY Decoder for:adpcm_ea_xas
static constexpr std::string_view kAdpcm_ea_xas = "adpcm_ea_xas";
// WARNING: ONLY Decoder for:adpcm_ea_maxis_xa
static constexpr std::string_view kAdpcm_ea_maxis_xa = "adpcm_ea_maxis_xa";
// WARNING: ONLY Decoder for:adpcm_ima_iss
static constexpr std::string_view kAdpcm_ima_iss = "adpcm_ima_iss";
static constexpr std::string_view kG722          = "g722";
// WARNING: ONLY Decoder for:adpcm_ima_apc
static constexpr std::string_view kAdpcm_ima_apc = "adpcm_ima_apc";
// WARNING: ONLY Decoder for:adpcm_vima
static constexpr std::string_view kAdpcm_vima = "adpcm_vima";
// WARNING: ONLY Decoder for:adpcm_afc
static constexpr std::string_view kAdpcm_afc = "adpcm_afc";
// WARNING: ONLY Decoder for:adpcm_ima_oki
static constexpr std::string_view kAdpcm_ima_oki = "adpcm_ima_oki";
// WARNING: ONLY Decoder for:adpcm_dtk
static constexpr std::string_view kAdpcm_dtk = "adpcm_dtk";
// WARNING: ONLY Decoder for:adpcm_ima_rad
static constexpr std::string_view kAdpcm_ima_rad = "adpcm_ima_rad";
static constexpr std::string_view kG726le        = "g726le";
// WARNING: ONLY Decoder for:adpcm_thp_le
static constexpr std::string_view kAdpcm_thp_le = "adpcm_thp_le";
// WARNING: ONLY Decoder for:adpcm_psx
static constexpr std::string_view kAdpcm_psx = "adpcm_psx";
// WARNING: ONLY Decoder for:adpcm_aica
static constexpr std::string_view kAdpcm_aica = "adpcm_aica";
// WARNING: ONLY Decoder for:adpcm_ima_dat4
static constexpr std::string_view kAdpcm_ima_dat4 = "adpcm_ima_dat4";
// WARNING: ONLY Decoder for:adpcm_mtaf
static constexpr std::string_view kAdpcm_mtaf = "adpcm_mtaf";
// WARNING: ONLY Decoder for:adpcm_agm
static constexpr std::string_view kAdpcm_agm     = "adpcm_agm";
static constexpr std::string_view kAdpcm_argo    = "adpcm_argo";
static constexpr std::string_view kAdpcm_ima_ssi = "adpcm_ima_ssi";
// WARNING: ONLY Decoder for:adpcm_zork
static constexpr std::string_view kAdpcm_zork    = "adpcm_zork";
static constexpr std::string_view kAdpcm_ima_apm = "adpcm_ima_apm";
static constexpr std::string_view kAdpcm_ima_alp = "adpcm_ima_alp";
// WARNING: ONLY Decoder for:adpcm_ima_mtf
static constexpr std::string_view kAdpcm_ima_mtf = "adpcm_ima_mtf";
// WARNING: ONLY Decoder for:adpcm_ima_cunning
static constexpr std::string_view kAdpcm_ima_cunning = "adpcm_ima_cunning";
// WARNING: ONLY Decoder for:adpcm_ima_moflex
static constexpr std::string_view kAdpcm_ima_moflex = "adpcm_ima_moflex";
// WARNING: ONLY Decoder for:adpcm_ima_acorn
static constexpr std::string_view kAdpcm_ima_acorn = "adpcm_ima_acorn";
// WARNING: ONLY Decoder for:adpcm_xmd
static constexpr std::string_view kAdpcm_xmd = "adpcm_xmd";
// WARNING: ONLY Decoder for:amrnb
static constexpr std::string_view kAmrnb = "amrnb";
// WARNING: ONLY Decoder for:amrwb
static constexpr std::string_view kAmrwb    = "amrwb";
static constexpr std::string_view kReal_144 = "real_144";
// WARNING: ONLY Decoder for:real_288
static constexpr std::string_view kReal_288 = "real_288";
static constexpr std::string_view kRoq_dpcm = "roq_dpcm";
// WARNING: ONLY Decoder for:interplay_dpcm
static constexpr std::string_view kInterplay_dpcm = "interplay_dpcm";
// WARNING: ONLY Decoder for:xan_dpcm
static constexpr std::string_view kXan_dpcm = "xan_dpcm";
// WARNING: ONLY Decoder for:sol_dpcm
static constexpr std::string_view kSol_dpcm = "sol_dpcm";
// WARNING: ONLY Decoder for:sdx2_dpcm
static constexpr std::string_view kSdx2_dpcm = "sdx2_dpcm";
// WARNING: ONLY Decoder for:gremlin_dpcm
static constexpr std::string_view kGremlin_dpcm = "gremlin_dpcm";
// WARNING: ONLY Decoder for:derf_dpcm
static constexpr std::string_view kDerf_dpcm = "derf_dpcm";
// WARNING: ONLY Decoder for:wady_dpcm
static constexpr std::string_view kWady_dpcm = "wady_dpcm";
// WARNING: ONLY Decoder for:cbd2_dpcm
static constexpr std::string_view kCbd2_dpcm = "cbd2_dpcm";
static constexpr std::string_view kMp2       = "mp2";
// WARNING: Encoder name is:libmp3lame
static constexpr std::string_view kLibmp3lame = "libmp3lame";
static constexpr std::string_view kMp3float   = "mp3float";
static constexpr std::string_view kAac        = "aac";
static constexpr std::string_view kAc3        = "ac3";
static constexpr std::string_view kDca        = "dca";
// WARNING: Encoder name is:libvorbis
static constexpr std::string_view kLibvorbis = "libvorbis";
static constexpr std::string_view kVorbis    = "vorbis";
// WARNING: ONLY Decoder for:dvaudio
static constexpr std::string_view kDvaudio = "dvaudio";
static constexpr std::string_view kWmav1   = "wmav1";
static constexpr std::string_view kWmav2   = "wmav2";
// WARNING: ONLY Decoder for:mace3
static constexpr std::string_view kMace3 = "mace3";
// WARNING: ONLY Decoder for:mace6
static constexpr std::string_view kMace6 = "mace6";
// WARNING: ONLY Decoder for:vmdaudio
static constexpr std::string_view kVmdaudio = "vmdaudio";
static constexpr std::string_view kFlac     = "flac";
// WARNING: ONLY Decoder for:mp3adufloat
static constexpr std::string_view kMp3adufloat = "mp3adufloat";
// WARNING: ONLY Decoder for:mp3on4float
static constexpr std::string_view kMp3on4float = "mp3on4float";
// WARNING: ONLY Decoder for:shorten
static constexpr std::string_view kShorten = "shorten";
static constexpr std::string_view kAlac    = "alac";
// WARNING: ONLY Decoder for:ws_snd1
static constexpr std::string_view kWs_snd1 = "ws_snd1";
// WARNING: ONLY Decoder for:gsm
static constexpr std::string_view kGsm = "gsm";
// WARNING: ONLY Decoder for:qdm2
static constexpr std::string_view kQdm2 = "qdm2";
// WARNING: ONLY Decoder for:cook
static constexpr std::string_view kCook = "cook";
// WARNING: ONLY Decoder for:truespeech
static constexpr std::string_view kTruespeech = "truespeech";
static constexpr std::string_view kTta        = "tta";
// WARNING: ONLY Decoder for:smackaud
static constexpr std::string_view kSmackaud = "smackaud";
// WARNING: ONLY Decoder for:qcelp
static constexpr std::string_view kQcelp   = "qcelp";
static constexpr std::string_view kWavpack = "wavpack";
// WARNING: ONLY Decoder for:dsicinaudio
static constexpr std::string_view kDsicinaudio = "dsicinaudio";
// WARNING: ONLY Decoder for:imc
static constexpr std::string_view kImc = "imc";
// WARNING: ONLY Decoder for:mpc7
static constexpr std::string_view kMpc7 = "mpc7";
static constexpr std::string_view kMlp  = "mlp";
// WARNING: ONLY Decoder for:gsm_ms
static constexpr std::string_view kGsm_ms = "gsm_ms";
// WARNING: ONLY Decoder for:atrac3
static constexpr std::string_view kAtrac3 = "atrac3";
// WARNING: ONLY Decoder for:ape
static constexpr std::string_view kApe        = "ape";
static constexpr std::string_view kNellymoser = "nellymoser";
// WARNING: ONLY Decoder for:mpc8
static constexpr std::string_view kMpc8 = "mpc8";
// WARNING: Encoder name is:libspeex
static constexpr std::string_view kLibspeex = "libspeex";
static constexpr std::string_view kSpeex    = "speex";
// WARNING: ONLY Decoder for:wmavoice
static constexpr std::string_view kWmavoice = "wmavoice";
// WARNING: ONLY Decoder for:wmapro
static constexpr std::string_view kWmapro = "wmapro";
// WARNING: ONLY Decoder for:wmalossless
static constexpr std::string_view kWmalossless = "wmalossless";
// WARNING: ONLY Decoder for:atrac3plus
static constexpr std::string_view kAtrac3plus = "atrac3plus";
static constexpr std::string_view kEac3       = "eac3";
// WARNING: ONLY Decoder for:sipr
static constexpr std::string_view kSipr = "sipr";
// WARNING: ONLY Decoder for:mp1
static constexpr std::string_view kMp1 = "mp1";
// WARNING: ONLY Decoder for:twinvq
static constexpr std::string_view kTwinvq = "twinvq";
static constexpr std::string_view kTruehd = "truehd";
// WARNING: ONLY Decoder for:als
static constexpr std::string_view kAls = "als";
// WARNING: ONLY Decoder for:atrac1
static constexpr std::string_view kAtrac1 = "atrac1";
// WARNING: ONLY Decoder for:binkaudio_rdft
static constexpr std::string_view kBinkaudio_rdft = "binkaudio_rdft";
// WARNING: ONLY Decoder for:binkaudio_dct
static constexpr std::string_view kBinkaudio_dct = "binkaudio_dct";
// WARNING: ONLY Decoder for:aac_latm
static constexpr std::string_view kAac_latm = "aac_latm";
// WARNING: ONLY Decoder for:qdmc
static constexpr std::string_view kQdmc   = "qdmc";
static constexpr std::string_view kG723_1 = "g723_1";
// WARNING: ONLY Decoder for:g729
static constexpr std::string_view kG729 = "g729";
// WARNING: ONLY Decoder for:8svx_exp
static constexpr std::string_view k8svx_exp = "8svx_exp";
// WARNING: ONLY Decoder for:8svx_fib
static constexpr std::string_view k8svx_fib = "8svx_fib";
// WARNING: ONLY Decoder for:bmv_audio
static constexpr std::string_view kBmv_audio = "bmv_audio";
// WARNING: ONLY Decoder for:ralf
static constexpr std::string_view kRalf = "ralf";
// WARNING: ONLY Decoder for:iac
static constexpr std::string_view kIac = "iac";
// WARNING: Encoder name is:libilbc
static constexpr std::string_view kLibilbc = "libilbc";
static constexpr std::string_view kIlbc    = "ilbc";
// WARNING: Encoder name is:libopus
static constexpr std::string_view kLibopus      = "libopus";
static constexpr std::string_view kOpus         = "opus";
static constexpr std::string_view kComfortnoise = "comfortnoise";
// WARNING: ONLY Decoder for:tak
static constexpr std::string_view kTak = "tak";
// WARNING: ONLY Decoder for:metasound
static constexpr std::string_view kMetasound = "metasound";
// WARNING: ONLY Decoder for:paf_audio
static constexpr std::string_view kPaf_audio = "paf_audio";
// WARNING: ONLY Decoder for:on2avc
static constexpr std::string_view kOn2avc = "on2avc";
// WARNING: ONLY Decoder for:dss_sp
static constexpr std::string_view kDss_sp = "dss_sp";
// WARNING: ONLY Decoder for:wavesynth
static constexpr std::string_view kWavesynth = "wavesynth";
static constexpr std::string_view kSonic     = "sonic";
// WARNING: ONLY Encoder for:sonicls
static constexpr std::string_view kSonicls = "sonicls";
// WARNING: ONLY Decoder for:evrc
static constexpr std::string_view kEvrc = "evrc";
// WARNING: ONLY Decoder for:dsd_lsbf
static constexpr std::string_view kDsd_lsbf = "dsd_lsbf";
// WARNING: ONLY Decoder for:dsd_msbf
static constexpr std::string_view kDsd_msbf = "dsd_msbf";
// WARNING: ONLY Decoder for:dsd_lsbf_planar
static constexpr std::string_view kDsd_lsbf_planar = "dsd_lsbf_planar";
// WARNING: ONLY Decoder for:dsd_msbf_planar
static constexpr std::string_view kDsd_msbf_planar = "dsd_msbf_planar";
// WARNING: ONLY Decoder for:interplayacm
static constexpr std::string_view kInterplayacm = "interplayacm";
// WARNING: ONLY Decoder for:xma1
static constexpr std::string_view kXma1 = "xma1";
// WARNING: ONLY Decoder for:xma2
static constexpr std::string_view kXma2 = "xma2";
// WARNING: ONLY Decoder for:dst
static constexpr std::string_view kDst = "dst";
// WARNING: ONLY Decoder for:atrac3al
static constexpr std::string_view kAtrac3al = "atrac3al";
// WARNING: ONLY Decoder for:atrac3plusal
static constexpr std::string_view kAtrac3plusal = "atrac3plusal";
// WARNING: ONLY Decoder for:dolby_e
static constexpr std::string_view kDolby_e = "dolby_e";
static constexpr std::string_view kAptx    = "aptx";
static constexpr std::string_view kAptx_hd = "aptx_hd";
static constexpr std::string_view kSbc     = "sbc";
// WARNING: ONLY Decoder for:atrac9
static constexpr std::string_view kAtrac9 = "atrac9";
// WARNING: ONLY Decoder for:hcom
static constexpr std::string_view kHcom = "hcom";
// WARNING: ONLY Decoder for:acelp.kelvin
static constexpr std::string_view kAcelp_kelvin = "acelp.kelvin";
// WARNING: ONLY Decoder for:siren
static constexpr std::string_view kSiren = "siren";
// WARNING: ONLY Decoder for:hca
static constexpr std::string_view kHca = "hca";
// WARNING: ONLY Decoder for:fastaudio
static constexpr std::string_view kFastaudio = "fastaudio";
// WARNING: ONLY Decoder for:msnsiren
static constexpr std::string_view kMsnsiren = "msnsiren";
static constexpr std::string_view kDfpwm    = "dfpwm";
// WARNING: ONLY Decoder for:bonk
static constexpr std::string_view kBonk = "bonk";
// WARNING: ONLY Decoder for:misc4
static constexpr std::string_view kMisc4 = "misc4";
// WARNING: ONLY Decoder for:apac
static constexpr std::string_view kApac = "apac";
// WARNING: ONLY Decoder for:ftr
static constexpr std::string_view kFtr = "ftr";
// WARNING: ONLY Decoder for:wavarc
static constexpr std::string_view kWavarc = "wavarc";
// WARNING: ONLY Decoder for:rka
static constexpr std::string_view kRka      = "rka";
static constexpr std::string_view kDvdsub   = "dvdsub";
static constexpr std::string_view kDvbsub   = "dvbsub";
static constexpr std::string_view kText     = "text";
static constexpr std::string_view kXsub     = "xsub";
static constexpr std::string_view kMov_text = "mov_text";
// WARNING: ONLY Decoder for:pgssub
static constexpr std::string_view kPgssub = "pgssub";
// WARNING: ONLY Decoder for:microdvd
static constexpr std::string_view kMicrodvd = "microdvd";
// WARNING: ONLY Decoder for:cc_dec
static constexpr std::string_view kCc_dec = "cc_dec";
// WARNING: ONLY Decoder for:jacosub
static constexpr std::string_view kJacosub = "jacosub";
// WARNING: ONLY Decoder for:sami
static constexpr std::string_view kSami = "sami";
// WARNING: ONLY Decoder for:realtext
static constexpr std::string_view kRealtext = "realtext";
// WARNING: ONLY Decoder for:stl
static constexpr std::string_view kStl = "stl";
// WARNING: ONLY Decoder for:subviewer1
static constexpr std::string_view kSubviewer1 = "subviewer1";
// WARNING: ONLY Decoder for:subviewer
static constexpr std::string_view kSubviewer = "subviewer";
static constexpr std::string_view kSrt       = "srt";
static constexpr std::string_view kWebvtt    = "webvtt";
// WARNING: ONLY Decoder for:mpl2
static constexpr std::string_view kMpl2 = "mpl2";
// WARNING: ONLY Decoder for:vplayer
static constexpr std::string_view kVplayer = "vplayer";
// WARNING: ONLY Decoder for:pjs
static constexpr std::string_view kPjs = "pjs";
static constexpr std::string_view kSsa = "ssa";
// WARNING: ONLY Encoder for:ttml
static constexpr std::string_view kTtml = "ttml";
// WARNING: ONLY Decoder for:libaribb24
static constexpr std::string_view kLibaribb24 = "libaribb24";
// WARNING: ONLY Decoder for:bintext
static constexpr std::string_view kBintext = "bintext";
// WARNING: ONLY Decoder for:xbin
static constexpr std::string_view kXbin = "xbin";
// WARNING: ONLY Decoder for:idf
static constexpr std::string_view kIdf             = "idf";
static constexpr std::string_view kWrapped_avframe = "wrapped_avframe";
static constexpr std::string_view kVnull           = "vnull";
static constexpr std::string_view kAnull           = "anull";
} // namespace xsdk::av_lib::codec_id
