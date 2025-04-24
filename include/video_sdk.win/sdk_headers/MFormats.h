

/* this ALWAYS GENERATED file contains the definitions for the interfaces */

/* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for ..\..\Include\IDL\MFormats.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data
    VC __declspec() decoration level:
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "ole2.h"
#include "windows.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __MFormats_h__
#define __MFormats_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
    #pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
    #if defined(_CONTROL_FLOW_GUARD_XFG)
        #define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
    #else
        #define DECLSPEC_XFGVIRT(base, func)
    #endif
#endif

/* Forward Declarations */

#ifndef __IMFBuffer_FWD_DEFINED__
    #define __IMFBuffer_FWD_DEFINED__
typedef interface IMFBuffer IMFBuffer;

#endif /* __IMFBuffer_FWD_DEFINED__ */

#ifndef __IMFFrame_FWD_DEFINED__
    #define __IMFFrame_FWD_DEFINED__
typedef interface IMFFrame IMFFrame;

#endif /* __IMFFrame_FWD_DEFINED__ */

#ifndef __IMFFrameGPU_FWD_DEFINED__
    #define __IMFFrameGPU_FWD_DEFINED__
typedef interface IMFFrameGPU IMFFrameGPU;

#endif /* __IMFFrameGPU_FWD_DEFINED__ */

#ifndef __IMFPlanarFrame_FWD_DEFINED__
    #define __IMFPlanarFrame_FWD_DEFINED__
typedef interface IMFPlanarFrame IMFPlanarFrame;

#endif /* __IMFPlanarFrame_FWD_DEFINED__ */

#ifndef __IMFFactory_FWD_DEFINED__
    #define __IMFFactory_FWD_DEFINED__
typedef interface IMFFactory IMFFactory;

#endif /* __IMFFactory_FWD_DEFINED__ */

#ifndef __IMFCreator_FWD_DEFINED__
    #define __IMFCreator_FWD_DEFINED__
typedef interface IMFCreator IMFCreator;

#endif /* __IMFCreator_FWD_DEFINED__ */

#ifndef __IMAttributes_FWD_DEFINED__
    #define __IMAttributes_FWD_DEFINED__
typedef interface IMAttributes IMAttributes;

#endif /* __IMAttributes_FWD_DEFINED__ */

#ifndef __IMNode_FWD_DEFINED__
    #define __IMNode_FWD_DEFINED__
typedef interface IMNode IMNode;

#endif /* __IMNode_FWD_DEFINED__ */

#ifndef __IMCallback_FWD_DEFINED__
    #define __IMCallback_FWD_DEFINED__
typedef interface IMCallback IMCallback;

#endif /* __IMCallback_FWD_DEFINED__ */

#ifndef __IMPreview_FWD_DEFINED__
    #define __IMPreview_FWD_DEFINED__
typedef interface IMPreview IMPreview;

#endif /* __IMPreview_FWD_DEFINED__ */

#ifndef __IMWebRTC_FWD_DEFINED__
    #define __IMWebRTC_FWD_DEFINED__
typedef interface IMWebRTC IMWebRTC;

#endif /* __IMWebRTC_FWD_DEFINED__ */

#ifndef __IMFSignalingDTMF_FWD_DEFINED__
    #define __IMFSignalingDTMF_FWD_DEFINED__
typedef interface IMFSignalingDTMF IMFSignalingDTMF;

#endif /* __IMFSignalingDTMF_FWD_DEFINED__ */

#ifndef __IMCCDisplay_FWD_DEFINED__
    #define __IMCCDisplay_FWD_DEFINED__
typedef interface IMCCDisplay IMCCDisplay;

#endif /* __IMCCDisplay_FWD_DEFINED__ */

#ifndef __IMFShader_FWD_DEFINED__
    #define __IMFShader_FWD_DEFINED__
typedef interface IMFShader IMFShader;

#endif /* __IMFShader_FWD_DEFINED__ */

#ifndef __IMColors_FWD_DEFINED__
    #define __IMColors_FWD_DEFINED__
typedef interface IMColors IMColors;

#endif /* __IMColors_FWD_DEFINED__ */

#ifndef __IMStorage_FWD_DEFINED__
    #define __IMStorage_FWD_DEFINED__
typedef interface IMStorage IMStorage;

#endif /* __IMStorage_FWD_DEFINED__ */

#ifndef __IMFrame_FWD_DEFINED__
    #define __IMFrame_FWD_DEFINED__
typedef interface IMFrame IMFrame;

#endif /* __IMFrame_FWD_DEFINED__ */

#ifndef __IMFrames_FWD_DEFINED__
    #define __IMFrames_FWD_DEFINED__
typedef interface IMFrames IMFrames;

#endif /* __IMFrames_FWD_DEFINED__ */

#ifndef __IMProps_FWD_DEFINED__
    #define __IMProps_FWD_DEFINED__
typedef interface IMProps IMProps;

#endif /* __IMProps_FWD_DEFINED__ */

#ifndef __IMPersist_FWD_DEFINED__
    #define __IMPersist_FWD_DEFINED__
typedef interface IMPersist IMPersist;

#endif /* __IMPersist_FWD_DEFINED__ */

#ifndef __IMFPersist_FWD_DEFINED__
    #define __IMFPersist_FWD_DEFINED__
typedef interface IMFPersist IMFPersist;

#endif /* __IMFPersist_FWD_DEFINED__ */

#ifndef __IMObject_FWD_DEFINED__
    #define __IMObject_FWD_DEFINED__
typedef interface IMObject IMObject;

#endif /* __IMObject_FWD_DEFINED__ */

#ifndef __IMFormat_FWD_DEFINED__
    #define __IMFormat_FWD_DEFINED__
typedef interface IMFormat IMFormat;

#endif /* __IMFormat_FWD_DEFINED__ */

#ifndef __IMAudioTrack_FWD_DEFINED__
    #define __IMAudioTrack_FWD_DEFINED__
typedef interface IMAudioTrack IMAudioTrack;

#endif /* __IMAudioTrack_FWD_DEFINED__ */

#ifndef __IMAudio_FWD_DEFINED__
    #define __IMAudio_FWD_DEFINED__
typedef interface IMAudio IMAudio;

#endif /* __IMAudio_FWD_DEFINED__ */

#ifndef __IMReceiver_FWD_DEFINED__
    #define __IMReceiver_FWD_DEFINED__
typedef interface IMReceiver IMReceiver;

#endif /* __IMReceiver_FWD_DEFINED__ */

#ifndef __IMSenders_FWD_DEFINED__
    #define __IMSenders_FWD_DEFINED__
typedef interface IMSenders IMSenders;

#endif /* __IMSenders_FWD_DEFINED__ */

#ifndef __IMFile_FWD_DEFINED__
    #define __IMFile_FWD_DEFINED__
typedef interface IMFile IMFile;

#endif /* __IMFile_FWD_DEFINED__ */

#ifndef __IMItem_FWD_DEFINED__
    #define __IMItem_FWD_DEFINED__
typedef interface IMItem IMItem;

#endif /* __IMItem_FWD_DEFINED__ */

#ifndef __IMPlaylist_FWD_DEFINED__
    #define __IMPlaylist_FWD_DEFINED__
typedef interface IMPlaylist IMPlaylist;

#endif /* __IMPlaylist_FWD_DEFINED__ */

#ifndef __IMBreaks_FWD_DEFINED__
    #define __IMBreaks_FWD_DEFINED__
typedef interface IMBreaks IMBreaks;

#endif /* __IMBreaks_FWD_DEFINED__ */

#ifndef __IMScheduler_FWD_DEFINED__
    #define __IMScheduler_FWD_DEFINED__
typedef interface IMScheduler IMScheduler;

#endif /* __IMScheduler_FWD_DEFINED__ */

#ifndef __IMDevice_FWD_DEFINED__
    #define __IMDevice_FWD_DEFINED__
typedef interface IMDevice IMDevice;

#endif /* __IMDevice_FWD_DEFINED__ */

#ifndef __IMPlugins_FWD_DEFINED__
    #define __IMPlugins_FWD_DEFINED__
typedef interface IMPlugins IMPlugins;

#endif /* __IMPlugins_FWD_DEFINED__ */

#ifndef __IMPlugin_FWD_DEFINED__
    #define __IMPlugin_FWD_DEFINED__
typedef interface IMPlugin IMPlugin;

#endif /* __IMPlugin_FWD_DEFINED__ */

#ifndef __IMElement_FWD_DEFINED__
    #define __IMElement_FWD_DEFINED__
typedef interface IMElement IMElement;

#endif /* __IMElement_FWD_DEFINED__ */

#ifndef __IMElements_FWD_DEFINED__
    #define __IMElements_FWD_DEFINED__
typedef interface IMElements IMElements;

#endif /* __IMElements_FWD_DEFINED__ */

#ifndef __IMScenes_FWD_DEFINED__
    #define __IMScenes_FWD_DEFINED__
typedef interface IMScenes IMScenes;

#endif /* __IMScenes_FWD_DEFINED__ */

#ifndef __IMStreams_FWD_DEFINED__
    #define __IMStreams_FWD_DEFINED__
typedef interface IMStreams IMStreams;

#endif /* __IMStreams_FWD_DEFINED__ */

#ifndef __IMWriter_FWD_DEFINED__
    #define __IMWriter_FWD_DEFINED__
typedef interface IMWriter IMWriter;

#endif /* __IMWriter_FWD_DEFINED__ */

#ifndef __IMDeckControl_FWD_DEFINED__
    #define __IMDeckControl_FWD_DEFINED__
typedef interface IMDeckControl IMDeckControl;

#endif /* __IMDeckControl_FWD_DEFINED__ */

#ifndef __IMConfig_FWD_DEFINED__
    #define __IMConfig_FWD_DEFINED__
typedef interface IMConfig IMConfig;

#endif /* __IMConfig_FWD_DEFINED__ */

#ifndef __IMFactory_FWD_DEFINED__
    #define __IMFactory_FWD_DEFINED__
typedef interface IMFactory IMFactory;

#endif /* __IMFactory_FWD_DEFINED__ */

#ifndef __IMSync_FWD_DEFINED__
    #define __IMSync_FWD_DEFINED__
typedef interface IMSync IMSync;

#endif /* __IMSync_FWD_DEFINED__ */

#ifndef __IMSource_FWD_DEFINED__
    #define __IMSource_FWD_DEFINED__
typedef interface IMSource IMSource;

#endif /* __IMSource_FWD_DEFINED__ */

#ifndef __IMLLog_FWD_DEFINED__
    #define __IMLLog_FWD_DEFINED__
typedef interface IMLLog IMLLog;

#endif /* __IMLLog_FWD_DEFINED__ */

#ifndef __IMSource_I_FWD_DEFINED__
    #define __IMSource_I_FWD_DEFINED__
typedef interface IMSource_I IMSource_I;

#endif /* __IMSource_I_FWD_DEFINED__ */

#ifndef __IMFExternal_FWD_DEFINED__
    #define __IMFExternal_FWD_DEFINED__
typedef interface IMFExternal IMFExternal;

#endif /* __IMFExternal_FWD_DEFINED__ */

#ifndef __IMFrame_I_FWD_DEFINED__
    #define __IMFrame_I_FWD_DEFINED__
typedef interface IMFrame_I IMFrame_I;

#endif /* __IMFrame_I_FWD_DEFINED__ */

#ifndef __IMFrames_I_FWD_DEFINED__
    #define __IMFrames_I_FWD_DEFINED__
typedef interface IMFrames_I IMFrames_I;

#endif /* __IMFrames_I_FWD_DEFINED__ */

#ifndef __IMDevice_I_FWD_DEFINED__
    #define __IMDevice_I_FWD_DEFINED__
typedef interface IMDevice_I IMDevice_I;

#endif /* __IMDevice_I_FWD_DEFINED__ */

#ifndef __IMObject_I_FWD_DEFINED__
    #define __IMObject_I_FWD_DEFINED__
typedef interface IMObject_I IMObject_I;

#endif /* __IMObject_I_FWD_DEFINED__ */

#ifndef __IMSender_I_FWD_DEFINED__
    #define __IMSender_I_FWD_DEFINED__
typedef interface IMSender_I IMSender_I;

#endif /* __IMSender_I_FWD_DEFINED__ */

#ifndef __IMReceiver_I_FWD_DEFINED__
    #define __IMReceiver_I_FWD_DEFINED__
typedef interface IMReceiver_I IMReceiver_I;

#endif /* __IMReceiver_I_FWD_DEFINED__ */

#ifndef __IMFReceiver_FWD_DEFINED__
    #define __IMFReceiver_FWD_DEFINED__
typedef interface IMFReceiver IMFReceiver;

#endif /* __IMFReceiver_FWD_DEFINED__ */

#ifndef __IMFReceiverVB6_FWD_DEFINED__
    #define __IMFReceiverVB6_FWD_DEFINED__
typedef interface IMFReceiverVB6 IMFReceiverVB6;

#endif /* __IMFReceiverVB6_FWD_DEFINED__ */

#ifndef __IMFSink_FWD_DEFINED__
    #define __IMFSink_FWD_DEFINED__
typedef interface IMFSink IMFSink;

#endif /* __IMFSink_FWD_DEFINED__ */

#ifndef __IMFPipe_FWD_DEFINED__
    #define __IMFPipe_FWD_DEFINED__
typedef interface IMFPipe IMFPipe;

#endif /* __IMFPipe_FWD_DEFINED__ */

#ifndef __IMFBasicStream_FWD_DEFINED__
    #define __IMFBasicStream_FWD_DEFINED__
typedef interface IMFBasicStream IMFBasicStream;

#endif /* __IMFBasicStream_FWD_DEFINED__ */

#ifndef __IMFPipes_FWD_DEFINED__
    #define __IMFPipes_FWD_DEFINED__
typedef interface IMFPipes IMFPipes;

#endif /* __IMFPipes_FWD_DEFINED__ */

#ifndef __IMFPipe_Source_FWD_DEFINED__
    #define __IMFPipe_Source_FWD_DEFINED__
typedef interface IMFPipe_Source IMFPipe_Source;

#endif /* __IMFPipe_Source_FWD_DEFINED__ */

#ifndef __IMFProps_FWD_DEFINED__
    #define __IMFProps_FWD_DEFINED__
typedef interface IMFProps IMFProps;

#endif /* __IMFProps_FWD_DEFINED__ */

#ifndef __IMFBrowser_FWD_DEFINED__
    #define __IMFBrowser_FWD_DEFINED__
typedef interface IMFBrowser IMFBrowser;

#endif /* __IMFBrowser_FWD_DEFINED__ */

#ifndef __IMFConfig_FWD_DEFINED__
    #define __IMFConfig_FWD_DEFINED__
typedef interface IMFConfig IMFConfig;

#endif /* __IMFConfig_FWD_DEFINED__ */

#ifndef __IMFProcess_FWD_DEFINED__
    #define __IMFProcess_FWD_DEFINED__
typedef interface IMFProcess IMFProcess;

#endif /* __IMFProcess_FWD_DEFINED__ */

#ifndef __IMFAllocator_FWD_DEFINED__
    #define __IMFAllocator_FWD_DEFINED__
typedef interface IMFAllocator IMFAllocator;

#endif /* __IMFAllocator_FWD_DEFINED__ */

#ifndef __IMFPacket_FWD_DEFINED__
    #define __IMFPacket_FWD_DEFINED__
typedef interface IMFPacket IMFPacket;

#endif /* __IMFPacket_FWD_DEFINED__ */

#ifndef __IMFBuffersAllocator_FWD_DEFINED__
    #define __IMFBuffersAllocator_FWD_DEFINED__
typedef interface IMFBuffersAllocator IMFBuffersAllocator;

#endif /* __IMFBuffersAllocator_FWD_DEFINED__ */

#ifndef __IMFCache_FWD_DEFINED__
    #define __IMFCache_FWD_DEFINED__
typedef interface IMFCache IMFCache;

#endif /* __IMFCache_FWD_DEFINED__ */

#ifndef __IMFSideData_FWD_DEFINED__
    #define __IMFSideData_FWD_DEFINED__
typedef interface IMFSideData IMFSideData;

#endif /* __IMFSideData_FWD_DEFINED__ */

#ifndef __IMFObject_FWD_DEFINED__
    #define __IMFObject_FWD_DEFINED__
typedef interface IMFObject IMFObject;

#endif /* __IMFObject_FWD_DEFINED__ */

#ifndef __IMDelay_FWD_DEFINED__
    #define __IMDelay_FWD_DEFINED__
typedef interface IMDelay IMDelay;

#endif /* __IMDelay_FWD_DEFINED__ */

#ifndef __IMFCaptionsDecoder_FWD_DEFINED__
    #define __IMFCaptionsDecoder_FWD_DEFINED__
typedef interface IMFCaptionsDecoder IMFCaptionsDecoder;

#endif /* __IMFCaptionsDecoder_FWD_DEFINED__ */

#ifndef __IMSourceDS_FWD_DEFINED__
    #define __IMSourceDS_FWD_DEFINED__
typedef interface IMSourceDS IMSourceDS;

#endif /* __IMSourceDS_FWD_DEFINED__ */

#ifndef __IMSinkDS_FWD_DEFINED__
    #define __IMSinkDS_FWD_DEFINED__
typedef interface IMSinkDS IMSinkDS;

#endif /* __IMSinkDS_FWD_DEFINED__ */

#ifndef __IMFObjectASIO_FWD_DEFINED__
    #define __IMFObjectASIO_FWD_DEFINED__
typedef interface IMFObjectASIO IMFObjectASIO;

#endif /* __IMFObjectASIO_FWD_DEFINED__ */

#ifndef __IMFAsyncOperation_FWD_DEFINED__
    #define __IMFAsyncOperation_FWD_DEFINED__
typedef interface IMFAsyncOperation IMFAsyncOperation;

#endif /* __IMFAsyncOperation_FWD_DEFINED__ */

#ifndef __IMFDelay_FWD_DEFINED__
    #define __IMFDelay_FWD_DEFINED__
typedef interface IMFDelay IMFDelay;

#endif /* __IMFDelay_FWD_DEFINED__ */

#ifndef __IMFGPUSwitcher_FWD_DEFINED__
    #define __IMFGPUSwitcher_FWD_DEFINED__
typedef interface IMFGPUSwitcher IMFGPUSwitcher;

#endif /* __IMFGPUSwitcher_FWD_DEFINED__ */

#ifndef __IMCChannelCallback_FWD_DEFINED__
    #define __IMCChannelCallback_FWD_DEFINED__
typedef interface IMCChannelCallback IMCChannelCallback;

#endif /* __IMCChannelCallback_FWD_DEFINED__ */

#ifndef __IMCChannelSGN_FWD_DEFINED__
    #define __IMCChannelSGN_FWD_DEFINED__
typedef interface IMCChannelSGN IMCChannelSGN;

#endif /* __IMCChannelSGN_FWD_DEFINED__ */

#ifndef __IMCChannel_FWD_DEFINED__
    #define __IMCChannel_FWD_DEFINED__
typedef interface IMCChannel IMCChannel;

#endif /* __IMCChannel_FWD_DEFINED__ */

#ifndef __IMConnect_FWD_DEFINED__
    #define __IMConnect_FWD_DEFINED__
typedef interface IMConnect IMConnect;

#endif /* __IMConnect_FWD_DEFINED__ */

#ifndef __IMFSource_FWD_DEFINED__
    #define __IMFSource_FWD_DEFINED__
typedef interface IMFSource IMFSource;

#endif /* __IMFSource_FWD_DEFINED__ */

#ifndef __IMFReader_FWD_DEFINED__
    #define __IMFReader_FWD_DEFINED__
typedef interface IMFReader IMFReader;

#endif /* __IMFReader_FWD_DEFINED__ */

#ifndef __IMFFormat_FWD_DEFINED__
    #define __IMFFormat_FWD_DEFINED__
typedef interface IMFFormat IMFFormat;

#endif /* __IMFFormat_FWD_DEFINED__ */

#ifndef __IMFAudioBuffer_FWD_DEFINED__
    #define __IMFAudioBuffer_FWD_DEFINED__
typedef interface IMFAudioBuffer IMFAudioBuffer;

#endif /* __IMFAudioBuffer_FWD_DEFINED__ */

#ifndef __IMFConverter_FWD_DEFINED__
    #define __IMFConverter_FWD_DEFINED__
typedef interface IMFConverter IMFConverter;

#endif /* __IMFConverter_FWD_DEFINED__ */

#ifndef __IMFTransition_FWD_DEFINED__
    #define __IMFTransition_FWD_DEFINED__
typedef interface IMFTransition IMFTransition;

#endif /* __IMFTransition_FWD_DEFINED__ */

#ifndef __IMFSourceVB6_FWD_DEFINED__
    #define __IMFSourceVB6_FWD_DEFINED__
typedef interface IMFSourceVB6 IMFSourceVB6;

#endif /* __IMFSourceVB6_FWD_DEFINED__ */

#ifndef __IMFDevice_FWD_DEFINED__
    #define __IMFDevice_FWD_DEFINED__
typedef interface IMFDevice IMFDevice;

#endif /* __IMFDevice_FWD_DEFINED__ */

#ifndef __IMFWriter_FWD_DEFINED__
    #define __IMFWriter_FWD_DEFINED__
typedef interface IMFWriter IMFWriter;

#endif /* __IMFWriter_FWD_DEFINED__ */

#ifndef __IMFSplitter_FWD_DEFINED__
    #define __IMFSplitter_FWD_DEFINED__
typedef interface IMFSplitter IMFSplitter;

#endif /* __IMFSplitter_FWD_DEFINED__ */

#ifndef __IMFDecoder_FWD_DEFINED__
    #define __IMFDecoder_FWD_DEFINED__
typedef interface IMFDecoder IMFDecoder;

#endif /* __IMFDecoder_FWD_DEFINED__ */

#ifndef __IMFMuxer_FWD_DEFINED__
    #define __IMFMuxer_FWD_DEFINED__
typedef interface IMFMuxer IMFMuxer;

#endif /* __IMFMuxer_FWD_DEFINED__ */

#ifndef __IMFEncoder_FWD_DEFINED__
    #define __IMFEncoder_FWD_DEFINED__
typedef interface IMFEncoder IMFEncoder;

#endif /* __IMFEncoder_FWD_DEFINED__ */

#ifndef __IMFSource_I_FWD_DEFINED__
    #define __IMFSource_I_FWD_DEFINED__
typedef interface IMFSource_I IMFSource_I;

#endif /* __IMFSource_I_FWD_DEFINED__ */

#ifndef __IMEvents_FWD_DEFINED__
    #define __IMEvents_FWD_DEFINED__
typedef interface IMEvents IMEvents;

#endif /* __IMEvents_FWD_DEFINED__ */

#ifndef __IMEventsEvent_FWD_DEFINED__
    #define __IMEventsEvent_FWD_DEFINED__
typedef interface IMEventsEvent IMEventsEvent;

#endif /* __IMEventsEvent_FWD_DEFINED__ */

#ifndef __IMEventsFrame_FWD_DEFINED__
    #define __IMEventsFrame_FWD_DEFINED__
typedef interface IMEventsFrame IMEventsFrame;

#endif /* __IMEventsFrame_FWD_DEFINED__ */

#ifndef __MFFrame_FWD_DEFINED__
    #define __MFFrame_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFFrame MFFrame;
    #else
typedef struct MFFrame MFFrame;
    #endif /* __cplusplus */

#endif /* __MFFrame_FWD_DEFINED__ */

#ifndef __MFFactory_FWD_DEFINED__
    #define __MFFactory_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFFactory MFFactory;
    #else
typedef struct MFFactory MFFactory;
    #endif /* __cplusplus */

#endif /* __MFFactory_FWD_DEFINED__ */

#ifndef __MFAudioBuffer_FWD_DEFINED__
    #define __MFAudioBuffer_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFAudioBuffer MFAudioBuffer;
    #else
typedef struct MFAudioBuffer MFAudioBuffer;
    #endif /* __cplusplus */

#endif /* __MFAudioBuffer_FWD_DEFINED__ */

#ifndef __MFConverter_FWD_DEFINED__
    #define __MFConverter_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFConverter MFConverter;
    #else
typedef struct MFConverter MFConverter;
    #endif /* __cplusplus */

#endif /* __MFConverter_FWD_DEFINED__ */

#ifndef __MFPreview_FWD_DEFINED__
    #define __MFPreview_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFPreview MFPreview;
    #else
typedef struct MFPreview MFPreview;
    #endif /* __cplusplus */

#endif /* __MFPreview_FWD_DEFINED__ */

#ifndef __MFReader_FWD_DEFINED__
    #define __MFReader_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFReader MFReader;
    #else
typedef struct MFReader MFReader;
    #endif /* __cplusplus */

#endif /* __MFReader_FWD_DEFINED__ */

#ifndef __MFRenderer_FWD_DEFINED__
    #define __MFRenderer_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFRenderer MFRenderer;
    #else
typedef struct MFRenderer MFRenderer;
    #endif /* __cplusplus */

#endif /* __MFRenderer_FWD_DEFINED__ */

#ifndef __MFWriter_FWD_DEFINED__
    #define __MFWriter_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFWriter MFWriter;
    #else
typedef struct MFWriter MFWriter;
    #endif /* __cplusplus */

#endif /* __MFWriter_FWD_DEFINED__ */

#ifndef __MFSink_FWD_DEFINED__
    #define __MFSink_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFSink MFSink;
    #else
typedef struct MFSink MFSink;
    #endif /* __cplusplus */

#endif /* __MFSink_FWD_DEFINED__ */

#ifndef __MFSinkReader_FWD_DEFINED__
    #define __MFSinkReader_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFSinkReader MFSinkReader;
    #else
typedef struct MFSinkReader MFSinkReader;
    #endif /* __cplusplus */

#endif /* __MFSinkReader_FWD_DEFINED__ */

#ifndef __MFLive_FWD_DEFINED__
    #define __MFLive_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFLive MFLive;
    #else
typedef struct MFLive MFLive;
    #endif /* __cplusplus */

#endif /* __MFLive_FWD_DEFINED__ */

#ifndef __MFRendererBMD_FWD_DEFINED__
    #define __MFRendererBMD_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFRendererBMD MFRendererBMD;
    #else
typedef struct MFRendererBMD MFRendererBMD;
    #endif /* __cplusplus */

#endif /* __MFRendererBMD_FWD_DEFINED__ */

#ifndef __MFRendererBMD2_FWD_DEFINED__
    #define __MFRendererBMD2_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFRendererBMD2 MFRendererBMD2;
    #else
typedef struct MFRendererBMD2 MFRendererBMD2;
    #endif /* __cplusplus */

#endif /* __MFRendererBMD2_FWD_DEFINED__ */

#ifndef __MDelay_FWD_DEFINED__
    #define __MDelay_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MDelay MDelay;
    #else
typedef struct MDelay MDelay;
    #endif /* __cplusplus */

#endif /* __MDelay_FWD_DEFINED__ */

#ifndef __MWebRTC_FWD_DEFINED__
    #define __MWebRTC_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MWebRTC MWebRTC;
    #else
typedef struct MWebRTC MWebRTC;
    #endif /* __cplusplus */

#endif /* __MWebRTC_FWD_DEFINED__ */

#ifndef __MFSignalingDTMF_FWD_DEFINED__
    #define __MFSignalingDTMF_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFSignalingDTMF MFSignalingDTMF;
    #else
typedef struct MFSignalingDTMF MFSignalingDTMF;
    #endif /* __cplusplus */

#endif /* __MFSignalingDTMF_FWD_DEFINED__ */

#ifndef __MFShader_FWD_DEFINED__
    #define __MFShader_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFShader MFShader;
    #else
typedef struct MFShader MFShader;
    #endif /* __cplusplus */

#endif /* __MFShader_FWD_DEFINED__ */

#ifndef __MFOverlayHTML_FWD_DEFINED__
    #define __MFOverlayHTML_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFOverlayHTML MFOverlayHTML;
    #else
typedef struct MFOverlayHTML MFOverlayHTML;
    #endif /* __cplusplus */

#endif /* __MFOverlayHTML_FWD_DEFINED__ */

#ifndef __MCCDisplay_FWD_DEFINED__
    #define __MCCDisplay_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MCCDisplay MCCDisplay;
    #else
typedef struct MCCDisplay MCCDisplay;
    #endif /* __cplusplus */

#endif /* __MCCDisplay_FWD_DEFINED__ */

#ifndef __CoMColors_FWD_DEFINED__
    #define __CoMColors_FWD_DEFINED__

    #ifdef __cplusplus
typedef class CoMColors CoMColors;
    #else
typedef struct CoMColors CoMColors;
    #endif /* __cplusplus */

#endif /* __CoMColors_FWD_DEFINED__ */

#ifndef __MFSideData_FWD_DEFINED__
    #define __MFSideData_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFSideData MFSideData;
    #else
typedef struct MFSideData MFSideData;
    #endif /* __cplusplus */

#endif /* __MFSideData_FWD_DEFINED__ */

#ifndef __MFPipe_FWD_DEFINED__
    #define __MFPipe_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFPipe MFPipe;
    #else
typedef struct MFPipe MFPipe;
    #endif /* __cplusplus */

#endif /* __MFPipe_FWD_DEFINED__ */

#ifndef __MFObjectASIO_FWD_DEFINED__
    #define __MFObjectASIO_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MFObjectASIO MFObjectASIO;
    #else
typedef struct MFObjectASIO MFObjectASIO;
    #endif /* __cplusplus */

#endif /* __MFObjectASIO_FWD_DEFINED__ */

#ifndef ___IMCChannelEvents_FWD_DEFINED__
    #define ___IMCChannelEvents_FWD_DEFINED__
typedef interface _IMCChannelEvents _IMCChannelEvents;

#endif /* ___IMCChannelEvents_FWD_DEFINED__ */

#ifndef __MConnect_FWD_DEFINED__
    #define __MConnect_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MConnect MConnect;
    #else
typedef struct MConnect MConnect;
    #endif /* __cplusplus */

#endif /* __MConnect_FWD_DEFINED__ */

#ifndef __MCChannel_FWD_DEFINED__
    #define __MCChannel_FWD_DEFINED__

    #ifdef __cplusplus
typedef class MCChannel MCChannel;
    #else
typedef struct MCChannel MCChannel;
    #endif /* __cplusplus */

#endif /* __MCChannel_FWD_DEFINED__ */

/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C" {
#endif

/* interface __MIDL_itf_MFormats_0000_0000 */
/* [local] */

typedef LONGLONG REFERENCE_TIME;

#ifndef PIC_PROPS_DEFINED
    #define PIC_PROPS_DEFINED
typedef struct PIC_PROPS {
    int fccType;
    int nWidth;
    int nHeight;
    int nRowWidth;
} PIC_PROPS;

#endif
#ifndef M_DEFINES_INCLUDED
    #define M_DEFINES_INCLUDED
typedef /* [v1_enum] */
    enum eMState {
        eMS_Error   = -1,
        eMS_Closed  = 0,
        eMS_Stopped = (eMS_Closed + 1),
        eMS_Paused  = (eMS_Stopped + 1),
        eMS_Running = (eMS_Paused + 1),
        eMS_Break   = (eMS_Running + 1)
    } eMState;

typedef struct M_DATETIME {
    int nYear;
    int nMonth;
    int nDay;
    int nHour;
    int nMinute;
    int nSecond;
    int nMilliseconds;
} M_DATETIME;

typedef /* [v1_enum] */
    enum eMTimecodeFlags {
        eMTCF_NonDropFrame                  = 0,
        eMTCF_DropFrame                     = 1,
        eMTCF_Rate_24                       = 0x10,
        eMTCF_Rate_25                       = 0x20,
        eMTCF_Rate_30_DF                    = 0x41,
        eMTCF_Rate_30                       = 0x40,
        eMTCF_Rate                          = 0xff0,
        eMTCF_FieldNumber                   = 0xf00,
        eMTCF_Progressive_Even_Frame        = 0x100,
        eMTCF_Progressive_Odd_Frame         = 0x200,
        eMTCF_Progressive_3th_Frame         = 0x300,
        eMTCF_Progressive_4th_Frame         = 0x400,
        eMTCF_Progressive_5th_Frame         = 0x500,
        eMTCF_Progressive_6th_Frame         = 0x600,
        eMTCF_Progressive_7th_Frame         = 0x700,
        eMTCF_Progressive_8th_Frame         = 0x800,
        eMTCF_Rate_50                       = 0x120,
        eMTCF_Rate_60_DF                    = 0x141,
        eMTCF_Rate_60                       = 0x140,
        eMTCF_Rate_50_Odd                   = 0x220,
        eMTCF_Rate_60_DF_Odd                = 0x241,
        eMTCF_Rate_60_Odd                   = 0x240,
        eMTCF_SrcTC                         = 0x1000,
        eMTCF_SrcTC_DropFrame               = 0x1001,
        eMTCF_SrcTC_Rate_24                 = 0x1010,
        eMTCF_SrcTC_Rate_25                 = 0x1020,
        eMTCF_SrcTC_Rate_30_DF              = 0x1041,
        eMTCF_SrcTC_Rate_30                 = 0x1040,
        eMTCF_SrcTC_Progressive_Even_Frame  = 0x1100,
        eMTCF_SrcTC_Progressive_Odd_Frame   = 0x1200,
        eMTCF_SrcTC_Rate_50                 = 0x1120,
        eMTCF_SrcTC_Rate_60_DF              = 0x1141,
        eMTCF_SrcTC_Rate_60                 = 0x1140,
        eMTCF_SrcTC_Rate_50_Odd             = 0x1220,
        eMTCF_SrcTC_Rate_60_DF_Odd          = 0x1241,
        eMTCF_SrcTC_Rate_60_Odd             = 0x1240,
        eMTCF_UserTC                        = 0x2000,
        eMTCF_UserTC_DropFrame              = 0x2001,
        eMTCF_UserTC_Rate_24                = 0x2010,
        eMTCF_UserTC_Rate_25                = 0x2020,
        eMTCF_UserTC_Rate_30_DF             = 0x2041,
        eMTCF_UserTC_Rate_30                = 0x2040,
        eMTCF_UserTC_Progressive_Even_Frame = 0x2100,
        eMTCF_UserTC_Progressive_Odd_Frame  = 0x2200,
        eMTCF_UserTC_Rate_50                = 0x2120,
        eMTCF_UserTC_Rate_60_DF             = 0x2141,
        eMTCF_UserTC_Rate_60                = 0x2140,
        eMTCF_UserTC_Rate_50_Odd            = 0x2220,
        eMTCF_UserTC_Rate_60_DF_Odd         = 0x2241,
        eMTCF_UserTC_Rate_60_Odd            = 0x2240,
        eMTCF_SrcTCUserbits                 = 0x4000,
        eMTCF_LocalTimeTC                   = 0x10000,
        eMTCF_LocalTimeSyncTC               = 0x20000,
        eMTCF_Invalid                       = 0x80000000
    } eMTimecodeFlags;

typedef struct M_TIMECODE {
    int             nHours;
    int             nMinutes;
    int             nSeconds;
    int             nFrames;
    eMTimecodeFlags eTCFlags;
    int             nExtraCounter;
} M_TIMECODE;

typedef /* [v1_enum] */
    enum eMFCC {
        eMFCC_Default       = 0,
        eMFCC_r210          = 0x30313272,
        eMFCC_v210          = 0x30313276,
        eMFCC_I420          = 0x30323449,
        eMFCC_YV12          = 0x32315659,
        eMFCC_NV12          = 0x3231564e,
        eMFCC_YUY2          = 0x32595559,
        eMFCC_HDYC          = 0x43594448,
        eMFCC_YVYU          = 0x55595659,
        eMFCC_UYVY          = 0x59565955,
        eMFCC_I422          = 0x32323449,
        eMFCC_YV16          = 0x36315659,
        eMFCC_RGB24         = 0xe436eb7d,
        eMFCC_RGB32         = 0xe436eb7e,
        eMFCC_ARGB32        = 0x773c9ac0,
        eMFCC_RGB8          = 0xe436eb7a,
        eMFCC_MJPG          = 0x47504a4d,
        ePX_FormatFlag      = 0xf0000000,
        ePX_Plane           = 0xf0001000,
        ePX_420             = 0xf0002000,
        ePX_422             = 0xf0004000,
        ePX_444             = 0xf0008000,
        ePX_Alpha_Full      = 0xf0010000,
        ePX_Alpha_Premull   = 0xf0030000,
        ePX_BT601           = 0xf0100000,
        ePX_BT709           = 0xf0200000,
        ePX_BT2020          = 0xf0400000,
        ePX_10bit           = 0xf1000000,
        ePX_12bit           = 0xf2000000,
        ePX_16bit           = 0xf4000000,
        ePX_32bit           = 0xf8000000,
        ePX_BGRX32          = 0xf0000001,
        ePX_RGBX32          = 0xf0000002,
        ePX_BGRA32_FULL     = 0xf0010001,
        ePX_BGRA32_PREMULL  = 0xf0030001,
        ePX_RGBA32_FULL     = 0xf0010002,
        ePX_RGBA32_PREMULL  = 0xf0030002,
        ePX_RGBA64_FULL     = 0xf2010002,
        ePX_RGBA64_PREMULL  = 0xf2030002,
        ePX_RGBA128_FULL    = 0xf3010002,
        ePX_RGBA128_PREMULL = 0xf3030002,
        ePX_1Channel8bit    = 0xf0000008,
        ePX_1Channel10bit   = 0xf1000008,
        ePX_1Channel16bit   = 0xf2000008,
        ePX_1Channel32bit   = 0xf4000008,
        ePX_NV12            = 0xf0000100,
        ePX_NV12_C601       = 0xf0100100,
        ePX_NV12_C709       = 0xf0200100,
        ePX_YUY2            = 0xf0000200,
        ePX_YUY2_C601       = 0xf0100200,
        ePX_YUY2_C709       = 0xf0200200,
        ePX_UYVY            = 0xf0000300,
        ePX_UYVY_C601       = 0xf0100300,
        ePX_UYVY_C709       = 0xf0200300,
        ePX_YUV_PLANE       = 0xf0001000,
        ePX_YUV10_PLANE     = 0xf1001000,
        ePX_YUV16_PLANE     = 0xf4001000,
        ePX_YUV8_422_PLANE  = 0xf0005000,
        ePX_YUV10_422_PLANE = 0xf1005000,
        ePX_YUV16_422_PLANE = 0xf4005000,
        ePX_YUV8_420_PLANE  = 0xf0003000,
        ePX_YUV10_420_PLANE = 0xf1003000,
        ePX_YUV16_420_PLANE = 0xf4003000
    } eMFCC;

typedef /* [v1_enum] */
    enum eMScaleType {
        eMST_Default   = 0,
        eMST_IgnoreAR  = (eMST_Default + 1),
        eMST_LetterBox = (eMST_IgnoreAR + 1),
        eMST_Crop      = (eMST_LetterBox + 1),
        eMST_NoScale   = (eMST_Crop + 1)
    } eMScaleType;

typedef /* [v1_enum] */
    enum eMInterlace {
        eMI_Default       = 0,
        eMI_Field1First   = 0x1,
        eMI_Field2First   = 0x2,
        eMI_Progressive   = 0x3,
        eMI_Inverse       = 0x4,
        eMI_OneField      = 0x5,
        eMI_DeinterlaceF1 = 0x100,
        eMI_DeinterlaceF2 = 0x200
    } eMInterlace;

typedef /* [v1_enum] */
    enum eM3DFormat {
        eM3D_None             = 0,
        eM3D_Auto             = 0x1,
        eM3D_SideBySide       = 0x200,
        eM3D_TopAndBottom     = 0x400,
        eM3D_Tile             = 0x800,
        eM3D_FullFlag         = 0x1000,
        eM3D_FullSideBySide   = 0x1200,
        eM3D_FullTopAndBottom = 0x1400
    } eM3DFormat;

typedef /* [v1_enum] */
    enum eMVideoFormat {
        eMVF_Custom                 = 0,
        eMVF_NTSC                   = (eMVF_Custom + 1),
        eMVF_NTSC_2398              = (eMVF_NTSC + 1),
        eMVF_NTSC_16x9              = (eMVF_NTSC_2398 + 1),
        eMVF_PAL                    = (eMVF_NTSC_16x9 + 1),
        eMVF_PAL_16x9               = (eMVF_PAL + 1),
        eMVF_HD720_50p              = (eMVF_PAL_16x9 + 1),
        eMVF_HD720_5994p            = (eMVF_HD720_50p + 1),
        eMVF_HD720_60p              = (eMVF_HD720_5994p + 1),
        eMVF_HD1080_2398p           = (eMVF_HD720_60p + 1),
        eMVF_HD1080_24p             = (eMVF_HD1080_2398p + 1),
        eMVF_HD1080_25p             = (eMVF_HD1080_24p + 1),
        eMVF_HD1080_2997p           = (eMVF_HD1080_25p + 1),
        eMVF_HD1080_30p             = (eMVF_HD1080_2997p + 1),
        eMVF_HD1080_50i             = (eMVF_HD1080_30p + 1),
        eMVF_HD1080_5994i           = (eMVF_HD1080_50i + 1),
        eMVF_HD1080_60i             = (eMVF_HD1080_5994i + 1),
        eMVF_HD1080_50p             = (eMVF_HD1080_60i + 1),
        eMVF_HD1080_5994p           = (eMVF_HD1080_50p + 1),
        eMVF_HD1080_60p             = (eMVF_HD1080_5994p + 1),
        eMVF_HD1080_9590p           = (eMVF_HD1080_60p + 1),
        eMVF_HD1080_96p             = (eMVF_HD1080_9590p + 1),
        eMVF_HD1080_100p            = (eMVF_HD1080_96p + 1),
        eMVF_HD1080_11988p          = (eMVF_HD1080_100p + 1),
        eMVF_HD1080_120p            = (eMVF_HD1080_11988p + 1),
        eMVF_2K_DCI_2398p           = (eMVF_HD1080_120p + 1),
        eMVF_2K_DCI_24p             = (eMVF_2K_DCI_2398p + 1),
        eMVF_2K_DCI_25p             = (eMVF_2K_DCI_24p + 1),
        eMVF_2K_DCI_2997p           = (eMVF_2K_DCI_25p + 1),
        eMVF_2K_DCI_30p             = (eMVF_2K_DCI_2997p + 1),
        eMVF_2K_DCI_4795p           = (eMVF_2K_DCI_30p + 1),
        eMVF_2K_DCI_48p             = (eMVF_2K_DCI_4795p + 1),
        eMVF_2K_DCI_50p             = (eMVF_2K_DCI_48p + 1),
        eMVF_2K_DCI_5994p           = (eMVF_2K_DCI_50p + 1),
        eMVF_2K_DCI_60p             = (eMVF_2K_DCI_5994p + 1),
        eMVF_2K_DCI_9590p           = (eMVF_2K_DCI_60p + 1),
        eMVF_2K_DCI_96p             = (eMVF_2K_DCI_9590p + 1),
        eMVF_2K_DCI_100p            = (eMVF_2K_DCI_96p + 1),
        eMVF_2K_DCI_11988p          = (eMVF_2K_DCI_100p + 1),
        eMVF_2K_DCI_120p            = (eMVF_2K_DCI_11988p + 1),
        eMVF_2K_2398p               = (eMVF_2K_DCI_120p + 1),
        eMVF_2K_24p                 = (eMVF_2K_2398p + 1),
        eMVF_2K_25p                 = (eMVF_2K_24p + 1),
        eMVF_4K_UHD_50i             = (eMVF_2K_25p + 1),
        eMVF_4K_UHD_5994i           = (eMVF_4K_UHD_50i + 1),
        eMVF_4K_UHD_60i             = (eMVF_4K_UHD_5994i + 1),
        eMVF_4K_UHD_2398p           = (eMVF_4K_UHD_60i + 1),
        eMVF_4K_UHD_24p             = (eMVF_4K_UHD_2398p + 1),
        eMVF_4K_UHD_25p             = (eMVF_4K_UHD_24p + 1),
        eMVF_4K_UHD_2997p           = (eMVF_4K_UHD_25p + 1),
        eMVF_4K_UHD_30p             = (eMVF_4K_UHD_2997p + 1),
        eMVF_4K_DCI_2398p           = (eMVF_4K_UHD_30p + 1),
        eMVF_4K_DCI_24p             = (eMVF_4K_DCI_2398p + 1),
        eMVF_4K_DCI_25p             = (eMVF_4K_DCI_24p + 1),
        eMVF_4K_DCI_2997p           = (eMVF_4K_DCI_25p + 1),
        eMVF_4K_DCI_30p             = (eMVF_4K_DCI_2997p + 1),
        eMVF_4K_DCI_4795p           = (eMVF_4K_DCI_30p + 1),
        eMVF_4K_DCI_48p             = (eMVF_4K_DCI_4795p + 1),
        eMVF_4K_UHD_50p             = (eMVF_4K_DCI_48p + 1),
        eMVF_4K_UHD_5994p           = (eMVF_4K_UHD_50p + 1),
        eMVF_4K_UHD_60p             = (eMVF_4K_UHD_5994p + 1),
        eMVF_4K_UHD_9590p           = (eMVF_4K_UHD_60p + 1),
        eMVF_4K_UHD_96p             = (eMVF_4K_UHD_9590p + 1),
        eMVF_4K_UHD_100p            = (eMVF_4K_UHD_96p + 1),
        eMVF_4K_UHD_11988p          = (eMVF_4K_UHD_100p + 1),
        eMVF_4K_UHD_120p            = (eMVF_4K_UHD_11988p + 1),
        eMVF_4K_DCI_50p             = (eMVF_4K_UHD_120p + 1),
        eMVF_4K_DCI_5994p           = (eMVF_4K_DCI_50p + 1),
        eMVF_4K_DCI_60p             = (eMVF_4K_DCI_5994p + 1),
        eMVF_4K_DCI_9590p           = (eMVF_4K_DCI_60p + 1),
        eMVF_4K_DCI_96p             = (eMVF_4K_DCI_9590p + 1),
        eMVF_4K_DCI_100p            = (eMVF_4K_DCI_96p + 1),
        eMVF_4K_DCI_11988p          = (eMVF_4K_DCI_100p + 1),
        eMVF_4K_DCI_120p            = (eMVF_4K_DCI_11988p + 1),
        eMVF_8K_UHD_2398p           = (eMVF_4K_DCI_120p + 1),
        eMVF_8K_UHD_24p             = (eMVF_8K_UHD_2398p + 1),
        eMVF_8K_UHD_25p             = (eMVF_8K_UHD_24p + 1),
        eMVF_8K_UHD_2997p           = (eMVF_8K_UHD_25p + 1),
        eMVF_8K_UHD_30p             = (eMVF_8K_UHD_2997p + 1),
        eMVF_8K_UHD_4795p           = (eMVF_8K_UHD_30p + 1),
        eMVF_8K_UHD_48p             = (eMVF_8K_UHD_4795p + 1),
        eMVF_8K_UHD_50p             = (eMVF_8K_UHD_48p + 1),
        eMVF_8K_UHD_5994p           = (eMVF_8K_UHD_50p + 1),
        eMVF_8K_UHD_60p             = (eMVF_8K_UHD_5994p + 1),
        eMVF_8K_DCI_2398p           = (eMVF_8K_UHD_60p + 1),
        eMVF_8K_DCI_24p             = (eMVF_8K_DCI_2398p + 1),
        eMVF_8K_DCI_25p             = (eMVF_8K_DCI_24p + 1),
        eMVF_8K_DCI_2997p           = (eMVF_8K_DCI_25p + 1),
        eMVF_8K_DCI_30p             = (eMVF_8K_DCI_2997p + 1),
        eMVF_8K_DCI_4795p           = (eMVF_8K_DCI_30p + 1),
        eMVF_8K_DCI_48p             = (eMVF_8K_DCI_4795p + 1),
        eMVF_8K_DCI_50p             = (eMVF_8K_DCI_48p + 1),
        eMVF_8K_DCI_5994p           = (eMVF_8K_DCI_50p + 1),
        eMVF_8K_DCI_60p             = (eMVF_8K_DCI_5994p + 1),
        eMVF_Disabled               = (eMVF_8K_DCI_60p + 1),
        eMVF_3D_SbS_720_50p         = (eMVF_HD720_50p + 0x200),
        eMVF_3D_SbS_720_5994p       = (eMVF_HD720_5994p + 0x200),
        eMVF_3D_SbS_720_60p         = (eMVF_HD720_60p + 0x200),
        eMVF_3D_SbS_1080_2398p      = (eMVF_HD1080_2398p + 0x200),
        eMVF_3D_SbS_1080_24p        = (eMVF_HD1080_24p + 0x200),
        eMVF_3D_SbS_1080_25p        = (eMVF_HD1080_25p + 0x200),
        eMVF_3D_SbS_1080_2997p      = (eMVF_HD1080_2997p + 0x200),
        eMVF_3D_SbS_1080_30p        = (eMVF_HD1080_30p + 0x200),
        eMVF_3D_SbS_1080_50i        = (eMVF_HD1080_50i + 0x200),
        eMVF_3D_SbS_1080_5994i      = (eMVF_HD1080_5994i + 0x200),
        eMVF_3D_SbS_1080_60i        = (eMVF_HD1080_60i + 0x200),
        eMVF_3D_SbS_1080_50p        = (eMVF_HD1080_50p + 0x200),
        eMVF_3D_SbS_1080_5994p      = (eMVF_HD1080_5994p + 0x200),
        eMVF_3D_SbS_1080_60p        = (eMVF_HD1080_60p + 0x200),
        eMVF_3D_TnB_720_50p         = (eMVF_HD720_50p + 0x400),
        eMVF_3D_TnB_720_5994p       = (eMVF_HD720_5994p + 0x400),
        eMVF_3D_TnB_720_60p         = (eMVF_HD720_60p + 0x400),
        eMVF_3D_TnB_1080_2398p      = (eMVF_HD1080_2398p + 0x400),
        eMVF_3D_TnB_1080_24p        = (eMVF_HD1080_24p + 0x400),
        eMVF_3D_TnB_1080_25p        = (eMVF_HD1080_25p + 0x400),
        eMVF_3D_TnB_1080_2997p      = (eMVF_HD1080_2997p + 0x400),
        eMVF_3D_TnB_1080_30p        = (eMVF_HD1080_30p + 0x400),
        eMVF_3D_TnB_1080_50p        = (eMVF_HD1080_50p + 0x400),
        eMVF_3D_TnB_1080_5994p      = (eMVF_HD1080_5994p + 0x400),
        eMVF_3D_TnB_1080_60p        = (eMVF_HD1080_60p + 0x400),
        eMVF_3D_Full_SbS_1080_2398p = (eMVF_HD1080_2398p + 0x1200),
        eMVF_3D_Full_SbS_1080_24p   = (eMVF_HD1080_24p + 0x1200),
        eMVF_3D_Full_SbS_1080_25p   = (eMVF_HD1080_25p + 0x1200),
        eMVF_3D_Full_SbS_1080_2997p = (eMVF_HD1080_2997p + 0x1200),
        eMVF_3D_Full_SbS_1080_30p   = (eMVF_HD1080_30p + 0x1200),
        eMVF_3D_Full_SbS_1080_50i   = (eMVF_HD1080_50i + 0x1200),
        eMVF_3D_Full_SbS_1080_5994i = (eMVF_HD1080_5994i + 0x1200),
        eMVF_3D_Full_SbS_1080_60i   = (eMVF_HD1080_60i + 0x1200),
        eMVF_3D_Full_SbS_720_50p    = (eMVF_HD720_50p + 0x1200),
        eMVF_3D_Full_SbS_720_5994p  = (eMVF_HD720_5994p + 0x1200),
        eMVF_3D_Full_SbS_720_60p    = (eMVF_HD720_60p + 0x1200),
        eMVF_3D_Full_TnB_1080_2398p = (eMVF_HD1080_2398p + 0x1400),
        eMVF_3D_Full_TnB_1080_24p   = (eMVF_HD1080_24p + 0x1400),
        eMVF_3D_Full_TnB_1080_25p   = (eMVF_HD1080_25p + 0x1400),
        eMVF_3D_Full_TnB_1080_2997p = (eMVF_HD1080_2997p + 0x1400),
        eMVF_3D_Full_TnB_1080_30p   = (eMVF_HD1080_30p + 0x1400),
        eMVF_3D_Full_TnB_1080_50i   = (eMVF_HD1080_50i + 0x1400),
        eMVF_3D_Full_TnB_1080_5994i = (eMVF_HD1080_5994i + 0x1400),
        eMVF_3D_Full_TnB_1080_60i   = (eMVF_HD1080_60i + 0x1400),
        eMVF_3D_Full_TnB_720_50p    = (eMVF_HD720_50p + 0x1400),
        eMVF_3D_Full_TnB_720_5994p  = (eMVF_HD720_5994p + 0x1400),
        eMVF_3D_Full_TnB_720_60p    = (eMVF_HD720_60p + 0x1400)
    } eMVideoFormat;

typedef /* [v1_enum] */
    enum eGPUTextureFormat {
        eGTF_CPU_Frame          = 0,
        eGTF_GPU_SeparateFields = 0x2000,
        eGTF_GPU_RGBA32         = 28,
        eGTF_GPU_BGRA32         = 87,
        eGTF_GPU_BGRX32         = 88,
        eGTF_GPU_R8             = 61,
        eGTF_GPU_NV12           = 103,
        eGTF_GPU_YUY2           = 107,
        eGTF_GPU_R10G10B10A2    = 24,
        eGTF_GPU_FormatMask     = 0xfff,
        eGTF_GPU_Fields_RGBA32  = (0x2000 + 28),
        eGTF_GPU_Fields_BGRA32  = (0x2000 + 87),
        eGTF_GPU_Fields_BGRX32  = (0x2000 + 88),
        eGTF_GPU_Fields_R8      = (0x2000 + 61),
        eGTF_GPU_Fields_NV12    = (0x2000 + 103),
        eGTF_GPU_Fields_YUY2    = (0x2000 + 107)
    } eGPUTextureFormat;

typedef struct M_VID_PROPS {
    eMVideoFormat     eVideoFormat;
    eMFCC             fccType;
    int               nWidth;
    int               nHeight;
    int               nRowBytes;
    eMInterlace       eInterlace;
    short             nAspectX;
    short             nAspectY;
    double            dblRate;
    eMScaleType       eScaleType;
    eGPUTextureFormat eGPUFlags;
} M_VID_PROPS;

typedef struct M_AUD_PROPS {
    int nChannels;
    int nSamplesPerSec;
    int nBitsPerSample;
    int nTrackSplitBits;
} M_AUD_PROPS;

typedef /* [v1_enum] */
    enum eMFormatType {
        eMFT_Input    = 0,
        eMFT_Convert  = 1,
        eMFT_Override = 2,
        eMFT_Output   = 3
    } eMFormatType;

typedef /* [v1_enum] */
    enum eMFrameFlags {
        eMFF_None                              = 0,
        eMFF_Break                             = 1,
        eMFF_Last                              = 2,
        eMFF_Dup                               = 0x11,
        eMFF_Pause                             = 0x21,
        eMFF_AddedFrame                        = 0x40,
        eMFF_SkippedFrame                      = 0x80,
        eMFF_Live                              = 0x100,
        eMFF_Net                               = 0x200,
        eMFF_Reverse                           = 0x1000,
        eMFF_ReverseTime                       = 0x2000,
        eMFF_Main_Mask                         = 0xffff,
        eMFF_Intra                             = 0x10000,
        eMFF_Predicted                         = 0x20000,
        eMFF_Bidir_Predicted                   = 0x30000,
        eMFF_S_GMC_VOP_MPEG4                   = 0x40000,
        eMFF_Switching_Intra                   = 0x50000,
        eMFF_Switching_Predicted               = 0x60000,
        eMFF_BI                                = 0x70000,
        eMFF_Type_Mask                         = 0xf0000,
        eMFF_Reverse_Break                     = 0x1001,
        eMFF_Reverse_Last                      = 0x1002,
        eMFF_Reverse_Pause                     = 0x1021,
        eMFF_Last_Break                        = 0x3,
        eMFF_Last_Dup                          = 0x13,
        eMFF_Last_Pause                        = 0x23,
        eMFF_Live_Break                        = 0x101,
        eMFF_Live_Last                         = 0x102,
        eMFF_Live_Last_Break                   = 0x103,
        eMFF_Live_AddedFrame                   = 0x140,
        eMFF_Live_SkippedFrame                 = 0x180,
        eMFF_Net_Break                         = 0x201,
        eMFF_Net_Last                          = 0x202,
        eMFF_Net_Last_Break                    = 0x203,
        eMFF_Break_Intra                       = 0x10001,
        eMFF_Break_Predicted                   = 0x20001,
        eMFF_Break_Bidir_Predicted             = 0x30001,
        eMFF_Break_S_GMC_VOP_MPEG4             = 0x40001,
        eMFF_Break_Switching_Intra             = 0x50001,
        eMFF_Break_Switching_Predicted         = 0x60001,
        eMFF_Break_BI                          = 0x70001,
        eMFF_Reverse_Intra                     = 0x11000,
        eMFF_Reverse_Predicted                 = 0x21000,
        eMFF_Reverse_Bidir_Predicted           = 0x31000,
        eMFF_Reverse_S_GMC_VOP_MPEG4           = 0x41000,
        eMFF_Reverse_Switching_Intra           = 0x51000,
        eMFF_Reverse_Switching_Predicted       = 0x61000,
        eMFF_Reverse_BI                        = 0x71000,
        eMFF_Reverse_Break_Intra               = 0x11001,
        eMFF_Reverse_Break_Predicted           = 0x21001,
        eMFF_Reverse_Break_Bidir_Predicted     = 0x31001,
        eMFF_Reverse_Break_S_GMC_VOP_MPEG4     = 0x41001,
        eMFF_Reverse_Break_Switching_Intra     = 0x51001,
        eMFF_Reverse_Break_Switching_Predicted = 0x61001,
        eMFF_Reverse_Break_BI                  = 0x71001,
        eMFF_Net_Intra                         = 0x10200,
        eMFF_Net_Predicted                     = 0x20200,
        eMFF_Net_Bidir_Predicted               = 0x30200,
        eMFF_Net_S_GMC_VOP_MPEG4               = 0x40200,
        eMFF_Net_Switching_Intra               = 0x50200,
        eMFF_Net_Switching_Predicted           = 0x60200,
        eMFF_Net_BI                            = 0x70200,
        eMFF_Net_Break_Intra                   = 0x10201,
        eMFF_Net_Break_Predicted               = 0x20201,
        eMFF_Net_Break_Bidir_Predicted         = 0x30201,
        eMFF_Net_Break_S_GMC_VOP_MPEG4         = 0x40201,
        eMFF_Net_Break_Switching_Intra         = 0x50201,
        eMFF_Net_Break_Switching_Predicted     = 0x60201,
        eMFF_Net_Break_BI                      = 0x70201,
        eMFF_BufferPos_Zero                    = 0x1000000,
        eMFF_BufferPos_Min                     = 0x40000000,
        eMFF_BufferPos_Max                     = 0x7e000000,
        eMFF_BufferPos_Overflow                = 0x7f000000
    } eMFrameFlags;

typedef struct M_TIME {
    REFERENCE_TIME rtStartTime;
    REFERENCE_TIME rtEndTime;
    M_TIMECODE     tcFrame;
    eMFrameFlags   eFFlags;
} M_TIME;

typedef /* [v1_enum] */
    enum eMANCFlags {
        eMAF_None     = 0,
        eMAF_AL_Valid = 0x2
    } eMANCFlags;

typedef struct LUFS_METERS {
    float fM;
    float fS;
    float fI;
    float fLRA;
    float fLRALow;
    float fLRAHigh;
    float fMaxTPL;
    float arrTPL[32];
    float arrReserved[121];
} LUFS_METERS;

typedef struct M_AUDIO_LOUDNESS {
    float       arrVUMeter[32];
    float       arrVUPeaks[32];
    float       arrRMS[32];
    LUFS_METERS lufs;
    int         nValidChannels;
    int         nValidTracks;
    int         nTracksSplitBit;
} M_AUDIO_LOUDNESS;

typedef struct M_ANC_DATA {
    eMANCFlags       eFlags;
    M_AUDIO_LOUDNESS audOriginal;
    M_AUDIO_LOUDNESS audOutput;
} M_ANC_DATA;

typedef struct M_AV_PROPS {
    M_VID_PROPS vidProps;
    M_AUD_PROPS audProps;
    M_ANC_DATA  ancData;
    BOOL        bLocked;
} M_AV_PROPS;

typedef struct M_AUDIO_TRACK_LOUDNESS {
    float arrVUMeter[32];
    float arrVUPeaks[32];
    float arrRMS[32];
    float arrEBUMode_M;
    float arrEBUMode_S;
    float arrEBUMode_I;
    float arrPeaks_QPPM;
    float arrPeaks_TPL;
    int   nValidChannels;
} M_AUDIO_TRACK_LOUDNESS;

typedef /* [v1_enum] */
    enum eMAudioTrackMode {
        eMAT_Disabled       = 0,
        eMAT_Enabled        = (eMAT_Disabled + 1),
        eMAT_Exclusive      = (eMAT_Enabled + 1),
        eMAT_Mix_Exclusive  = (eMAT_Exclusive + 1),
        eMAT_Enabled_AddTo  = (eMAT_Mix_Exclusive + 1),
        eMAT_Disabled_AddTo = (eMAT_Enabled_AddTo + 1)
    } eMAudioTrackMode;

typedef /* [v1_enum] */
    enum eMItemType {
        eMPIT_File     = 0,
        eMPIT_Live     = (eMPIT_File + 1),
        eMPIT_Playlist = (eMPIT_Live + 1),
        eMPIT_Command  = (eMPIT_Playlist + 1)
    } eMItemType;

typedef /* [v1_enum] */
    enum eMStartType {
        eMST_Off       = 0,
        eMST_Auto      = (eMST_Off + 1),
        eMST_Specified = (eMST_Auto + 1)
    } eMStartType;

typedef /* [v1_enum] */
    enum eMCursorType {
        eMCT_ARROW       = 32512,
        eMCT_IBEAM       = 32513,
        eMCT_WAIT        = 32514,
        eMCT_CROSS       = 32515,
        eMCT_UPARROW     = 32516,
        eMCT_SIZE        = 32640,
        eMCT_ICON        = 32641,
        eMCT_SIZENWSE    = 32642,
        eMCT_SIZENESW    = 32643,
        eMCT_SIZEWE      = 32644,
        eMCT_SIZENS      = 32645,
        eMCT_SIZEALL     = 32646,
        eMCT_NO          = 32648,
        eMCT_HAND        = 32649,
        eMCT_APPSTARTING = 32650,
        eMCT_NOCURSOR    = 0
    } eMCursorType;

typedef /* [v1_enum] */
    enum eMMoveOption {
        eMMO_Cursor      = 0,
        eMMO_Done        = 0x1,
        eMMO_Start       = 0x2,
        eMMO_Right       = 0x4,
        eMMO_Left        = 0x8,
        eMMO_Start_Right = 0x6,
        eMMO_Start_Left  = 0xa,
        eMMO_Done_Right  = 0x5,
        eMMO_Done_Left   = 0x9
    } eMMoveOption;

typedef /* [v1_enum] */
    enum eMUpdateType {
        eMUT_AddNew    = 0,
        eMUT_Update    = 1,
        eMUT_ClearDest = 2
    } eMUpdateType;

typedef /* [v1_enum] */
    enum eMInfoType {
        eMIT_Help    = 0,
        eMIT_Type    = (eMIT_Help + 1),
        eMIT_Default = (eMIT_Type + 1),
        eMIT_Values  = (eMIT_Default + 1),
        eMIT_Min     = (eMIT_Values + 1),
        eMIT_Max     = (eMIT_Min + 1),
        eMIT_Dynamic = (eMIT_Max + 1)
    } eMInfoType;

typedef /* [v1_enum] */
    enum eMFrameClone {
        eMFC_Props                   = 0,
        eMFC_Video                   = 0x1,
        eMFC_VideoRef                = 0x2,
        eMFC_Audio                   = 0x10,
        eMFC_VideoRef_Audio          = 0x12,
        eMFC_Data                    = 0x100,
        eMFC_Obj                     = 0x200,
        eMFC_Data_Audio              = 0x110,
        eMFC_ObjData_Audio           = 0x310,
        eMFC_Reference               = 0x312,
        eMFC_Full                    = 0x311,
        eMFC_ForceCPU                = 0x1000,
        eMFC_ForceGPU                = 0x2000,
        eMFC_Video_ForceCPU          = 0x1001,
        eMFC_VideoRef_ForceCPU       = 0x1002,
        eMFC_VideoRef_Audio_ForceCPU = 0x1012,
        eMFC_Reference_ForceCPU      = 0x1312,
        eMFC_Full_ForceCPU           = 0x1311,
        eMFC_Video_ForceGPU          = 0x2001,
        eMFC_VideoRef_ForceGPU       = 0x2002,
        eMFC_VideoRef_Audio_ForceGPU = 0x2012,
        eMFC_Reference_ForceGPU      = 0x2312,
        eMFC_Full_ForceGPU           = 0x2311,
        eMFC_BottomTop_ARGB          = 0x10000
    } eMFrameClone;

typedef /* [v1_enum] */
    enum eMBMDDeckControlError {
        eMDCE_NoError                  = 0x6e6f6572,
        eMDCE_pModeError               = 0x6d6f6572,
        eMDCE_MissedInPointError       = 0x6d696572,
        eMDCE_DeckTimeoutError         = 0x64746572,
        eMDCE_CommandFailedError       = 0x63666572,
        eMDCE_DeviceAlreadyOpenedError = 0x64616c6f,
        eMDCE_FailedToOpenDeviceError  = 0x66646572,
        eMDCE_InLocalModeError         = 0x6c6d6572,
        eMDCE_EndOfTapeError           = 0x65746572,
        eMDCE_UserAbortError           = 0x75616572,
        eMDCE_NoTapeInDeckError        = 0x6e746572,
        eMDCE_NoVideoFromCardError     = 0x6e766663,
        eMDCE_NoCommunicationError     = 0x6e636f6d,
        eMDCE_BufferTooSmallError      = 0x6274736d,
        eMDCE_BadChecksumError         = 0x63686b73,
        eMDCE_UnknownError             = 0x756e6572
    } eMBMDDeckControlError;

typedef /* [v1_enum] */
    enum eMBMDDeckControlMode {
        eMDCM_NotOpened      = 0x6e746f70,
        eMDCM_VTRControlMode = 0x76747263,
        eMDCM_ExportMode     = 0x6578706d,
        eMDCM_CaptureMode    = 0x6361706d
    } eMBMDDeckControlMode;

typedef /* [v1_enum] */
    enum eMBMDDeckControlVTRControlState {
        eMDCS_pMode          = 0x6e76636d,
        eMDCS_Playing        = 0x76747270,
        eMDCS_Recording      = 0x76747272,
        eMDCS_Still          = 0x76747261,
        eMDCS_ShuttleForward = 0x76747366,
        eMDCS_ShuttleReverse = 0x76747372,
        eMDCS_JogForward     = 0x76746a66,
        eMDCS_JogReverse     = 0x76746a72,
        eMDCS_Stopped        = 0x7674726f
    } eMBMDDeckControlVTRControlState;

typedef /* [v1_enum] */
    enum eMBMDDeckControlEvent {
        eMDCE_AbortedEvent           = 0x61627465,
        eMDCE_PrepareForExportEvent  = 0x70666565,
        eMDCE_ExportCompleteEvent    = 0x65786365,
        eMDCE_PrepareForCaptureEvent = 0x70666365,
        eMDCE_CaptureCompleteEvent   = 0x63636576
    } eMBMDDeckControlEvent;

typedef enum eStorageFlags { eSF_NoWait = 0x1, eSF_IgnoreTime = 0x2, eSF_SyncPoint = 0x4 } eStorageFlags;

typedef enum eStorageUnits { eSU_TimeSec = 0x1, eSU_Bytes = 0x2 } eStorageUnits;

typedef enum eStorageInitType { eSIT_CreateNew = 0x1, eSIT_ReadExisting = 0x2, eSIT_Append = 0x3 } eStorageInitType;

typedef /* [v1_enum] */
    enum eFrameGetFlags {
        eFGT_Normal           = 0,
        eFGT_Sync             = 0x1,
        eFGT_FlushBuffers     = 0x20,
        eFGT_GetEvents        = 0x40,
        eFGT_ReceiveBuffers_1 = 0x100,
        eFGT_ReceiveBuffers_2 = 0x200,
        eFGT_ReceiveBuffers_3 = 0x300,
        eFGT_ReceiveBuffers_4 = 0x400,
        eFGT_ReceiveBuffers_5 = 0x500,
        eFGT_ReceiveBuffers_6 = 0x600,
        eFGT_ReceiveBuffers_7 = 0x600,
        eFGT_ReceiveBuffers_8 = 0x600,
        eFGT_Remove           = -1
    } eFrameGetFlags;

typedef enum eMFMediaType {
    eMFMT_Empty       = 0,
    eMFMT_Video       = 0x1,
    eMFMT_Audio       = 0x2,
    eMFMT_Multiplexed = 0x3,
    eMFMT_Subtitles   = 0x4,
    eMFMT_Data        = 0x8
} eMFMediaType;

typedef enum eMFPacketFlags {
    eMFPF_None            = 0,
    eMFPF_SegmentStart    = 0x1,
    eMFPF_Last            = 0x2,
    eMFPF_KeyFrame        = 0x10,
    eMFPF_Preroll         = 0x20,
    eMFPF_Predicted       = 0x100,
    eMFPF_BiPredicted     = 0x200,
    eMFPF_ForceDetectType = 0x1000,
    eMFPF_AvCorrupt       = 0x10000,
    eMFPF_AvDiscard       = 0x20000,
    eMFPF_AvTrusted       = 0x40000,
    eMFPF_AvDisposable    = 0x80000
} eMFPacketFlags;

typedef enum eMFSaveFlags { eMFPF_RawData = 0, eMFPF_Full = (eMFPF_RawData + 1) } eMFSaveFlags;

typedef struct M_RATIONAL {
    int nNum;
    int nDen;
} M_RATIONAL;

typedef struct M_STREAM_INFO {
    eMFMediaType eMediaType;
    LONG         cbCodecData;
    LONGLONG     lpCodecData;
    M_RATIONAL   raTimeBase;
    int          nWidth;
    int          nHeight;
    int          nAspectX;
    int          nAspectY;
    double       dblRate;
    int          nSampleRate;
    int          nChannels;
    int          nBlockAlign;
    int          nBitsPerCodedSample;
    int          nBitrate;
    BSTR         bsCodecNameOrTag;
    int          nHasBFrames;
    int          nFieldOrder;
} M_STREAM_INFO;

typedef struct M_PACKET_INFO {
    eMFPacketFlags eFlags;
    LONG           cbPacketData;
    LONGLONG       lpPacketData;
    LONGLONG       llDts;
    LONGLONG       llPts;
    LONGLONG       llDuration;
    REFERENCE_TIME rtSegmentStart;
    int            nIndexInSegment;
    int            nOrderInSegment;
    int            nKeyDistance;
    int            nStreamIndex;
    LONGLONG       llFilePos;
    LONGLONG       lpSideData;
    LONG           cbSideData;
    int            nSideDatatype;
    int            nSideDataElems;
} M_PACKET_INFO;

typedef /* [v1_enum] */
    enum eMFBufferFlags {
        eMFBF_Empty         = 0,
        eMFBF_Buffer        = 0x1,
        eMFBF_Packet        = 0x2,
        eMFBF_Frame         = 0x3,
        eMFBF_Stream        = 0x4,
        eMFBF_SideData      = 0x10,
        eMFBF_VideoData     = 0x20,
        eMFBF_AudioData     = 0x40,
        eMFBF_RawData       = 0x100,
        eMFBF_PtrIPC        = 0x300,
        eMFBF_Transmit      = 0x400,
        eMFBF_LocalOnly     = 0x10000,
        eMFBF_NoCache       = 0x20000,
        eMFBF_Local_RawData = 0x10100
    } eMFBufferFlags;

typedef /* [v1_enum] */
    enum eMFTransferFlags {
        eMFTF_Default      = 0,
        eMFTF_CopyLocal    = 1,
        eMFTF_SideDataCopy = 0x10
    } eMFTransferFlags;

typedef /* [v1_enum] */
    enum eMFMouseButtons {
        eMFMB_None   = -1,
        eMFMB_Left   = 0,
        eMFMB_Right  = (eMFMB_Left + 1),
        eMFMB_Middle = (eMFMB_Right + 1)
    } eMFMouseButtons;

typedef /* [v1_enum] */
    enum eMFEventsFlags {
        eMFEF_CAPS_LOCK_ON        = (1 << 0),
        eMFEF_SHIFT_DOWN          = (1 << 1),
        eMFEF_CONTROL_DOWN        = (1 << 2),
        eMFEF_ALT_DOWN            = (1 << 3),
        eMFEF_LEFT_MOUSE_BUTTON   = (1 << 4),
        eMFEF_MIDDLE_MOUSE_BUTTON = (1 << 5),
        eMFEF_RIGHT_MOUSE_BUTTON  = (1 << 6),
        eMFEF_COMMAND_DOWN        = (1 << 7),
        eMFEF_NUM_LOCK_ON         = (1 << 8),
        eMFEF_IS_KEY_PAD          = (1 << 9),
        eMFEF_IS_LEFT             = (1 << 10),
        eMFEF_IS_RIGHT            = (1 << 11)
    } eMFEventsFlags;

typedef struct MF_MOUSE_EVENT {
    BOOL           bAbsolutePos;
    eMFEventsFlags eFlags;
    double         dblPosX;
    double         dblPosY;
} MF_MOUSE_EVENT;

typedef /* [v1_enum] */
    enum eMFKeyEventType {
        eMFKT_RawKeyDown = 0,
        eMFKT_KeyDown    = (eMFKT_RawKeyDown + 1),
        eMFKT_KeyUp      = (eMFKT_KeyDown + 1),
        eMFKT_Char       = (eMFKT_KeyUp + 1)
    } eMFKeyEventType;

typedef struct MF_KEY_EVENT {
    eMFKeyEventType eType;
    eMFEventsFlags  eFlags;
    int             windows_key_code;
    int             native_key_code;
    int             is_system_key;
    int             character;
    int             unmodified_character;
    int             focus_on_editable_field;
} MF_KEY_EVENT;

typedef /* [v1_enum] */
    enum eMFBrowserCommand {
        eMFBC_Reload    = 0,
        eMFBC_GoForward = (eMFBC_Reload + 1),
        eMFBC_GoBack    = (eMFBC_GoForward + 1),
        eMFBC_StopLoad  = (eMFBC_GoBack + 1)
    } eMFBrowserCommand;

typedef /* [v1_enum] */
    enum eMFLockType {
        eMFLT_NoLock                 = 0,
        eMFLT_Read                   = 1,
        eMFLT_Write                  = 2,
        eMFLT_Read_Write             = 3,
        eMFLT_Read_FirstField        = 0x101,
        eMFLT_Write_FirstField       = 0x102,
        eMFLT_Read_Write_FirstField  = 0x103,
        eMFLT_Read_SecondField       = 0x201,
        eMFLT_Write_SecondField      = 0x202,
        eMFLT_Read_Write_SecondField = 0x203,
        eMFLT_FirstField             = 0x100,
        eMFLT_SecondField            = 0x200
    } eMFLockType;

typedef struct MF_PIPE_INFO {
    int nPipeMode;
    int nPipesConnected;
    int nChannels;
    int nObjectsHave;
    int nObjectsMax;
    int nObjectsDropped;
    int nObjectsFlushed;
    int nMessagesHave;
    int nMessagesMax;
    int nMessagesDropped;
    int nMessagesFlushed;
} MF_PIPE_INFO;

typedef /* [v1_enum] */
    enum eMFFlashFlags {
        eMFFL_ResetCounters = 0x2,
        eMFFL_FlushObjects  = 0x20,
        eMFFL_FlushMessages = 0x40,
        eMFFL_FlushStream   = 0x20,
        eMFFL_FlushAll      = 0xf0,
        eMFFL_RemoveChannel = 0x100
    } eMFFlashFlags;

#endif // M_DEFINES_INCLUDED
#ifndef M_ADAPTER_DESC_DEFINED
    #define M_ADAPTER_DESC_DEFINED
typedef struct M_ADAPTER_DESC {
    BSTR     bsDescription;
    UINT     uiVendorId;
    UINT     uiDeviceId;
    UINT     uiSubSysId;
    UINT     uiRevision;
    LONGLONG llDedicatedVideoMemory;
    LONGLONG llDedicatedSystemMemory;
    LONGLONG llSharedSystemMemory;
    LONGLONG llAdapterLuid;
} M_ADAPTER_DESC;

#endif
#ifndef MFFRAME_DEFINED
    #define MFFRAME_DEFINED
typedef struct MF_FRAME_INFO {
    LONGLONG   llVideoID;
    M_TIME     mTime;
    M_AV_PROPS avProps;
    DWORD      cbAudio;
    DWORD      cbVideo;
    LONGLONG   lpVideo;
    LONGLONG   lpAudio;
    LONG       lAudioSamples;
    DWORD      dwProcessID;
    LONG       nDataCount;
    LONG       nObjCount;
    LONG       nStrCount;
} MF_FRAME_INFO;

typedef enum eMFRectType {
    eMFRT_Absolute      = 0,
    eMFRT_Relative      = 1,
    eMFRT_FixedCC_15x32 = 2,
    eMFRT_Fixed14       = 14,
    eMFRT_Fixed20       = 20,
    eMFRT_Fixed24       = 24,
    eMFRT_Fixed32       = 32,
    eMFRT_Fixed40       = 40
} eMFRectType;

typedef struct MF_RECT {
    double      dblPosX;
    double      dblPosY;
    double      dblWidth;
    double      dblHeight;
    eMFRectType eRectType;
} MF_RECT;

typedef struct MF_VID_PTR {
    LONGLONG lpVideoPlanes[4];
    SIZE     szVideoPlanes[4];
    int      cbVideoRowBytes[4];
} MF_VID_PTR;

typedef /* [v1_enum] */
    enum eMFTextFlags {
        eMFTF_TopLeft          = 0,
        eMFTF_TopCenter        = 0x1,
        eMFTF_TopRight         = 0x2,
        eMFTF_TopJustify       = 0x3,
        eMFTF_CenterLeft       = 0x10,
        eMFTF_Center           = 0x11,
        eMFTF_CenterRight      = 0x12,
        eMFTF_CenterJustify    = 0x12,
        eMFTF_BottomLeft       = 0x20,
        eMFTF_BottomCenter     = 0x21,
        eMFTF_BottomRight      = 0x22,
        eMFTF_BottomJustify    = 0x22,
        eMFTF_HPos_Mask        = 0x3,
        eMFTF_VPos_Mask        = 0x30,
        eMFT_WordBreaks        = 0x100,
        eMFT_RightToLeft       = 0x200,
        eMFT_Vertical          = 0x400,
        eMFTF_WB_TopLeft       = 0x100,
        eMFTF_WB_TopCenter     = 0x101,
        eMFTF_WB_TopRight      = 0x102,
        eMFTF_WB_TopJustify    = 0x103,
        eMFTF_WB_CenterLeft    = 0x110,
        eMFTF_WB_Center        = 0x111,
        eMFTF_WB_CenterRight   = 0x112,
        eMFTF_WB_CenterJustify = 0x112,
        eMFTF_WB_BottomLeft    = 0x120,
        eMFTF_WB_BottomCenter  = 0x121,
        eMFTF_WB_BottomRight   = 0x122,
        eMFTF_WB_BottomJustify = 0x122,
        eMFTF_FirstField       = 0x1000,
        eMFTF_SecondField      = 0x2000
    } eMFTextFlags;

typedef /* [v1_enum] */
    enum eMFOverlayFlags {
        eMFOF_NoScale     = 0,
        eMFOF_LetterBox   = 0x1,
        eMFOF_Crop        = 0x2,
        eMFOF_NoAR        = 0x4,
        eMFOF_ScaleMask   = 0xf,
        eMFOF_FirstField  = 0x1000,
        eMFOF_SecondField = 0x2000
    } eMFOverlayFlags;

extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0000_v0_0_s_ifspec;

    #ifndef __IMFBuffer_INTERFACE_DEFINED__
        #define __IMFBuffer_INTERFACE_DEFINED__

/* interface IMFBuffer */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFBuffer;

        #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FBCB23-887B-4AEB-B30C-408E98E6B397")
IMFBuffer: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferLock(
        /* [in] */ eMFLockType _eLockType,
        /* [out] */ LONG * _pcbMaxSize,
        /* [out] */ LONG * _pcbActualSize,
        /* [out] */ LONGLONG * _plpData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferUnlock(
        /* [in] */ eMFLockType _eLockType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferSizeGet(
        /* [out] */ LONG * _pcbMaxSize,
        /* [in] */ LONG * _pcbActualSize) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferActualSizeSet(
        /* [in] */ LONG _cbActualSize) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferFlagsGet(
        /* [out] */ eMFBufferFlags * _peBufferFlags) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferSharedIdGet(
        /* [out] */ LONGLONG * _pllSharedID,
        /* [out] */ DWORD * _pdwProcessID,
        /* [out] */ eMFBufferFlags * _peBufferFlags) = 0;
};

        #else /* C style interface */

typedef struct IMFBufferVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFBuffer        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFBuffer *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFBuffer *This);

    DECLSPEC_XFGVIRT(IMFBuffer, BufferLock)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferLock)(IMFBuffer             *This,
                                                              /* [in] */ eMFLockType _eLockType,
                                                              /* [out] */ LONG      *_pcbMaxSize,
                                                              /* [out] */ LONG      *_pcbActualSize,
                                                              /* [out] */ LONGLONG  *_plpData);

    DECLSPEC_XFGVIRT(IMFBuffer, BufferUnlock)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferUnlock)(IMFBuffer             *This,
                                                                /* [in] */ eMFLockType _eLockType);

    DECLSPEC_XFGVIRT(IMFBuffer, BufferSizeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferSizeGet)(IMFBuffer        *This,
                                                                 /* [out] */ LONG *_pcbMaxSize,
                                                                 /* [in] */ LONG  *_pcbActualSize);

    DECLSPEC_XFGVIRT(IMFBuffer, BufferActualSizeSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferActualSizeSet)(IMFBuffer      *This,
                                                                       /* [in] */ LONG _cbActualSize);

    DECLSPEC_XFGVIRT(IMFBuffer, BufferFlagsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferFlagsGet)(IMFBuffer                  *This,
                                                                  /* [out] */ eMFBufferFlags *_peBufferFlags);

    DECLSPEC_XFGVIRT(IMFBuffer, BufferSharedIdGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferSharedIdGet)(IMFBuffer                  *This,
                                                                     /* [out] */ LONGLONG       *_pllSharedID,
                                                                     /* [out] */ DWORD          *_pdwProcessID,
                                                                     /* [out] */ eMFBufferFlags *_peBufferFlags);

    END_INTERFACE
} IMFBufferVtbl;

interface IMFBuffer { CONST_VTBL struct IMFBufferVtbl *lpVtbl; };

            #ifdef COBJMACROS

                #define IMFBuffer_QueryInterface(This, riid, ppvObject) \
                    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

                #define IMFBuffer_AddRef(This) ((This)->lpVtbl->AddRef(This))

                #define IMFBuffer_Release(This) ((This)->lpVtbl->Release(This))

                #define IMFBuffer_BufferLock(This, _eLockType, _pcbMaxSize, _pcbActualSize, _plpData) \
                    ((This)->lpVtbl->BufferLock(This, _eLockType, _pcbMaxSize, _pcbActualSize, _plpData))

                #define IMFBuffer_BufferUnlock(This, _eLockType) ((This)->lpVtbl->BufferUnlock(This, _eLockType))

                #define IMFBuffer_BufferSizeGet(This, _pcbMaxSize, _pcbActualSize) \
                    ((This)->lpVtbl->BufferSizeGet(This, _pcbMaxSize, _pcbActualSize))

                #define IMFBuffer_BufferActualSizeSet(This, _cbActualSize) \
                    ((This)->lpVtbl->BufferActualSizeSet(This, _cbActualSize))

                #define IMFBuffer_BufferFlagsGet(This, _peBufferFlags) \
                    ((This)->lpVtbl->BufferFlagsGet(This, _peBufferFlags))

                #define IMFBuffer_BufferSharedIdGet(This, _pllSharedID, _pdwProcessID, _peBufferFlags) \
                    ((This)->lpVtbl->BufferSharedIdGet(This, _pllSharedID, _pdwProcessID, _peBufferFlags))

            #endif /* COBJMACROS */

        #endif /* C style interface */

    #endif /* __IMFBuffer_INTERFACE_DEFINED__ */

    #ifndef __IMFFrame_INTERFACE_DEFINED__
        #define __IMFFrame_INTERFACE_DEFINED__

/* interface IMFFrame */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFFrame;

        #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F377000-473F-4ad5-A5C2-428FE0C8E03E")
IMFFrame: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFGetProcessID(
        /* [out] */ DWORD * _pdwProcessID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAVPropsGet(
        /* [out] */ M_AV_PROPS * _pProps,
        /* [out] */ long *_plAudioSamples) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAVPropsSet(
        /* [in] */ M_AV_PROPS * _pProps,
        /* [in] */ BSTR _bsChannelsRemap) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFTimeGet(
        /* [out] */ M_TIME * _pTime) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFTimeSet(
        /* [in] */ M_TIME * _pTime) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFFlagCheck(
        /* [in] */ eMFrameFlags _eFlagCheck,
        /* [out] */ int        *_pnRes) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAllGet(
        /* [out] */ MF_FRAME_INFO * _pFrameInfo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAudioGetBytes(
        /* [out] */ LONG * _pcbSize,
        /* [out] */ LONGLONG * _ppbAudio) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAudioChannelGetBytes(
        /* [in] */ int        _nChannel,
        /* [in] */ BOOL       _bCreateNewChannels,
        /* [out] */ LONG     *_pcbSize,
        /* [out] */ LONGLONG *_ppbAudio) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAudioChannelsUpdate(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAudioAlloc(
        /* [in] */ M_AUD_PROPS * _pAudProps,
        /* [in] */ LONG _lSamples) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAudioSet(
        /* [in] */ M_AUD_PROPS * _pAudProps,
        /* [in] */ LONG     _cbSize,
        /* [in] */ LONGLONG _pbAudio) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAudioMixDirect(
        /* [out][in] */ LONG * _plAudioOffsetSrc,
        /* [in] */ IMFFrame * _pFrameMixFrom,
        /* [out][in] */ LONG * _plAudioOffsetMix,
        /* [in] */ LONG   _lSamplesMixMax,
        /* [in] */ double _dblGainStartDb,
        /* [in] */ double _dblGainEndDb,
        /* [in] */ BOOL   _bSymmetricGain) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAudioMix(
        /* [in] */ IMFFrame * _pFrameMixFrom,
        /* [in] */ double _dblGainStartDb,
        /* [in] */ double _dblGainEndDb,
        /* [in] */ BOOL   _bSymmetricGain,
        /* [in] */ BSTR   _bsAudioBufferID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAudioCopyTo(
        /* [in] */ BSTR _bsChannelsList,
        /* [in] */ IMFFrame * _pFrameTo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAudioSaveToFile(
        /* [in] */ BSTR _bsFileName,
        /* [in] */ BOOL _bAppend) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAudioLoadFromFile(
        /* [in] */ BSTR     _bsFileName,
        /* [in] */ LONGLONG _llSamplesOffset,
        /* [in] */ LONG     _lSamplesLoad) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAudioGain(
        /* [in] */ BSTR   _bsChannelsList,
        /* [in] */ double _dblGainStartDb,
        /* [in] */ double _dblGainEndDb) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFVideoGetBytes(
        /* [out] */ LONG * _pcbSize,
        /* [out] */ LONGLONG * _ppbVideo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFVideoGetHbitmap(
        /* [out] */ LONGLONG * _pllHBitmap) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFVideoSaveToFile(
        /* [in] */ BSTR _bsFileName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFCut(
        /* [in] */ int         _nField,
        /* [in] */ RECT       *_pRect,
        /* [out] */ IMFFrame **_ppFrameRes) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFClone(
        /* [out] */ IMFFrame * *_ppCloneFrame,
        /* [in] */ eMFrameClone _eCloneType,
        /* [in] */ eMFCC        _fccPixelFormat) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFOverlay(
        /* [in] */ IUnknown * _pFrameOverlay,
        /* [in] */ IUnknown * _pFrameMask,
        /* [in] */ int    _nPosX,
        /* [in] */ int    _nPosY,
        /* [in] */ double _dblAlpha,
        /* [in] */ BSTR   _bsPropsList,
        /* [in] */ BSTR   _bsAudioBufferID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFConvert(
        /* [in] */ M_AV_PROPS * _pPropsDest,
        /* [out] */ IMFFrame * *_ppFrameRes,
        /* [out] */ int *_pnFrameRest,
        /* [in] */ BSTR  _bsPropsList,
        /* [in] */ BSTR  _bsConverterID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFResize(
        /* [in] */ eMFCC       _fccOutput,
        /* [in] */ int         _nWidth,
        /* [in] */ int         _nHeight,
        /* [in] */ int         _nResizeField,
        /* [out] */ IMFFrame **_ppFrameRes,
        /* [in] */ BSTR        _bsPropsList,
        /* [in] */ BSTR        _bsConverterID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFTransition(
        /* [in] */ IUnknown * _pFrameFrom,
        /* [out] */ IMFFrame * *_ppFrameRes,
        /* [in] */ double _dblPos,
        /* [in] */ BSTR   _bsTransition,
        /* [in] */ BSTR   _bsPropsList,
        /* [in] */ BSTR   _bsConverterID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFDataGetByIndex(
        /* [in] */ int        _nIndex,
        /* [out] */ BSTR     *_pbsDataID,
        /* [out] */ LONG     *_pcbANCData,
        /* [out] */ LONGLONG *_ppbANCData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFDataGet(
        /* [in] */ BSTR _bsDataID,
        /* [out] */ LONG * _pcbANCData,
        /* [out] */ LONGLONG * _ppbANCData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFDataSet(
        /* [in] */ BSTR     _bsDataID,
        /* [in] */ LONG     _cbANCData,
        /* [in] */ LONGLONG _pbANCData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFObjGetByIndex(
        /* [in] */ int         _nIndex,
        /* [out] */ BSTR      *_pbsObjID,
        /* [out] */ IUnknown **_ppObj,
        /* [in] */ BOOL        _bMakeLocal) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFObjGet(
        /* [in] */ BSTR _bsObjID,
        /* [out] */ IUnknown * *_ppObj,
        /* [in] */ BOOL _bMakeLocal) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFObjSet(
        /* [in] */ BSTR _bsObjID,
        /* [in] */ IUnknown * _pObj) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFStrGetByIndex(
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsStrID,
        /* [out] */ BSTR *_pbsString) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFStrGet(
        /* [in] */ BSTR _bsStrID,
        /* [out] */ BSTR * _pbsString) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFStrSet(
        /* [in] */ BSTR _bsStrID,
        /* [in] */ BSTR _bsString) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFSave(
        /* [out] */ DWORD * _pcbData,
        /* [size_is][size_is][out] */ BYTE * *_ppData,
        /* [in] */ eMFrameClone _eSaveType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFLoad(
        /* [in] */ DWORD _cbData,
        /* [size_is][in] */ BYTE * _pbData,
        /* [in] */ eMFrameClone _eLoadType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFWaitAsync(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFPrint(
        /* [in] */ BSTR         _bsText,
        /* [in] */ double       _dblTextSize,
        /* [in] */ MF_RECT     *_pRect,
        /* [in] */ eMFTextFlags _eMFTextFlags,
        /* [in] */ BSTR         _bsExtraParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFOverlayRect(
        /* [in] */ IMFFrame * _pFrameOverlay,
        /* [in] */ IMFFrame * _pFrameMask,
        /* [in] */ MF_RECT * _pRect,
        /* [in] */ eMFOverlayFlags _eMFOverlayFlags,
        /* [in] */ double          _dblAlpha,
        /* [in] */ BSTR            _bsPropsList,
        /* [in] */ BSTR            _bsAudioBufferID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFVideoGetBytesEx(
        /* [out] */ MF_VID_PTR * _pVideoPtr) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFSaveToStream(
        /* [out] */ IStream * *_ppStream,
        /* [in] */ eMFrameClone _eSaveType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFAddToStream(
        /* [in] */ IStream * _pStream,
        /* [in] */ eMFrameClone _eSaveType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFLoadFromStream(
        /* [in] */ IStream * _pStream,
        /* [in] */ eMFrameClone _eLoadType) = 0;
};

        #else /* C style interface */

typedef struct IMFFrameVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFFrame         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFFrame *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFFrame *This);

    DECLSPEC_XFGVIRT(IMFFrame, MFGetProcessID)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFGetProcessID)(IMFFrame          *This,
                                                                  /* [out] */ DWORD *_pdwProcessID);

    DECLSPEC_XFGVIRT(IMFFrame, MFAVPropsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAVPropsGet)(IMFFrame               *This,
                                                                /* [out] */ M_AV_PROPS *_pProps,
                                                                /* [out] */ long       *_plAudioSamples);

    DECLSPEC_XFGVIRT(IMFFrame, MFAVPropsSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAVPropsSet)(IMFFrame              *This,
                                                                /* [in] */ M_AV_PROPS *_pProps,
                                                                /* [in] */ BSTR        _bsChannelsRemap);

    DECLSPEC_XFGVIRT(IMFFrame, MFTimeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFTimeGet)(IMFFrame           *This,
                                                             /* [out] */ M_TIME *_pTime);

    DECLSPEC_XFGVIRT(IMFFrame, MFTimeSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFTimeSet)(IMFFrame          *This,
                                                             /* [in] */ M_TIME *_pTime);

    DECLSPEC_XFGVIRT(IMFFrame, MFFlagCheck)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFFlagCheck)(IMFFrame               *This,
                                                               /* [in] */ eMFrameFlags _eFlagCheck,
                                                               /* [out] */ int        *_pnRes);

    DECLSPEC_XFGVIRT(IMFFrame, MFAllGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAllGet)(IMFFrame                  *This,
                                                            /* [out] */ MF_FRAME_INFO *_pFrameInfo);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioGetBytes)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioGetBytes)(IMFFrame             *This,
                                                                   /* [out] */ LONG     *_pcbSize,
                                                                   /* [out] */ LONGLONG *_ppbAudio);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioChannelGetBytes)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioChannelGetBytes)(IMFFrame             *This,
                                                                          /* [in] */ int        _nChannel,
                                                                          /* [in] */ BOOL       _bCreateNewChannels,
                                                                          /* [out] */ LONG     *_pcbSize,
                                                                          /* [out] */ LONGLONG *_ppbAudio);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioChannelsUpdate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioChannelsUpdate)(IMFFrame *This);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioAlloc)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioAlloc)(IMFFrame               *This,
                                                                /* [in] */ M_AUD_PROPS *_pAudProps,
                                                                /* [in] */ LONG         _lSamples);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioSet)(IMFFrame               *This,
                                                              /* [in] */ M_AUD_PROPS *_pAudProps,
                                                              /* [in] */ LONG         _cbSize,
                                                              /* [in] */ LONGLONG     _pbAudio);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioMixDirect)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioMixDirect)(IMFFrame             *This,
                                                                    /* [out][in] */ LONG *_plAudioOffsetSrc,
                                                                    /* [in] */ IMFFrame  *_pFrameMixFrom,
                                                                    /* [out][in] */ LONG *_plAudioOffsetMix,
                                                                    /* [in] */ LONG       _lSamplesMixMax,
                                                                    /* [in] */ double     _dblGainStartDb,
                                                                    /* [in] */ double     _dblGainEndDb,
                                                                    /* [in] */ BOOL       _bSymmetricGain);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioMix)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioMix)(IMFFrame            *This,
                                                              /* [in] */ IMFFrame *_pFrameMixFrom,
                                                              /* [in] */ double    _dblGainStartDb,
                                                              /* [in] */ double    _dblGainEndDb,
                                                              /* [in] */ BOOL      _bSymmetricGain,
                                                              /* [in] */ BSTR      _bsAudioBufferID);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioCopyTo)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioCopyTo)(IMFFrame            *This,
                                                                 /* [in] */ BSTR      _bsChannelsList,
                                                                 /* [in] */ IMFFrame *_pFrameTo);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioSaveToFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioSaveToFile)(IMFFrame       *This,
                                                                     /* [in] */ BSTR _bsFileName,
                                                                     /* [in] */ BOOL _bAppend);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioLoadFromFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioLoadFromFile)(IMFFrame           *This,
                                                                       /* [in] */ BSTR     _bsFileName,
                                                                       /* [in] */ LONGLONG _llSamplesOffset,
                                                                       /* [in] */ LONG     _lSamplesLoad);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioGain)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioGain)(IMFFrame         *This,
                                                               /* [in] */ BSTR   _bsChannelsList,
                                                               /* [in] */ double _dblGainStartDb,
                                                               /* [in] */ double _dblGainEndDb);

    DECLSPEC_XFGVIRT(IMFFrame, MFVideoGetBytes)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFVideoGetBytes)(IMFFrame             *This,
                                                                   /* [out] */ LONG     *_pcbSize,
                                                                   /* [out] */ LONGLONG *_ppbVideo);

    DECLSPEC_XFGVIRT(IMFFrame, MFVideoGetHbitmap)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFVideoGetHbitmap)(IMFFrame             *This,
                                                                     /* [out] */ LONGLONG *_pllHBitmap);

    DECLSPEC_XFGVIRT(IMFFrame, MFVideoSaveToFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFVideoSaveToFile)(IMFFrame       *This,
                                                                     /* [in] */ BSTR _bsFileName);

    DECLSPEC_XFGVIRT(IMFFrame, MFCut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFCut)(IMFFrame              *This,
                                                         /* [in] */ int         _nField,
                                                         /* [in] */ RECT       *_pRect,
                                                         /* [out] */ IMFFrame **_ppFrameRes);

    DECLSPEC_XFGVIRT(IMFFrame, MFClone)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFClone)(IMFFrame               *This,
                                                           /* [out] */ IMFFrame  **_ppCloneFrame,
                                                           /* [in] */ eMFrameClone _eCloneType,
                                                           /* [in] */ eMFCC        _fccPixelFormat);

    DECLSPEC_XFGVIRT(IMFFrame, MFOverlay)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFOverlay)(IMFFrame            *This,
                                                             /* [in] */ IUnknown *_pFrameOverlay,
                                                             /* [in] */ IUnknown *_pFrameMask,
                                                             /* [in] */ int       _nPosX,
                                                             /* [in] */ int       _nPosY,
                                                             /* [in] */ double    _dblAlpha,
                                                             /* [in] */ BSTR      _bsPropsList,
                                                             /* [in] */ BSTR      _bsAudioBufferID);

    DECLSPEC_XFGVIRT(IMFFrame, MFConvert)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFConvert)(IMFFrame              *This,
                                                             /* [in] */ M_AV_PROPS *_pPropsDest,
                                                             /* [out] */ IMFFrame **_ppFrameRes,
                                                             /* [out] */ int       *_pnFrameRest,
                                                             /* [in] */ BSTR        _bsPropsList,
                                                             /* [in] */ BSTR        _bsConverterID);

    DECLSPEC_XFGVIRT(IMFFrame, MFResize)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFResize)(IMFFrame              *This,
                                                            /* [in] */ eMFCC       _fccOutput,
                                                            /* [in] */ int         _nWidth,
                                                            /* [in] */ int         _nHeight,
                                                            /* [in] */ int         _nResizeField,
                                                            /* [out] */ IMFFrame **_ppFrameRes,
                                                            /* [in] */ BSTR        _bsPropsList,
                                                            /* [in] */ BSTR        _bsConverterID);

    DECLSPEC_XFGVIRT(IMFFrame, MFTransition)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFTransition)(IMFFrame              *This,
                                                                /* [in] */ IUnknown   *_pFrameFrom,
                                                                /* [out] */ IMFFrame **_ppFrameRes,
                                                                /* [in] */ double      _dblPos,
                                                                /* [in] */ BSTR        _bsTransition,
                                                                /* [in] */ BSTR        _bsPropsList,
                                                                /* [in] */ BSTR        _bsConverterID);

    DECLSPEC_XFGVIRT(IMFFrame, MFDataGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFDataGetByIndex)(IMFFrame             *This,
                                                                    /* [in] */ int        _nIndex,
                                                                    /* [out] */ BSTR     *_pbsDataID,
                                                                    /* [out] */ LONG     *_pcbANCData,
                                                                    /* [out] */ LONGLONG *_ppbANCData);

    DECLSPEC_XFGVIRT(IMFFrame, MFDataGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFDataGet)(IMFFrame             *This,
                                                             /* [in] */ BSTR       _bsDataID,
                                                             /* [out] */ LONG     *_pcbANCData,
                                                             /* [out] */ LONGLONG *_ppbANCData);

    DECLSPEC_XFGVIRT(IMFFrame, MFDataSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFDataSet)(IMFFrame           *This,
                                                             /* [in] */ BSTR     _bsDataID,
                                                             /* [in] */ LONG     _cbANCData,
                                                             /* [in] */ LONGLONG _pbANCData);

    DECLSPEC_XFGVIRT(IMFFrame, MFObjGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFObjGetByIndex)(IMFFrame              *This,
                                                                   /* [in] */ int         _nIndex,
                                                                   /* [out] */ BSTR      *_pbsObjID,
                                                                   /* [out] */ IUnknown **_ppObj,
                                                                   /* [in] */ BOOL        _bMakeLocal);

    DECLSPEC_XFGVIRT(IMFFrame, MFObjGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFObjGet)(IMFFrame              *This,
                                                            /* [in] */ BSTR        _bsObjID,
                                                            /* [out] */ IUnknown **_ppObj,
                                                            /* [in] */ BOOL        _bMakeLocal);

    DECLSPEC_XFGVIRT(IMFFrame, MFObjSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFObjSet)(IMFFrame            *This,
                                                            /* [in] */ BSTR      _bsObjID,
                                                            /* [in] */ IUnknown *_pObj);

    DECLSPEC_XFGVIRT(IMFFrame, MFStrGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFStrGetByIndex)(IMFFrame         *This,
                                                                   /* [in] */ int    _nIndex,
                                                                   /* [out] */ BSTR *_pbsStrID,
                                                                   /* [out] */ BSTR *_pbsString);

    DECLSPEC_XFGVIRT(IMFFrame, MFStrGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFStrGet)(IMFFrame         *This,
                                                            /* [in] */ BSTR   _bsStrID,
                                                            /* [out] */ BSTR *_pbsString);

    DECLSPEC_XFGVIRT(IMFFrame, MFStrSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFStrSet)(IMFFrame       *This,
                                                            /* [in] */ BSTR _bsStrID,
                                                            /* [in] */ BSTR _bsString);

    DECLSPEC_XFGVIRT(IMFFrame, MFSave)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFSave)(IMFFrame                            *This,
                                                          /* [out] */ DWORD                   *_pcbData,
                                                          /* [size_is][size_is][out] */ BYTE **_ppData,
                                                          /* [in] */ eMFrameClone              _eSaveType);

    DECLSPEC_XFGVIRT(IMFFrame, MFLoad)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFLoad)(IMFFrame                 *This,
                                                          /* [in] */ DWORD          _cbData,
                                                          /* [size_is][in] */ BYTE *_pbData,
                                                          /* [in] */ eMFrameClone   _eLoadType);

    DECLSPEC_XFGVIRT(IMFFrame, MFWaitAsync)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFWaitAsync)(IMFFrame *This);

    DECLSPEC_XFGVIRT(IMFFrame, MFPrint)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFPrint)(IMFFrame               *This,
                                                           /* [in] */ BSTR         _bsText,
                                                           /* [in] */ double       _dblTextSize,
                                                           /* [in] */ MF_RECT     *_pRect,
                                                           /* [in] */ eMFTextFlags _eMFTextFlags,
                                                           /* [in] */ BSTR         _bsExtraParam);

    DECLSPEC_XFGVIRT(IMFFrame, MFOverlayRect)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFOverlayRect)(IMFFrame                  *This,
                                                                 /* [in] */ IMFFrame       *_pFrameOverlay,
                                                                 /* [in] */ IMFFrame       *_pFrameMask,
                                                                 /* [in] */ MF_RECT        *_pRect,
                                                                 /* [in] */ eMFOverlayFlags _eMFOverlayFlags,
                                                                 /* [in] */ double          _dblAlpha,
                                                                 /* [in] */ BSTR            _bsPropsList,
                                                                 /* [in] */ BSTR            _bsAudioBufferID);

    DECLSPEC_XFGVIRT(IMFFrame, MFVideoGetBytesEx)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFVideoGetBytesEx)(IMFFrame               *This,
                                                                     /* [out] */ MF_VID_PTR *_pVideoPtr);

    DECLSPEC_XFGVIRT(IMFFrame, MFSaveToStream)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFSaveToStream)(IMFFrame               *This,
                                                                  /* [out] */ IStream   **_ppStream,
                                                                  /* [in] */ eMFrameClone _eSaveType);

    DECLSPEC_XFGVIRT(IMFFrame, MFAddToStream)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAddToStream)(IMFFrame               *This,
                                                                 /* [in] */ IStream     *_pStream,
                                                                 /* [in] */ eMFrameClone _eSaveType);

    DECLSPEC_XFGVIRT(IMFFrame, MFLoadFromStream)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFLoadFromStream)(IMFFrame               *This,
                                                                    /* [in] */ IStream     *_pStream,
                                                                    /* [in] */ eMFrameClone _eLoadType);

    END_INTERFACE
} IMFFrameVtbl;

interface IMFFrame { CONST_VTBL struct IMFFrameVtbl *lpVtbl; };

            #ifdef COBJMACROS

                #define IMFFrame_QueryInterface(This, riid, ppvObject) \
                    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

                #define IMFFrame_AddRef(This) ((This)->lpVtbl->AddRef(This))

                #define IMFFrame_Release(This) ((This)->lpVtbl->Release(This))

                #define IMFFrame_MFGetProcessID(This, _pdwProcessID) \
                    ((This)->lpVtbl->MFGetProcessID(This, _pdwProcessID))

                #define IMFFrame_MFAVPropsGet(This, _pProps, _plAudioSamples) \
                    ((This)->lpVtbl->MFAVPropsGet(This, _pProps, _plAudioSamples))

                #define IMFFrame_MFAVPropsSet(This, _pProps, _bsChannelsRemap) \
                    ((This)->lpVtbl->MFAVPropsSet(This, _pProps, _bsChannelsRemap))

                #define IMFFrame_MFTimeGet(This, _pTime) ((This)->lpVtbl->MFTimeGet(This, _pTime))

                #define IMFFrame_MFTimeSet(This, _pTime) ((This)->lpVtbl->MFTimeSet(This, _pTime))

                #define IMFFrame_MFFlagCheck(This, _eFlagCheck, _pnRes) \
                    ((This)->lpVtbl->MFFlagCheck(This, _eFlagCheck, _pnRes))

                #define IMFFrame_MFAllGet(This, _pFrameInfo) ((This)->lpVtbl->MFAllGet(This, _pFrameInfo))

                #define IMFFrame_MFAudioGetBytes(This, _pcbSize, _ppbAudio) \
                    ((This)->lpVtbl->MFAudioGetBytes(This, _pcbSize, _ppbAudio))

                #define IMFFrame_MFAudioChannelGetBytes(This, _nChannel, _bCreateNewChannels, _pcbSize, _ppbAudio) \
                    ((This)->lpVtbl->MFAudioChannelGetBytes(This, _nChannel, _bCreateNewChannels, _pcbSize, _ppbAudio))

                #define IMFFrame_MFAudioChannelsUpdate(This) ((This)->lpVtbl->MFAudioChannelsUpdate(This))

                #define IMFFrame_MFAudioAlloc(This, _pAudProps, _lSamples) \
                    ((This)->lpVtbl->MFAudioAlloc(This, _pAudProps, _lSamples))

                #define IMFFrame_MFAudioSet(This, _pAudProps, _cbSize, _pbAudio) \
                    ((This)->lpVtbl->MFAudioSet(This, _pAudProps, _cbSize, _pbAudio))

                #define IMFFrame_MFAudioMixDirect(This,                  \
                                                  _plAudioOffsetSrc,     \
                                                  _pFrameMixFrom,        \
                                                  _plAudioOffsetMix,     \
                                                  _lSamplesMixMax,       \
                                                  _dblGainStartDb,       \
                                                  _dblGainEndDb,         \
                                                  _bSymmetricGain)       \
                    ((This)->lpVtbl->MFAudioMixDirect(This,              \
                                                      _plAudioOffsetSrc, \
                                                      _pFrameMixFrom,    \
                                                      _plAudioOffsetMix, \
                                                      _lSamplesMixMax,   \
                                                      _dblGainStartDb,   \
                                                      _dblGainEndDb,     \
                                                      _bSymmetricGain))

                #define IMFFrame_MFAudioMix(This,                \
                                            _pFrameMixFrom,      \
                                            _dblGainStartDb,     \
                                            _dblGainEndDb,       \
                                            _bSymmetricGain,     \
                                            _bsAudioBufferID)    \
                    ((This)->lpVtbl->MFAudioMix(This,            \
                                                _pFrameMixFrom,  \
                                                _dblGainStartDb, \
                                                _dblGainEndDb,   \
                                                _bSymmetricGain, \
                                                _bsAudioBufferID))

                #define IMFFrame_MFAudioCopyTo(This, _bsChannelsList, _pFrameTo) \
                    ((This)->lpVtbl->MFAudioCopyTo(This, _bsChannelsList, _pFrameTo))

                #define IMFFrame_MFAudioSaveToFile(This, _bsFileName, _bAppend) \
                    ((This)->lpVtbl->MFAudioSaveToFile(This, _bsFileName, _bAppend))

                #define IMFFrame_MFAudioLoadFromFile(This, _bsFileName, _llSamplesOffset, _lSamplesLoad) \
                    ((This)->lpVtbl->MFAudioLoadFromFile(This, _bsFileName, _llSamplesOffset, _lSamplesLoad))

                #define IMFFrame_MFAudioGain(This, _bsChannelsList, _dblGainStartDb, _dblGainEndDb) \
                    ((This)->lpVtbl->MFAudioGain(This, _bsChannelsList, _dblGainStartDb, _dblGainEndDb))

                #define IMFFrame_MFVideoGetBytes(This, _pcbSize, _ppbVideo) \
                    ((This)->lpVtbl->MFVideoGetBytes(This, _pcbSize, _ppbVideo))

                #define IMFFrame_MFVideoGetHbitmap(This, _pllHBitmap) \
                    ((This)->lpVtbl->MFVideoGetHbitmap(This, _pllHBitmap))

                #define IMFFrame_MFVideoSaveToFile(This, _bsFileName) \
                    ((This)->lpVtbl->MFVideoSaveToFile(This, _bsFileName))

                #define IMFFrame_MFCut(This, _nField, _pRect, _ppFrameRes) \
                    ((This)->lpVtbl->MFCut(This, _nField, _pRect, _ppFrameRes))

                #define IMFFrame_MFClone(This, _ppCloneFrame, _eCloneType, _fccPixelFormat) \
                    ((This)->lpVtbl->MFClone(This, _ppCloneFrame, _eCloneType, _fccPixelFormat))

                #define IMFFrame_MFOverlay(This,               \
                                           _pFrameOverlay,     \
                                           _pFrameMask,        \
                                           _nPosX,             \
                                           _nPosY,             \
                                           _dblAlpha,          \
                                           _bsPropsList,       \
                                           _bsAudioBufferID)   \
                    ((This)->lpVtbl->MFOverlay(This,           \
                                               _pFrameOverlay, \
                                               _pFrameMask,    \
                                               _nPosX,         \
                                               _nPosY,         \
                                               _dblAlpha,      \
                                               _bsPropsList,   \
                                               _bsAudioBufferID))

                #define IMFFrame_MFConvert(This, _pPropsDest, _ppFrameRes, _pnFrameRest, _bsPropsList, _bsConverterID) \
                    ((This)->lpVtbl->MFConvert(This,                                                                   \
                                               _pPropsDest,                                                            \
                                               _ppFrameRes,                                                            \
                                               _pnFrameRest,                                                           \
                                               _bsPropsList,                                                           \
                                               _bsConverterID))

                #define IMFFrame_MFResize(This,              \
                                          _fccOutput,        \
                                          _nWidth,           \
                                          _nHeight,          \
                                          _nResizeField,     \
                                          _ppFrameRes,       \
                                          _bsPropsList,      \
                                          _bsConverterID)    \
                    ((This)->lpVtbl->MFResize(This,          \
                                              _fccOutput,    \
                                              _nWidth,       \
                                              _nHeight,      \
                                              _nResizeField, \
                                              _ppFrameRes,   \
                                              _bsPropsList,  \
                                              _bsConverterID))

                #define IMFFrame_MFTransition(This,              \
                                              _pFrameFrom,       \
                                              _ppFrameRes,       \
                                              _dblPos,           \
                                              _bsTransition,     \
                                              _bsPropsList,      \
                                              _bsConverterID)    \
                    ((This)->lpVtbl->MFTransition(This,          \
                                                  _pFrameFrom,   \
                                                  _ppFrameRes,   \
                                                  _dblPos,       \
                                                  _bsTransition, \
                                                  _bsPropsList,  \
                                                  _bsConverterID))

                #define IMFFrame_MFDataGetByIndex(This, _nIndex, _pbsDataID, _pcbANCData, _ppbANCData) \
                    ((This)->lpVtbl->MFDataGetByIndex(This, _nIndex, _pbsDataID, _pcbANCData, _ppbANCData))

                #define IMFFrame_MFDataGet(This, _bsDataID, _pcbANCData, _ppbANCData) \
                    ((This)->lpVtbl->MFDataGet(This, _bsDataID, _pcbANCData, _ppbANCData))

                #define IMFFrame_MFDataSet(This, _bsDataID, _cbANCData, _pbANCData) \
                    ((This)->lpVtbl->MFDataSet(This, _bsDataID, _cbANCData, _pbANCData))

                #define IMFFrame_MFObjGetByIndex(This, _nIndex, _pbsObjID, _ppObj, _bMakeLocal) \
                    ((This)->lpVtbl->MFObjGetByIndex(This, _nIndex, _pbsObjID, _ppObj, _bMakeLocal))

                #define IMFFrame_MFObjGet(This, _bsObjID, _ppObj, _bMakeLocal) \
                    ((This)->lpVtbl->MFObjGet(This, _bsObjID, _ppObj, _bMakeLocal))

                #define IMFFrame_MFObjSet(This, _bsObjID, _pObj) ((This)->lpVtbl->MFObjSet(This, _bsObjID, _pObj))

                #define IMFFrame_MFStrGetByIndex(This, _nIndex, _pbsStrID, _pbsString) \
                    ((This)->lpVtbl->MFStrGetByIndex(This, _nIndex, _pbsStrID, _pbsString))

                #define IMFFrame_MFStrGet(This, _bsStrID, _pbsString) \
                    ((This)->lpVtbl->MFStrGet(This, _bsStrID, _pbsString))

                #define IMFFrame_MFStrSet(This, _bsStrID, _bsString) \
                    ((This)->lpVtbl->MFStrSet(This, _bsStrID, _bsString))

                #define IMFFrame_MFSave(This, _pcbData, _ppData, _eSaveType) \
                    ((This)->lpVtbl->MFSave(This, _pcbData, _ppData, _eSaveType))

                #define IMFFrame_MFLoad(This, _cbData, _pbData, _eLoadType) \
                    ((This)->lpVtbl->MFLoad(This, _cbData, _pbData, _eLoadType))

                #define IMFFrame_MFWaitAsync(This) ((This)->lpVtbl->MFWaitAsync(This))

                #define IMFFrame_MFPrint(This, _bsText, _dblTextSize, _pRect, _eMFTextFlags, _bsExtraParam) \
                    ((This)->lpVtbl->MFPrint(This, _bsText, _dblTextSize, _pRect, _eMFTextFlags, _bsExtraParam))

                #define IMFFrame_MFOverlayRect(This,                 \
                                               _pFrameOverlay,       \
                                               _pFrameMask,          \
                                               _pRect,               \
                                               _eMFOverlayFlags,     \
                                               _dblAlpha,            \
                                               _bsPropsList,         \
                                               _bsAudioBufferID)     \
                    ((This)->lpVtbl->MFOverlayRect(This,             \
                                                   _pFrameOverlay,   \
                                                   _pFrameMask,      \
                                                   _pRect,           \
                                                   _eMFOverlayFlags, \
                                                   _dblAlpha,        \
                                                   _bsPropsList,     \
                                                   _bsAudioBufferID))

                #define IMFFrame_MFVideoGetBytesEx(This, _pVideoPtr) \
                    ((This)->lpVtbl->MFVideoGetBytesEx(This, _pVideoPtr))

                #define IMFFrame_MFSaveToStream(This, _ppStream, _eSaveType) \
                    ((This)->lpVtbl->MFSaveToStream(This, _ppStream, _eSaveType))

                #define IMFFrame_MFAddToStream(This, _pStream, _eSaveType) \
                    ((This)->lpVtbl->MFAddToStream(This, _pStream, _eSaveType))

                #define IMFFrame_MFLoadFromStream(This, _pStream, _eLoadType) \
                    ((This)->lpVtbl->MFLoadFromStream(This, _pStream, _eLoadType))

            #endif /* COBJMACROS */

        #endif /* C style interface */

    #endif /* __IMFFrame_INTERFACE_DEFINED__ */

    #ifndef __IMFFrameGPU_INTERFACE_DEFINED__
        #define __IMFFrameGPU_INTERFACE_DEFINED__

/* interface IMFFrameGPU */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFFrameGPU;

        #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F377264-473F-4ad5-A5C2-428FE0C8E03E")
IMFFrameGPU: public IMFFrame
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFVideoLock(
        /* [in] */ eMFLockType eLockType,
        /* [in] */ eMFCC       ePixelFormat,
        /* [out] */ M_VID_PROPS * pVidProps,
        /* [out] */ MF_VID_PTR * pVideoPtr,
        /* [in] */ BSTR bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFVideoUnlock(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFVideoGetTexture(
        /* [in] */ int         nField,
        /* [out] */ IUnknown **ppTexture,
        /* [in] */ BSTR        bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFVideoWaitExecution(
        /* [in] */ BSTR bsHints) = 0;
};

        #else /* C style interface */

typedef struct IMFFrameGPUVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFFrameGPU      *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFFrameGPU *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFFrameGPU *This);

    DECLSPEC_XFGVIRT(IMFFrame, MFGetProcessID)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFGetProcessID)(IMFFrameGPU       *This,
                                                                  /* [out] */ DWORD *_pdwProcessID);

    DECLSPEC_XFGVIRT(IMFFrame, MFAVPropsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAVPropsGet)(IMFFrameGPU            *This,
                                                                /* [out] */ M_AV_PROPS *_pProps,
                                                                /* [out] */ long       *_plAudioSamples);

    DECLSPEC_XFGVIRT(IMFFrame, MFAVPropsSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAVPropsSet)(IMFFrameGPU           *This,
                                                                /* [in] */ M_AV_PROPS *_pProps,
                                                                /* [in] */ BSTR        _bsChannelsRemap);

    DECLSPEC_XFGVIRT(IMFFrame, MFTimeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFTimeGet)(IMFFrameGPU        *This,
                                                             /* [out] */ M_TIME *_pTime);

    DECLSPEC_XFGVIRT(IMFFrame, MFTimeSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFTimeSet)(IMFFrameGPU       *This,
                                                             /* [in] */ M_TIME *_pTime);

    DECLSPEC_XFGVIRT(IMFFrame, MFFlagCheck)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFFlagCheck)(IMFFrameGPU            *This,
                                                               /* [in] */ eMFrameFlags _eFlagCheck,
                                                               /* [out] */ int        *_pnRes);

    DECLSPEC_XFGVIRT(IMFFrame, MFAllGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAllGet)(IMFFrameGPU               *This,
                                                            /* [out] */ MF_FRAME_INFO *_pFrameInfo);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioGetBytes)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioGetBytes)(IMFFrameGPU          *This,
                                                                   /* [out] */ LONG     *_pcbSize,
                                                                   /* [out] */ LONGLONG *_ppbAudio);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioChannelGetBytes)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioChannelGetBytes)(IMFFrameGPU          *This,
                                                                          /* [in] */ int        _nChannel,
                                                                          /* [in] */ BOOL       _bCreateNewChannels,
                                                                          /* [out] */ LONG     *_pcbSize,
                                                                          /* [out] */ LONGLONG *_ppbAudio);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioChannelsUpdate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioChannelsUpdate)(IMFFrameGPU *This);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioAlloc)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioAlloc)(IMFFrameGPU            *This,
                                                                /* [in] */ M_AUD_PROPS *_pAudProps,
                                                                /* [in] */ LONG         _lSamples);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioSet)(IMFFrameGPU            *This,
                                                              /* [in] */ M_AUD_PROPS *_pAudProps,
                                                              /* [in] */ LONG         _cbSize,
                                                              /* [in] */ LONGLONG     _pbAudio);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioMixDirect)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioMixDirect)(IMFFrameGPU          *This,
                                                                    /* [out][in] */ LONG *_plAudioOffsetSrc,
                                                                    /* [in] */ IMFFrame  *_pFrameMixFrom,
                                                                    /* [out][in] */ LONG *_plAudioOffsetMix,
                                                                    /* [in] */ LONG       _lSamplesMixMax,
                                                                    /* [in] */ double     _dblGainStartDb,
                                                                    /* [in] */ double     _dblGainEndDb,
                                                                    /* [in] */ BOOL       _bSymmetricGain);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioMix)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioMix)(IMFFrameGPU         *This,
                                                              /* [in] */ IMFFrame *_pFrameMixFrom,
                                                              /* [in] */ double    _dblGainStartDb,
                                                              /* [in] */ double    _dblGainEndDb,
                                                              /* [in] */ BOOL      _bSymmetricGain,
                                                              /* [in] */ BSTR      _bsAudioBufferID);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioCopyTo)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioCopyTo)(IMFFrameGPU         *This,
                                                                 /* [in] */ BSTR      _bsChannelsList,
                                                                 /* [in] */ IMFFrame *_pFrameTo);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioSaveToFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioSaveToFile)(IMFFrameGPU    *This,
                                                                     /* [in] */ BSTR _bsFileName,
                                                                     /* [in] */ BOOL _bAppend);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioLoadFromFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioLoadFromFile)(IMFFrameGPU        *This,
                                                                       /* [in] */ BSTR     _bsFileName,
                                                                       /* [in] */ LONGLONG _llSamplesOffset,
                                                                       /* [in] */ LONG     _lSamplesLoad);

    DECLSPEC_XFGVIRT(IMFFrame, MFAudioGain)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAudioGain)(IMFFrameGPU      *This,
                                                               /* [in] */ BSTR   _bsChannelsList,
                                                               /* [in] */ double _dblGainStartDb,
                                                               /* [in] */ double _dblGainEndDb);

    DECLSPEC_XFGVIRT(IMFFrame, MFVideoGetBytes)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFVideoGetBytes)(IMFFrameGPU          *This,
                                                                   /* [out] */ LONG     *_pcbSize,
                                                                   /* [out] */ LONGLONG *_ppbVideo);

    DECLSPEC_XFGVIRT(IMFFrame, MFVideoGetHbitmap)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFVideoGetHbitmap)(IMFFrameGPU          *This,
                                                                     /* [out] */ LONGLONG *_pllHBitmap);

    DECLSPEC_XFGVIRT(IMFFrame, MFVideoSaveToFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFVideoSaveToFile)(IMFFrameGPU    *This,
                                                                     /* [in] */ BSTR _bsFileName);

    DECLSPEC_XFGVIRT(IMFFrame, MFCut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFCut)(IMFFrameGPU           *This,
                                                         /* [in] */ int         _nField,
                                                         /* [in] */ RECT       *_pRect,
                                                         /* [out] */ IMFFrame **_ppFrameRes);

    DECLSPEC_XFGVIRT(IMFFrame, MFClone)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFClone)(IMFFrameGPU            *This,
                                                           /* [out] */ IMFFrame  **_ppCloneFrame,
                                                           /* [in] */ eMFrameClone _eCloneType,
                                                           /* [in] */ eMFCC        _fccPixelFormat);

    DECLSPEC_XFGVIRT(IMFFrame, MFOverlay)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFOverlay)(IMFFrameGPU         *This,
                                                             /* [in] */ IUnknown *_pFrameOverlay,
                                                             /* [in] */ IUnknown *_pFrameMask,
                                                             /* [in] */ int       _nPosX,
                                                             /* [in] */ int       _nPosY,
                                                             /* [in] */ double    _dblAlpha,
                                                             /* [in] */ BSTR      _bsPropsList,
                                                             /* [in] */ BSTR      _bsAudioBufferID);

    DECLSPEC_XFGVIRT(IMFFrame, MFConvert)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFConvert)(IMFFrameGPU           *This,
                                                             /* [in] */ M_AV_PROPS *_pPropsDest,
                                                             /* [out] */ IMFFrame **_ppFrameRes,
                                                             /* [out] */ int       *_pnFrameRest,
                                                             /* [in] */ BSTR        _bsPropsList,
                                                             /* [in] */ BSTR        _bsConverterID);

    DECLSPEC_XFGVIRT(IMFFrame, MFResize)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFResize)(IMFFrameGPU           *This,
                                                            /* [in] */ eMFCC       _fccOutput,
                                                            /* [in] */ int         _nWidth,
                                                            /* [in] */ int         _nHeight,
                                                            /* [in] */ int         _nResizeField,
                                                            /* [out] */ IMFFrame **_ppFrameRes,
                                                            /* [in] */ BSTR        _bsPropsList,
                                                            /* [in] */ BSTR        _bsConverterID);

    DECLSPEC_XFGVIRT(IMFFrame, MFTransition)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFTransition)(IMFFrameGPU           *This,
                                                                /* [in] */ IUnknown   *_pFrameFrom,
                                                                /* [out] */ IMFFrame **_ppFrameRes,
                                                                /* [in] */ double      _dblPos,
                                                                /* [in] */ BSTR        _bsTransition,
                                                                /* [in] */ BSTR        _bsPropsList,
                                                                /* [in] */ BSTR        _bsConverterID);

    DECLSPEC_XFGVIRT(IMFFrame, MFDataGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFDataGetByIndex)(IMFFrameGPU          *This,
                                                                    /* [in] */ int        _nIndex,
                                                                    /* [out] */ BSTR     *_pbsDataID,
                                                                    /* [out] */ LONG     *_pcbANCData,
                                                                    /* [out] */ LONGLONG *_ppbANCData);

    DECLSPEC_XFGVIRT(IMFFrame, MFDataGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFDataGet)(IMFFrameGPU          *This,
                                                             /* [in] */ BSTR       _bsDataID,
                                                             /* [out] */ LONG     *_pcbANCData,
                                                             /* [out] */ LONGLONG *_ppbANCData);

    DECLSPEC_XFGVIRT(IMFFrame, MFDataSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFDataSet)(IMFFrameGPU        *This,
                                                             /* [in] */ BSTR     _bsDataID,
                                                             /* [in] */ LONG     _cbANCData,
                                                             /* [in] */ LONGLONG _pbANCData);

    DECLSPEC_XFGVIRT(IMFFrame, MFObjGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFObjGetByIndex)(IMFFrameGPU           *This,
                                                                   /* [in] */ int         _nIndex,
                                                                   /* [out] */ BSTR      *_pbsObjID,
                                                                   /* [out] */ IUnknown **_ppObj,
                                                                   /* [in] */ BOOL        _bMakeLocal);

    DECLSPEC_XFGVIRT(IMFFrame, MFObjGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFObjGet)(IMFFrameGPU           *This,
                                                            /* [in] */ BSTR        _bsObjID,
                                                            /* [out] */ IUnknown **_ppObj,
                                                            /* [in] */ BOOL        _bMakeLocal);

    DECLSPEC_XFGVIRT(IMFFrame, MFObjSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFObjSet)(IMFFrameGPU         *This,
                                                            /* [in] */ BSTR      _bsObjID,
                                                            /* [in] */ IUnknown *_pObj);

    DECLSPEC_XFGVIRT(IMFFrame, MFStrGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFStrGetByIndex)(IMFFrameGPU      *This,
                                                                   /* [in] */ int    _nIndex,
                                                                   /* [out] */ BSTR *_pbsStrID,
                                                                   /* [out] */ BSTR *_pbsString);

    DECLSPEC_XFGVIRT(IMFFrame, MFStrGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFStrGet)(IMFFrameGPU      *This,
                                                            /* [in] */ BSTR   _bsStrID,
                                                            /* [out] */ BSTR *_pbsString);

    DECLSPEC_XFGVIRT(IMFFrame, MFStrSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFStrSet)(IMFFrameGPU    *This,
                                                            /* [in] */ BSTR _bsStrID,
                                                            /* [in] */ BSTR _bsString);

    DECLSPEC_XFGVIRT(IMFFrame, MFSave)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFSave)(IMFFrameGPU                         *This,
                                                          /* [out] */ DWORD                   *_pcbData,
                                                          /* [size_is][size_is][out] */ BYTE **_ppData,
                                                          /* [in] */ eMFrameClone              _eSaveType);

    DECLSPEC_XFGVIRT(IMFFrame, MFLoad)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFLoad)(IMFFrameGPU              *This,
                                                          /* [in] */ DWORD          _cbData,
                                                          /* [size_is][in] */ BYTE *_pbData,
                                                          /* [in] */ eMFrameClone   _eLoadType);

    DECLSPEC_XFGVIRT(IMFFrame, MFWaitAsync)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFWaitAsync)(IMFFrameGPU *This);

    DECLSPEC_XFGVIRT(IMFFrame, MFPrint)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFPrint)(IMFFrameGPU            *This,
                                                           /* [in] */ BSTR         _bsText,
                                                           /* [in] */ double       _dblTextSize,
                                                           /* [in] */ MF_RECT     *_pRect,
                                                           /* [in] */ eMFTextFlags _eMFTextFlags,
                                                           /* [in] */ BSTR         _bsExtraParam);

    DECLSPEC_XFGVIRT(IMFFrame, MFOverlayRect)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFOverlayRect)(IMFFrameGPU               *This,
                                                                 /* [in] */ IMFFrame       *_pFrameOverlay,
                                                                 /* [in] */ IMFFrame       *_pFrameMask,
                                                                 /* [in] */ MF_RECT        *_pRect,
                                                                 /* [in] */ eMFOverlayFlags _eMFOverlayFlags,
                                                                 /* [in] */ double          _dblAlpha,
                                                                 /* [in] */ BSTR            _bsPropsList,
                                                                 /* [in] */ BSTR            _bsAudioBufferID);

    DECLSPEC_XFGVIRT(IMFFrame, MFVideoGetBytesEx)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFVideoGetBytesEx)(IMFFrameGPU            *This,
                                                                     /* [out] */ MF_VID_PTR *_pVideoPtr);

    DECLSPEC_XFGVIRT(IMFFrame, MFSaveToStream)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFSaveToStream)(IMFFrameGPU            *This,
                                                                  /* [out] */ IStream   **_ppStream,
                                                                  /* [in] */ eMFrameClone _eSaveType);

    DECLSPEC_XFGVIRT(IMFFrame, MFAddToStream)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFAddToStream)(IMFFrameGPU            *This,
                                                                 /* [in] */ IStream     *_pStream,
                                                                 /* [in] */ eMFrameClone _eSaveType);

    DECLSPEC_XFGVIRT(IMFFrame, MFLoadFromStream)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFLoadFromStream)(IMFFrameGPU            *This,
                                                                    /* [in] */ IStream     *_pStream,
                                                                    /* [in] */ eMFrameClone _eLoadType);

    DECLSPEC_XFGVIRT(IMFFrameGPU, MFVideoLock)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFVideoLock)(IMFFrameGPU             *This,
                                                               /* [in] */ eMFLockType   eLockType,
                                                               /* [in] */ eMFCC         ePixelFormat,
                                                               /* [out] */ M_VID_PROPS *pVidProps,
                                                               /* [out] */ MF_VID_PTR  *pVideoPtr,
                                                               /* [in] */ BSTR          bsHints);

    DECLSPEC_XFGVIRT(IMFFrameGPU, MFVideoUnlock)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFVideoUnlock)(IMFFrameGPU *This);

    DECLSPEC_XFGVIRT(IMFFrameGPU, MFVideoGetTexture)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFVideoGetTexture)(IMFFrameGPU           *This,
                                                                     /* [in] */ int         nField,
                                                                     /* [out] */ IUnknown **ppTexture,
                                                                     /* [in] */ BSTR        bsHints);

    DECLSPEC_XFGVIRT(IMFFrameGPU, MFVideoWaitExecution)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFVideoWaitExecution)(IMFFrameGPU    *This,
                                                                        /* [in] */ BSTR bsHints);

    END_INTERFACE
} IMFFrameGPUVtbl;

interface IMFFrameGPU { CONST_VTBL struct IMFFrameGPUVtbl *lpVtbl; };

            #ifdef COBJMACROS

                #define IMFFrameGPU_QueryInterface(This, riid, ppvObject) \
                    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

                #define IMFFrameGPU_AddRef(This) ((This)->lpVtbl->AddRef(This))

                #define IMFFrameGPU_Release(This) ((This)->lpVtbl->Release(This))

                #define IMFFrameGPU_MFGetProcessID(This, _pdwProcessID) \
                    ((This)->lpVtbl->MFGetProcessID(This, _pdwProcessID))

                #define IMFFrameGPU_MFAVPropsGet(This, _pProps, _plAudioSamples) \
                    ((This)->lpVtbl->MFAVPropsGet(This, _pProps, _plAudioSamples))

                #define IMFFrameGPU_MFAVPropsSet(This, _pProps, _bsChannelsRemap) \
                    ((This)->lpVtbl->MFAVPropsSet(This, _pProps, _bsChannelsRemap))

                #define IMFFrameGPU_MFTimeGet(This, _pTime) ((This)->lpVtbl->MFTimeGet(This, _pTime))

                #define IMFFrameGPU_MFTimeSet(This, _pTime) ((This)->lpVtbl->MFTimeSet(This, _pTime))

                #define IMFFrameGPU_MFFlagCheck(This, _eFlagCheck, _pnRes) \
                    ((This)->lpVtbl->MFFlagCheck(This, _eFlagCheck, _pnRes))

                #define IMFFrameGPU_MFAllGet(This, _pFrameInfo) ((This)->lpVtbl->MFAllGet(This, _pFrameInfo))

                #define IMFFrameGPU_MFAudioGetBytes(This, _pcbSize, _ppbAudio) \
                    ((This)->lpVtbl->MFAudioGetBytes(This, _pcbSize, _ppbAudio))

                #define IMFFrameGPU_MFAudioChannelGetBytes(This, _nChannel, _bCreateNewChannels, _pcbSize, _ppbAudio) \
                    ((This)->lpVtbl->MFAudioChannelGetBytes(This, _nChannel, _bCreateNewChannels, _pcbSize, _ppbAudio))

                #define IMFFrameGPU_MFAudioChannelsUpdate(This) ((This)->lpVtbl->MFAudioChannelsUpdate(This))

                #define IMFFrameGPU_MFAudioAlloc(This, _pAudProps, _lSamples) \
                    ((This)->lpVtbl->MFAudioAlloc(This, _pAudProps, _lSamples))

                #define IMFFrameGPU_MFAudioSet(This, _pAudProps, _cbSize, _pbAudio) \
                    ((This)->lpVtbl->MFAudioSet(This, _pAudProps, _cbSize, _pbAudio))

                #define IMFFrameGPU_MFAudioMixDirect(This,               \
                                                     _plAudioOffsetSrc,  \
                                                     _pFrameMixFrom,     \
                                                     _plAudioOffsetMix,  \
                                                     _lSamplesMixMax,    \
                                                     _dblGainStartDb,    \
                                                     _dblGainEndDb,      \
                                                     _bSymmetricGain)    \
                    ((This)->lpVtbl->MFAudioMixDirect(This,              \
                                                      _plAudioOffsetSrc, \
                                                      _pFrameMixFrom,    \
                                                      _plAudioOffsetMix, \
                                                      _lSamplesMixMax,   \
                                                      _dblGainStartDb,   \
                                                      _dblGainEndDb,     \
                                                      _bSymmetricGain))

                #define IMFFrameGPU_MFAudioMix(This,             \
                                               _pFrameMixFrom,   \
                                               _dblGainStartDb,  \
                                               _dblGainEndDb,    \
                                               _bSymmetricGain,  \
                                               _bsAudioBufferID) \
                    ((This)->lpVtbl->MFAudioMix(This,            \
                                                _pFrameMixFrom,  \
                                                _dblGainStartDb, \
                                                _dblGainEndDb,   \
                                                _bSymmetricGain, \
                                                _bsAudioBufferID))

                #define IMFFrameGPU_MFAudioCopyTo(This, _bsChannelsList, _pFrameTo) \
                    ((This)->lpVtbl->MFAudioCopyTo(This, _bsChannelsList, _pFrameTo))

                #define IMFFrameGPU_MFAudioSaveToFile(This, _bsFileName, _bAppend) \
                    ((This)->lpVtbl->MFAudioSaveToFile(This, _bsFileName, _bAppend))

                #define IMFFrameGPU_MFAudioLoadFromFile(This, _bsFileName, _llSamplesOffset, _lSamplesLoad) \
                    ((This)->lpVtbl->MFAudioLoadFromFile(This, _bsFileName, _llSamplesOffset, _lSamplesLoad))

                #define IMFFrameGPU_MFAudioGain(This, _bsChannelsList, _dblGainStartDb, _dblGainEndDb) \
                    ((This)->lpVtbl->MFAudioGain(This, _bsChannelsList, _dblGainStartDb, _dblGainEndDb))

                #define IMFFrameGPU_MFVideoGetBytes(This, _pcbSize, _ppbVideo) \
                    ((This)->lpVtbl->MFVideoGetBytes(This, _pcbSize, _ppbVideo))

                #define IMFFrameGPU_MFVideoGetHbitmap(This, _pllHBitmap) \
                    ((This)->lpVtbl->MFVideoGetHbitmap(This, _pllHBitmap))

                #define IMFFrameGPU_MFVideoSaveToFile(This, _bsFileName) \
                    ((This)->lpVtbl->MFVideoSaveToFile(This, _bsFileName))

                #define IMFFrameGPU_MFCut(This, _nField, _pRect, _ppFrameRes) \
                    ((This)->lpVtbl->MFCut(This, _nField, _pRect, _ppFrameRes))

                #define IMFFrameGPU_MFClone(This, _ppCloneFrame, _eCloneType, _fccPixelFormat) \
                    ((This)->lpVtbl->MFClone(This, _ppCloneFrame, _eCloneType, _fccPixelFormat))

                #define IMFFrameGPU_MFOverlay(This,             \
                                              _pFrameOverlay,   \
                                              _pFrameMask,      \
                                              _nPosX,           \
                                              _nPosY,           \
                                              _dblAlpha,        \
                                              _bsPropsList,     \
                                              _bsAudioBufferID) \
                    ((This)->lpVtbl->MFOverlay(This,            \
                                               _pFrameOverlay,  \
                                               _pFrameMask,     \
                                               _nPosX,          \
                                               _nPosY,          \
                                               _dblAlpha,       \
                                               _bsPropsList,    \
                                               _bsAudioBufferID))

                #define IMFFrameGPU_MFConvert(This,           \
                                              _pPropsDest,    \
                                              _ppFrameRes,    \
                                              _pnFrameRest,   \
                                              _bsPropsList,   \
                                              _bsConverterID) \
                    ((This)->lpVtbl->MFConvert(This,          \
                                               _pPropsDest,   \
                                               _ppFrameRes,   \
                                               _pnFrameRest,  \
                                               _bsPropsList,  \
                                               _bsConverterID))

                #define IMFFrameGPU_MFResize(This,           \
                                             _fccOutput,     \
                                             _nWidth,        \
                                             _nHeight,       \
                                             _nResizeField,  \
                                             _ppFrameRes,    \
                                             _bsPropsList,   \
                                             _bsConverterID) \
                    ((This)->lpVtbl->MFResize(This,          \
                                              _fccOutput,    \
                                              _nWidth,       \
                                              _nHeight,      \
                                              _nResizeField, \
                                              _ppFrameRes,   \
                                              _bsPropsList,  \
                                              _bsConverterID))

                #define IMFFrameGPU_MFTransition(This,           \
                                                 _pFrameFrom,    \
                                                 _ppFrameRes,    \
                                                 _dblPos,        \
                                                 _bsTransition,  \
                                                 _bsPropsList,   \
                                                 _bsConverterID) \
                    ((This)->lpVtbl->MFTransition(This,          \
                                                  _pFrameFrom,   \
                                                  _ppFrameRes,   \
                                                  _dblPos,       \
                                                  _bsTransition, \
                                                  _bsPropsList,  \
                                                  _bsConverterID))

                #define IMFFrameGPU_MFDataGetByIndex(This, _nIndex, _pbsDataID, _pcbANCData, _ppbANCData) \
                    ((This)->lpVtbl->MFDataGetByIndex(This, _nIndex, _pbsDataID, _pcbANCData, _ppbANCData))

                #define IMFFrameGPU_MFDataGet(This, _bsDataID, _pcbANCData, _ppbANCData) \
                    ((This)->lpVtbl->MFDataGet(This, _bsDataID, _pcbANCData, _ppbANCData))

                #define IMFFrameGPU_MFDataSet(This, _bsDataID, _cbANCData, _pbANCData) \
                    ((This)->lpVtbl->MFDataSet(This, _bsDataID, _cbANCData, _pbANCData))

                #define IMFFrameGPU_MFObjGetByIndex(This, _nIndex, _pbsObjID, _ppObj, _bMakeLocal) \
                    ((This)->lpVtbl->MFObjGetByIndex(This, _nIndex, _pbsObjID, _ppObj, _bMakeLocal))

                #define IMFFrameGPU_MFObjGet(This, _bsObjID, _ppObj, _bMakeLocal) \
                    ((This)->lpVtbl->MFObjGet(This, _bsObjID, _ppObj, _bMakeLocal))

                #define IMFFrameGPU_MFObjSet(This, _bsObjID, _pObj) ((This)->lpVtbl->MFObjSet(This, _bsObjID, _pObj))

                #define IMFFrameGPU_MFStrGetByIndex(This, _nIndex, _pbsStrID, _pbsString) \
                    ((This)->lpVtbl->MFStrGetByIndex(This, _nIndex, _pbsStrID, _pbsString))

                #define IMFFrameGPU_MFStrGet(This, _bsStrID, _pbsString) \
                    ((This)->lpVtbl->MFStrGet(This, _bsStrID, _pbsString))

                #define IMFFrameGPU_MFStrSet(This, _bsStrID, _bsString) \
                    ((This)->lpVtbl->MFStrSet(This, _bsStrID, _bsString))

                #define IMFFrameGPU_MFSave(This, _pcbData, _ppData, _eSaveType) \
                    ((This)->lpVtbl->MFSave(This, _pcbData, _ppData, _eSaveType))

                #define IMFFrameGPU_MFLoad(This, _cbData, _pbData, _eLoadType) \
                    ((This)->lpVtbl->MFLoad(This, _cbData, _pbData, _eLoadType))

                #define IMFFrameGPU_MFWaitAsync(This) ((This)->lpVtbl->MFWaitAsync(This))

                #define IMFFrameGPU_MFPrint(This, _bsText, _dblTextSize, _pRect, _eMFTextFlags, _bsExtraParam) \
                    ((This)->lpVtbl->MFPrint(This, _bsText, _dblTextSize, _pRect, _eMFTextFlags, _bsExtraParam))

                #define IMFFrameGPU_MFOverlayRect(This,              \
                                                  _pFrameOverlay,    \
                                                  _pFrameMask,       \
                                                  _pRect,            \
                                                  _eMFOverlayFlags,  \
                                                  _dblAlpha,         \
                                                  _bsPropsList,      \
                                                  _bsAudioBufferID)  \
                    ((This)->lpVtbl->MFOverlayRect(This,             \
                                                   _pFrameOverlay,   \
                                                   _pFrameMask,      \
                                                   _pRect,           \
                                                   _eMFOverlayFlags, \
                                                   _dblAlpha,        \
                                                   _bsPropsList,     \
                                                   _bsAudioBufferID))

                #define IMFFrameGPU_MFVideoGetBytesEx(This, _pVideoPtr) \
                    ((This)->lpVtbl->MFVideoGetBytesEx(This, _pVideoPtr))

                #define IMFFrameGPU_MFSaveToStream(This, _ppStream, _eSaveType) \
                    ((This)->lpVtbl->MFSaveToStream(This, _ppStream, _eSaveType))

                #define IMFFrameGPU_MFAddToStream(This, _pStream, _eSaveType) \
                    ((This)->lpVtbl->MFAddToStream(This, _pStream, _eSaveType))

                #define IMFFrameGPU_MFLoadFromStream(This, _pStream, _eLoadType) \
                    ((This)->lpVtbl->MFLoadFromStream(This, _pStream, _eLoadType))

                #define IMFFrameGPU_MFVideoLock(This, eLockType, ePixelFormat, pVidProps, pVideoPtr, bsHints) \
                    ((This)->lpVtbl->MFVideoLock(This, eLockType, ePixelFormat, pVidProps, pVideoPtr, bsHints))

                #define IMFFrameGPU_MFVideoUnlock(This) ((This)->lpVtbl->MFVideoUnlock(This))

                #define IMFFrameGPU_MFVideoGetTexture(This, nField, ppTexture, bsHints) \
                    ((This)->lpVtbl->MFVideoGetTexture(This, nField, ppTexture, bsHints))

                #define IMFFrameGPU_MFVideoWaitExecution(This, bsHints) \
                    ((This)->lpVtbl->MFVideoWaitExecution(This, bsHints))

            #endif /* COBJMACROS */

        #endif /* C style interface */

    #endif /* __IMFFrameGPU_INTERFACE_DEFINED__ */

    #ifndef __IMFPlanarFrame_INTERFACE_DEFINED__
        #define __IMFPlanarFrame_INTERFACE_DEFINED__

/* interface IMFPlanarFrame */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFPlanarFrame;

        #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("CD5A96AF-96CA-4143-82EF-F292DAF0462C")
IMFPlanarFrame: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFPlanarFrameAllGet(
        /* [out] */ MF_FRAME_INFO * _pFrameInfo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFPlanarFrameSetVidPtr(
        /* [in] */ MF_VID_PTR * _pVidPtr) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFPlanarFrameGetVidPtr(
        /* [in] */ MF_VID_PTR * _pVidPtr) = 0;
};

        #else /* C style interface */

typedef struct IMFPlanarFrameVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFPlanarFrame   *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFPlanarFrame *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFPlanarFrame *This);

    DECLSPEC_XFGVIRT(IMFPlanarFrame, MFPlanarFrameAllGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFPlanarFrameAllGet)(IMFPlanarFrame            *This,
                                                                       /* [out] */ MF_FRAME_INFO *_pFrameInfo);

    DECLSPEC_XFGVIRT(IMFPlanarFrame, MFPlanarFrameSetVidPtr)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFPlanarFrameSetVidPtr)(IMFPlanarFrame        *This,
                                                                          /* [in] */ MF_VID_PTR *_pVidPtr);

    DECLSPEC_XFGVIRT(IMFPlanarFrame, MFPlanarFrameGetVidPtr)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFPlanarFrameGetVidPtr)(IMFPlanarFrame        *This,
                                                                          /* [in] */ MF_VID_PTR *_pVidPtr);

    END_INTERFACE
} IMFPlanarFrameVtbl;

interface IMFPlanarFrame { CONST_VTBL struct IMFPlanarFrameVtbl *lpVtbl; };

            #ifdef COBJMACROS

                #define IMFPlanarFrame_QueryInterface(This, riid, ppvObject) \
                    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

                #define IMFPlanarFrame_AddRef(This) ((This)->lpVtbl->AddRef(This))

                #define IMFPlanarFrame_Release(This) ((This)->lpVtbl->Release(This))

                #define IMFPlanarFrame_MFPlanarFrameAllGet(This, _pFrameInfo) \
                    ((This)->lpVtbl->MFPlanarFrameAllGet(This, _pFrameInfo))

                #define IMFPlanarFrame_MFPlanarFrameSetVidPtr(This, _pVidPtr) \
                    ((This)->lpVtbl->MFPlanarFrameSetVidPtr(This, _pVidPtr))

                #define IMFPlanarFrame_MFPlanarFrameGetVidPtr(This, _pVidPtr) \
                    ((This)->lpVtbl->MFPlanarFrameGetVidPtr(This, _pVidPtr))

            #endif /* COBJMACROS */

        #endif /* C style interface */

    #endif /* __IMFPlanarFrame_INTERFACE_DEFINED__ */

    /* interface __MIDL_itf_MFormats_0000_0004 */
    /* [local] */

#endif // MFFRAME_DEFINED

extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0004_v0_0_s_ifspec;

#ifndef __IMFFactory_INTERFACE_DEFINED__
    #define __IMFFactory_INTERFACE_DEFINED__

/* interface IMFFactory */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFFactory;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F365010-473F-4ad5-A5C2-428FE0C8E03E")
IMFFactory: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFFrameMakeLocal(
        /* [in] */ IUnknown * _pMFFrame,
        /* [out] */ IMFFrame * *_ppFrameLocal,
        /* [in] */ BOOL _bAlwaysClone) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFFrameClone(
        /* [in] */ IUnknown * _pMFFrame,
        /* [out] */ IMFFrame * *_ppFrameClone,
        /* [in] */ eMFrameClone _eCloneType,
        /* [in] */ eMFCC        _fccPixelFormat) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFFrameCreateFromMem(
        /* [in] */ M_AV_PROPS * _pAVProps,
        /* [in] */ LONGLONG    _lpVideo,
        /* [in] */ long        _lAudioSamples,
        /* [in] */ LONGLONG    _lpAudio,
        /* [out] */ IMFFrame **_ppFrame,
        /* [in] */ BSTR        _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFFrameCreateFromFile(
        /* [in] */ BSTR _bsFileName,
        /* [out] */ IMFFrame * *_ppFrame,
        /* [in] */ BSTR _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFFrameCreateFromHBITMAP(
        /* [in] */ LONGLONG _hBitmap,
        /* [out] */ IMFFrame * *_ppFrame,
        /* [in] */ BSTR _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFFrameCreateWrapper(
        /* [in] */ M_VID_PROPS * _pVidProps,
        /* [in] */ DWORD    _cbVideo,
        /* [in] */ LONGLONG _lpVideo,
        /* [in] */ IUnknown * _pObject,
        /* [out] */ IMFFrame * *_ppFrame) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFFrameCreatePlain(
        /* [in] */ LONG _cbVideoSize,
        /* [out] */ IMFFrame * *_ppFrame) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFFrameCreateFromMemEx(
        /* [in] */ M_AV_PROPS * _pAVProps,
        /* [in] */ MF_VID_PTR * _pVideoPtr,
        /* [in] */ long        _lAudioSamples,
        /* [in] */ LONGLONG    _lpAudio,
        /* [out] */ IMFFrame **_ppFrame,
        /* [in] */ BSTR        _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFFrameCreateFromTexture(
        /* [in] */ M_AV_PROPS * _pAVProps,
        /* [in] */ IUnknown * _pD3DTexture2D,
        /* [in] */ long        _lAudioSamples,
        /* [in] */ LONGLONG    _lpAudio,
        /* [out] */ IMFFrame **_ppFrame,
        /* [in] */ BSTR        _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFFrameCreateFromFields(
        /* [in] */ M_AV_PROPS * _pAVProps,
        /* [in] */ IUnknown * _pFirstField,
        /* [in] */ IUnknown * _pSecondField,
        /* [in] */ long        _lAudioSamples,
        /* [in] */ LONGLONG    _lpAudio,
        /* [out] */ IMFFrame **_ppFrame,
        /* [in] */ BSTR        _bsPropsList) = 0;
};

    #else /* C style interface */

typedef struct IMFFactoryVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFFactory       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFFactory *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFFactory *This);

    DECLSPEC_XFGVIRT(IMFFactory, MFFrameMakeLocal)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFFrameMakeLocal)(IMFFactory            *This,
                                                                    /* [in] */ IUnknown   *_pMFFrame,
                                                                    /* [out] */ IMFFrame **_ppFrameLocal,
                                                                    /* [in] */ BOOL        _bAlwaysClone);

    DECLSPEC_XFGVIRT(IMFFactory, MFFrameClone)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFFrameClone)(IMFFactory             *This,
                                                                /* [in] */ IUnknown    *_pMFFrame,
                                                                /* [out] */ IMFFrame  **_ppFrameClone,
                                                                /* [in] */ eMFrameClone _eCloneType,
                                                                /* [in] */ eMFCC        _fccPixelFormat);

    DECLSPEC_XFGVIRT(IMFFactory, MFFrameCreateFromMem)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFFrameCreateFromMem)(IMFFactory            *This,
                                                                        /* [in] */ M_AV_PROPS *_pAVProps,
                                                                        /* [in] */ LONGLONG    _lpVideo,
                                                                        /* [in] */ long        _lAudioSamples,
                                                                        /* [in] */ LONGLONG    _lpAudio,
                                                                        /* [out] */ IMFFrame **_ppFrame,
                                                                        /* [in] */ BSTR        _bsPropsList);

    DECLSPEC_XFGVIRT(IMFFactory, MFFrameCreateFromFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFFrameCreateFromFile)(IMFFactory            *This,
                                                                         /* [in] */ BSTR        _bsFileName,
                                                                         /* [out] */ IMFFrame **_ppFrame,
                                                                         /* [in] */ BSTR        _bsPropsList);

    DECLSPEC_XFGVIRT(IMFFactory, MFFrameCreateFromHBITMAP)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFFrameCreateFromHBITMAP)(IMFFactory            *This,
                                                                            /* [in] */ LONGLONG    _hBitmap,
                                                                            /* [out] */ IMFFrame **_ppFrame,
                                                                            /* [in] */ BSTR        _bsPropsList);

    DECLSPEC_XFGVIRT(IMFFactory, MFFrameCreateWrapper)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFFrameCreateWrapper)(IMFFactory             *This,
                                                                        /* [in] */ M_VID_PROPS *_pVidProps,
                                                                        /* [in] */ DWORD        _cbVideo,
                                                                        /* [in] */ LONGLONG     _lpVideo,
                                                                        /* [in] */ IUnknown    *_pObject,
                                                                        /* [out] */ IMFFrame  **_ppFrame);

    DECLSPEC_XFGVIRT(IMFFactory, MFFrameCreatePlain)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFFrameCreatePlain)(IMFFactory            *This,
                                                                      /* [in] */ LONG        _cbVideoSize,
                                                                      /* [out] */ IMFFrame **_ppFrame);

    DECLSPEC_XFGVIRT(IMFFactory, MFFrameCreateFromMemEx)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFFrameCreateFromMemEx)(IMFFactory            *This,
                                                                          /* [in] */ M_AV_PROPS *_pAVProps,
                                                                          /* [in] */ MF_VID_PTR *_pVideoPtr,
                                                                          /* [in] */ long        _lAudioSamples,
                                                                          /* [in] */ LONGLONG    _lpAudio,
                                                                          /* [out] */ IMFFrame **_ppFrame,
                                                                          /* [in] */ BSTR        _bsPropsList);

    DECLSPEC_XFGVIRT(IMFFactory, MFFrameCreateFromTexture)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFFrameCreateFromTexture)(IMFFactory            *This,
                                                                            /* [in] */ M_AV_PROPS *_pAVProps,
                                                                            /* [in] */ IUnknown   *_pD3DTexture2D,
                                                                            /* [in] */ long        _lAudioSamples,
                                                                            /* [in] */ LONGLONG    _lpAudio,
                                                                            /* [out] */ IMFFrame **_ppFrame,
                                                                            /* [in] */ BSTR        _bsPropsList);

    DECLSPEC_XFGVIRT(IMFFactory, MFFrameCreateFromFields)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFFrameCreateFromFields)(IMFFactory            *This,
                                                                           /* [in] */ M_AV_PROPS *_pAVProps,
                                                                           /* [in] */ IUnknown   *_pFirstField,
                                                                           /* [in] */ IUnknown   *_pSecondField,
                                                                           /* [in] */ long        _lAudioSamples,
                                                                           /* [in] */ LONGLONG    _lpAudio,
                                                                           /* [out] */ IMFFrame **_ppFrame,
                                                                           /* [in] */ BSTR        _bsPropsList);

    END_INTERFACE
} IMFFactoryVtbl;

interface IMFFactory { CONST_VTBL struct IMFFactoryVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFFactory_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFFactory_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFFactory_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFFactory_MFFrameMakeLocal(This, _pMFFrame, _ppFrameLocal, _bAlwaysClone) \
                ((This)->lpVtbl->MFFrameMakeLocal(This, _pMFFrame, _ppFrameLocal, _bAlwaysClone))

            #define IMFFactory_MFFrameClone(This, _pMFFrame, _ppFrameClone, _eCloneType, _fccPixelFormat) \
                ((This)->lpVtbl->MFFrameClone(This, _pMFFrame, _ppFrameClone, _eCloneType, _fccPixelFormat))

            #define IMFFactory_MFFrameCreateFromMem(This,             \
                                                    _pAVProps,        \
                                                    _lpVideo,         \
                                                    _lAudioSamples,   \
                                                    _lpAudio,         \
                                                    _ppFrame,         \
                                                    _bsPropsList)     \
                ((This)->lpVtbl->MFFrameCreateFromMem(This,           \
                                                      _pAVProps,      \
                                                      _lpVideo,       \
                                                      _lAudioSamples, \
                                                      _lpAudio,       \
                                                      _ppFrame,       \
                                                      _bsPropsList))

            #define IMFFactory_MFFrameCreateFromFile(This, _bsFileName, _ppFrame, _bsPropsList) \
                ((This)->lpVtbl->MFFrameCreateFromFile(This, _bsFileName, _ppFrame, _bsPropsList))

            #define IMFFactory_MFFrameCreateFromHBITMAP(This, _hBitmap, _ppFrame, _bsPropsList) \
                ((This)->lpVtbl->MFFrameCreateFromHBITMAP(This, _hBitmap, _ppFrame, _bsPropsList))

            #define IMFFactory_MFFrameCreateWrapper(This, _pVidProps, _cbVideo, _lpVideo, _pObject, _ppFrame) \
                ((This)->lpVtbl->MFFrameCreateWrapper(This, _pVidProps, _cbVideo, _lpVideo, _pObject, _ppFrame))

            #define IMFFactory_MFFrameCreatePlain(This, _cbVideoSize, _ppFrame) \
                ((This)->lpVtbl->MFFrameCreatePlain(This, _cbVideoSize, _ppFrame))

            #define IMFFactory_MFFrameCreateFromMemEx(This,             \
                                                      _pAVProps,        \
                                                      _pVideoPtr,       \
                                                      _lAudioSamples,   \
                                                      _lpAudio,         \
                                                      _ppFrame,         \
                                                      _bsPropsList)     \
                ((This)->lpVtbl->MFFrameCreateFromMemEx(This,           \
                                                        _pAVProps,      \
                                                        _pVideoPtr,     \
                                                        _lAudioSamples, \
                                                        _lpAudio,       \
                                                        _ppFrame,       \
                                                        _bsPropsList))

            #define IMFFactory_MFFrameCreateFromTexture(This,             \
                                                        _pAVProps,        \
                                                        _pD3DTexture2D,   \
                                                        _lAudioSamples,   \
                                                        _lpAudio,         \
                                                        _ppFrame,         \
                                                        _bsPropsList)     \
                ((This)->lpVtbl->MFFrameCreateFromTexture(This,           \
                                                          _pAVProps,      \
                                                          _pD3DTexture2D, \
                                                          _lAudioSamples, \
                                                          _lpAudio,       \
                                                          _ppFrame,       \
                                                          _bsPropsList))

            #define IMFFactory_MFFrameCreateFromFields(This,             \
                                                       _pAVProps,        \
                                                       _pFirstField,     \
                                                       _pSecondField,    \
                                                       _lAudioSamples,   \
                                                       _lpAudio,         \
                                                       _ppFrame,         \
                                                       _bsPropsList)     \
                ((This)->lpVtbl->MFFrameCreateFromFields(This,           \
                                                         _pAVProps,      \
                                                         _pFirstField,   \
                                                         _pSecondField,  \
                                                         _lAudioSamples, \
                                                         _lpAudio,       \
                                                         _ppFrame,       \
                                                         _bsPropsList))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFFactory_INTERFACE_DEFINED__ */

#ifndef __IMFCreator_INTERFACE_DEFINED__
    #define __IMFCreator_INTERFACE_DEFINED__

/* interface IMFCreator */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFCreator;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F365017-473F-4ad5-A5C2-428FE0C8E03E")
IMFCreator: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFExternalCreate(
        /* [in] */ CLSID _gCLassID,
        /* [out] */ IUnknown * *_ppObj,
        /* [out] */ DWORD * _pdwProcessID,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFExternalDestroy(
        /* [in] */ IUnknown * _pObj) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFExternalIsAliveByPID(
        /* [in] */ DWORD _dwPID,
        /* [out] */ BOOL * _pbAlive) = 0;
};

    #else /* C style interface */

typedef struct IMFCreatorVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFCreator       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFCreator *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFCreator *This);

    DECLSPEC_XFGVIRT(IMFCreator, MFExternalCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFExternalCreate)(IMFCreator            *This,
                                                                    /* [in] */ CLSID       _gCLassID,
                                                                    /* [out] */ IUnknown **_ppObj,
                                                                    /* [out] */ DWORD     *_pdwProcessID,
                                                                    /* [in] */ BSTR        _bsProps);

    DECLSPEC_XFGVIRT(IMFCreator, MFExternalDestroy)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFExternalDestroy)(IMFCreator          *This,
                                                                     /* [in] */ IUnknown *_pObj);

    DECLSPEC_XFGVIRT(IMFCreator, MFExternalIsAliveByPID)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFExternalIsAliveByPID)(IMFCreator       *This,
                                                                          /* [in] */ DWORD  _dwPID,
                                                                          /* [out] */ BOOL *_pbAlive);

    END_INTERFACE
} IMFCreatorVtbl;

interface IMFCreator { CONST_VTBL struct IMFCreatorVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFCreator_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFCreator_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFCreator_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFCreator_MFExternalCreate(This, _gCLassID, _ppObj, _pdwProcessID, _bsProps) \
                ((This)->lpVtbl->MFExternalCreate(This, _gCLassID, _ppObj, _pdwProcessID, _bsProps))

            #define IMFCreator_MFExternalDestroy(This, _pObj) ((This)->lpVtbl->MFExternalDestroy(This, _pObj))

            #define IMFCreator_MFExternalIsAliveByPID(This, _dwPID, _pbAlive) \
                ((This)->lpVtbl->MFExternalIsAliveByPID(This, _dwPID, _pbAlive))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFCreator_INTERFACE_DEFINED__ */

#ifndef __IMAttributes_INTERFACE_DEFINED__
    #define __IMAttributes_INTERFACE_DEFINED__

/* interface IMAttributes */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMAttributes;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366001-473F-4ad5-A5C2-428FE0C8E03E")
IMAttributes: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesGetByIndex(
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsName,
        /* [out] */ BSTR *_pbsValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesRemove(
        /* [in] */ BSTR _bsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesRemoveAll(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesStringSet(
        /* [in] */ BSTR _bsName,
        /* [in] */ BSTR _bsValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesBoolSet(
        /* [in] */ BSTR _bsName,
        /* [in] */ BOOL _bValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesIntSet(
        /* [in] */ BSTR _bsName,
        /* [in] */ int  _nValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesDoubleSet(
        /* [in] */ BSTR   _bsName,
        /* [in] */ double _dblValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesHave(
        /* [in] */ BSTR _bsName,
        /* [out] */ BOOL * _pbHave,
        /* [out] */ BSTR * _pbsValueOrDefault) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesStringGet(
        /* [in] */ BSTR _bsName,
        /* [out] */ BSTR * _pbsValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesIntGet(
        /* [in] */ BSTR  _bsName,
        /* [out] */ int *_pnValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesBoolGet(
        /* [in] */ BSTR _bsName,
        /* [out] */ BOOL * _pbValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesDoubleGet(
        /* [in] */ BSTR     _bsName,
        /* [out] */ double *_pdblValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesMultipleSet(
        /* [in] */ BSTR         _bsAttributesList,
        /* [in] */ eMUpdateType _eUpdateType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesSave(
        /* [out] */ BSTR * _pbsAttributesList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesClone(
        /* [out] */ IMAttributes * *_ppClone) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesSet(
        /* [in] */ IMAttributes * _pAttributesList,
        /* [in] */ eMUpdateType _eUpdateType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesInfoGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesInfoGetByIndex(
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesInfoGet(
        /* [in] */ BSTR       _bsName,
        /* [in] */ eMInfoType _eType,
        /* [out] */ BSTR * _pbsInfo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttributesValuesInfoGet(
        /* [in] */ BSTR _bsName,
        /* [in] */ BSTR _bsValue,
        /* [in] */ BSTR _bsType,
        /* [out] */ BSTR * _pbsInfo) = 0;
};

    #else /* C style interface */

typedef struct IMAttributesVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMAttributes     *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMAttributes *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMAttributes *This);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesGetCount)(IMAttributes    *This,
                                                                      /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesGetByIndex)(IMAttributes     *This,
                                                                        /* [in] */ int    _nIndex,
                                                                        /* [out] */ BSTR *_pbsName,
                                                                        /* [out] */ BSTR *_pbsValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesRemove)(IMAttributes   *This,
                                                                    /* [in] */ BSTR _bsName);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesRemoveAll)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesRemoveAll)(IMAttributes *This);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesStringSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesStringSet)(IMAttributes   *This,
                                                                       /* [in] */ BSTR _bsName,
                                                                       /* [in] */ BSTR _bsValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesBoolSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesBoolSet)(IMAttributes   *This,
                                                                     /* [in] */ BSTR _bsName,
                                                                     /* [in] */ BOOL _bValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesIntSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesIntSet)(IMAttributes   *This,
                                                                    /* [in] */ BSTR _bsName,
                                                                    /* [in] */ int  _nValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesDoubleSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesDoubleSet)(IMAttributes     *This,
                                                                       /* [in] */ BSTR   _bsName,
                                                                       /* [in] */ double _dblValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesHave)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesHave)(IMAttributes     *This,
                                                                  /* [in] */ BSTR   _bsName,
                                                                  /* [out] */ BOOL *_pbHave,
                                                                  /* [out] */ BSTR *_pbsValueOrDefault);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesStringGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesStringGet)(IMAttributes     *This,
                                                                       /* [in] */ BSTR   _bsName,
                                                                       /* [out] */ BSTR *_pbsValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesIntGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesIntGet)(IMAttributes    *This,
                                                                    /* [in] */ BSTR  _bsName,
                                                                    /* [out] */ int *_pnValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesBoolGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesBoolGet)(IMAttributes     *This,
                                                                     /* [in] */ BSTR   _bsName,
                                                                     /* [out] */ BOOL *_pbValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesDoubleGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesDoubleGet)(IMAttributes       *This,
                                                                       /* [in] */ BSTR     _bsName,
                                                                       /* [out] */ double *_pdblValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesMultipleSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesMultipleSet)(IMAttributes           *This,
                                                                         /* [in] */ BSTR         _bsAttributesList,
                                                                         /* [in] */ eMUpdateType _eUpdateType);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesSave)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesSave)(IMAttributes     *This,
                                                                  /* [out] */ BSTR *_pbsAttributesList);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesClone)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesClone)(IMAttributes              *This,
                                                                   /* [out] */ IMAttributes **_ppClone);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesSet)(IMAttributes            *This,
                                                                 /* [in] */ IMAttributes *_pAttributesList,
                                                                 /* [in] */ eMUpdateType  _eUpdateType);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesInfoGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesInfoGetCount)(IMAttributes    *This,
                                                                          /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesInfoGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesInfoGetByIndex)(IMAttributes     *This,
                                                                            /* [in] */ int    _nIndex,
                                                                            /* [out] */ BSTR *_pbsName);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesInfoGet)(IMAttributes         *This,
                                                                     /* [in] */ BSTR       _bsName,
                                                                     /* [in] */ eMInfoType _eType,
                                                                     /* [out] */ BSTR     *_pbsInfo);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesValuesInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesValuesInfoGet)(IMAttributes     *This,
                                                                           /* [in] */ BSTR   _bsName,
                                                                           /* [in] */ BSTR   _bsValue,
                                                                           /* [in] */ BSTR   _bsType,
                                                                           /* [out] */ BSTR *_pbsInfo);

    END_INTERFACE
} IMAttributesVtbl;

interface IMAttributes { CONST_VTBL struct IMAttributesVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMAttributes_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMAttributes_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMAttributes_Release(This) ((This)->lpVtbl->Release(This))

            #define IMAttributes_AttributesGetCount(This, _pnCount) ((This)->lpVtbl->AttributesGetCount(This, _pnCount))

            #define IMAttributes_AttributesGetByIndex(This, _nIndex, _pbsName, _pbsValue) \
                ((This)->lpVtbl->AttributesGetByIndex(This, _nIndex, _pbsName, _pbsValue))

            #define IMAttributes_AttributesRemove(This, _bsName) ((This)->lpVtbl->AttributesRemove(This, _bsName))

            #define IMAttributes_AttributesRemoveAll(This) ((This)->lpVtbl->AttributesRemoveAll(This))

            #define IMAttributes_AttributesStringSet(This, _bsName, _bsValue) \
                ((This)->lpVtbl->AttributesStringSet(This, _bsName, _bsValue))

            #define IMAttributes_AttributesBoolSet(This, _bsName, _bValue) \
                ((This)->lpVtbl->AttributesBoolSet(This, _bsName, _bValue))

            #define IMAttributes_AttributesIntSet(This, _bsName, _nValue) \
                ((This)->lpVtbl->AttributesIntSet(This, _bsName, _nValue))

            #define IMAttributes_AttributesDoubleSet(This, _bsName, _dblValue) \
                ((This)->lpVtbl->AttributesDoubleSet(This, _bsName, _dblValue))

            #define IMAttributes_AttributesHave(This, _bsName, _pbHave, _pbsValueOrDefault) \
                ((This)->lpVtbl->AttributesHave(This, _bsName, _pbHave, _pbsValueOrDefault))

            #define IMAttributes_AttributesStringGet(This, _bsName, _pbsValue) \
                ((This)->lpVtbl->AttributesStringGet(This, _bsName, _pbsValue))

            #define IMAttributes_AttributesIntGet(This, _bsName, _pnValue) \
                ((This)->lpVtbl->AttributesIntGet(This, _bsName, _pnValue))

            #define IMAttributes_AttributesBoolGet(This, _bsName, _pbValue) \
                ((This)->lpVtbl->AttributesBoolGet(This, _bsName, _pbValue))

            #define IMAttributes_AttributesDoubleGet(This, _bsName, _pdblValue) \
                ((This)->lpVtbl->AttributesDoubleGet(This, _bsName, _pdblValue))

            #define IMAttributes_AttributesMultipleSet(This, _bsAttributesList, _eUpdateType) \
                ((This)->lpVtbl->AttributesMultipleSet(This, _bsAttributesList, _eUpdateType))

            #define IMAttributes_AttributesSave(This, _pbsAttributesList) \
                ((This)->lpVtbl->AttributesSave(This, _pbsAttributesList))

            #define IMAttributes_AttributesClone(This, _ppClone) ((This)->lpVtbl->AttributesClone(This, _ppClone))

            #define IMAttributes_AttributesSet(This, _pAttributesList, _eUpdateType) \
                ((This)->lpVtbl->AttributesSet(This, _pAttributesList, _eUpdateType))

            #define IMAttributes_AttributesInfoGetCount(This, _pnCount) \
                ((This)->lpVtbl->AttributesInfoGetCount(This, _pnCount))

            #define IMAttributes_AttributesInfoGetByIndex(This, _nIndex, _pbsName) \
                ((This)->lpVtbl->AttributesInfoGetByIndex(This, _nIndex, _pbsName))

            #define IMAttributes_AttributesInfoGet(This, _bsName, _eType, _pbsInfo) \
                ((This)->lpVtbl->AttributesInfoGet(This, _bsName, _eType, _pbsInfo))

            #define IMAttributes_AttributesValuesInfoGet(This, _bsName, _bsValue, _bsType, _pbsInfo) \
                ((This)->lpVtbl->AttributesValuesInfoGet(This, _bsName, _bsValue, _bsType, _pbsInfo))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMAttributes_INTERFACE_DEFINED__ */

#ifndef __IMNode_INTERFACE_DEFINED__
    #define __IMNode_INTERFACE_DEFINED__

/* interface IMNode */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMNode;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366002-473F-4ad5-A5C2-428FE0C8E03E")
IMNode: public IMAttributes
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeNameGet(
        /* [out] */ BSTR * _pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeNameSet(
        /* [in] */ BSTR _bsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeValueGet(
        /* [out] */ BSTR * _pbsValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeValueSet(
        /* [in] */ BSTR _bsValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodePathGet(
        /* [out] */ BSTR * _bsPath,
        /* [in] */ IMNode * _pRoot) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeParentGet(
        /* [out] */ IMNode * *_ppParent) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeDetach(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeGetByIndex(
        /* [in] */ int       _nIndex,
        /* [out] */ BSTR    *_pbsName,
        /* [out] */ IMNode **_ppNode) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeAdd(
        /* [in] */ BSTR _bsPath,
        /* [in] */ BSTR _bsValue,
        /* [out] */ IMNode * *_ppNode) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeGet(
        /* [in] */ BSTR _bsPath,
        /* [in] */ BOOL _bCreateNew,
        /* [out] */ IMNode * *_ppNode) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeRemove(
        /* [in] */ BSTR _bsPath) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeRemoveAll(
        /* [in] */ BOOL _bRemoveAttributes) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeParse(
        /* [in] */ BSTR _pbsXMLString,
        /* [in] */ BOOL _bUpdateName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeSave(
        /* [out] */ BSTR * _pbsXMLString) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeClone(
        /* [out] */ IMNode * *_ppClone) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeSet(
        /* [in] */ IMNode * _pNodeSet,
        /* [in] */ eMUpdateType _eUpdateType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NodeInfoGet(
        /* [in] */ BSTR _bsInfoType,
        /* [out] */ BSTR * _pbsDecription) = 0;
};

    #else /* C style interface */

typedef struct IMNodeVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMNode           *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMNode *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMNode *This);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesGetCount)(IMNode          *This,
                                                                      /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesGetByIndex)(IMNode           *This,
                                                                        /* [in] */ int    _nIndex,
                                                                        /* [out] */ BSTR *_pbsName,
                                                                        /* [out] */ BSTR *_pbsValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesRemove)(IMNode         *This,
                                                                    /* [in] */ BSTR _bsName);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesRemoveAll)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesRemoveAll)(IMNode *This);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesStringSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesStringSet)(IMNode         *This,
                                                                       /* [in] */ BSTR _bsName,
                                                                       /* [in] */ BSTR _bsValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesBoolSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesBoolSet)(IMNode         *This,
                                                                     /* [in] */ BSTR _bsName,
                                                                     /* [in] */ BOOL _bValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesIntSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesIntSet)(IMNode         *This,
                                                                    /* [in] */ BSTR _bsName,
                                                                    /* [in] */ int  _nValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesDoubleSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesDoubleSet)(IMNode           *This,
                                                                       /* [in] */ BSTR   _bsName,
                                                                       /* [in] */ double _dblValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesHave)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesHave)(IMNode           *This,
                                                                  /* [in] */ BSTR   _bsName,
                                                                  /* [out] */ BOOL *_pbHave,
                                                                  /* [out] */ BSTR *_pbsValueOrDefault);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesStringGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesStringGet)(IMNode           *This,
                                                                       /* [in] */ BSTR   _bsName,
                                                                       /* [out] */ BSTR *_pbsValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesIntGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesIntGet)(IMNode          *This,
                                                                    /* [in] */ BSTR  _bsName,
                                                                    /* [out] */ int *_pnValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesBoolGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesBoolGet)(IMNode           *This,
                                                                     /* [in] */ BSTR   _bsName,
                                                                     /* [out] */ BOOL *_pbValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesDoubleGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesDoubleGet)(IMNode             *This,
                                                                       /* [in] */ BSTR     _bsName,
                                                                       /* [out] */ double *_pdblValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesMultipleSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesMultipleSet)(IMNode                 *This,
                                                                         /* [in] */ BSTR         _bsAttributesList,
                                                                         /* [in] */ eMUpdateType _eUpdateType);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesSave)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesSave)(IMNode           *This,
                                                                  /* [out] */ BSTR *_pbsAttributesList);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesClone)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesClone)(IMNode                    *This,
                                                                   /* [out] */ IMAttributes **_ppClone);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesSet)(IMNode                  *This,
                                                                 /* [in] */ IMAttributes *_pAttributesList,
                                                                 /* [in] */ eMUpdateType  _eUpdateType);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesInfoGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesInfoGetCount)(IMNode          *This,
                                                                          /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesInfoGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesInfoGetByIndex)(IMNode           *This,
                                                                            /* [in] */ int    _nIndex,
                                                                            /* [out] */ BSTR *_pbsName);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesInfoGet)(IMNode               *This,
                                                                     /* [in] */ BSTR       _bsName,
                                                                     /* [in] */ eMInfoType _eType,
                                                                     /* [out] */ BSTR     *_pbsInfo);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesValuesInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesValuesInfoGet)(IMNode           *This,
                                                                           /* [in] */ BSTR   _bsName,
                                                                           /* [in] */ BSTR   _bsValue,
                                                                           /* [in] */ BSTR   _bsType,
                                                                           /* [out] */ BSTR *_pbsInfo);

    DECLSPEC_XFGVIRT(IMNode, NodeNameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeNameGet)(IMNode           *This,
                                                               /* [out] */ BSTR *_pbsName);

    DECLSPEC_XFGVIRT(IMNode, NodeNameSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeNameSet)(IMNode         *This,
                                                               /* [in] */ BSTR _bsName);

    DECLSPEC_XFGVIRT(IMNode, NodeValueGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeValueGet)(IMNode           *This,
                                                                /* [out] */ BSTR *_pbsValue);

    DECLSPEC_XFGVIRT(IMNode, NodeValueSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeValueSet)(IMNode         *This,
                                                                /* [in] */ BSTR _bsValue);

    DECLSPEC_XFGVIRT(IMNode, NodePathGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodePathGet)(IMNode            *This,
                                                               /* [out] */ BSTR  *_bsPath,
                                                               /* [in] */ IMNode *_pRoot);

    DECLSPEC_XFGVIRT(IMNode, NodeParentGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeParentGet)(IMNode              *This,
                                                                 /* [out] */ IMNode **_ppParent);

    DECLSPEC_XFGVIRT(IMNode, NodeDetach)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeDetach)(IMNode *This);

    DECLSPEC_XFGVIRT(IMNode, NodeGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeGetCount)(IMNode          *This,
                                                                /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMNode, NodeGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeGetByIndex)(IMNode              *This,
                                                                  /* [in] */ int       _nIndex,
                                                                  /* [out] */ BSTR    *_pbsName,
                                                                  /* [out] */ IMNode **_ppNode);

    DECLSPEC_XFGVIRT(IMNode, NodeAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeAdd)(IMNode              *This,
                                                           /* [in] */ BSTR      _bsPath,
                                                           /* [in] */ BSTR      _bsValue,
                                                           /* [out] */ IMNode **_ppNode);

    DECLSPEC_XFGVIRT(IMNode, NodeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeGet)(IMNode              *This,
                                                           /* [in] */ BSTR      _bsPath,
                                                           /* [in] */ BOOL      _bCreateNew,
                                                           /* [out] */ IMNode **_ppNode);

    DECLSPEC_XFGVIRT(IMNode, NodeRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeRemove)(IMNode         *This,
                                                              /* [in] */ BSTR _bsPath);

    DECLSPEC_XFGVIRT(IMNode, NodeRemoveAll)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeRemoveAll)(IMNode         *This,
                                                                 /* [in] */ BOOL _bRemoveAttributes);

    DECLSPEC_XFGVIRT(IMNode, NodeParse)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeParse)(IMNode         *This,
                                                             /* [in] */ BSTR _pbsXMLString,
                                                             /* [in] */ BOOL _bUpdateName);

    DECLSPEC_XFGVIRT(IMNode, NodeSave)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeSave)(IMNode           *This,
                                                            /* [out] */ BSTR *_pbsXMLString);

    DECLSPEC_XFGVIRT(IMNode, NodeClone)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeClone)(IMNode              *This,
                                                             /* [out] */ IMNode **_ppClone);

    DECLSPEC_XFGVIRT(IMNode, NodeSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeSet)(IMNode                 *This,
                                                           /* [in] */ IMNode      *_pNodeSet,
                                                           /* [in] */ eMUpdateType _eUpdateType);

    DECLSPEC_XFGVIRT(IMNode, NodeInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *NodeInfoGet)(IMNode           *This,
                                                               /* [in] */ BSTR   _bsInfoType,
                                                               /* [out] */ BSTR *_pbsDecription);

    END_INTERFACE
} IMNodeVtbl;

interface IMNode { CONST_VTBL struct IMNodeVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMNode_QueryInterface(This, riid, ppvObject) ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMNode_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMNode_Release(This) ((This)->lpVtbl->Release(This))

            #define IMNode_AttributesGetCount(This, _pnCount) ((This)->lpVtbl->AttributesGetCount(This, _pnCount))

            #define IMNode_AttributesGetByIndex(This, _nIndex, _pbsName, _pbsValue) \
                ((This)->lpVtbl->AttributesGetByIndex(This, _nIndex, _pbsName, _pbsValue))

            #define IMNode_AttributesRemove(This, _bsName) ((This)->lpVtbl->AttributesRemove(This, _bsName))

            #define IMNode_AttributesRemoveAll(This) ((This)->lpVtbl->AttributesRemoveAll(This))

            #define IMNode_AttributesStringSet(This, _bsName, _bsValue) \
                ((This)->lpVtbl->AttributesStringSet(This, _bsName, _bsValue))

            #define IMNode_AttributesBoolSet(This, _bsName, _bValue) \
                ((This)->lpVtbl->AttributesBoolSet(This, _bsName, _bValue))

            #define IMNode_AttributesIntSet(This, _bsName, _nValue) \
                ((This)->lpVtbl->AttributesIntSet(This, _bsName, _nValue))

            #define IMNode_AttributesDoubleSet(This, _bsName, _dblValue) \
                ((This)->lpVtbl->AttributesDoubleSet(This, _bsName, _dblValue))

            #define IMNode_AttributesHave(This, _bsName, _pbHave, _pbsValueOrDefault) \
                ((This)->lpVtbl->AttributesHave(This, _bsName, _pbHave, _pbsValueOrDefault))

            #define IMNode_AttributesStringGet(This, _bsName, _pbsValue) \
                ((This)->lpVtbl->AttributesStringGet(This, _bsName, _pbsValue))

            #define IMNode_AttributesIntGet(This, _bsName, _pnValue) \
                ((This)->lpVtbl->AttributesIntGet(This, _bsName, _pnValue))

            #define IMNode_AttributesBoolGet(This, _bsName, _pbValue) \
                ((This)->lpVtbl->AttributesBoolGet(This, _bsName, _pbValue))

            #define IMNode_AttributesDoubleGet(This, _bsName, _pdblValue) \
                ((This)->lpVtbl->AttributesDoubleGet(This, _bsName, _pdblValue))

            #define IMNode_AttributesMultipleSet(This, _bsAttributesList, _eUpdateType) \
                ((This)->lpVtbl->AttributesMultipleSet(This, _bsAttributesList, _eUpdateType))

            #define IMNode_AttributesSave(This, _pbsAttributesList) \
                ((This)->lpVtbl->AttributesSave(This, _pbsAttributesList))

            #define IMNode_AttributesClone(This, _ppClone) ((This)->lpVtbl->AttributesClone(This, _ppClone))

            #define IMNode_AttributesSet(This, _pAttributesList, _eUpdateType) \
                ((This)->lpVtbl->AttributesSet(This, _pAttributesList, _eUpdateType))

            #define IMNode_AttributesInfoGetCount(This, _pnCount) \
                ((This)->lpVtbl->AttributesInfoGetCount(This, _pnCount))

            #define IMNode_AttributesInfoGetByIndex(This, _nIndex, _pbsName) \
                ((This)->lpVtbl->AttributesInfoGetByIndex(This, _nIndex, _pbsName))

            #define IMNode_AttributesInfoGet(This, _bsName, _eType, _pbsInfo) \
                ((This)->lpVtbl->AttributesInfoGet(This, _bsName, _eType, _pbsInfo))

            #define IMNode_AttributesValuesInfoGet(This, _bsName, _bsValue, _bsType, _pbsInfo) \
                ((This)->lpVtbl->AttributesValuesInfoGet(This, _bsName, _bsValue, _bsType, _pbsInfo))

            #define IMNode_NodeNameGet(This, _pbsName) ((This)->lpVtbl->NodeNameGet(This, _pbsName))

            #define IMNode_NodeNameSet(This, _bsName) ((This)->lpVtbl->NodeNameSet(This, _bsName))

            #define IMNode_NodeValueGet(This, _pbsValue) ((This)->lpVtbl->NodeValueGet(This, _pbsValue))

            #define IMNode_NodeValueSet(This, _bsValue) ((This)->lpVtbl->NodeValueSet(This, _bsValue))

            #define IMNode_NodePathGet(This, _bsPath, _pRoot) ((This)->lpVtbl->NodePathGet(This, _bsPath, _pRoot))

            #define IMNode_NodeParentGet(This, _ppParent) ((This)->lpVtbl->NodeParentGet(This, _ppParent))

            #define IMNode_NodeDetach(This) ((This)->lpVtbl->NodeDetach(This))

            #define IMNode_NodeGetCount(This, _pnCount) ((This)->lpVtbl->NodeGetCount(This, _pnCount))

            #define IMNode_NodeGetByIndex(This, _nIndex, _pbsName, _ppNode) \
                ((This)->lpVtbl->NodeGetByIndex(This, _nIndex, _pbsName, _ppNode))

            #define IMNode_NodeAdd(This, _bsPath, _bsValue, _ppNode) \
                ((This)->lpVtbl->NodeAdd(This, _bsPath, _bsValue, _ppNode))

            #define IMNode_NodeGet(This, _bsPath, _bCreateNew, _ppNode) \
                ((This)->lpVtbl->NodeGet(This, _bsPath, _bCreateNew, _ppNode))

            #define IMNode_NodeRemove(This, _bsPath) ((This)->lpVtbl->NodeRemove(This, _bsPath))

            #define IMNode_NodeRemoveAll(This, _bRemoveAttributes) \
                ((This)->lpVtbl->NodeRemoveAll(This, _bRemoveAttributes))

            #define IMNode_NodeParse(This, _pbsXMLString, _bUpdateName) \
                ((This)->lpVtbl->NodeParse(This, _pbsXMLString, _bUpdateName))

            #define IMNode_NodeSave(This, _pbsXMLString) ((This)->lpVtbl->NodeSave(This, _pbsXMLString))

            #define IMNode_NodeClone(This, _ppClone) ((This)->lpVtbl->NodeClone(This, _ppClone))

            #define IMNode_NodeSet(This, _pNodeSet, _eUpdateType) \
                ((This)->lpVtbl->NodeSet(This, _pNodeSet, _eUpdateType))

            #define IMNode_NodeInfoGet(This, _bsInfoType, _pbsDecription) \
                ((This)->lpVtbl->NodeInfoGet(This, _bsInfoType, _pbsDecription))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMNode_INTERFACE_DEFINED__ */

#ifndef __IMCallback_INTERFACE_DEFINED__
    #define __IMCallback_INTERFACE_DEFINED__

/* interface IMCallback */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMCallback;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366005-473F-4ad5-A5C2-428FE0C8E03E")
IMCallback: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnEvent(
        /* [in] */ LONGLONG llCallbackUserData,
        /* [in] */ BSTR     bsName,
        /* [in] */ BSTR     bsEventName,
        /* [in] */ BSTR     bsEventParam,
        /* [in] */ IUnknown * pEventObject) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnFrame(
        /* [in] */ LONGLONG llCallbackUserData,
        /* [in] */ BSTR     bsName,
        /* [in] */ IUnknown * pMFrame) = 0;
};

    #else /* C style interface */

typedef struct IMCallbackVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMCallback       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMCallback *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMCallback *This);

    DECLSPEC_XFGVIRT(IMCallback, OnEvent)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *OnEvent)(IMCallback          *This,
                                                           /* [in] */ LONGLONG  llCallbackUserData,
                                                           /* [in] */ BSTR      bsName,
                                                           /* [in] */ BSTR      bsEventName,
                                                           /* [in] */ BSTR      bsEventParam,
                                                           /* [in] */ IUnknown *pEventObject);

    DECLSPEC_XFGVIRT(IMCallback, OnFrame)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *OnFrame)(IMCallback          *This,
                                                           /* [in] */ LONGLONG  llCallbackUserData,
                                                           /* [in] */ BSTR      bsName,
                                                           /* [in] */ IUnknown *pMFrame);

    END_INTERFACE
} IMCallbackVtbl;

interface IMCallback { CONST_VTBL struct IMCallbackVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMCallback_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMCallback_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMCallback_Release(This) ((This)->lpVtbl->Release(This))

            #define IMCallback_OnEvent(This, llCallbackUserData, bsName, bsEventName, bsEventParam, pEventObject) \
                ((This)->lpVtbl->OnEvent(This, llCallbackUserData, bsName, bsEventName, bsEventParam, pEventObject))

            #define IMCallback_OnFrame(This, llCallbackUserData, bsName, pMFrame) \
                ((This)->lpVtbl->OnFrame(This, llCallbackUserData, bsName, pMFrame))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMCallback_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_MFormats_0000_0009 */
/* [local] */

typedef HRESULT(WINAPI *PFOnEvent)(LONGLONG  llCallbackUserData,
                                   BSTR      bsChannelID,
                                   BSTR      bsEventName,
                                   BSTR      bsEventParam,
                                   IUnknown *pEventObject);
typedef HRESULT(WINAPI *PFOnFrame)(LONGLONG llCallbackUserData, BSTR bsChannelID, IUnknown *pMFrame);

extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0009_v0_0_s_ifspec;

#ifndef __IMPreview_INTERFACE_DEFINED__
    #define __IMPreview_INTERFACE_DEFINED__

/* interface IMPreview */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMPreview;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366160-473F-4ad5-A5C2-428FE0C8E03E")
IMPreview: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PreviewEnable(
        /* [in] */ BSTR _bsChannelID,
        /* [in] */ BOOL _bEnableAudio,
        /* [in] */ BOOL _bEnableVideo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PreviewWindowSet(
        /* [in] */ BSTR     _bsChannelID,
        /* [in] */ LONGLONG _hWndParent) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PreviewFullScreen(
        /* [in] */ BSTR _bsChannelID,
        /* [in] */ BOOL _bFullScreen,
        /* [in] */ int  _nDisplay) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PreviewIsFullScreen(
        /* [in] */ BSTR _bsChannelID,
        /* [in] */ BOOL * _pbFullScreen,
        /* [in] */ int *_pnDisplay) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PreviewAudioVolumeSet(
        /* [in] */ BSTR   _bsChannelID,
        /* [in] */ int    _nChannel,
        /* [in] */ double _dblAttenuationdB) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PreviewAudioVolumeGet(
        /* [in] */ BSTR     _bsChannelID,
        /* [in] */ int      _nChannel,
        /* [out] */ double *_pdblAttenuationdB) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PreviewSetCursor(
        /* [in] */ BSTR         _bsChannelID,
        /* [in] */ eMCursorType _eCursor) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PreviewIsEnabled(
        /* [in] */ BSTR _bsChannelID,
        /* [out] */ BOOL * _pbEnabledAudio,
        /* [out] */ BOOL * _pbEnabledVideo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PreviewWindowSetVB6(
        /* [in] */ BSTR _bsChannelID,
        /* [in] */ LONG _hWndParent) = 0;
};

    #else /* C style interface */

typedef struct IMPreviewVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMPreview        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMPreview *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMPreview *This);

    DECLSPEC_XFGVIRT(IMPreview, PreviewEnable)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PreviewEnable)(IMPreview      *This,
                                                                 /* [in] */ BSTR _bsChannelID,
                                                                 /* [in] */ BOOL _bEnableAudio,
                                                                 /* [in] */ BOOL _bEnableVideo);

    DECLSPEC_XFGVIRT(IMPreview, PreviewWindowSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PreviewWindowSet)(IMPreview          *This,
                                                                    /* [in] */ BSTR     _bsChannelID,
                                                                    /* [in] */ LONGLONG _hWndParent);

    DECLSPEC_XFGVIRT(IMPreview, PreviewFullScreen)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PreviewFullScreen)(IMPreview      *This,
                                                                     /* [in] */ BSTR _bsChannelID,
                                                                     /* [in] */ BOOL _bFullScreen,
                                                                     /* [in] */ int  _nDisplay);

    DECLSPEC_XFGVIRT(IMPreview, PreviewIsFullScreen)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PreviewIsFullScreen)(IMPreview       *This,
                                                                       /* [in] */ BSTR  _bsChannelID,
                                                                       /* [in] */ BOOL *_pbFullScreen,
                                                                       /* [in] */ int  *_pnDisplay);

    DECLSPEC_XFGVIRT(IMPreview, PreviewAudioVolumeSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PreviewAudioVolumeSet)(IMPreview        *This,
                                                                         /* [in] */ BSTR   _bsChannelID,
                                                                         /* [in] */ int    _nChannel,
                                                                         /* [in] */ double _dblAttenuationdB);

    DECLSPEC_XFGVIRT(IMPreview, PreviewAudioVolumeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PreviewAudioVolumeGet)(IMPreview          *This,
                                                                         /* [in] */ BSTR     _bsChannelID,
                                                                         /* [in] */ int      _nChannel,
                                                                         /* [out] */ double *_pdblAttenuationdB);

    DECLSPEC_XFGVIRT(IMPreview, PreviewSetCursor)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PreviewSetCursor)(IMPreview              *This,
                                                                    /* [in] */ BSTR         _bsChannelID,
                                                                    /* [in] */ eMCursorType _eCursor);

    DECLSPEC_XFGVIRT(IMPreview, PreviewIsEnabled)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PreviewIsEnabled)(IMPreview        *This,
                                                                    /* [in] */ BSTR   _bsChannelID,
                                                                    /* [out] */ BOOL *_pbEnabledAudio,
                                                                    /* [out] */ BOOL *_pbEnabledVideo);

    DECLSPEC_XFGVIRT(IMPreview, PreviewWindowSetVB6)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PreviewWindowSetVB6)(IMPreview      *This,
                                                                       /* [in] */ BSTR _bsChannelID,
                                                                       /* [in] */ LONG _hWndParent);

    END_INTERFACE
} IMPreviewVtbl;

interface IMPreview { CONST_VTBL struct IMPreviewVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMPreview_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMPreview_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMPreview_Release(This) ((This)->lpVtbl->Release(This))

            #define IMPreview_PreviewEnable(This, _bsChannelID, _bEnableAudio, _bEnableVideo) \
                ((This)->lpVtbl->PreviewEnable(This, _bsChannelID, _bEnableAudio, _bEnableVideo))

            #define IMPreview_PreviewWindowSet(This, _bsChannelID, _hWndParent) \
                ((This)->lpVtbl->PreviewWindowSet(This, _bsChannelID, _hWndParent))

            #define IMPreview_PreviewFullScreen(This, _bsChannelID, _bFullScreen, _nDisplay) \
                ((This)->lpVtbl->PreviewFullScreen(This, _bsChannelID, _bFullScreen, _nDisplay))

            #define IMPreview_PreviewIsFullScreen(This, _bsChannelID, _pbFullScreen, _pnDisplay) \
                ((This)->lpVtbl->PreviewIsFullScreen(This, _bsChannelID, _pbFullScreen, _pnDisplay))

            #define IMPreview_PreviewAudioVolumeSet(This, _bsChannelID, _nChannel, _dblAttenuationdB) \
                ((This)->lpVtbl->PreviewAudioVolumeSet(This, _bsChannelID, _nChannel, _dblAttenuationdB))

            #define IMPreview_PreviewAudioVolumeGet(This, _bsChannelID, _nChannel, _pdblAttenuationdB) \
                ((This)->lpVtbl->PreviewAudioVolumeGet(This, _bsChannelID, _nChannel, _pdblAttenuationdB))

            #define IMPreview_PreviewSetCursor(This, _bsChannelID, _eCursor) \
                ((This)->lpVtbl->PreviewSetCursor(This, _bsChannelID, _eCursor))

            #define IMPreview_PreviewIsEnabled(This, _bsChannelID, _pbEnabledAudio, _pbEnabledVideo) \
                ((This)->lpVtbl->PreviewIsEnabled(This, _bsChannelID, _pbEnabledAudio, _pbEnabledVideo))

            #define IMPreview_PreviewWindowSetVB6(This, _bsChannelID, _hWndParent) \
                ((This)->lpVtbl->PreviewWindowSetVB6(This, _bsChannelID, _hWndParent))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMPreview_INTERFACE_DEFINED__ */

#ifndef __IMWebRTC_INTERFACE_DEFINED__
    #define __IMWebRTC_INTERFACE_DEFINED__

/* interface IMWebRTC */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMWebRTC;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("59CDAE09-351A-4711-B088-7C7963300FE7")
IMWebRTC: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Login(
        /* [in] */ BSTR _bsSigServerURL,
        /* [in] */ BSTR _bsAccessNameOrPropsList,
        /* [out] */ BSTR * _pbsPeerID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Logout(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPeersCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPeerByIndex(
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsAccessName,
        /* [out] */ BSTR *_pbsPeerID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConnectToPeer(
        /* [in] */ BSTR _bsPeerID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DisconnectPeer(
        /* [in] */ BSTR _bsPeerID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendMessageToPeer(
        /* [in] */ BSTR _bsPeerID,
        /* [in] */ BSTR _bsMessage) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectCallbackSet(
        /* [in] */ IMCallback * _pCallback,
        /* [in] */ LONGLONG _llCallbackUserData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectCallbackSetFunc(
        /* [in] */ LONGLONG _lpPFOnEvent,
        /* [in] */ LONGLONG _lpPFOnFrame,
        /* [in] */ LONGLONG _llCallbackUserData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPeerProps(
        /* [in] */ BSTR   _bsPeerID,
        /* [out] */ int  *_pnIndex,
        /* [out] */ BSTR *_pbsAccessName,
        /* [out] */ BSTR *_pbsPeerPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendDataToPeer(
        /* [in] */ BSTR _bsPeerID,
        /* [in] */ BSTR _bsMessage,
        /* [in] */ IMFBuffer * _pBuffer) = 0;
};

    #else /* C style interface */

typedef struct IMWebRTCVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMWebRTC         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMWebRTC *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMWebRTC *This);

    DECLSPEC_XFGVIRT(IMWebRTC, Login)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *Login)(IMWebRTC         *This,
                                                         /* [in] */ BSTR   _bsSigServerURL,
                                                         /* [in] */ BSTR   _bsAccessNameOrPropsList,
                                                         /* [out] */ BSTR *_pbsPeerID);

    DECLSPEC_XFGVIRT(IMWebRTC, Logout)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *Logout)(IMWebRTC *This);

    DECLSPEC_XFGVIRT(IMWebRTC, GetPeersCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetPeersCount)(IMWebRTC        *This,
                                                                 /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMWebRTC, GetPeerByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetPeerByIndex)(IMWebRTC         *This,
                                                                  /* [in] */ int    _nIndex,
                                                                  /* [out] */ BSTR *_pbsAccessName,
                                                                  /* [out] */ BSTR *_pbsPeerID);

    DECLSPEC_XFGVIRT(IMWebRTC, ConnectToPeer)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConnectToPeer)(IMWebRTC       *This,
                                                                 /* [in] */ BSTR _bsPeerID);

    DECLSPEC_XFGVIRT(IMWebRTC, DisconnectPeer)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DisconnectPeer)(IMWebRTC       *This,
                                                                  /* [in] */ BSTR _bsPeerID);

    DECLSPEC_XFGVIRT(IMWebRTC, SendMessageToPeer)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SendMessageToPeer)(IMWebRTC       *This,
                                                                     /* [in] */ BSTR _bsPeerID,
                                                                     /* [in] */ BSTR _bsMessage);

    DECLSPEC_XFGVIRT(IMWebRTC, ObjectCallbackSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectCallbackSet)(IMWebRTC              *This,
                                                                     /* [in] */ IMCallback *_pCallback,
                                                                     /* [in] */ LONGLONG    _llCallbackUserData);

    DECLSPEC_XFGVIRT(IMWebRTC, ObjectCallbackSetFunc)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectCallbackSetFunc)(IMWebRTC           *This,
                                                                         /* [in] */ LONGLONG _lpPFOnEvent,
                                                                         /* [in] */ LONGLONG _lpPFOnFrame,
                                                                         /* [in] */ LONGLONG _llCallbackUserData);

    DECLSPEC_XFGVIRT(IMWebRTC, GetPeerProps)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetPeerProps)(IMWebRTC         *This,
                                                                /* [in] */ BSTR   _bsPeerID,
                                                                /* [out] */ int  *_pnIndex,
                                                                /* [out] */ BSTR *_pbsAccessName,
                                                                /* [out] */ BSTR *_pbsPeerPropsList);

    DECLSPEC_XFGVIRT(IMWebRTC, SendDataToPeer)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SendDataToPeer)(IMWebRTC             *This,
                                                                  /* [in] */ BSTR       _bsPeerID,
                                                                  /* [in] */ BSTR       _bsMessage,
                                                                  /* [in] */ IMFBuffer *_pBuffer);

    END_INTERFACE
} IMWebRTCVtbl;

interface IMWebRTC { CONST_VTBL struct IMWebRTCVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMWebRTC_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMWebRTC_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMWebRTC_Release(This) ((This)->lpVtbl->Release(This))

            #define IMWebRTC_Login(This, _bsSigServerURL, _bsAccessNameOrPropsList, _pbsPeerID) \
                ((This)->lpVtbl->Login(This, _bsSigServerURL, _bsAccessNameOrPropsList, _pbsPeerID))

            #define IMWebRTC_Logout(This) ((This)->lpVtbl->Logout(This))

            #define IMWebRTC_GetPeersCount(This, _pnCount) ((This)->lpVtbl->GetPeersCount(This, _pnCount))

            #define IMWebRTC_GetPeerByIndex(This, _nIndex, _pbsAccessName, _pbsPeerID) \
                ((This)->lpVtbl->GetPeerByIndex(This, _nIndex, _pbsAccessName, _pbsPeerID))

            #define IMWebRTC_ConnectToPeer(This, _bsPeerID) ((This)->lpVtbl->ConnectToPeer(This, _bsPeerID))

            #define IMWebRTC_DisconnectPeer(This, _bsPeerID) ((This)->lpVtbl->DisconnectPeer(This, _bsPeerID))

            #define IMWebRTC_SendMessageToPeer(This, _bsPeerID, _bsMessage) \
                ((This)->lpVtbl->SendMessageToPeer(This, _bsPeerID, _bsMessage))

            #define IMWebRTC_ObjectCallbackSet(This, _pCallback, _llCallbackUserData) \
                ((This)->lpVtbl->ObjectCallbackSet(This, _pCallback, _llCallbackUserData))

            #define IMWebRTC_ObjectCallbackSetFunc(This, _lpPFOnEvent, _lpPFOnFrame, _llCallbackUserData) \
                ((This)->lpVtbl->ObjectCallbackSetFunc(This, _lpPFOnEvent, _lpPFOnFrame, _llCallbackUserData))

            #define IMWebRTC_GetPeerProps(This, _bsPeerID, _pnIndex, _pbsAccessName, _pbsPeerPropsList) \
                ((This)->lpVtbl->GetPeerProps(This, _bsPeerID, _pnIndex, _pbsAccessName, _pbsPeerPropsList))

            #define IMWebRTC_SendDataToPeer(This, _bsPeerID, _bsMessage, _pBuffer) \
                ((This)->lpVtbl->SendDataToPeer(This, _bsPeerID, _bsMessage, _pBuffer))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMWebRTC_INTERFACE_DEFINED__ */

#ifndef __IMFSignalingDTMF_INTERFACE_DEFINED__
    #define __IMFSignalingDTMF_INTERFACE_DEFINED__

/* interface IMFSignalingDTMF */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFSignalingDTMF;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("6EC50BAF-7252-48B1-B8FE-ABAF44B027D6")
IMFSignalingDTMF: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DTMFToneAdd(
        /* [in] */ BSTR _str,
        /* [in] */ BOOL _bReplace) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectCallbackSet(
        /* [in] */ IMCallback * _pCallback,
        /* [in] */ LONGLONG _llCallbackUserData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectCallbackSetFunc(
        /* [in] */ LONGLONG _lpPFOnEvent,
        /* [in] */ LONGLONG _lpPFOnFrame,
        /* [in] */ LONGLONG _llCallbackUserData) = 0;
};

    #else /* C style interface */

typedef struct IMFSignalingDTMFVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFSignalingDTMF *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFSignalingDTMF *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFSignalingDTMF *This);

    DECLSPEC_XFGVIRT(IMFSignalingDTMF, DTMFToneAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DTMFToneAdd)(IMFSignalingDTMF *This,
                                                               /* [in] */ BSTR   _str,
                                                               /* [in] */ BOOL   _bReplace);

    DECLSPEC_XFGVIRT(IMFSignalingDTMF, ObjectCallbackSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectCallbackSet)(IMFSignalingDTMF      *This,
                                                                     /* [in] */ IMCallback *_pCallback,
                                                                     /* [in] */ LONGLONG    _llCallbackUserData);

    DECLSPEC_XFGVIRT(IMFSignalingDTMF, ObjectCallbackSetFunc)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectCallbackSetFunc)(IMFSignalingDTMF   *This,
                                                                         /* [in] */ LONGLONG _lpPFOnEvent,
                                                                         /* [in] */ LONGLONG _lpPFOnFrame,
                                                                         /* [in] */ LONGLONG _llCallbackUserData);

    END_INTERFACE
} IMFSignalingDTMFVtbl;

interface IMFSignalingDTMF { CONST_VTBL struct IMFSignalingDTMFVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFSignalingDTMF_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFSignalingDTMF_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFSignalingDTMF_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFSignalingDTMF_DTMFToneAdd(This, _str, _bReplace) \
                ((This)->lpVtbl->DTMFToneAdd(This, _str, _bReplace))

            #define IMFSignalingDTMF_ObjectCallbackSet(This, _pCallback, _llCallbackUserData) \
                ((This)->lpVtbl->ObjectCallbackSet(This, _pCallback, _llCallbackUserData))

            #define IMFSignalingDTMF_ObjectCallbackSetFunc(This, _lpPFOnEvent, _lpPFOnFrame, _llCallbackUserData) \
                ((This)->lpVtbl->ObjectCallbackSetFunc(This, _lpPFOnEvent, _lpPFOnFrame, _llCallbackUserData))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFSignalingDTMF_INTERFACE_DEFINED__ */

#ifndef __IMCCDisplay_INTERFACE_DEFINED__
    #define __IMCCDisplay_INTERFACE_DEFINED__

/* interface IMCCDisplay */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMCCDisplay;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("7713D728-4BA5-44D4-8A58-C6CD66C8AB86")
IMCCDisplay: public IUnknown {public : };

    #else /* C style interface */

typedef struct IMCCDisplayVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMCCDisplay      *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMCCDisplay *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMCCDisplay *This);

    END_INTERFACE
} IMCCDisplayVtbl;

interface IMCCDisplay { CONST_VTBL struct IMCCDisplayVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMCCDisplay_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMCCDisplay_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMCCDisplay_Release(This) ((This)->lpVtbl->Release(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMCCDisplay_INTERFACE_DEFINED__ */

#ifndef __IMFShader_INTERFACE_DEFINED__
    #define __IMFShader_INTERFACE_DEFINED__

/* interface IMFShader */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFShader;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("87921996-636E-4256-8E2D-FC01472A6BFD")
IMFShader: public IUnknown {public : };

    #else /* C style interface */

typedef struct IMFShaderVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFShader        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFShader *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFShader *This);

    END_INTERFACE
} IMFShaderVtbl;

interface IMFShader { CONST_VTBL struct IMFShaderVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFShader_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFShader_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFShader_Release(This) ((This)->lpVtbl->Release(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFShader_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_MFormats_0000_0014 */
/* [local] */

#ifndef MGCOLORS_STRUCT_DEFINED
    #define MGCOLORS_STRUCT_DEFINED
typedef struct MG_BRIGHT_CONT_PARAM {
    double dblColorGain;
    double dblBrightness;
    double dblContrast;
    double dblBlackLevel;
    double dblWhiteLevel;
} MG_BRIGHT_CONT_PARAM;

typedef struct MG_COLOR_PARAM {
    double dblYlevel;
    double dblUlevel;
    double dblVlevel;
    double dblUVGain;
    double dblYGain;
} MG_COLOR_PARAM;

#endif // MGCOLORS_STRUCT_DEFINED

extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0014_v0_0_s_ifspec;

#ifndef __IMColors_INTERFACE_DEFINED__
    #define __IMColors_INTERFACE_DEFINED__

/* interface IMColors */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMColors;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("9470BBBC-F37F-47CA-9FA5-F130E9605875")
IMColors: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBrightContParam(
        /* [in] */ MG_BRIGHT_CONT_PARAM * _pParam,
        /* [in] */ BOOL _bEnable,
        /* [in] */ int  _nMSecForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBrightContParam(
        /* [out] */ MG_BRIGHT_CONT_PARAM * _pParam,
        /* [out] */ BOOL * _pbEnable) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetColorParam(
        /* [in] */ MG_COLOR_PARAM * _pParam,
        /* [in] */ BOOL _bEnable,
        /* [in] */ int  _nMSecForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetColorParam(
        /* [out] */ MG_COLOR_PARAM * _pParam,
        /* [out] */ BOOL * _pbEnable) = 0;
};

    #else /* C style interface */

typedef struct IMColorsVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMColors         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMColors *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMColors *This);

    DECLSPEC_XFGVIRT(IMColors, SetBrightContParam)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SetBrightContParam)(IMColors                        *This,
                                                                      /* [in] */ MG_BRIGHT_CONT_PARAM *_pParam,
                                                                      /* [in] */ BOOL                  _bEnable,
                                                                      /* [in] */ int                   _nMSecForChange);

    DECLSPEC_XFGVIRT(IMColors, GetBrightContParam)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetBrightContParam)(IMColors                         *This,
                                                                      /* [out] */ MG_BRIGHT_CONT_PARAM *_pParam,
                                                                      /* [out] */ BOOL                 *_pbEnable);

    DECLSPEC_XFGVIRT(IMColors, SetColorParam)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SetColorParam)(IMColors                  *This,
                                                                 /* [in] */ MG_COLOR_PARAM *_pParam,
                                                                 /* [in] */ BOOL            _bEnable,
                                                                 /* [in] */ int             _nMSecForChange);

    DECLSPEC_XFGVIRT(IMColors, GetColorParam)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetColorParam)(IMColors                   *This,
                                                                 /* [out] */ MG_COLOR_PARAM *_pParam,
                                                                 /* [out] */ BOOL           *_pbEnable);

    END_INTERFACE
} IMColorsVtbl;

interface IMColors { CONST_VTBL struct IMColorsVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMColors_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMColors_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMColors_Release(This) ((This)->lpVtbl->Release(This))

            #define IMColors_SetBrightContParam(This, _pParam, _bEnable, _nMSecForChange) \
                ((This)->lpVtbl->SetBrightContParam(This, _pParam, _bEnable, _nMSecForChange))

            #define IMColors_GetBrightContParam(This, _pParam, _pbEnable) \
                ((This)->lpVtbl->GetBrightContParam(This, _pParam, _pbEnable))

            #define IMColors_SetColorParam(This, _pParam, _bEnable, _nMSecForChange) \
                ((This)->lpVtbl->SetColorParam(This, _pParam, _bEnable, _nMSecForChange))

            #define IMColors_GetColorParam(This, _pParam, _pbEnable) \
                ((This)->lpVtbl->GetColorParam(This, _pParam, _pbEnable))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMColors_INTERFACE_DEFINED__ */

#ifndef __IMStorage_INTERFACE_DEFINED__
    #define __IMStorage_INTERFACE_DEFINED__

/* interface IMStorage */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMStorage;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("8A3FFE4F-51C3-4056-B407-B3BD7FF62342")
IMStorage: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetStorageParam(
        /* [in] */ LONGLONG      _llMaxSize,
        /* [in] */ LONGLONG      _llMaxGrowSize,
        /* [in] */ eStorageUnits _eUnits) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStorageParam(
        /* [out] */ LONGLONG * _pllMaxSize,
        /* [out] */ LONGLONG * _pllMaxGrowSize,
        /* [out] */ eStorageUnits * _peUnits) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMemoryBufferSize(
        /* [in] */ LONG _lBufferSize) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMemoryBufferSize(
        /* [out] */ LONG * _plBufferSize) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init(
        /* [in] */ BSTR             _bsFileName,
        /* [in] */ eStorageInitType _eInitType,
        /* [out] */ REFERENCE_TIME * _prtAppendStartTime) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFileName(
        /* [out] */ BSTR * _pbsFileName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RegisterStorage(
        /* [in] */ BOOL _bRegister) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReceiveData(
        /* [in] */ DWORD _cbData,
        /* [size_is][in] */ BYTE * _pbData,
        /* [in] */ REFERENCE_TIME * _prtTime,
        /* [in] */ DWORD _dwFlags) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPos(
        /* [out] */ LONGLONG * _pllStart,
        /* [out] */ LONGLONG * _pllEnd) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTime(
        /* [out] */ LONGLONG * _prtStart,
        /* [out] */ LONGLONG * _prtEnd) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPosForTime(
        /* [in] */ LONGLONG _rtTime,
        /* [out] */ LONGLONG * _pllPos,
        /* [out] */ LONGLONG * _prtChunkTime,
        /* [out] */ LONG * _pcbData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTimeForPos(
        /* [in] */ LONGLONG _llPos,
        /* [out] */ LONGLONG * _prtTime,
        /* [out] */ LONGLONG * _pllChunkPos,
        /* [out] */ LONG * _pcbData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSyncPosForTime(
        /* [in] */ LONGLONG _rtTime,
        /* [out] */ LONGLONG * _pllPos,
        /* [out] */ LONGLONG * _prtRealTime,
        /* [out] */ LONG * _pcbData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddReader(
        /* [out] */ LONG * _pnCookie) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReadData(
        /* [in] */ LONG     _nCookie,
        /* [in] */ LONGLONG _llPos,
        /* [out][in] */ LONG * _pcbData,
        /* [size_is][out] */ BYTE * _pbData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveReader(
        /* [in] */ LONG _nCookie) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LockPos(
        /* [in] */ LONG     _nCookie,
        /* [in] */ LONGLONG _llPos,
        /* [out] */ LONGLONG * _pllLockedPos) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLockPos(
        /* [in] */ LONG _nCookie,
        /* [out] */ LONGLONG * _pllLockedPos) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAuxData(
        /* [in] */ BSTR _bsDataName,
        /* [in] */ LONG _cbAuxData,
        /* [size_is][in] */ BYTE * _pbAuxData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAuxData(
        /* [in] */ BSTR _bsDataName,
        /* [out] */ LONG * _pcbAuxData,
        /* [size_is][size_is][out] */ BYTE * *_ppbAuxData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAuxDataCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAuxDataName(
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsName) = 0;
};

    #else /* C style interface */

typedef struct IMStorageVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMStorage        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMStorage *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMStorage *This);

    DECLSPEC_XFGVIRT(IMStorage, SetStorageParam)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SetStorageParam)(IMStorage               *This,
                                                                   /* [in] */ LONGLONG      _llMaxSize,
                                                                   /* [in] */ LONGLONG      _llMaxGrowSize,
                                                                   /* [in] */ eStorageUnits _eUnits);

    DECLSPEC_XFGVIRT(IMStorage, GetStorageParam)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetStorageParam)(IMStorage                 *This,
                                                                   /* [out] */ LONGLONG      *_pllMaxSize,
                                                                   /* [out] */ LONGLONG      *_pllMaxGrowSize,
                                                                   /* [out] */ eStorageUnits *_peUnits);

    DECLSPEC_XFGVIRT(IMStorage, SetMemoryBufferSize)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SetMemoryBufferSize)(IMStorage      *This,
                                                                       /* [in] */ LONG _lBufferSize);

    DECLSPEC_XFGVIRT(IMStorage, GetMemoryBufferSize)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetMemoryBufferSize)(IMStorage        *This,
                                                                       /* [out] */ LONG *_plBufferSize);

    DECLSPEC_XFGVIRT(IMStorage, Init)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *Init)(IMStorage                  *This,
                                                        /* [in] */ BSTR             _bsFileName,
                                                        /* [in] */ eStorageInitType _eInitType,
                                                        /* [out] */ REFERENCE_TIME *_prtAppendStartTime);

    DECLSPEC_XFGVIRT(IMStorage, GetFileName)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetFileName)(IMStorage        *This,
                                                               /* [out] */ BSTR *_pbsFileName);

    DECLSPEC_XFGVIRT(IMStorage, RegisterStorage)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *RegisterStorage)(IMStorage      *This,
                                                                   /* [in] */ BOOL _bRegister);

    DECLSPEC_XFGVIRT(IMStorage, Close)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *Close)(IMStorage *This);

    DECLSPEC_XFGVIRT(IMStorage, ReceiveData)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiveData)(IMStorage                 *This,
                                                               /* [in] */ DWORD           _cbData,
                                                               /* [size_is][in] */ BYTE  *_pbData,
                                                               /* [in] */ REFERENCE_TIME *_prtTime,
                                                               /* [in] */ DWORD           _dwFlags);

    DECLSPEC_XFGVIRT(IMStorage, GetPos)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetPos)(IMStorage            *This,
                                                          /* [out] */ LONGLONG *_pllStart,
                                                          /* [out] */ LONGLONG *_pllEnd);

    DECLSPEC_XFGVIRT(IMStorage, GetTime)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetTime)(IMStorage            *This,
                                                           /* [out] */ LONGLONG *_prtStart,
                                                           /* [out] */ LONGLONG *_prtEnd);

    DECLSPEC_XFGVIRT(IMStorage, GetPosForTime)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetPosForTime)(IMStorage            *This,
                                                                 /* [in] */ LONGLONG   _rtTime,
                                                                 /* [out] */ LONGLONG *_pllPos,
                                                                 /* [out] */ LONGLONG *_prtChunkTime,
                                                                 /* [out] */ LONG     *_pcbData);

    DECLSPEC_XFGVIRT(IMStorage, GetTimeForPos)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetTimeForPos)(IMStorage            *This,
                                                                 /* [in] */ LONGLONG   _llPos,
                                                                 /* [out] */ LONGLONG *_prtTime,
                                                                 /* [out] */ LONGLONG *_pllChunkPos,
                                                                 /* [out] */ LONG     *_pcbData);

    DECLSPEC_XFGVIRT(IMStorage, GetSyncPosForTime)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetSyncPosForTime)(IMStorage            *This,
                                                                     /* [in] */ LONGLONG   _rtTime,
                                                                     /* [out] */ LONGLONG *_pllPos,
                                                                     /* [out] */ LONGLONG *_prtRealTime,
                                                                     /* [out] */ LONG     *_pcbData);

    DECLSPEC_XFGVIRT(IMStorage, AddReader)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AddReader)(IMStorage        *This,
                                                             /* [out] */ LONG *_pnCookie);

    DECLSPEC_XFGVIRT(IMStorage, ReadData)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReadData)(IMStorage                 *This,
                                                            /* [in] */ LONG            _nCookie,
                                                            /* [in] */ LONGLONG        _llPos,
                                                            /* [out][in] */ LONG      *_pcbData,
                                                            /* [size_is][out] */ BYTE *_pbData);

    DECLSPEC_XFGVIRT(IMStorage, RemoveReader)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *RemoveReader)(IMStorage      *This,
                                                                /* [in] */ LONG _nCookie);

    DECLSPEC_XFGVIRT(IMStorage, LockPos)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *LockPos)(IMStorage            *This,
                                                           /* [in] */ LONG       _nCookie,
                                                           /* [in] */ LONGLONG   _llPos,
                                                           /* [out] */ LONGLONG *_pllLockedPos);

    DECLSPEC_XFGVIRT(IMStorage, GetLockPos)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetLockPos)(IMStorage            *This,
                                                              /* [in] */ LONG       _nCookie,
                                                              /* [out] */ LONGLONG *_pllLockedPos);

    DECLSPEC_XFGVIRT(IMStorage, Reset)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *Reset)(IMStorage *This);

    DECLSPEC_XFGVIRT(IMStorage, SetAuxData)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SetAuxData)(IMStorage                *This,
                                                              /* [in] */ BSTR           _bsDataName,
                                                              /* [in] */ LONG           _cbAuxData,
                                                              /* [size_is][in] */ BYTE *_pbAuxData);

    DECLSPEC_XFGVIRT(IMStorage, GetAuxData)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetAuxData)(IMStorage                           *This,
                                                              /* [in] */ BSTR                      _bsDataName,
                                                              /* [out] */ LONG                    *_pcbAuxData,
                                                              /* [size_is][size_is][out] */ BYTE **_ppbAuxData);

    DECLSPEC_XFGVIRT(IMStorage, GetAuxDataCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetAuxDataCount)(IMStorage       *This,
                                                                   /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMStorage, GetAuxDataName)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetAuxDataName)(IMStorage        *This,
                                                                  /* [in] */ int    _nIndex,
                                                                  /* [out] */ BSTR *_pbsName);

    END_INTERFACE
} IMStorageVtbl;

interface IMStorage { CONST_VTBL struct IMStorageVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMStorage_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMStorage_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMStorage_Release(This) ((This)->lpVtbl->Release(This))

            #define IMStorage_SetStorageParam(This, _llMaxSize, _llMaxGrowSize, _eUnits) \
                ((This)->lpVtbl->SetStorageParam(This, _llMaxSize, _llMaxGrowSize, _eUnits))

            #define IMStorage_GetStorageParam(This, _pllMaxSize, _pllMaxGrowSize, _peUnits) \
                ((This)->lpVtbl->GetStorageParam(This, _pllMaxSize, _pllMaxGrowSize, _peUnits))

            #define IMStorage_SetMemoryBufferSize(This, _lBufferSize) \
                ((This)->lpVtbl->SetMemoryBufferSize(This, _lBufferSize))

            #define IMStorage_GetMemoryBufferSize(This, _plBufferSize) \
                ((This)->lpVtbl->GetMemoryBufferSize(This, _plBufferSize))

            #define IMStorage_Init(This, _bsFileName, _eInitType, _prtAppendStartTime) \
                ((This)->lpVtbl->Init(This, _bsFileName, _eInitType, _prtAppendStartTime))

            #define IMStorage_GetFileName(This, _pbsFileName) ((This)->lpVtbl->GetFileName(This, _pbsFileName))

            #define IMStorage_RegisterStorage(This, _bRegister) ((This)->lpVtbl->RegisterStorage(This, _bRegister))

            #define IMStorage_Close(This) ((This)->lpVtbl->Close(This))

            #define IMStorage_ReceiveData(This, _cbData, _pbData, _prtTime, _dwFlags) \
                ((This)->lpVtbl->ReceiveData(This, _cbData, _pbData, _prtTime, _dwFlags))

            #define IMStorage_GetPos(This, _pllStart, _pllEnd) ((This)->lpVtbl->GetPos(This, _pllStart, _pllEnd))

            #define IMStorage_GetTime(This, _prtStart, _prtEnd) ((This)->lpVtbl->GetTime(This, _prtStart, _prtEnd))

            #define IMStorage_GetPosForTime(This, _rtTime, _pllPos, _prtChunkTime, _pcbData) \
                ((This)->lpVtbl->GetPosForTime(This, _rtTime, _pllPos, _prtChunkTime, _pcbData))

            #define IMStorage_GetTimeForPos(This, _llPos, _prtTime, _pllChunkPos, _pcbData) \
                ((This)->lpVtbl->GetTimeForPos(This, _llPos, _prtTime, _pllChunkPos, _pcbData))

            #define IMStorage_GetSyncPosForTime(This, _rtTime, _pllPos, _prtRealTime, _pcbData) \
                ((This)->lpVtbl->GetSyncPosForTime(This, _rtTime, _pllPos, _prtRealTime, _pcbData))

            #define IMStorage_AddReader(This, _pnCookie) ((This)->lpVtbl->AddReader(This, _pnCookie))

            #define IMStorage_ReadData(This, _nCookie, _llPos, _pcbData, _pbData) \
                ((This)->lpVtbl->ReadData(This, _nCookie, _llPos, _pcbData, _pbData))

            #define IMStorage_RemoveReader(This, _nCookie) ((This)->lpVtbl->RemoveReader(This, _nCookie))

            #define IMStorage_LockPos(This, _nCookie, _llPos, _pllLockedPos) \
                ((This)->lpVtbl->LockPos(This, _nCookie, _llPos, _pllLockedPos))

            #define IMStorage_GetLockPos(This, _nCookie, _pllLockedPos) \
                ((This)->lpVtbl->GetLockPos(This, _nCookie, _pllLockedPos))

            #define IMStorage_Reset(This) ((This)->lpVtbl->Reset(This))

            #define IMStorage_SetAuxData(This, _bsDataName, _cbAuxData, _pbAuxData) \
                ((This)->lpVtbl->SetAuxData(This, _bsDataName, _cbAuxData, _pbAuxData))

            #define IMStorage_GetAuxData(This, _bsDataName, _pcbAuxData, _ppbAuxData) \
                ((This)->lpVtbl->GetAuxData(This, _bsDataName, _pcbAuxData, _ppbAuxData))

            #define IMStorage_GetAuxDataCount(This, _pnCount) ((This)->lpVtbl->GetAuxDataCount(This, _pnCount))

            #define IMStorage_GetAuxDataName(This, _nIndex, _pbsName) \
                ((This)->lpVtbl->GetAuxDataName(This, _nIndex, _pbsName))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMStorage_INTERFACE_DEFINED__ */

#ifndef __IMFrame_INTERFACE_DEFINED__
    #define __IMFrame_INTERFACE_DEFINED__

/* interface IMFrame */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFrame;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366000-473F-4ad5-A5C2-428FE0C8E03E")
IMFrame: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameAVPropsGet(
        /* [out] */ M_AV_PROPS * _pProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameAVPropsSet(
        /* [in] */ M_AV_PROPS * _pProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameTimeGet(
        /* [out] */ M_TIME * _pTime) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameTimeSet(
        /* [in] */ M_TIME * _pTime) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameAudioGetBytes(
        /* [out] */ LONG * _pcbSize,
        /* [out] */ LONGLONG * _ppbAudio) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameVideoGetBytes(
        /* [out] */ LONG * _pcbSize,
        /* [out] */ LONGLONG * _ppbVideo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameVideoGetHbitmap(
        /* [out] */ LONGLONG * _pcpHBitmap) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameVideoSaveToFile(
        /* [in] */ BSTR _bsFileName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameAudioSaveToFile(
        /* [in] */ BSTR _bsFileName,
        /* [in] */ BOOL _bAppend) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameDataGetByIndex(
        /* [in] */ int        _nIndex,
        /* [out] */ LONG     *_pnDataFCC,
        /* [out] */ LONG     *_pcbANCData,
        /* [out] */ LONGLONG *_ppbANCData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameDataGet(
        /* [in] */ LONG _nDataFCC,
        /* [out] */ LONG * _pcbANCData,
        /* [out] */ LONGLONG * _ppbANCData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameDataSet(
        /* [in] */ LONG     _nDataFCC,
        /* [in] */ LONG     _cbANCData,
        /* [in] */ LONGLONG _pbANCData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameClone(
        /* [out] */ IMFrame * *_ppCloneFrame,
        /* [in] */ eMFrameClone _eCloneType,
        /* [in] */ eMFCC        _fccPixelFormat) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameCut(
        /* [in] */ int        _nField,
        /* [in] */ RECT      *_pRect,
        /* [out] */ IMFrame **_ppFrameRes) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameConvert(
        /* [in] */ M_VID_PROPS * _pVidPropsDest,
        /* [out] */ IMFrame * *_ppFrameRes,
        /* [in] */ BSTR _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameOverlay(
        /* [in] */ IMFrame * _pFrameOver,
        /* [in] */ int    _nPosX,
        /* [in] */ int    _nPosY,
        /* [in] */ double _dblAlpha,
        /* [in] */ BSTR   _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FrameRelease(void) = 0;
};

    #else /* C style interface */

typedef struct IMFrameVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFrame          *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFrame *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFrame *This);

    DECLSPEC_XFGVIRT(IMFrame, FrameAVPropsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameAVPropsGet)(IMFrame                *This,
                                                                   /* [out] */ M_AV_PROPS *_pProps);

    DECLSPEC_XFGVIRT(IMFrame, FrameAVPropsSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameAVPropsSet)(IMFrame               *This,
                                                                   /* [in] */ M_AV_PROPS *_pProps);

    DECLSPEC_XFGVIRT(IMFrame, FrameTimeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameTimeGet)(IMFrame            *This,
                                                                /* [out] */ M_TIME *_pTime);

    DECLSPEC_XFGVIRT(IMFrame, FrameTimeSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameTimeSet)(IMFrame           *This,
                                                                /* [in] */ M_TIME *_pTime);

    DECLSPEC_XFGVIRT(IMFrame, FrameAudioGetBytes)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameAudioGetBytes)(IMFrame              *This,
                                                                      /* [out] */ LONG     *_pcbSize,
                                                                      /* [out] */ LONGLONG *_ppbAudio);

    DECLSPEC_XFGVIRT(IMFrame, FrameVideoGetBytes)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameVideoGetBytes)(IMFrame              *This,
                                                                      /* [out] */ LONG     *_pcbSize,
                                                                      /* [out] */ LONGLONG *_ppbVideo);

    DECLSPEC_XFGVIRT(IMFrame, FrameVideoGetHbitmap)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameVideoGetHbitmap)(IMFrame              *This,
                                                                        /* [out] */ LONGLONG *_pcpHBitmap);

    DECLSPEC_XFGVIRT(IMFrame, FrameVideoSaveToFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameVideoSaveToFile)(IMFrame        *This,
                                                                        /* [in] */ BSTR _bsFileName);

    DECLSPEC_XFGVIRT(IMFrame, FrameAudioSaveToFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameAudioSaveToFile)(IMFrame        *This,
                                                                        /* [in] */ BSTR _bsFileName,
                                                                        /* [in] */ BOOL _bAppend);

    DECLSPEC_XFGVIRT(IMFrame, FrameDataGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameDataGetByIndex)(IMFrame              *This,
                                                                       /* [in] */ int        _nIndex,
                                                                       /* [out] */ LONG     *_pnDataFCC,
                                                                       /* [out] */ LONG     *_pcbANCData,
                                                                       /* [out] */ LONGLONG *_ppbANCData);

    DECLSPEC_XFGVIRT(IMFrame, FrameDataGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameDataGet)(IMFrame              *This,
                                                                /* [in] */ LONG       _nDataFCC,
                                                                /* [out] */ LONG     *_pcbANCData,
                                                                /* [out] */ LONGLONG *_ppbANCData);

    DECLSPEC_XFGVIRT(IMFrame, FrameDataSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameDataSet)(IMFrame            *This,
                                                                /* [in] */ LONG     _nDataFCC,
                                                                /* [in] */ LONG     _cbANCData,
                                                                /* [in] */ LONGLONG _pbANCData);

    DECLSPEC_XFGVIRT(IMFrame, FrameClone)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameClone)(IMFrame                *This,
                                                              /* [out] */ IMFrame   **_ppCloneFrame,
                                                              /* [in] */ eMFrameClone _eCloneType,
                                                              /* [in] */ eMFCC        _fccPixelFormat);

    DECLSPEC_XFGVIRT(IMFrame, FrameCut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameCut)(IMFrame              *This,
                                                            /* [in] */ int        _nField,
                                                            /* [in] */ RECT      *_pRect,
                                                            /* [out] */ IMFrame **_ppFrameRes);

    DECLSPEC_XFGVIRT(IMFrame, FrameConvert)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameConvert)(IMFrame                *This,
                                                                /* [in] */ M_VID_PROPS *_pVidPropsDest,
                                                                /* [out] */ IMFrame   **_ppFrameRes,
                                                                /* [in] */ BSTR         _bsPropsList);

    DECLSPEC_XFGVIRT(IMFrame, FrameOverlay)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameOverlay)(IMFrame            *This,
                                                                /* [in] */ IMFrame *_pFrameOver,
                                                                /* [in] */ int      _nPosX,
                                                                /* [in] */ int      _nPosY,
                                                                /* [in] */ double   _dblAlpha,
                                                                /* [in] */ BSTR     _bsPropsList);

    DECLSPEC_XFGVIRT(IMFrame, FrameRelease)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameRelease)(IMFrame *This);

    END_INTERFACE
} IMFrameVtbl;

interface IMFrame { CONST_VTBL struct IMFrameVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFrame_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFrame_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFrame_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFrame_FrameAVPropsGet(This, _pProps) ((This)->lpVtbl->FrameAVPropsGet(This, _pProps))

            #define IMFrame_FrameAVPropsSet(This, _pProps) ((This)->lpVtbl->FrameAVPropsSet(This, _pProps))

            #define IMFrame_FrameTimeGet(This, _pTime) ((This)->lpVtbl->FrameTimeGet(This, _pTime))

            #define IMFrame_FrameTimeSet(This, _pTime) ((This)->lpVtbl->FrameTimeSet(This, _pTime))

            #define IMFrame_FrameAudioGetBytes(This, _pcbSize, _ppbAudio) \
                ((This)->lpVtbl->FrameAudioGetBytes(This, _pcbSize, _ppbAudio))

            #define IMFrame_FrameVideoGetBytes(This, _pcbSize, _ppbVideo) \
                ((This)->lpVtbl->FrameVideoGetBytes(This, _pcbSize, _ppbVideo))

            #define IMFrame_FrameVideoGetHbitmap(This, _pcpHBitmap) \
                ((This)->lpVtbl->FrameVideoGetHbitmap(This, _pcpHBitmap))

            #define IMFrame_FrameVideoSaveToFile(This, _bsFileName) \
                ((This)->lpVtbl->FrameVideoSaveToFile(This, _bsFileName))

            #define IMFrame_FrameAudioSaveToFile(This, _bsFileName, _bAppend) \
                ((This)->lpVtbl->FrameAudioSaveToFile(This, _bsFileName, _bAppend))

            #define IMFrame_FrameDataGetByIndex(This, _nIndex, _pnDataFCC, _pcbANCData, _ppbANCData) \
                ((This)->lpVtbl->FrameDataGetByIndex(This, _nIndex, _pnDataFCC, _pcbANCData, _ppbANCData))

            #define IMFrame_FrameDataGet(This, _nDataFCC, _pcbANCData, _ppbANCData) \
                ((This)->lpVtbl->FrameDataGet(This, _nDataFCC, _pcbANCData, _ppbANCData))

            #define IMFrame_FrameDataSet(This, _nDataFCC, _cbANCData, _pbANCData) \
                ((This)->lpVtbl->FrameDataSet(This, _nDataFCC, _cbANCData, _pbANCData))

            #define IMFrame_FrameClone(This, _ppCloneFrame, _eCloneType, _fccPixelFormat) \
                ((This)->lpVtbl->FrameClone(This, _ppCloneFrame, _eCloneType, _fccPixelFormat))

            #define IMFrame_FrameCut(This, _nField, _pRect, _ppFrameRes) \
                ((This)->lpVtbl->FrameCut(This, _nField, _pRect, _ppFrameRes))

            #define IMFrame_FrameConvert(This, _pVidPropsDest, _ppFrameRes, _bsPropsList) \
                ((This)->lpVtbl->FrameConvert(This, _pVidPropsDest, _ppFrameRes, _bsPropsList))

            #define IMFrame_FrameOverlay(This, _pFrameOver, _nPosX, _nPosY, _dblAlpha, _bsPropsList) \
                ((This)->lpVtbl->FrameOverlay(This, _pFrameOver, _nPosX, _nPosY, _dblAlpha, _bsPropsList))

            #define IMFrame_FrameRelease(This) ((This)->lpVtbl->FrameRelease(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFrame_INTERFACE_DEFINED__ */

#ifndef __IMFrames_INTERFACE_DEFINED__
    #define __IMFrames_INTERFACE_DEFINED__

/* interface IMFrames */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFrames;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F365000-473F-4ad5-A5C2-428FE0C8E03E")
IMFrames: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FramesMakeLocal(
        /* [in] */ IMFrame * _ppFrame,
        /* [out] */ IMFrame * *_ppFrameLocal,
        /* [in] */ BOOL _bMakeRef) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FramesCreate(
        /* [in] */ int        _cbVideoSize,
        /* [in] */ BSTR       _bsProps,
        /* [out] */ IMFrame **_ppFrame) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FramesCreateFromMem(
        /* [in] */ M_VID_PROPS * _pVidProps,
        /* [in] */ LONGLONG _pbVideo,
        /* [out] */ IMFrame * *_ppFrame,
        /* [in] */ BSTR _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FramesCreateFromFile(
        /* [in] */ BSTR _bsFileName,
        /* [out] */ IMFrame * *_ppFrame,
        /* [in] */ BSTR _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FramesCreateFromHBITMAP(
        /* [in] */ LONGLONG _hBitmap,
        /* [out] */ IMFrame * *_ppFrame,
        /* [in] */ BSTR _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FramesCreateFromSurface(
        /* [in] */ IUnknown * _pSurface,
        /* [out] */ IMFrame * *_ppFrame,
        /* [in] */ BSTR _bsPropsList) = 0;
};

    #else /* C style interface */

typedef struct IMFramesVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFrames         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFrames *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFrames *This);

    DECLSPEC_XFGVIRT(IMFrames, FramesMakeLocal)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FramesMakeLocal)(IMFrames             *This,
                                                                   /* [in] */ IMFrame   *_ppFrame,
                                                                   /* [out] */ IMFrame **_ppFrameLocal,
                                                                   /* [in] */ BOOL       _bMakeRef);

    DECLSPEC_XFGVIRT(IMFrames, FramesCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FramesCreate)(IMFrames             *This,
                                                                /* [in] */ int        _cbVideoSize,
                                                                /* [in] */ BSTR       _bsProps,
                                                                /* [out] */ IMFrame **_ppFrame);

    DECLSPEC_XFGVIRT(IMFrames, FramesCreateFromMem)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FramesCreateFromMem)(IMFrames               *This,
                                                                       /* [in] */ M_VID_PROPS *_pVidProps,
                                                                       /* [in] */ LONGLONG     _pbVideo,
                                                                       /* [out] */ IMFrame   **_ppFrame,
                                                                       /* [in] */ BSTR         _bsPropsList);

    DECLSPEC_XFGVIRT(IMFrames, FramesCreateFromFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FramesCreateFromFile)(IMFrames             *This,
                                                                        /* [in] */ BSTR       _bsFileName,
                                                                        /* [out] */ IMFrame **_ppFrame,
                                                                        /* [in] */ BSTR       _bsPropsList);

    DECLSPEC_XFGVIRT(IMFrames, FramesCreateFromHBITMAP)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FramesCreateFromHBITMAP)(IMFrames             *This,
                                                                           /* [in] */ LONGLONG   _hBitmap,
                                                                           /* [out] */ IMFrame **_ppFrame,
                                                                           /* [in] */ BSTR       _bsPropsList);

    DECLSPEC_XFGVIRT(IMFrames, FramesCreateFromSurface)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FramesCreateFromSurface)(IMFrames             *This,
                                                                           /* [in] */ IUnknown  *_pSurface,
                                                                           /* [out] */ IMFrame **_ppFrame,
                                                                           /* [in] */ BSTR       _bsPropsList);

    END_INTERFACE
} IMFramesVtbl;

interface IMFrames { CONST_VTBL struct IMFramesVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFrames_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFrames_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFrames_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFrames_FramesMakeLocal(This, _ppFrame, _ppFrameLocal, _bMakeRef) \
                ((This)->lpVtbl->FramesMakeLocal(This, _ppFrame, _ppFrameLocal, _bMakeRef))

            #define IMFrames_FramesCreate(This, _cbVideoSize, _bsProps, _ppFrame) \
                ((This)->lpVtbl->FramesCreate(This, _cbVideoSize, _bsProps, _ppFrame))

            #define IMFrames_FramesCreateFromMem(This, _pVidProps, _pbVideo, _ppFrame, _bsPropsList) \
                ((This)->lpVtbl->FramesCreateFromMem(This, _pVidProps, _pbVideo, _ppFrame, _bsPropsList))

            #define IMFrames_FramesCreateFromFile(This, _bsFileName, _ppFrame, _bsPropsList) \
                ((This)->lpVtbl->FramesCreateFromFile(This, _bsFileName, _ppFrame, _bsPropsList))

            #define IMFrames_FramesCreateFromHBITMAP(This, _hBitmap, _ppFrame, _bsPropsList) \
                ((This)->lpVtbl->FramesCreateFromHBITMAP(This, _hBitmap, _ppFrame, _bsPropsList))

            #define IMFrames_FramesCreateFromSurface(This, _pSurface, _ppFrame, _bsPropsList) \
                ((This)->lpVtbl->FramesCreateFromSurface(This, _pSurface, _ppFrame, _bsPropsList))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFrames_INTERFACE_DEFINED__ */

#ifndef __IMProps_INTERFACE_DEFINED__
    #define __IMProps_INTERFACE_DEFINED__

/* interface IMProps */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMProps;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366020-473F-4ad5-A5C2-428FE0C8E03E")
IMProps: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsSet(
        /* [in] */ BSTR _bsPropName,
        /* [in] */ BSTR _bsPropValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsGet(
        /* [in] */ BSTR _bsPropName,
        /* [out] */ BSTR * _pbsPropValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsGetCount(
        /* [in] */ BSTR  _bsNodeName,
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsGetByIndex(
        /* [in] */ BSTR   _bsNodeName,
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsPropName,
        /* [out] */ BSTR *_pbsPropValue,
        /* [out] */ BOOL *_pbNode) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsRemove(
        /* [in] */ BSTR _bsPropName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsInfoGet(
        /* [in] */ BSTR       _bsPropName,
        /* [in] */ eMInfoType _eType,
        /* [out] */ BSTR * _pbsInfo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsOptionGetCount(
        /* [in] */ BSTR  _bsPropName,
        /* [out] */ int *_pnOptionCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsOptionGetByIndex(
        /* [in] */ BSTR   _bsPropName,
        /* [in] */ int    _nOptionIdx,
        /* [out] */ BSTR *_pbsOptionValue,
        /* [out] */ BSTR *_pbsHelp) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsOptionSetByIndex(
        /* [in] */ BSTR _bsPropName,
        /* [in] */ int  _nOptionInx) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsOptionGet(
        /* [in] */ BSTR   _bsPropName,
        /* [out] */ int  *_pnOptionIdx,
        /* [out] */ BSTR *_pbsOptionValue,
        /* [out] */ BSTR *_pbsHelp) = 0;
};

    #else /* C style interface */

typedef struct IMPropsVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMProps          *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMProps *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMProps *This);

    DECLSPEC_XFGVIRT(IMProps, PropsSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsSet)(IMProps        *This,
                                                            /* [in] */ BSTR _bsPropName,
                                                            /* [in] */ BSTR _bsPropValue);

    DECLSPEC_XFGVIRT(IMProps, PropsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsGet)(IMProps          *This,
                                                            /* [in] */ BSTR   _bsPropName,
                                                            /* [out] */ BSTR *_pbsPropValue);

    DECLSPEC_XFGVIRT(IMProps, PropsGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsGetCount)(IMProps         *This,
                                                                 /* [in] */ BSTR  _bsNodeName,
                                                                 /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMProps, PropsGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsGetByIndex)(IMProps          *This,
                                                                   /* [in] */ BSTR   _bsNodeName,
                                                                   /* [in] */ int    _nIndex,
                                                                   /* [out] */ BSTR *_pbsPropName,
                                                                   /* [out] */ BSTR *_pbsPropValue,
                                                                   /* [out] */ BOOL *_pbNode);

    DECLSPEC_XFGVIRT(IMProps, PropsRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsRemove)(IMProps        *This,
                                                               /* [in] */ BSTR _bsPropName);

    DECLSPEC_XFGVIRT(IMProps, PropsInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsInfoGet)(IMProps              *This,
                                                                /* [in] */ BSTR       _bsPropName,
                                                                /* [in] */ eMInfoType _eType,
                                                                /* [out] */ BSTR     *_pbsInfo);

    DECLSPEC_XFGVIRT(IMProps, PropsOptionGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsOptionGetCount)(IMProps         *This,
                                                                       /* [in] */ BSTR  _bsPropName,
                                                                       /* [out] */ int *_pnOptionCount);

    DECLSPEC_XFGVIRT(IMProps, PropsOptionGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsOptionGetByIndex)(IMProps          *This,
                                                                         /* [in] */ BSTR   _bsPropName,
                                                                         /* [in] */ int    _nOptionIdx,
                                                                         /* [out] */ BSTR *_pbsOptionValue,
                                                                         /* [out] */ BSTR *_pbsHelp);

    DECLSPEC_XFGVIRT(IMProps, PropsOptionSetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsOptionSetByIndex)(IMProps        *This,
                                                                         /* [in] */ BSTR _bsPropName,
                                                                         /* [in] */ int  _nOptionInx);

    DECLSPEC_XFGVIRT(IMProps, PropsOptionGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsOptionGet)(IMProps          *This,
                                                                  /* [in] */ BSTR   _bsPropName,
                                                                  /* [out] */ int  *_pnOptionIdx,
                                                                  /* [out] */ BSTR *_pbsOptionValue,
                                                                  /* [out] */ BSTR *_pbsHelp);

    END_INTERFACE
} IMPropsVtbl;

interface IMProps { CONST_VTBL struct IMPropsVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMProps_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMProps_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMProps_Release(This) ((This)->lpVtbl->Release(This))

            #define IMProps_PropsSet(This, _bsPropName, _bsPropValue) \
                ((This)->lpVtbl->PropsSet(This, _bsPropName, _bsPropValue))

            #define IMProps_PropsGet(This, _bsPropName, _pbsPropValue) \
                ((This)->lpVtbl->PropsGet(This, _bsPropName, _pbsPropValue))

            #define IMProps_PropsGetCount(This, _bsNodeName, _pnCount) \
                ((This)->lpVtbl->PropsGetCount(This, _bsNodeName, _pnCount))

            #define IMProps_PropsGetByIndex(This, _bsNodeName, _nIndex, _pbsPropName, _pbsPropValue, _pbNode) \
                ((This)->lpVtbl->PropsGetByIndex(This, _bsNodeName, _nIndex, _pbsPropName, _pbsPropValue, _pbNode))

            #define IMProps_PropsRemove(This, _bsPropName) ((This)->lpVtbl->PropsRemove(This, _bsPropName))

            #define IMProps_PropsInfoGet(This, _bsPropName, _eType, _pbsInfo) \
                ((This)->lpVtbl->PropsInfoGet(This, _bsPropName, _eType, _pbsInfo))

            #define IMProps_PropsOptionGetCount(This, _bsPropName, _pnOptionCount) \
                ((This)->lpVtbl->PropsOptionGetCount(This, _bsPropName, _pnOptionCount))

            #define IMProps_PropsOptionGetByIndex(This, _bsPropName, _nOptionIdx, _pbsOptionValue, _pbsHelp) \
                ((This)->lpVtbl->PropsOptionGetByIndex(This, _bsPropName, _nOptionIdx, _pbsOptionValue, _pbsHelp))

            #define IMProps_PropsOptionSetByIndex(This, _bsPropName, _nOptionInx) \
                ((This)->lpVtbl->PropsOptionSetByIndex(This, _bsPropName, _nOptionInx))

            #define IMProps_PropsOptionGet(This, _bsPropName, _pnOptionIdx, _pbsOptionValue, _pbsHelp) \
                ((This)->lpVtbl->PropsOptionGet(This, _bsPropName, _pnOptionIdx, _pbsOptionValue, _pbsHelp))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMProps_INTERFACE_DEFINED__ */

#ifndef __IMPersist_INTERFACE_DEFINED__
    #define __IMPersist_INTERFACE_DEFINED__

/* interface IMPersist */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMPersist;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366030-473F-4ad5-A5C2-428FE0C8E03E")
IMPersist: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PersistSaveToFile(
        /* [in] */ BSTR _bsObject,
        /* [in] */ BSTR _bsFileName,
        /* [in] */ BSTR _bsSaveParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PersistSaveToString(
        /* [in] */ BSTR _bsObject,
        /* [out] */ BSTR * _pbsXMLDesc,
        /* [in] */ BSTR _bsSaveParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PersistLoad(
        /* [in] */ BSTR _bsObject,
        /* [in] */ BSTR _bsXMLDescOrFile,
        /* [in] */ BSTR _bsLoadParam) = 0;
};

    #else /* C style interface */

typedef struct IMPersistVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMPersist        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMPersist *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMPersist *This);

    DECLSPEC_XFGVIRT(IMPersist, PersistSaveToFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PersistSaveToFile)(IMPersist      *This,
                                                                     /* [in] */ BSTR _bsObject,
                                                                     /* [in] */ BSTR _bsFileName,
                                                                     /* [in] */ BSTR _bsSaveParam);

    DECLSPEC_XFGVIRT(IMPersist, PersistSaveToString)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PersistSaveToString)(IMPersist        *This,
                                                                       /* [in] */ BSTR   _bsObject,
                                                                       /* [out] */ BSTR *_pbsXMLDesc,
                                                                       /* [in] */ BSTR   _bsSaveParam);

    DECLSPEC_XFGVIRT(IMPersist, PersistLoad)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PersistLoad)(IMPersist      *This,
                                                               /* [in] */ BSTR _bsObject,
                                                               /* [in] */ BSTR _bsXMLDescOrFile,
                                                               /* [in] */ BSTR _bsLoadParam);

    END_INTERFACE
} IMPersistVtbl;

interface IMPersist { CONST_VTBL struct IMPersistVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMPersist_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMPersist_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMPersist_Release(This) ((This)->lpVtbl->Release(This))

            #define IMPersist_PersistSaveToFile(This, _bsObject, _bsFileName, _bsSaveParam) \
                ((This)->lpVtbl->PersistSaveToFile(This, _bsObject, _bsFileName, _bsSaveParam))

            #define IMPersist_PersistSaveToString(This, _bsObject, _pbsXMLDesc, _bsSaveParam) \
                ((This)->lpVtbl->PersistSaveToString(This, _bsObject, _pbsXMLDesc, _bsSaveParam))

            #define IMPersist_PersistLoad(This, _bsObject, _bsXMLDescOrFile, _bsLoadParam) \
                ((This)->lpVtbl->PersistLoad(This, _bsObject, _bsXMLDescOrFile, _bsLoadParam))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMPersist_INTERFACE_DEFINED__ */

#ifndef __IMFPersist_INTERFACE_DEFINED__
    #define __IMFPersist_INTERFACE_DEFINED__

/* interface IMFPersist */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFPersist;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F37703A-473F-4ad5-A5C2-428FE0C8E03E")
IMFPersist: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PersistSaveToFile(
        /* [in] */ BSTR _bsObject,
        /* [in] */ BSTR _bsFileName,
        /* [in] */ BSTR _bsSaveParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PersistSaveToString(
        /* [in] */ BSTR _bsObject,
        /* [out] */ BSTR * _pbsXMLDesc,
        /* [in] */ BSTR _bsSaveParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PersistLoad(
        /* [in] */ BSTR _bsObject,
        /* [in] */ BSTR _bsXMLDescOrFile,
        /* [in] */ BSTR _bsLoadParam) = 0;
};

    #else /* C style interface */

typedef struct IMFPersistVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFPersist       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFPersist *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFPersist *This);

    DECLSPEC_XFGVIRT(IMFPersist, PersistSaveToFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PersistSaveToFile)(IMFPersist     *This,
                                                                     /* [in] */ BSTR _bsObject,
                                                                     /* [in] */ BSTR _bsFileName,
                                                                     /* [in] */ BSTR _bsSaveParam);

    DECLSPEC_XFGVIRT(IMFPersist, PersistSaveToString)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PersistSaveToString)(IMFPersist       *This,
                                                                       /* [in] */ BSTR   _bsObject,
                                                                       /* [out] */ BSTR *_pbsXMLDesc,
                                                                       /* [in] */ BSTR   _bsSaveParam);

    DECLSPEC_XFGVIRT(IMFPersist, PersistLoad)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PersistLoad)(IMFPersist     *This,
                                                               /* [in] */ BSTR _bsObject,
                                                               /* [in] */ BSTR _bsXMLDescOrFile,
                                                               /* [in] */ BSTR _bsLoadParam);

    END_INTERFACE
} IMFPersistVtbl;

interface IMFPersist { CONST_VTBL struct IMFPersistVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFPersist_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFPersist_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFPersist_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFPersist_PersistSaveToFile(This, _bsObject, _bsFileName, _bsSaveParam) \
                ((This)->lpVtbl->PersistSaveToFile(This, _bsObject, _bsFileName, _bsSaveParam))

            #define IMFPersist_PersistSaveToString(This, _bsObject, _pbsXMLDesc, _bsSaveParam) \
                ((This)->lpVtbl->PersistSaveToString(This, _bsObject, _pbsXMLDesc, _bsSaveParam))

            #define IMFPersist_PersistLoad(This, _bsObject, _bsXMLDescOrFile, _bsLoadParam) \
                ((This)->lpVtbl->PersistLoad(This, _bsObject, _bsXMLDescOrFile, _bsLoadParam))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFPersist_INTERFACE_DEFINED__ */

#ifndef __IMObject_INTERFACE_DEFINED__
    #define __IMObject_INTERFACE_DEFINED__

/* interface IMObject */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMObject;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366100-473F-4ad5-A5C2-428FE0C8E03E")
IMObject: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectNameSet(
        /* [in] */ BSTR _bsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectNameGet(
        /* [out] */ BSTR * _pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectStart(
        /* [in] */ IUnknown * _pSource) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectClose(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectStateGet(
        /* [out] */ eMState * _peState) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectCallbackSet(
        /* [in] */ IMCallback * _pCallback,
        /* [in] */ LONGLONG _llCallbackUserData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectCallbackSetFunc(
        /* [in] */ LONGLONG _lpPFOnEvent,
        /* [in] */ LONGLONG _lpPFOnFrame,
        /* [in] */ LONGLONG _llCallbackUserData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectCommandExecute(
        /* [in] */ BSTR _bsCommand,
        /* [in] */ BSTR _bsParam,
        /* [in] */ IUnknown * _pParamUnk,
        /* [out] */ BSTR * _pbsReturn) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectVirtualSourceCreate(
        /* [in] */ BOOL _bCreate,
        /* [in] */ BSTR _bsName,
        /* [in] */ BSTR _bsParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectFrameGet(
        /* [out] */ IMFrame * *_ppFrame,
        /* [in] */ BSTR _bsParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectGetInternal(
        /* [in] */ BSTR _bsType,
        /* [out] */ IUnknown * *_ppObject) = 0;
};

    #else /* C style interface */

typedef struct IMObjectVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMObject         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMObject *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMObject *This);

    DECLSPEC_XFGVIRT(IMObject, ObjectNameSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectNameSet)(IMObject       *This,
                                                                 /* [in] */ BSTR _bsName);

    DECLSPEC_XFGVIRT(IMObject, ObjectNameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectNameGet)(IMObject         *This,
                                                                 /* [out] */ BSTR *_pbsName);

    DECLSPEC_XFGVIRT(IMObject, ObjectStart)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectStart)(IMObject            *This,
                                                               /* [in] */ IUnknown *_pSource);

    DECLSPEC_XFGVIRT(IMObject, ObjectClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectClose)(IMObject *This);

    DECLSPEC_XFGVIRT(IMObject, ObjectStateGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectStateGet)(IMObject            *This,
                                                                  /* [out] */ eMState *_peState);

    DECLSPEC_XFGVIRT(IMObject, ObjectCallbackSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectCallbackSet)(IMObject              *This,
                                                                     /* [in] */ IMCallback *_pCallback,
                                                                     /* [in] */ LONGLONG    _llCallbackUserData);

    DECLSPEC_XFGVIRT(IMObject, ObjectCallbackSetFunc)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectCallbackSetFunc)(IMObject           *This,
                                                                         /* [in] */ LONGLONG _lpPFOnEvent,
                                                                         /* [in] */ LONGLONG _lpPFOnFrame,
                                                                         /* [in] */ LONGLONG _llCallbackUserData);

    DECLSPEC_XFGVIRT(IMObject, ObjectCommandExecute)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectCommandExecute)(IMObject            *This,
                                                                        /* [in] */ BSTR      _bsCommand,
                                                                        /* [in] */ BSTR      _bsParam,
                                                                        /* [in] */ IUnknown *_pParamUnk,
                                                                        /* [out] */ BSTR    *_pbsReturn);

    DECLSPEC_XFGVIRT(IMObject, ObjectVirtualSourceCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectVirtualSourceCreate)(IMObject       *This,
                                                                             /* [in] */ BOOL _bCreate,
                                                                             /* [in] */ BSTR _bsName,
                                                                             /* [in] */ BSTR _bsParam);

    DECLSPEC_XFGVIRT(IMObject, ObjectFrameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectFrameGet)(IMObject             *This,
                                                                  /* [out] */ IMFrame **_ppFrame,
                                                                  /* [in] */ BSTR       _bsParam);

    DECLSPEC_XFGVIRT(IMObject, ObjectGetInternal)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectGetInternal)(IMObject              *This,
                                                                     /* [in] */ BSTR        _bsType,
                                                                     /* [out] */ IUnknown **_ppObject);

    END_INTERFACE
} IMObjectVtbl;

interface IMObject { CONST_VTBL struct IMObjectVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMObject_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMObject_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMObject_Release(This) ((This)->lpVtbl->Release(This))

            #define IMObject_ObjectNameSet(This, _bsName) ((This)->lpVtbl->ObjectNameSet(This, _bsName))

            #define IMObject_ObjectNameGet(This, _pbsName) ((This)->lpVtbl->ObjectNameGet(This, _pbsName))

            #define IMObject_ObjectStart(This, _pSource) ((This)->lpVtbl->ObjectStart(This, _pSource))

            #define IMObject_ObjectClose(This) ((This)->lpVtbl->ObjectClose(This))

            #define IMObject_ObjectStateGet(This, _peState) ((This)->lpVtbl->ObjectStateGet(This, _peState))

            #define IMObject_ObjectCallbackSet(This, _pCallback, _llCallbackUserData) \
                ((This)->lpVtbl->ObjectCallbackSet(This, _pCallback, _llCallbackUserData))

            #define IMObject_ObjectCallbackSetFunc(This, _lpPFOnEvent, _lpPFOnFrame, _llCallbackUserData) \
                ((This)->lpVtbl->ObjectCallbackSetFunc(This, _lpPFOnEvent, _lpPFOnFrame, _llCallbackUserData))

            #define IMObject_ObjectCommandExecute(This, _bsCommand, _bsParam, _pParamUnk, _pbsReturn) \
                ((This)->lpVtbl->ObjectCommandExecute(This, _bsCommand, _bsParam, _pParamUnk, _pbsReturn))

            #define IMObject_ObjectVirtualSourceCreate(This, _bCreate, _bsName, _bsParam) \
                ((This)->lpVtbl->ObjectVirtualSourceCreate(This, _bCreate, _bsName, _bsParam))

            #define IMObject_ObjectFrameGet(This, _ppFrame, _bsParam) \
                ((This)->lpVtbl->ObjectFrameGet(This, _ppFrame, _bsParam))

            #define IMObject_ObjectGetInternal(This, _bsType, _ppObject) \
                ((This)->lpVtbl->ObjectGetInternal(This, _bsType, _ppObject))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMObject_INTERFACE_DEFINED__ */

#ifndef __IMFormat_INTERFACE_DEFINED__
    #define __IMFormat_INTERFACE_DEFINED__

/* interface IMFormat */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFormat;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366105-473F-4ad5-A5C2-428FE0C8E03E")
IMFormat: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatVideoGetCount(
        /* [in] */ eMFormatType _eFormatType,
        /* [out] */ int        *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatVideoGetByIndex(
        /* [in] */ eMFormatType  _eFormatType,
        /* [in] */ int           _nIndex,
        /* [out] */ M_VID_PROPS *_pVidProps,
        /* [out] */ BSTR        *_pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatVideoSet(
        /* [in] */ eMFormatType _eFormatType,
        /* [in] */ M_VID_PROPS * _pVidProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatVideoGet(
        /* [in] */ eMFormatType _eFormatType,
        /* [out] */ M_VID_PROPS * _pVidProps,
        /* [out] */ int  *_pnIndex,
        /* [out] */ BSTR *_pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatAudioGetCount(
        /* [in] */ eMFormatType _eFormatType,
        /* [out] */ int        *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatAudioGetByIndex(
        /* [in] */ eMFormatType  _eFormatType,
        /* [in] */ int           _nIndex,
        /* [out] */ M_AUD_PROPS *_pAudProps,
        /* [out] */ BSTR        *_pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatAudioSet(
        /* [in] */ eMFormatType _eFormatType,
        /* [in] */ M_AUD_PROPS * _pAudProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatAudioGet(
        /* [in] */ eMFormatType _eFormatType,
        /* [out] */ M_AUD_PROPS * _pAudProps,
        /* [out] */ int  *_pnIndex,
        /* [out] */ BSTR *_pbsName) = 0;
};

    #else /* C style interface */

typedef struct IMFormatVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFormat         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFormat *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFormat *This);

    DECLSPEC_XFGVIRT(IMFormat, FormatVideoGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatVideoGetCount)(IMFormat               *This,
                                                                       /* [in] */ eMFormatType _eFormatType,
                                                                       /* [out] */ int        *_pnCount);

    DECLSPEC_XFGVIRT(IMFormat, FormatVideoGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatVideoGetByIndex)(IMFormat                *This,
                                                                         /* [in] */ eMFormatType  _eFormatType,
                                                                         /* [in] */ int           _nIndex,
                                                                         /* [out] */ M_VID_PROPS *_pVidProps,
                                                                         /* [out] */ BSTR        *_pbsName);

    DECLSPEC_XFGVIRT(IMFormat, FormatVideoSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatVideoSet)(IMFormat               *This,
                                                                  /* [in] */ eMFormatType _eFormatType,
                                                                  /* [in] */ M_VID_PROPS *_pVidProps);

    DECLSPEC_XFGVIRT(IMFormat, FormatVideoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatVideoGet)(IMFormat                *This,
                                                                  /* [in] */ eMFormatType  _eFormatType,
                                                                  /* [out] */ M_VID_PROPS *_pVidProps,
                                                                  /* [out] */ int         *_pnIndex,
                                                                  /* [out] */ BSTR        *_pbsName);

    DECLSPEC_XFGVIRT(IMFormat, FormatAudioGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatAudioGetCount)(IMFormat               *This,
                                                                       /* [in] */ eMFormatType _eFormatType,
                                                                       /* [out] */ int        *_pnCount);

    DECLSPEC_XFGVIRT(IMFormat, FormatAudioGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatAudioGetByIndex)(IMFormat                *This,
                                                                         /* [in] */ eMFormatType  _eFormatType,
                                                                         /* [in] */ int           _nIndex,
                                                                         /* [out] */ M_AUD_PROPS *_pAudProps,
                                                                         /* [out] */ BSTR        *_pbsName);

    DECLSPEC_XFGVIRT(IMFormat, FormatAudioSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatAudioSet)(IMFormat               *This,
                                                                  /* [in] */ eMFormatType _eFormatType,
                                                                  /* [in] */ M_AUD_PROPS *_pAudProps);

    DECLSPEC_XFGVIRT(IMFormat, FormatAudioGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatAudioGet)(IMFormat                *This,
                                                                  /* [in] */ eMFormatType  _eFormatType,
                                                                  /* [out] */ M_AUD_PROPS *_pAudProps,
                                                                  /* [out] */ int         *_pnIndex,
                                                                  /* [out] */ BSTR        *_pbsName);

    END_INTERFACE
} IMFormatVtbl;

interface IMFormat { CONST_VTBL struct IMFormatVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFormat_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFormat_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFormat_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFormat_FormatVideoGetCount(This, _eFormatType, _pnCount) \
                ((This)->lpVtbl->FormatVideoGetCount(This, _eFormatType, _pnCount))

            #define IMFormat_FormatVideoGetByIndex(This, _eFormatType, _nIndex, _pVidProps, _pbsName) \
                ((This)->lpVtbl->FormatVideoGetByIndex(This, _eFormatType, _nIndex, _pVidProps, _pbsName))

            #define IMFormat_FormatVideoSet(This, _eFormatType, _pVidProps) \
                ((This)->lpVtbl->FormatVideoSet(This, _eFormatType, _pVidProps))

            #define IMFormat_FormatVideoGet(This, _eFormatType, _pVidProps, _pnIndex, _pbsName) \
                ((This)->lpVtbl->FormatVideoGet(This, _eFormatType, _pVidProps, _pnIndex, _pbsName))

            #define IMFormat_FormatAudioGetCount(This, _eFormatType, _pnCount) \
                ((This)->lpVtbl->FormatAudioGetCount(This, _eFormatType, _pnCount))

            #define IMFormat_FormatAudioGetByIndex(This, _eFormatType, _nIndex, _pAudProps, _pbsName) \
                ((This)->lpVtbl->FormatAudioGetByIndex(This, _eFormatType, _nIndex, _pAudProps, _pbsName))

            #define IMFormat_FormatAudioSet(This, _eFormatType, _pAudProps) \
                ((This)->lpVtbl->FormatAudioSet(This, _eFormatType, _pAudProps))

            #define IMFormat_FormatAudioGet(This, _eFormatType, _pAudProps, _pnIndex, _pbsName) \
                ((This)->lpVtbl->FormatAudioGet(This, _eFormatType, _pAudProps, _pnIndex, _pbsName))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFormat_INTERFACE_DEFINED__ */

#ifndef __IMAudioTrack_INTERFACE_DEFINED__
    #define __IMAudioTrack_INTERFACE_DEFINED__

/* interface IMAudioTrack */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMAudioTrack;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366111-473F-4ad5-A5C2-428FE0C8E03E")
IMAudioTrack: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackLoudnessGet(
        /* [out] */ M_AUDIO_TRACK_LOUDNESS * _pAudioLoudnessOrg,
        /* [out] */ M_AUDIO_TRACK_LOUDNESS * _pAudioLoudnessOut) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackModeSet(
        /* [in] */ eMAudioTrackMode _eMode,
        /* [in] */ int              _nAddToTrack,
        /* [in] */ double           _dblAddGain) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackModeGet(
        /* [out] */ eMAudioTrackMode * _peMode,
        /* [out] */ int    *_pnAddToTrack,
        /* [out] */ double *_pdblAddGain) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackIsVirtual(
        /* [out] */ BOOL * _pbVirtual,
        /* [out] */ int  *_pnSourceTrack,
        /* [out] */ BSTR *_pbsChannelsSet) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackChannelsGet(
        /* [out] */ int *_pnInputChannels,
        /* [out] */ int *_pnOutputChannelIdx,
        /* [out] */ int *_pnOutputChannels) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackChannelsSet(
        /* [in] */ int _nOutputChannels) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackOrderSet(
        /* [in] */ int _nOrder) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackOrderGet(
        /* [out] */ int *_pnOrder) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackChannelOrderSet(
        /* [in] */ BOOL _bInput,
        /* [in] */ int  _nChannelIdx,
        /* [in] */ int  _nOrder) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackChannelOrderGet(
        /* [in] */ BOOL  _bInput,
        /* [in] */ int   _nChannelIdx,
        /* [out] */ int *_pnOrder) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackGainSet(
        /* [in] */ int    _nChannel,
        /* [in] */ double _dblGain,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackGainGet(
        /* [in] */ int      _nChannel,
        /* [out] */ double *_pdblGain) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackMuteSet(
        /* [in] */ int    _nChannel,
        /* [in] */ BOOL   _bMute,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TrackMuteGet(
        /* [in] */ int    _nChannel,
        /* [out] */ BOOL *_pbMute) = 0;
};

    #else /* C style interface */

typedef struct IMAudioTrackVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMAudioTrack     *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMAudioTrack *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMAudioTrack *This);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackLoudnessGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackLoudnessGet)(
        IMAudioTrack                       *This,
        /* [out] */ M_AUDIO_TRACK_LOUDNESS *_pAudioLoudnessOrg,
        /* [out] */ M_AUDIO_TRACK_LOUDNESS *_pAudioLoudnessOut);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackModeSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackModeSet)(IMAudioTrack               *This,
                                                                /* [in] */ eMAudioTrackMode _eMode,
                                                                /* [in] */ int              _nAddToTrack,
                                                                /* [in] */ double           _dblAddGain);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackModeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackModeGet)(IMAudioTrack                 *This,
                                                                /* [out] */ eMAudioTrackMode *_peMode,
                                                                /* [out] */ int              *_pnAddToTrack,
                                                                /* [out] */ double           *_pdblAddGain);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackIsVirtual)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackIsVirtual)(IMAudioTrack     *This,
                                                                  /* [out] */ BOOL *_pbVirtual,
                                                                  /* [out] */ int  *_pnSourceTrack,
                                                                  /* [out] */ BSTR *_pbsChannelsSet);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackChannelsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackChannelsGet)(IMAudioTrack    *This,
                                                                    /* [out] */ int *_pnInputChannels,
                                                                    /* [out] */ int *_pnOutputChannelIdx,
                                                                    /* [out] */ int *_pnOutputChannels);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackChannelsSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackChannelsSet)(IMAudioTrack  *This,
                                                                    /* [in] */ int _nOutputChannels);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackOrderSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackOrderSet)(IMAudioTrack  *This,
                                                                 /* [in] */ int _nOrder);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackOrderGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackOrderGet)(IMAudioTrack    *This,
                                                                 /* [out] */ int *_pnOrder);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackChannelOrderSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackChannelOrderSet)(IMAudioTrack   *This,
                                                                        /* [in] */ BOOL _bInput,
                                                                        /* [in] */ int  _nChannelIdx,
                                                                        /* [in] */ int  _nOrder);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackChannelOrderGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackChannelOrderGet)(IMAudioTrack    *This,
                                                                        /* [in] */ BOOL  _bInput,
                                                                        /* [in] */ int   _nChannelIdx,
                                                                        /* [out] */ int *_pnOrder);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackGainSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackGainSet)(IMAudioTrack     *This,
                                                                /* [in] */ int    _nChannel,
                                                                /* [in] */ double _dblGain,
                                                                /* [in] */ double _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackGainGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackGainGet)(IMAudioTrack       *This,
                                                                /* [in] */ int      _nChannel,
                                                                /* [out] */ double *_pdblGain);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackMuteSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackMuteSet)(IMAudioTrack     *This,
                                                                /* [in] */ int    _nChannel,
                                                                /* [in] */ BOOL   _bMute,
                                                                /* [in] */ double _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMAudioTrack, TrackMuteGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TrackMuteGet)(IMAudioTrack     *This,
                                                                /* [in] */ int    _nChannel,
                                                                /* [out] */ BOOL *_pbMute);

    END_INTERFACE
} IMAudioTrackVtbl;

interface IMAudioTrack { CONST_VTBL struct IMAudioTrackVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMAudioTrack_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMAudioTrack_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMAudioTrack_Release(This) ((This)->lpVtbl->Release(This))

            #define IMAudioTrack_TrackLoudnessGet(This, _pAudioLoudnessOrg, _pAudioLoudnessOut) \
                ((This)->lpVtbl->TrackLoudnessGet(This, _pAudioLoudnessOrg, _pAudioLoudnessOut))

            #define IMAudioTrack_TrackModeSet(This, _eMode, _nAddToTrack, _dblAddGain) \
                ((This)->lpVtbl->TrackModeSet(This, _eMode, _nAddToTrack, _dblAddGain))

            #define IMAudioTrack_TrackModeGet(This, _peMode, _pnAddToTrack, _pdblAddGain) \
                ((This)->lpVtbl->TrackModeGet(This, _peMode, _pnAddToTrack, _pdblAddGain))

            #define IMAudioTrack_TrackIsVirtual(This, _pbVirtual, _pnSourceTrack, _pbsChannelsSet) \
                ((This)->lpVtbl->TrackIsVirtual(This, _pbVirtual, _pnSourceTrack, _pbsChannelsSet))

            #define IMAudioTrack_TrackChannelsGet(This, _pnInputChannels, _pnOutputChannelIdx, _pnOutputChannels) \
                ((This)->lpVtbl->TrackChannelsGet(This, _pnInputChannels, _pnOutputChannelIdx, _pnOutputChannels))

            #define IMAudioTrack_TrackChannelsSet(This, _nOutputChannels) \
                ((This)->lpVtbl->TrackChannelsSet(This, _nOutputChannels))

            #define IMAudioTrack_TrackOrderSet(This, _nOrder) ((This)->lpVtbl->TrackOrderSet(This, _nOrder))

            #define IMAudioTrack_TrackOrderGet(This, _pnOrder) ((This)->lpVtbl->TrackOrderGet(This, _pnOrder))

            #define IMAudioTrack_TrackChannelOrderSet(This, _bInput, _nChannelIdx, _nOrder) \
                ((This)->lpVtbl->TrackChannelOrderSet(This, _bInput, _nChannelIdx, _nOrder))

            #define IMAudioTrack_TrackChannelOrderGet(This, _bInput, _nChannelIdx, _pnOrder) \
                ((This)->lpVtbl->TrackChannelOrderGet(This, _bInput, _nChannelIdx, _pnOrder))

            #define IMAudioTrack_TrackGainSet(This, _nChannel, _dblGain, _dblTimeForChange) \
                ((This)->lpVtbl->TrackGainSet(This, _nChannel, _dblGain, _dblTimeForChange))

            #define IMAudioTrack_TrackGainGet(This, _nChannel, _pdblGain) \
                ((This)->lpVtbl->TrackGainGet(This, _nChannel, _pdblGain))

            #define IMAudioTrack_TrackMuteSet(This, _nChannel, _bMute, _dblTimeForChange) \
                ((This)->lpVtbl->TrackMuteSet(This, _nChannel, _bMute, _dblTimeForChange))

            #define IMAudioTrack_TrackMuteGet(This, _nChannel, _pbMute) \
                ((This)->lpVtbl->TrackMuteGet(This, _nChannel, _pbMute))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMAudioTrack_INTERFACE_DEFINED__ */

#ifndef __IMAudio_INTERFACE_DEFINED__
    #define __IMAudio_INTERFACE_DEFINED__

/* interface IMAudio */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMAudio;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366110-473F-4ad5-A5C2-428FE0C8E03E")
IMAudio: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AudioSplitStringGet(
        /* [out] */ BSTR * _pbsSplitString,
        /* [out] */ int *_pnChannels) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AudioSplitStringSet(
        /* [in] */ BSTR _bsSplitString) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AudioTracksSetCount(
        /* [in] */ int _nTracks) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AudioTracksGetCount(
        /* [out] */ int *_pnTracks) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AudioTrackGetByIndex(
        /* [in] */ int             _nIndex,
        /* [out] */ BSTR          *_pbsDesc,
        /* [out] */ IMAudioTrack **_ppTrack) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AudioChannelsPerTrackSet(
        /* [in] */ int _nChannelsPerTrack) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AudioChannelsPerTrackGet(
        /* [out] */ int *_pnChannelsPerTrackSet) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AudioTrackAdd(
        /* [in] */ int             _nSourceTrack,
        /* [in] */ BSTR            _bsUseChannels,
        /* [in] */ BSTR            _bsDesc,
        /* [out] */ IMAudioTrack **_ppTrack) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AudioTrackRemove(
        /* [in] */ IMAudioTrack * _pTrack) = 0;
};

    #else /* C style interface */

typedef struct IMAudioVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMAudio          *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMAudio *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMAudio *This);

    DECLSPEC_XFGVIRT(IMAudio, AudioSplitStringGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AudioSplitStringGet)(IMAudio          *This,
                                                                       /* [out] */ BSTR *_pbsSplitString,
                                                                       /* [out] */ int  *_pnChannels);

    DECLSPEC_XFGVIRT(IMAudio, AudioSplitStringSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AudioSplitStringSet)(IMAudio        *This,
                                                                       /* [in] */ BSTR _bsSplitString);

    DECLSPEC_XFGVIRT(IMAudio, AudioTracksSetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AudioTracksSetCount)(IMAudio       *This,
                                                                       /* [in] */ int _nTracks);

    DECLSPEC_XFGVIRT(IMAudio, AudioTracksGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AudioTracksGetCount)(IMAudio         *This,
                                                                       /* [out] */ int *_pnTracks);

    DECLSPEC_XFGVIRT(IMAudio, AudioTrackGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AudioTrackGetByIndex)(IMAudio                   *This,
                                                                        /* [in] */ int             _nIndex,
                                                                        /* [out] */ BSTR          *_pbsDesc,
                                                                        /* [out] */ IMAudioTrack **_ppTrack);

    DECLSPEC_XFGVIRT(IMAudio, AudioChannelsPerTrackSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AudioChannelsPerTrackSet)(IMAudio       *This,
                                                                            /* [in] */ int _nChannelsPerTrack);

    DECLSPEC_XFGVIRT(IMAudio, AudioChannelsPerTrackGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AudioChannelsPerTrackGet)(IMAudio         *This,
                                                                            /* [out] */ int *_pnChannelsPerTrackSet);

    DECLSPEC_XFGVIRT(IMAudio, AudioTrackAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AudioTrackAdd)(IMAudio                   *This,
                                                                 /* [in] */ int             _nSourceTrack,
                                                                 /* [in] */ BSTR            _bsUseChannels,
                                                                 /* [in] */ BSTR            _bsDesc,
                                                                 /* [out] */ IMAudioTrack **_ppTrack);

    DECLSPEC_XFGVIRT(IMAudio, AudioTrackRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AudioTrackRemove)(IMAudio                 *This,
                                                                    /* [in] */ IMAudioTrack *_pTrack);

    END_INTERFACE
} IMAudioVtbl;

interface IMAudio { CONST_VTBL struct IMAudioVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMAudio_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMAudio_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMAudio_Release(This) ((This)->lpVtbl->Release(This))

            #define IMAudio_AudioSplitStringGet(This, _pbsSplitString, _pnChannels) \
                ((This)->lpVtbl->AudioSplitStringGet(This, _pbsSplitString, _pnChannels))

            #define IMAudio_AudioSplitStringSet(This, _bsSplitString) \
                ((This)->lpVtbl->AudioSplitStringSet(This, _bsSplitString))

            #define IMAudio_AudioTracksSetCount(This, _nTracks) ((This)->lpVtbl->AudioTracksSetCount(This, _nTracks))

            #define IMAudio_AudioTracksGetCount(This, _pnTracks) ((This)->lpVtbl->AudioTracksGetCount(This, _pnTracks))

            #define IMAudio_AudioTrackGetByIndex(This, _nIndex, _pbsDesc, _ppTrack) \
                ((This)->lpVtbl->AudioTrackGetByIndex(This, _nIndex, _pbsDesc, _ppTrack))

            #define IMAudio_AudioChannelsPerTrackSet(This, _nChannelsPerTrack) \
                ((This)->lpVtbl->AudioChannelsPerTrackSet(This, _nChannelsPerTrack))

            #define IMAudio_AudioChannelsPerTrackGet(This, _pnChannelsPerTrackSet) \
                ((This)->lpVtbl->AudioChannelsPerTrackGet(This, _pnChannelsPerTrackSet))

            #define IMAudio_AudioTrackAdd(This, _nSourceTrack, _bsUseChannels, _bsDesc, _ppTrack) \
                ((This)->lpVtbl->AudioTrackAdd(This, _nSourceTrack, _bsUseChannels, _bsDesc, _ppTrack))

            #define IMAudio_AudioTrackRemove(This, _pTrack) ((This)->lpVtbl->AudioTrackRemove(This, _pTrack))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMAudio_INTERFACE_DEFINED__ */

#ifndef __IMReceiver_INTERFACE_DEFINED__
    #define __IMReceiver_INTERFACE_DEFINED__

/* interface IMReceiver */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMReceiver;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366140-473F-4ad5-A5C2-428FE0C8E03E")
IMReceiver: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReceiverChannelAdd(
        /* [in] */ IUnknown * _pSender,
        /* [out][in] */ BSTR * _pbsChannelID,
        /* [in] */ BSTR _bsXMLParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReceiverChannelAddByName(
        /* [in] */ BSTR _bsSenderName,
        /* [out][in] */ BSTR * _pbsChannelID,
        /* [in] */ BSTR _bsXMLParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReceiverChannelRemove(
        /* [in] */ BSTR _bsChannelID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReceiverChannelGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReceiverChannelGetByIndex(
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsChannelID,
        /* [out] */ BSTR *_pbsSenderName,
        /* [out] */ BSTR *_pbsTransName,
        /* [out] */ BSTR *_pbsXMLParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReceiverPutFrame(
        /* [in] */ BSTR _bsChannelID,
        /* [in] */ IMFrame * _pFrame) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReceiverPutFlush(
        /* [in] */ BSTR _bsChannelID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReceiverPutEOS(
        /* [in] */ BSTR _bsChannelID,
        /* [in] */ BOOL _bRemoveChannel) = 0;
};

    #else /* C style interface */

typedef struct IMReceiverVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMReceiver       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMReceiver *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMReceiver *This);

    DECLSPEC_XFGVIRT(IMReceiver, ReceiverChannelAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiverChannelAdd)(IMReceiver           *This,
                                                                      /* [in] */ IUnknown  *_pSender,
                                                                      /* [out][in] */ BSTR *_pbsChannelID,
                                                                      /* [in] */ BSTR       _bsXMLParam);

    DECLSPEC_XFGVIRT(IMReceiver, ReceiverChannelAddByName)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiverChannelAddByName)(IMReceiver           *This,
                                                                            /* [in] */ BSTR       _bsSenderName,
                                                                            /* [out][in] */ BSTR *_pbsChannelID,
                                                                            /* [in] */ BSTR       _bsXMLParam);

    DECLSPEC_XFGVIRT(IMReceiver, ReceiverChannelRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiverChannelRemove)(IMReceiver     *This,
                                                                         /* [in] */ BSTR _bsChannelID);

    DECLSPEC_XFGVIRT(IMReceiver, ReceiverChannelGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiverChannelGetCount)(IMReceiver      *This,
                                                                           /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMReceiver, ReceiverChannelGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiverChannelGetByIndex)(IMReceiver       *This,
                                                                             /* [in] */ int    _nIndex,
                                                                             /* [out] */ BSTR *_pbsChannelID,
                                                                             /* [out] */ BSTR *_pbsSenderName,
                                                                             /* [out] */ BSTR *_pbsTransName,
                                                                             /* [out] */ BSTR *_pbsXMLParam);

    DECLSPEC_XFGVIRT(IMReceiver, ReceiverPutFrame)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiverPutFrame)(IMReceiver         *This,
                                                                    /* [in] */ BSTR     _bsChannelID,
                                                                    /* [in] */ IMFrame *_pFrame);

    DECLSPEC_XFGVIRT(IMReceiver, ReceiverPutFlush)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiverPutFlush)(IMReceiver     *This,
                                                                    /* [in] */ BSTR _bsChannelID);

    DECLSPEC_XFGVIRT(IMReceiver, ReceiverPutEOS)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiverPutEOS)(IMReceiver     *This,
                                                                  /* [in] */ BSTR _bsChannelID,
                                                                  /* [in] */ BOOL _bRemoveChannel);

    END_INTERFACE
} IMReceiverVtbl;

interface IMReceiver { CONST_VTBL struct IMReceiverVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMReceiver_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMReceiver_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMReceiver_Release(This) ((This)->lpVtbl->Release(This))

            #define IMReceiver_ReceiverChannelAdd(This, _pSender, _pbsChannelID, _bsXMLParam) \
                ((This)->lpVtbl->ReceiverChannelAdd(This, _pSender, _pbsChannelID, _bsXMLParam))

            #define IMReceiver_ReceiverChannelAddByName(This, _bsSenderName, _pbsChannelID, _bsXMLParam) \
                ((This)->lpVtbl->ReceiverChannelAddByName(This, _bsSenderName, _pbsChannelID, _bsXMLParam))

            #define IMReceiver_ReceiverChannelRemove(This, _bsChannelID) \
                ((This)->lpVtbl->ReceiverChannelRemove(This, _bsChannelID))

            #define IMReceiver_ReceiverChannelGetCount(This, _pnCount) \
                ((This)->lpVtbl->ReceiverChannelGetCount(This, _pnCount))

            #define IMReceiver_ReceiverChannelGetByIndex(This,             \
                                                         _nIndex,          \
                                                         _pbsChannelID,    \
                                                         _pbsSenderName,   \
                                                         _pbsTransName,    \
                                                         _pbsXMLParam)     \
                ((This)->lpVtbl->ReceiverChannelGetByIndex(This,           \
                                                           _nIndex,        \
                                                           _pbsChannelID,  \
                                                           _pbsSenderName, \
                                                           _pbsTransName,  \
                                                           _pbsXMLParam))

            #define IMReceiver_ReceiverPutFrame(This, _bsChannelID, _pFrame) \
                ((This)->lpVtbl->ReceiverPutFrame(This, _bsChannelID, _pFrame))

            #define IMReceiver_ReceiverPutFlush(This, _bsChannelID) \
                ((This)->lpVtbl->ReceiverPutFlush(This, _bsChannelID))

            #define IMReceiver_ReceiverPutEOS(This, _bsChannelID, _bRemoveChannel) \
                ((This)->lpVtbl->ReceiverPutEOS(This, _bsChannelID, _bRemoveChannel))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMReceiver_INTERFACE_DEFINED__ */

#ifndef __IMSenders_INTERFACE_DEFINED__
    #define __IMSenders_INTERFACE_DEFINED__

/* interface IMSenders */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMSenders;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366155-473F-4ad5-A5C2-428FE0C8E03E")
IMSenders: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendersGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendersGetByIndex(
        /* [in] */ int           _nIndex,
        /* [out] */ BSTR        *_pbsName,
        /* [out] */ M_VID_PROPS *_pVidProps,
        /* [out] */ M_AUD_PROPS *_pAudProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendersGet(
        /* [in] */ BSTR _bsName,
        /* [out] */ IUnknown * *_ppSender) = 0;
};

    #else /* C style interface */

typedef struct IMSendersVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMSenders        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMSenders *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMSenders *This);

    DECLSPEC_XFGVIRT(IMSenders, SendersGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SendersGetCount)(IMSenders       *This,
                                                                   /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMSenders, SendersGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SendersGetByIndex)(IMSenders               *This,
                                                                     /* [in] */ int           _nIndex,
                                                                     /* [out] */ BSTR        *_pbsName,
                                                                     /* [out] */ M_VID_PROPS *_pVidProps,
                                                                     /* [out] */ M_AUD_PROPS *_pAudProps);

    DECLSPEC_XFGVIRT(IMSenders, SendersGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SendersGet)(IMSenders             *This,
                                                              /* [in] */ BSTR        _bsName,
                                                              /* [out] */ IUnknown **_ppSender);

    END_INTERFACE
} IMSendersVtbl;

interface IMSenders { CONST_VTBL struct IMSendersVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMSenders_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMSenders_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMSenders_Release(This) ((This)->lpVtbl->Release(This))

            #define IMSenders_SendersGetCount(This, _pnCount) ((This)->lpVtbl->SendersGetCount(This, _pnCount))

            #define IMSenders_SendersGetByIndex(This, _nIndex, _pbsName, _pVidProps, _pAudProps) \
                ((This)->lpVtbl->SendersGetByIndex(This, _nIndex, _pbsName, _pVidProps, _pAudProps))

            #define IMSenders_SendersGet(This, _bsName, _ppSender) \
                ((This)->lpVtbl->SendersGet(This, _bsName, _ppSender))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMSenders_INTERFACE_DEFINED__ */

#ifndef __IMFile_INTERFACE_DEFINED__
    #define __IMFile_INTERFACE_DEFINED__

/* interface IMFile */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFile;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366170-473F-4ad5-A5C2-428FE0C8E03E")
IMFile: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FileNameSet(
        /* [in] */ BSTR _bsFile,
        /* [in] */ BSTR _bsParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FileNameGet(
        /* [out] */ BSTR * _pbsFile) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FileInOutSet(
        /* [in] */ double _dblIn,
        /* [in] */ double _dblOut) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FileInOutGet(
        /* [out] */ double *_pdblIn,
        /* [out] */ double *_pdblOut,
        /* [out] */ double *_pdblDuration) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FilePosSet(
        /* [in] */ double _dblPos,
        /* [in] */ double _dblPreroll) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FilePosGet(
        /* [out] */ double *_pdblFilePos) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FilePlayStart(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FilePlayPause(
        /* [in] */ double _dblSeconds) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FilePlayStop(
        /* [in] */ double _dblSeconds) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FileStateGet(
        /* [out] */ eMState * _peState,
        /* [out] */ double *_pdblTimeRemain) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FileRateSet(
        /* [in] */ double _dblRate) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FileRateGet(
        /* [out] */ double *_pdblRate) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FileFrameGet(
        /* [in] */ double     _dblPos,
        /* [in] */ double     _dblPreroll,
        /* [out] */ IMFrame **_ppFrame) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FileInOutSetTC(
        /* [in] */ M_TIMECODE * _pTCIn,
        /* [in] */ M_TIMECODE * _pTCOut) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FileInOutGetTC(
        /* [out] */ M_TIMECODE * _pTCIn,
        /* [out] */ M_TIMECODE * _pTCOut,
        /* [out] */ BOOL * _pbOutSpecified) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FilePosSetTC(
        /* [in] */ M_TIMECODE * _pTC) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FilePosGetTC(
        /* [out] */ M_TIMECODE * _pTC) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FileFrameGetByTC(
        /* [in] */ M_TIMECODE * _pTC,
        /* [out] */ IMFrame * *_ppFrame) = 0;
};

    #else /* C style interface */

typedef struct IMFileVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFile           *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFile *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFile *This);

    DECLSPEC_XFGVIRT(IMFile, FileNameSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileNameSet)(IMFile         *This,
                                                               /* [in] */ BSTR _bsFile,
                                                               /* [in] */ BSTR _bsParam);

    DECLSPEC_XFGVIRT(IMFile, FileNameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileNameGet)(IMFile           *This,
                                                               /* [out] */ BSTR *_pbsFile);

    DECLSPEC_XFGVIRT(IMFile, FileInOutSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileInOutSet)(IMFile           *This,
                                                                /* [in] */ double _dblIn,
                                                                /* [in] */ double _dblOut);

    DECLSPEC_XFGVIRT(IMFile, FileInOutGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileInOutGet)(IMFile             *This,
                                                                /* [out] */ double *_pdblIn,
                                                                /* [out] */ double *_pdblOut,
                                                                /* [out] */ double *_pdblDuration);

    DECLSPEC_XFGVIRT(IMFile, FilePosSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePosSet)(IMFile           *This,
                                                              /* [in] */ double _dblPos,
                                                              /* [in] */ double _dblPreroll);

    DECLSPEC_XFGVIRT(IMFile, FilePosGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePosGet)(IMFile             *This,
                                                              /* [out] */ double *_pdblFilePos);

    DECLSPEC_XFGVIRT(IMFile, FilePlayStart)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePlayStart)(IMFile *This);

    DECLSPEC_XFGVIRT(IMFile, FilePlayPause)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePlayPause)(IMFile           *This,
                                                                 /* [in] */ double _dblSeconds);

    DECLSPEC_XFGVIRT(IMFile, FilePlayStop)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePlayStop)(IMFile           *This,
                                                                /* [in] */ double _dblSeconds);

    DECLSPEC_XFGVIRT(IMFile, FileStateGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileStateGet)(IMFile              *This,
                                                                /* [out] */ eMState *_peState,
                                                                /* [out] */ double  *_pdblTimeRemain);

    DECLSPEC_XFGVIRT(IMFile, FileRateSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileRateSet)(IMFile           *This,
                                                               /* [in] */ double _dblRate);

    DECLSPEC_XFGVIRT(IMFile, FileRateGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileRateGet)(IMFile             *This,
                                                               /* [out] */ double *_pdblRate);

    DECLSPEC_XFGVIRT(IMFile, FileFrameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileFrameGet)(IMFile               *This,
                                                                /* [in] */ double     _dblPos,
                                                                /* [in] */ double     _dblPreroll,
                                                                /* [out] */ IMFrame **_ppFrame);

    DECLSPEC_XFGVIRT(IMFile, FileInOutSetTC)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileInOutSetTC)(IMFile                *This,
                                                                  /* [in] */ M_TIMECODE *_pTCIn,
                                                                  /* [in] */ M_TIMECODE *_pTCOut);

    DECLSPEC_XFGVIRT(IMFile, FileInOutGetTC)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileInOutGetTC)(IMFile                 *This,
                                                                  /* [out] */ M_TIMECODE *_pTCIn,
                                                                  /* [out] */ M_TIMECODE *_pTCOut,
                                                                  /* [out] */ BOOL       *_pbOutSpecified);

    DECLSPEC_XFGVIRT(IMFile, FilePosSetTC)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePosSetTC)(IMFile                *This,
                                                                /* [in] */ M_TIMECODE *_pTC);

    DECLSPEC_XFGVIRT(IMFile, FilePosGetTC)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePosGetTC)(IMFile                 *This,
                                                                /* [out] */ M_TIMECODE *_pTC);

    DECLSPEC_XFGVIRT(IMFile, FileFrameGetByTC)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileFrameGetByTC)(IMFile                *This,
                                                                    /* [in] */ M_TIMECODE *_pTC,
                                                                    /* [out] */ IMFrame  **_ppFrame);

    END_INTERFACE
} IMFileVtbl;

interface IMFile { CONST_VTBL struct IMFileVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFile_QueryInterface(This, riid, ppvObject) ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFile_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFile_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFile_FileNameSet(This, _bsFile, _bsParam) ((This)->lpVtbl->FileNameSet(This, _bsFile, _bsParam))

            #define IMFile_FileNameGet(This, _pbsFile) ((This)->lpVtbl->FileNameGet(This, _pbsFile))

            #define IMFile_FileInOutSet(This, _dblIn, _dblOut) ((This)->lpVtbl->FileInOutSet(This, _dblIn, _dblOut))

            #define IMFile_FileInOutGet(This, _pdblIn, _pdblOut, _pdblDuration) \
                ((This)->lpVtbl->FileInOutGet(This, _pdblIn, _pdblOut, _pdblDuration))

            #define IMFile_FilePosSet(This, _dblPos, _dblPreroll) \
                ((This)->lpVtbl->FilePosSet(This, _dblPos, _dblPreroll))

            #define IMFile_FilePosGet(This, _pdblFilePos) ((This)->lpVtbl->FilePosGet(This, _pdblFilePos))

            #define IMFile_FilePlayStart(This) ((This)->lpVtbl->FilePlayStart(This))

            #define IMFile_FilePlayPause(This, _dblSeconds) ((This)->lpVtbl->FilePlayPause(This, _dblSeconds))

            #define IMFile_FilePlayStop(This, _dblSeconds) ((This)->lpVtbl->FilePlayStop(This, _dblSeconds))

            #define IMFile_FileStateGet(This, _peState, _pdblTimeRemain) \
                ((This)->lpVtbl->FileStateGet(This, _peState, _pdblTimeRemain))

            #define IMFile_FileRateSet(This, _dblRate) ((This)->lpVtbl->FileRateSet(This, _dblRate))

            #define IMFile_FileRateGet(This, _pdblRate) ((This)->lpVtbl->FileRateGet(This, _pdblRate))

            #define IMFile_FileFrameGet(This, _dblPos, _dblPreroll, _ppFrame) \
                ((This)->lpVtbl->FileFrameGet(This, _dblPos, _dblPreroll, _ppFrame))

            #define IMFile_FileInOutSetTC(This, _pTCIn, _pTCOut) ((This)->lpVtbl->FileInOutSetTC(This, _pTCIn, _pTCOut))

            #define IMFile_FileInOutGetTC(This, _pTCIn, _pTCOut, _pbOutSpecified) \
                ((This)->lpVtbl->FileInOutGetTC(This, _pTCIn, _pTCOut, _pbOutSpecified))

            #define IMFile_FilePosSetTC(This, _pTC) ((This)->lpVtbl->FilePosSetTC(This, _pTC))

            #define IMFile_FilePosGetTC(This, _pTC) ((This)->lpVtbl->FilePosGetTC(This, _pTC))

            #define IMFile_FileFrameGetByTC(This, _pTC, _ppFrame) \
                ((This)->lpVtbl->FileFrameGetByTC(This, _pTC, _ppFrame))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFile_INTERFACE_DEFINED__ */

#ifndef __IMItem_INTERFACE_DEFINED__
    #define __IMItem_INTERFACE_DEFINED__

/* interface IMItem */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMItem;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366172-473F-4ad5-A5C2-428FE0C8E03E")
IMItem: public IMFile
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ItemTypeGet(
        /* [out] */ eMItemType * _peType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ItemStartTimeSet(
        /* [in] */ M_DATETIME * _pStartTime,
        /* [in] */ eMStartType _eStartType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ItemTimesGet(
        /* [out] */ M_DATETIME * _pStartTime,
        /* [out] */ M_DATETIME * _pStopTime,
        /* [out] */ eMStartType * _peStartType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ItemPlayTimeGet(
        /* [out] */ double *_pdblPlayTime) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ItemCommandSet(
        /* [in] */ BSTR _bsCommand,
        /* [in] */ BSTR _bsParam,
        /* [in] */ IUnknown * _pTargetObject) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ItemCommandGet(
        /* [out] */ BSTR * _pbsCommand,
        /* [out] */ BSTR * _pbsParam,
        /* [out] */ IUnknown * *_ppTargetObject) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ItemInnerGet(
        /* [out] */ IUnknown * *_ppInnerObject) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ItemCommandExecute(
        /* [in] */ IUnknown * _pSourceObject) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ItemPosGet(
        /* [out] */ double *_pdblPlayPos,
        /* [out] */ int    *_pnPlaylistIndex) = 0;
};

    #else /* C style interface */

typedef struct IMItemVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMItem           *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMItem *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMItem *This);

    DECLSPEC_XFGVIRT(IMFile, FileNameSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileNameSet)(IMItem         *This,
                                                               /* [in] */ BSTR _bsFile,
                                                               /* [in] */ BSTR _bsParam);

    DECLSPEC_XFGVIRT(IMFile, FileNameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileNameGet)(IMItem           *This,
                                                               /* [out] */ BSTR *_pbsFile);

    DECLSPEC_XFGVIRT(IMFile, FileInOutSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileInOutSet)(IMItem           *This,
                                                                /* [in] */ double _dblIn,
                                                                /* [in] */ double _dblOut);

    DECLSPEC_XFGVIRT(IMFile, FileInOutGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileInOutGet)(IMItem             *This,
                                                                /* [out] */ double *_pdblIn,
                                                                /* [out] */ double *_pdblOut,
                                                                /* [out] */ double *_pdblDuration);

    DECLSPEC_XFGVIRT(IMFile, FilePosSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePosSet)(IMItem           *This,
                                                              /* [in] */ double _dblPos,
                                                              /* [in] */ double _dblPreroll);

    DECLSPEC_XFGVIRT(IMFile, FilePosGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePosGet)(IMItem             *This,
                                                              /* [out] */ double *_pdblFilePos);

    DECLSPEC_XFGVIRT(IMFile, FilePlayStart)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePlayStart)(IMItem *This);

    DECLSPEC_XFGVIRT(IMFile, FilePlayPause)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePlayPause)(IMItem           *This,
                                                                 /* [in] */ double _dblSeconds);

    DECLSPEC_XFGVIRT(IMFile, FilePlayStop)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePlayStop)(IMItem           *This,
                                                                /* [in] */ double _dblSeconds);

    DECLSPEC_XFGVIRT(IMFile, FileStateGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileStateGet)(IMItem              *This,
                                                                /* [out] */ eMState *_peState,
                                                                /* [out] */ double  *_pdblTimeRemain);

    DECLSPEC_XFGVIRT(IMFile, FileRateSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileRateSet)(IMItem           *This,
                                                               /* [in] */ double _dblRate);

    DECLSPEC_XFGVIRT(IMFile, FileRateGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileRateGet)(IMItem             *This,
                                                               /* [out] */ double *_pdblRate);

    DECLSPEC_XFGVIRT(IMFile, FileFrameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileFrameGet)(IMItem               *This,
                                                                /* [in] */ double     _dblPos,
                                                                /* [in] */ double     _dblPreroll,
                                                                /* [out] */ IMFrame **_ppFrame);

    DECLSPEC_XFGVIRT(IMFile, FileInOutSetTC)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileInOutSetTC)(IMItem                *This,
                                                                  /* [in] */ M_TIMECODE *_pTCIn,
                                                                  /* [in] */ M_TIMECODE *_pTCOut);

    DECLSPEC_XFGVIRT(IMFile, FileInOutGetTC)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileInOutGetTC)(IMItem                 *This,
                                                                  /* [out] */ M_TIMECODE *_pTCIn,
                                                                  /* [out] */ M_TIMECODE *_pTCOut,
                                                                  /* [out] */ BOOL       *_pbOutSpecified);

    DECLSPEC_XFGVIRT(IMFile, FilePosSetTC)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePosSetTC)(IMItem                *This,
                                                                /* [in] */ M_TIMECODE *_pTC);

    DECLSPEC_XFGVIRT(IMFile, FilePosGetTC)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FilePosGetTC)(IMItem                 *This,
                                                                /* [out] */ M_TIMECODE *_pTC);

    DECLSPEC_XFGVIRT(IMFile, FileFrameGetByTC)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FileFrameGetByTC)(IMItem                *This,
                                                                    /* [in] */ M_TIMECODE *_pTC,
                                                                    /* [out] */ IMFrame  **_ppFrame);

    DECLSPEC_XFGVIRT(IMItem, ItemTypeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ItemTypeGet)(IMItem                 *This,
                                                               /* [out] */ eMItemType *_peType);

    DECLSPEC_XFGVIRT(IMItem, ItemStartTimeSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ItemStartTimeSet)(IMItem                *This,
                                                                    /* [in] */ M_DATETIME *_pStartTime,
                                                                    /* [in] */ eMStartType _eStartType);

    DECLSPEC_XFGVIRT(IMItem, ItemTimesGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ItemTimesGet)(IMItem                  *This,
                                                                /* [out] */ M_DATETIME  *_pStartTime,
                                                                /* [out] */ M_DATETIME  *_pStopTime,
                                                                /* [out] */ eMStartType *_peStartType);

    DECLSPEC_XFGVIRT(IMItem, ItemPlayTimeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ItemPlayTimeGet)(IMItem             *This,
                                                                   /* [out] */ double *_pdblPlayTime);

    DECLSPEC_XFGVIRT(IMItem, ItemCommandSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ItemCommandSet)(IMItem              *This,
                                                                  /* [in] */ BSTR      _bsCommand,
                                                                  /* [in] */ BSTR      _bsParam,
                                                                  /* [in] */ IUnknown *_pTargetObject);

    DECLSPEC_XFGVIRT(IMItem, ItemCommandGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ItemCommandGet)(IMItem                *This,
                                                                  /* [out] */ BSTR      *_pbsCommand,
                                                                  /* [out] */ BSTR      *_pbsParam,
                                                                  /* [out] */ IUnknown **_ppTargetObject);

    DECLSPEC_XFGVIRT(IMItem, ItemInnerGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ItemInnerGet)(IMItem                *This,
                                                                /* [out] */ IUnknown **_ppInnerObject);

    DECLSPEC_XFGVIRT(IMItem, ItemCommandExecute)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ItemCommandExecute)(IMItem              *This,
                                                                      /* [in] */ IUnknown *_pSourceObject);

    DECLSPEC_XFGVIRT(IMItem, ItemPosGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ItemPosGet)(IMItem             *This,
                                                              /* [out] */ double *_pdblPlayPos,
                                                              /* [out] */ int    *_pnPlaylistIndex);

    END_INTERFACE
} IMItemVtbl;

interface IMItem { CONST_VTBL struct IMItemVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMItem_QueryInterface(This, riid, ppvObject) ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMItem_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMItem_Release(This) ((This)->lpVtbl->Release(This))

            #define IMItem_FileNameSet(This, _bsFile, _bsParam) ((This)->lpVtbl->FileNameSet(This, _bsFile, _bsParam))

            #define IMItem_FileNameGet(This, _pbsFile) ((This)->lpVtbl->FileNameGet(This, _pbsFile))

            #define IMItem_FileInOutSet(This, _dblIn, _dblOut) ((This)->lpVtbl->FileInOutSet(This, _dblIn, _dblOut))

            #define IMItem_FileInOutGet(This, _pdblIn, _pdblOut, _pdblDuration) \
                ((This)->lpVtbl->FileInOutGet(This, _pdblIn, _pdblOut, _pdblDuration))

            #define IMItem_FilePosSet(This, _dblPos, _dblPreroll) \
                ((This)->lpVtbl->FilePosSet(This, _dblPos, _dblPreroll))

            #define IMItem_FilePosGet(This, _pdblFilePos) ((This)->lpVtbl->FilePosGet(This, _pdblFilePos))

            #define IMItem_FilePlayStart(This) ((This)->lpVtbl->FilePlayStart(This))

            #define IMItem_FilePlayPause(This, _dblSeconds) ((This)->lpVtbl->FilePlayPause(This, _dblSeconds))

            #define IMItem_FilePlayStop(This, _dblSeconds) ((This)->lpVtbl->FilePlayStop(This, _dblSeconds))

            #define IMItem_FileStateGet(This, _peState, _pdblTimeRemain) \
                ((This)->lpVtbl->FileStateGet(This, _peState, _pdblTimeRemain))

            #define IMItem_FileRateSet(This, _dblRate) ((This)->lpVtbl->FileRateSet(This, _dblRate))

            #define IMItem_FileRateGet(This, _pdblRate) ((This)->lpVtbl->FileRateGet(This, _pdblRate))

            #define IMItem_FileFrameGet(This, _dblPos, _dblPreroll, _ppFrame) \
                ((This)->lpVtbl->FileFrameGet(This, _dblPos, _dblPreroll, _ppFrame))

            #define IMItem_FileInOutSetTC(This, _pTCIn, _pTCOut) ((This)->lpVtbl->FileInOutSetTC(This, _pTCIn, _pTCOut))

            #define IMItem_FileInOutGetTC(This, _pTCIn, _pTCOut, _pbOutSpecified) \
                ((This)->lpVtbl->FileInOutGetTC(This, _pTCIn, _pTCOut, _pbOutSpecified))

            #define IMItem_FilePosSetTC(This, _pTC) ((This)->lpVtbl->FilePosSetTC(This, _pTC))

            #define IMItem_FilePosGetTC(This, _pTC) ((This)->lpVtbl->FilePosGetTC(This, _pTC))

            #define IMItem_FileFrameGetByTC(This, _pTC, _ppFrame) \
                ((This)->lpVtbl->FileFrameGetByTC(This, _pTC, _ppFrame))

            #define IMItem_ItemTypeGet(This, _peType) ((This)->lpVtbl->ItemTypeGet(This, _peType))

            #define IMItem_ItemStartTimeSet(This, _pStartTime, _eStartType) \
                ((This)->lpVtbl->ItemStartTimeSet(This, _pStartTime, _eStartType))

            #define IMItem_ItemTimesGet(This, _pStartTime, _pStopTime, _peStartType) \
                ((This)->lpVtbl->ItemTimesGet(This, _pStartTime, _pStopTime, _peStartType))

            #define IMItem_ItemPlayTimeGet(This, _pdblPlayTime) ((This)->lpVtbl->ItemPlayTimeGet(This, _pdblPlayTime))

            #define IMItem_ItemCommandSet(This, _bsCommand, _bsParam, _pTargetObject) \
                ((This)->lpVtbl->ItemCommandSet(This, _bsCommand, _bsParam, _pTargetObject))

            #define IMItem_ItemCommandGet(This, _pbsCommand, _pbsParam, _ppTargetObject) \
                ((This)->lpVtbl->ItemCommandGet(This, _pbsCommand, _pbsParam, _ppTargetObject))

            #define IMItem_ItemInnerGet(This, _ppInnerObject) ((This)->lpVtbl->ItemInnerGet(This, _ppInnerObject))

            #define IMItem_ItemCommandExecute(This, _pSourceObject) \
                ((This)->lpVtbl->ItemCommandExecute(This, _pSourceObject))

            #define IMItem_ItemPosGet(This, _pdblPlayPos, _pnPlaylistIndex) \
                ((This)->lpVtbl->ItemPosGet(This, _pdblPlayPos, _pnPlaylistIndex))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMItem_INTERFACE_DEFINED__ */

#ifndef __IMPlaylist_INTERFACE_DEFINED__
    #define __IMPlaylist_INTERFACE_DEFINED__

/* interface IMPlaylist */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMPlaylist;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366175-473F-4ad5-A5C2-428FE0C8E03E")
IMPlaylist: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlaylistGetCount(
        /* [out] */ int    *_pnCount,
        /* [out] */ double *_pdblTotalDuration) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlaylistGetByIndex(
        /* [in] */ int       _nIndex,
        /* [out] */ double  *_pdblFileOffset,
        /* [out] */ BSTR    *_pbsPath,
        /* [out] */ IMItem **_ppPlaylistItem) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlaylistAdd(
        /* [in] */ IUnknown * _pExternOrRef,
        /* [in] */ BSTR      _bsPath,
        /* [in] */ BSTR      _bsParam,
        /* [out][in] */ int *_pnIndex,
        /* [out] */ IMItem **_ppPlaylistItem) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlaylistCommandAdd(
        /* [in] */ BSTR _bsCommand,
        /* [in] */ BSTR _bsParam,
        /* [in] */ IUnknown * _pTargetObject,
        /* [out][in] */ int *_pnIndex,
        /* [out] */ IMItem **_ppPlaylistItem) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlaylistRemove(
        /* [in] */ IMItem * pFile) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlaylistRemoveByIndex(
        /* [in] */ int _nIndex,
        /* [in] */ int _nExtraRemove) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlaylistReorder(
        /* [in] */ int _nIndex,
        /* [in] */ int _nIndexAdd) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlaylistPosSet(
        /* [in] */ int    _nIndex,
        /* [in] */ double _dblFileOrListTime,
        /* [in] */ double _dblPreroll) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlaylistPosGet(
        /* [out] */ int    *_pnIndex,
        /* [out] */ int    *_pnNextIndex,
        /* [out] */ double *_pdblFileTime,
        /* [out] */ double *_pdblListTime) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlaylistBackgroundSet(
        /* [in] */ IUnknown * _pExternOrRef,
        /* [in] */ BSTR _bsPath,
        /* [in] */ BSTR _bsParam,
        /* [out] */ IMItem * *_ppPlaylistItem) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlaylistBackgroundGet(
        /* [out] */ BSTR * _pbsPath,
        /* [out] */ IMItem * *_ppPlaylistItem) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlaylistGetByOffset(
        /* [in] */ double    _dblTimeOffset,
        /* [out] */ int     *_pnIndex,
        /* [out] */ double  *_pdblFileTime,
        /* [out] */ BSTR    *_pbsPath,
        /* [out] */ IMItem **_ppPlaylistItem) = 0;
};

    #else /* C style interface */

typedef struct IMPlaylistVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMPlaylist       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMPlaylist *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMPlaylist *This);

    DECLSPEC_XFGVIRT(IMPlaylist, PlaylistGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PlaylistGetCount)(IMPlaylist         *This,
                                                                    /* [out] */ int    *_pnCount,
                                                                    /* [out] */ double *_pdblTotalDuration);

    DECLSPEC_XFGVIRT(IMPlaylist, PlaylistGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PlaylistGetByIndex)(IMPlaylist          *This,
                                                                      /* [in] */ int       _nIndex,
                                                                      /* [out] */ double  *_pdblFileOffset,
                                                                      /* [out] */ BSTR    *_pbsPath,
                                                                      /* [out] */ IMItem **_ppPlaylistItem);

    DECLSPEC_XFGVIRT(IMPlaylist, PlaylistAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PlaylistAdd)(IMPlaylist          *This,
                                                               /* [in] */ IUnknown *_pExternOrRef,
                                                               /* [in] */ BSTR      _bsPath,
                                                               /* [in] */ BSTR      _bsParam,
                                                               /* [out][in] */ int *_pnIndex,
                                                               /* [out] */ IMItem **_ppPlaylistItem);

    DECLSPEC_XFGVIRT(IMPlaylist, PlaylistCommandAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PlaylistCommandAdd)(IMPlaylist          *This,
                                                                      /* [in] */ BSTR      _bsCommand,
                                                                      /* [in] */ BSTR      _bsParam,
                                                                      /* [in] */ IUnknown *_pTargetObject,
                                                                      /* [out][in] */ int *_pnIndex,
                                                                      /* [out] */ IMItem **_ppPlaylistItem);

    DECLSPEC_XFGVIRT(IMPlaylist, PlaylistRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PlaylistRemove)(IMPlaylist        *This,
                                                                  /* [in] */ IMItem *pFile);

    DECLSPEC_XFGVIRT(IMPlaylist, PlaylistRemoveByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PlaylistRemoveByIndex)(IMPlaylist    *This,
                                                                         /* [in] */ int _nIndex,
                                                                         /* [in] */ int _nExtraRemove);

    DECLSPEC_XFGVIRT(IMPlaylist, PlaylistReorder)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PlaylistReorder)(IMPlaylist    *This,
                                                                   /* [in] */ int _nIndex,
                                                                   /* [in] */ int _nIndexAdd);

    DECLSPEC_XFGVIRT(IMPlaylist, PlaylistPosSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PlaylistPosSet)(IMPlaylist       *This,
                                                                  /* [in] */ int    _nIndex,
                                                                  /* [in] */ double _dblFileOrListTime,
                                                                  /* [in] */ double _dblPreroll);

    DECLSPEC_XFGVIRT(IMPlaylist, PlaylistPosGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PlaylistPosGet)(IMPlaylist         *This,
                                                                  /* [out] */ int    *_pnIndex,
                                                                  /* [out] */ int    *_pnNextIndex,
                                                                  /* [out] */ double *_pdblFileTime,
                                                                  /* [out] */ double *_pdblListTime);

    DECLSPEC_XFGVIRT(IMPlaylist, PlaylistBackgroundSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PlaylistBackgroundSet)(IMPlaylist          *This,
                                                                         /* [in] */ IUnknown *_pExternOrRef,
                                                                         /* [in] */ BSTR      _bsPath,
                                                                         /* [in] */ BSTR      _bsParam,
                                                                         /* [out] */ IMItem **_ppPlaylistItem);

    DECLSPEC_XFGVIRT(IMPlaylist, PlaylistBackgroundGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PlaylistBackgroundGet)(IMPlaylist          *This,
                                                                         /* [out] */ BSTR    *_pbsPath,
                                                                         /* [out] */ IMItem **_ppPlaylistItem);

    DECLSPEC_XFGVIRT(IMPlaylist, PlaylistGetByOffset)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PlaylistGetByOffset)(IMPlaylist          *This,
                                                                       /* [in] */ double    _dblTimeOffset,
                                                                       /* [out] */ int     *_pnIndex,
                                                                       /* [out] */ double  *_pdblFileTime,
                                                                       /* [out] */ BSTR    *_pbsPath,
                                                                       /* [out] */ IMItem **_ppPlaylistItem);

    END_INTERFACE
} IMPlaylistVtbl;

interface IMPlaylist { CONST_VTBL struct IMPlaylistVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMPlaylist_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMPlaylist_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMPlaylist_Release(This) ((This)->lpVtbl->Release(This))

            #define IMPlaylist_PlaylistGetCount(This, _pnCount, _pdblTotalDuration) \
                ((This)->lpVtbl->PlaylistGetCount(This, _pnCount, _pdblTotalDuration))

            #define IMPlaylist_PlaylistGetByIndex(This, _nIndex, _pdblFileOffset, _pbsPath, _ppPlaylistItem) \
                ((This)->lpVtbl->PlaylistGetByIndex(This, _nIndex, _pdblFileOffset, _pbsPath, _ppPlaylistItem))

            #define IMPlaylist_PlaylistAdd(This, _pExternOrRef, _bsPath, _bsParam, _pnIndex, _ppPlaylistItem) \
                ((This)->lpVtbl->PlaylistAdd(This, _pExternOrRef, _bsPath, _bsParam, _pnIndex, _ppPlaylistItem))

            #define IMPlaylist_PlaylistCommandAdd(This,             \
                                                  _bsCommand,       \
                                                  _bsParam,         \
                                                  _pTargetObject,   \
                                                  _pnIndex,         \
                                                  _ppPlaylistItem)  \
                ((This)->lpVtbl->PlaylistCommandAdd(This,           \
                                                    _bsCommand,     \
                                                    _bsParam,       \
                                                    _pTargetObject, \
                                                    _pnIndex,       \
                                                    _ppPlaylistItem))

            #define IMPlaylist_PlaylistRemove(This, pFile) ((This)->lpVtbl->PlaylistRemove(This, pFile))

            #define IMPlaylist_PlaylistRemoveByIndex(This, _nIndex, _nExtraRemove) \
                ((This)->lpVtbl->PlaylistRemoveByIndex(This, _nIndex, _nExtraRemove))

            #define IMPlaylist_PlaylistReorder(This, _nIndex, _nIndexAdd) \
                ((This)->lpVtbl->PlaylistReorder(This, _nIndex, _nIndexAdd))

            #define IMPlaylist_PlaylistPosSet(This, _nIndex, _dblFileOrListTime, _dblPreroll) \
                ((This)->lpVtbl->PlaylistPosSet(This, _nIndex, _dblFileOrListTime, _dblPreroll))

            #define IMPlaylist_PlaylistPosGet(This, _pnIndex, _pnNextIndex, _pdblFileTime, _pdblListTime) \
                ((This)->lpVtbl->PlaylistPosGet(This, _pnIndex, _pnNextIndex, _pdblFileTime, _pdblListTime))

            #define IMPlaylist_PlaylistBackgroundSet(This, _pExternOrRef, _bsPath, _bsParam, _ppPlaylistItem) \
                ((This)->lpVtbl->PlaylistBackgroundSet(This, _pExternOrRef, _bsPath, _bsParam, _ppPlaylistItem))

            #define IMPlaylist_PlaylistBackgroundGet(This, _pbsPath, _ppPlaylistItem) \
                ((This)->lpVtbl->PlaylistBackgroundGet(This, _pbsPath, _ppPlaylistItem))

            #define IMPlaylist_PlaylistGetByOffset(This,             \
                                                   _dblTimeOffset,   \
                                                   _pnIndex,         \
                                                   _pdblFileTime,    \
                                                   _pbsPath,         \
                                                   _ppPlaylistItem)  \
                ((This)->lpVtbl->PlaylistGetByOffset(This,           \
                                                     _dblTimeOffset, \
                                                     _pnIndex,       \
                                                     _pdblFileTime,  \
                                                     _pbsPath,       \
                                                     _ppPlaylistItem))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMPlaylist_INTERFACE_DEFINED__ */

#ifndef __IMBreaks_INTERFACE_DEFINED__
    #define __IMBreaks_INTERFACE_DEFINED__

/* interface IMBreaks */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMBreaks;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366177-473F-4ad5-A5C2-428FE0C8E03E")
IMBreaks: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BreaksGetCount(
        /* [out] */ int    *_pnCount,
        /* [out] */ double *_pdblTotalDuration) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BreaksGetByIndex(
        /* [in] */ int       _nIndex,
        /* [out] */ double  *_pdblBreakTime,
        /* [out] */ BSTR    *_pbsPath,
        /* [out] */ IMItem **_ppBreakItem) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BreaksAdd(
        /* [in] */ double    _dblTime,
        /* [in] */ IUnknown *_pExternOrRef,
        /* [in] */ BSTR      _bsPath,
        /* [in] */ BSTR      _bsParam,
        /* [out] */ IMItem **_ppBreakItem) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BreaksCommandAdd(
        /* [in] */ double    _dblTime,
        /* [in] */ BSTR      _bsCommand,
        /* [in] */ BSTR      _bsParam,
        /* [in] */ IUnknown *_pTargetObject,
        /* [out] */ IMItem **_ppBreakItem) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BreaksRemove(
        /* [in] */ IMItem * _pBreakItem) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BreaksRemoveByIndex(
        /* [in] */ int _nIndex,
        /* [in] */ int _nExtraRemove) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BreaksTimeSet(
        /* [in] */ int    _nIndex,
        /* [in] */ double _dblNewTime) = 0;
};

    #else /* C style interface */

typedef struct IMBreaksVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMBreaks         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMBreaks *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMBreaks *This);

    DECLSPEC_XFGVIRT(IMBreaks, BreaksGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BreaksGetCount)(IMBreaks           *This,
                                                                  /* [out] */ int    *_pnCount,
                                                                  /* [out] */ double *_pdblTotalDuration);

    DECLSPEC_XFGVIRT(IMBreaks, BreaksGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BreaksGetByIndex)(IMBreaks            *This,
                                                                    /* [in] */ int       _nIndex,
                                                                    /* [out] */ double  *_pdblBreakTime,
                                                                    /* [out] */ BSTR    *_pbsPath,
                                                                    /* [out] */ IMItem **_ppBreakItem);

    DECLSPEC_XFGVIRT(IMBreaks, BreaksAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BreaksAdd)(IMBreaks            *This,
                                                             /* [in] */ double    _dblTime,
                                                             /* [in] */ IUnknown *_pExternOrRef,
                                                             /* [in] */ BSTR      _bsPath,
                                                             /* [in] */ BSTR      _bsParam,
                                                             /* [out] */ IMItem **_ppBreakItem);

    DECLSPEC_XFGVIRT(IMBreaks, BreaksCommandAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BreaksCommandAdd)(IMBreaks            *This,
                                                                    /* [in] */ double    _dblTime,
                                                                    /* [in] */ BSTR      _bsCommand,
                                                                    /* [in] */ BSTR      _bsParam,
                                                                    /* [in] */ IUnknown *_pTargetObject,
                                                                    /* [out] */ IMItem **_ppBreakItem);

    DECLSPEC_XFGVIRT(IMBreaks, BreaksRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BreaksRemove)(IMBreaks          *This,
                                                                /* [in] */ IMItem *_pBreakItem);

    DECLSPEC_XFGVIRT(IMBreaks, BreaksRemoveByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BreaksRemoveByIndex)(IMBreaks      *This,
                                                                       /* [in] */ int _nIndex,
                                                                       /* [in] */ int _nExtraRemove);

    DECLSPEC_XFGVIRT(IMBreaks, BreaksTimeSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BreaksTimeSet)(IMBreaks         *This,
                                                                 /* [in] */ int    _nIndex,
                                                                 /* [in] */ double _dblNewTime);

    END_INTERFACE
} IMBreaksVtbl;

interface IMBreaks { CONST_VTBL struct IMBreaksVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMBreaks_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMBreaks_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMBreaks_Release(This) ((This)->lpVtbl->Release(This))

            #define IMBreaks_BreaksGetCount(This, _pnCount, _pdblTotalDuration) \
                ((This)->lpVtbl->BreaksGetCount(This, _pnCount, _pdblTotalDuration))

            #define IMBreaks_BreaksGetByIndex(This, _nIndex, _pdblBreakTime, _pbsPath, _ppBreakItem) \
                ((This)->lpVtbl->BreaksGetByIndex(This, _nIndex, _pdblBreakTime, _pbsPath, _ppBreakItem))

            #define IMBreaks_BreaksAdd(This, _dblTime, _pExternOrRef, _bsPath, _bsParam, _ppBreakItem) \
                ((This)->lpVtbl->BreaksAdd(This, _dblTime, _pExternOrRef, _bsPath, _bsParam, _ppBreakItem))

            #define IMBreaks_BreaksCommandAdd(This, _dblTime, _bsCommand, _bsParam, _pTargetObject, _ppBreakItem) \
                ((This)->lpVtbl->BreaksCommandAdd(This, _dblTime, _bsCommand, _bsParam, _pTargetObject, _ppBreakItem))

            #define IMBreaks_BreaksRemove(This, _pBreakItem) ((This)->lpVtbl->BreaksRemove(This, _pBreakItem))

            #define IMBreaks_BreaksRemoveByIndex(This, _nIndex, _nExtraRemove) \
                ((This)->lpVtbl->BreaksRemoveByIndex(This, _nIndex, _nExtraRemove))

            #define IMBreaks_BreaksTimeSet(This, _nIndex, _dblNewTime) \
                ((This)->lpVtbl->BreaksTimeSet(This, _nIndex, _dblNewTime))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMBreaks_INTERFACE_DEFINED__ */

#ifndef __IMScheduler_INTERFACE_DEFINED__
    #define __IMScheduler_INTERFACE_DEFINED__

/* interface IMScheduler */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMScheduler;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366178-473F-4ad5-A5C2-428FE0C8E03E")
IMScheduler: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SchedulerGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SchedulerGetByIndex(
        /* [in] */ int          _nIndex,
        /* [out] */ M_DATETIME *_pTime,
        /* [out] */ BSTR       *_pbsCommand,
        /* [out] */ IMItem    **_ppTask) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SchedulerGetByTime(
        /* [in] */ M_DATETIME * _pCheckTime,
        /* [out] */ M_DATETIME * _pTaskTime,
        /* [out] */ BSTR * _pbsCommand,
        /* [out] */ IMItem * *_ppTask) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SchedulerGetNext(
        /* [in] */ BOOL         _bAllTasks,
        /* [in] */ int          _nIndex,
        /* [out] */ M_DATETIME *_pTaskTime,
        /* [out] */ BSTR       *_pbsCommand,
        /* [out] */ IMItem    **_ppTask) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SchedulerCommandAdd(
        /* [in] */ M_DATETIME * _pTime,
        /* [in] */ BSTR _bsCommand,
        /* [in] */ BSTR _bsParam,
        /* [in] */ IUnknown * _pSourceOrTargetObject,
        /* [out] */ IMItem * *_ppTask) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SchedulerAdd(
        /* [in] */ M_DATETIME * _pTime,
        /* [in] */ IUnknown * _pExternOrRef,
        /* [in] */ BSTR _bsPath,
        /* [in] */ BSTR _bsParam,
        /* [out] */ IMItem * *_ppTask) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SchedulerRemove(
        /* [in] */ IMItem * _pTask) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SchedulerRemoveByIndex(
        /* [in] */ int _nIndex,
        /* [in] */ int _nExtraRemove) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SchedulerStatGet(
        /* [in] */ IMItem * _pTask,
        /* [out] */ M_DATETIME * _pTimeExecute,
        /* [out] */ int *_pnExecutionCount) = 0;
};

    #else /* C style interface */

typedef struct IMSchedulerVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMScheduler      *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMScheduler *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMScheduler *This);

    DECLSPEC_XFGVIRT(IMScheduler, SchedulerGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SchedulerGetCount)(IMScheduler     *This,
                                                                     /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMScheduler, SchedulerGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SchedulerGetByIndex)(IMScheduler            *This,
                                                                       /* [in] */ int          _nIndex,
                                                                       /* [out] */ M_DATETIME *_pTime,
                                                                       /* [out] */ BSTR       *_pbsCommand,
                                                                       /* [out] */ IMItem    **_ppTask);

    DECLSPEC_XFGVIRT(IMScheduler, SchedulerGetByTime)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SchedulerGetByTime)(IMScheduler            *This,
                                                                      /* [in] */ M_DATETIME  *_pCheckTime,
                                                                      /* [out] */ M_DATETIME *_pTaskTime,
                                                                      /* [out] */ BSTR       *_pbsCommand,
                                                                      /* [out] */ IMItem    **_ppTask);

    DECLSPEC_XFGVIRT(IMScheduler, SchedulerGetNext)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SchedulerGetNext)(IMScheduler            *This,
                                                                    /* [in] */ BOOL         _bAllTasks,
                                                                    /* [in] */ int          _nIndex,
                                                                    /* [out] */ M_DATETIME *_pTaskTime,
                                                                    /* [out] */ BSTR       *_pbsCommand,
                                                                    /* [out] */ IMItem    **_ppTask);

    DECLSPEC_XFGVIRT(IMScheduler, SchedulerCommandAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SchedulerCommandAdd)(IMScheduler           *This,
                                                                       /* [in] */ M_DATETIME *_pTime,
                                                                       /* [in] */ BSTR        _bsCommand,
                                                                       /* [in] */ BSTR        _bsParam,
                                                                       /* [in] */ IUnknown   *_pSourceOrTargetObject,
                                                                       /* [out] */ IMItem   **_ppTask);

    DECLSPEC_XFGVIRT(IMScheduler, SchedulerAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SchedulerAdd)(IMScheduler           *This,
                                                                /* [in] */ M_DATETIME *_pTime,
                                                                /* [in] */ IUnknown   *_pExternOrRef,
                                                                /* [in] */ BSTR        _bsPath,
                                                                /* [in] */ BSTR        _bsParam,
                                                                /* [out] */ IMItem   **_ppTask);

    DECLSPEC_XFGVIRT(IMScheduler, SchedulerRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SchedulerRemove)(IMScheduler       *This,
                                                                   /* [in] */ IMItem *_pTask);

    DECLSPEC_XFGVIRT(IMScheduler, SchedulerRemoveByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SchedulerRemoveByIndex)(IMScheduler   *This,
                                                                          /* [in] */ int _nIndex,
                                                                          /* [in] */ int _nExtraRemove);

    DECLSPEC_XFGVIRT(IMScheduler, SchedulerStatGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SchedulerStatGet)(IMScheduler            *This,
                                                                    /* [in] */ IMItem      *_pTask,
                                                                    /* [out] */ M_DATETIME *_pTimeExecute,
                                                                    /* [out] */ int        *_pnExecutionCount);

    END_INTERFACE
} IMSchedulerVtbl;

interface IMScheduler { CONST_VTBL struct IMSchedulerVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMScheduler_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMScheduler_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMScheduler_Release(This) ((This)->lpVtbl->Release(This))

            #define IMScheduler_SchedulerGetCount(This, _pnCount) ((This)->lpVtbl->SchedulerGetCount(This, _pnCount))

            #define IMScheduler_SchedulerGetByIndex(This, _nIndex, _pTime, _pbsCommand, _ppTask) \
                ((This)->lpVtbl->SchedulerGetByIndex(This, _nIndex, _pTime, _pbsCommand, _ppTask))

            #define IMScheduler_SchedulerGetByTime(This, _pCheckTime, _pTaskTime, _pbsCommand, _ppTask) \
                ((This)->lpVtbl->SchedulerGetByTime(This, _pCheckTime, _pTaskTime, _pbsCommand, _ppTask))

            #define IMScheduler_SchedulerGetNext(This, _bAllTasks, _nIndex, _pTaskTime, _pbsCommand, _ppTask) \
                ((This)->lpVtbl->SchedulerGetNext(This, _bAllTasks, _nIndex, _pTaskTime, _pbsCommand, _ppTask))

            #define IMScheduler_SchedulerCommandAdd(This,                    \
                                                    _pTime,                  \
                                                    _bsCommand,              \
                                                    _bsParam,                \
                                                    _pSourceOrTargetObject,  \
                                                    _ppTask)                 \
                ((This)->lpVtbl->SchedulerCommandAdd(This,                   \
                                                     _pTime,                 \
                                                     _bsCommand,             \
                                                     _bsParam,               \
                                                     _pSourceOrTargetObject, \
                                                     _ppTask))

            #define IMScheduler_SchedulerAdd(This, _pTime, _pExternOrRef, _bsPath, _bsParam, _ppTask) \
                ((This)->lpVtbl->SchedulerAdd(This, _pTime, _pExternOrRef, _bsPath, _bsParam, _ppTask))

            #define IMScheduler_SchedulerRemove(This, _pTask) ((This)->lpVtbl->SchedulerRemove(This, _pTask))

            #define IMScheduler_SchedulerRemoveByIndex(This, _nIndex, _nExtraRemove) \
                ((This)->lpVtbl->SchedulerRemoveByIndex(This, _nIndex, _nExtraRemove))

            #define IMScheduler_SchedulerStatGet(This, _pTask, _pTimeExecute, _pnExecutionCount) \
                ((This)->lpVtbl->SchedulerStatGet(This, _pTask, _pTimeExecute, _pnExecutionCount))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMScheduler_INTERFACE_DEFINED__ */

#ifndef __IMDevice_INTERFACE_DEFINED__
    #define __IMDevice_INTERFACE_DEFINED__

/* interface IMDevice */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMDevice;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366180-473F-4ad5-A5C2-428FE0C8E03E")
IMDevice: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceGetCount(
        /* [in] */ BOOL  _bTypesEnum,
        /* [in] */ BSTR  _bsType,
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceGetByIndex(
        /* [in] */ BOOL   _bTypesEnum,
        /* [in] */ BSTR   _bsType,
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsNameOrType,
        /* [out] */ BSTR *_pbsXMLDesc) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceSet(
        /* [in] */ BSTR _bsType,
        /* [in] */ BSTR _bsName,
        /* [in] */ BSTR _bsParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceGet(
        /* [in] */ BSTR _bsType,
        /* [out] */ BSTR * _pbsName,
        /* [out] */ BSTR * _pbsParam,
        /* [out] */ int *_pnIndex) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceShowProps(
        /* [in] */ BSTR     _bsType,
        /* [in] */ BSTR     _bsPropsType,
        /* [in] */ LONGLONG _lWndHandle) = 0;
};

    #else /* C style interface */

typedef struct IMDeviceVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMDevice         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMDevice *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMDevice *This);

    DECLSPEC_XFGVIRT(IMDevice, DeviceGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceGetCount)(IMDevice        *This,
                                                                  /* [in] */ BOOL  _bTypesEnum,
                                                                  /* [in] */ BSTR  _bsType,
                                                                  /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMDevice, DeviceGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceGetByIndex)(IMDevice         *This,
                                                                    /* [in] */ BOOL   _bTypesEnum,
                                                                    /* [in] */ BSTR   _bsType,
                                                                    /* [in] */ int    _nIndex,
                                                                    /* [out] */ BSTR *_pbsNameOrType,
                                                                    /* [out] */ BSTR *_pbsXMLDesc);

    DECLSPEC_XFGVIRT(IMDevice, DeviceSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceSet)(IMDevice       *This,
                                                             /* [in] */ BSTR _bsType,
                                                             /* [in] */ BSTR _bsName,
                                                             /* [in] */ BSTR _bsParam);

    DECLSPEC_XFGVIRT(IMDevice, DeviceGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceGet)(IMDevice         *This,
                                                             /* [in] */ BSTR   _bsType,
                                                             /* [out] */ BSTR *_pbsName,
                                                             /* [out] */ BSTR *_pbsParam,
                                                             /* [out] */ int  *_pnIndex);

    DECLSPEC_XFGVIRT(IMDevice, DeviceShowProps)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceShowProps)(IMDevice           *This,
                                                                   /* [in] */ BSTR     _bsType,
                                                                   /* [in] */ BSTR     _bsPropsType,
                                                                   /* [in] */ LONGLONG _lWndHandle);

    END_INTERFACE
} IMDeviceVtbl;

interface IMDevice { CONST_VTBL struct IMDeviceVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMDevice_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMDevice_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMDevice_Release(This) ((This)->lpVtbl->Release(This))

            #define IMDevice_DeviceGetCount(This, _bTypesEnum, _bsType, _pnCount) \
                ((This)->lpVtbl->DeviceGetCount(This, _bTypesEnum, _bsType, _pnCount))

            #define IMDevice_DeviceGetByIndex(This, _bTypesEnum, _bsType, _nIndex, _pbsNameOrType, _pbsXMLDesc) \
                ((This)->lpVtbl->DeviceGetByIndex(This, _bTypesEnum, _bsType, _nIndex, _pbsNameOrType, _pbsXMLDesc))

            #define IMDevice_DeviceSet(This, _bsType, _bsName, _bsParam) \
                ((This)->lpVtbl->DeviceSet(This, _bsType, _bsName, _bsParam))

            #define IMDevice_DeviceGet(This, _bsType, _pbsName, _pbsParam, _pnIndex) \
                ((This)->lpVtbl->DeviceGet(This, _bsType, _pbsName, _pbsParam, _pnIndex))

            #define IMDevice_DeviceShowProps(This, _bsType, _bsPropsType, _lWndHandle) \
                ((This)->lpVtbl->DeviceShowProps(This, _bsType, _bsPropsType, _lWndHandle))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMDevice_INTERFACE_DEFINED__ */

#ifndef __IMPlugins_INTERFACE_DEFINED__
    #define __IMPlugins_INTERFACE_DEFINED__

/* interface IMPlugins */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMPlugins;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366190-473F-4ad5-A5C2-428FE0C8E03E")
IMPlugins: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PluginsGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PluginsGetByIndex(
        /* [in] */ int         _nIndex,
        /* [out] */ IUnknown **_ppPlugin,
        /* [out] */ LONGLONG  *_pllCallbackUserData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PluginsAdd(
        /* [in] */ IUnknown * _pPlugin,
        /* [in] */ LONGLONG _llCallbackUserData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PluginsRemove(
        /* [in] */ IUnknown * _pPlugin) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PluginsAddVB6(
        /* [in] */ IUnknown * _pPlugin,
        /* [in] */ LONG _lCallbackUserData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PluginsGetByIndexVB6(
        /* [in] */ int         _nIndex,
        /* [out] */ IUnknown **_ppPlugin,
        /* [out] */ LONG      *_pllCallbackUserData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PluginsReorder(
        /* [in] */ IUnknown * _pPlugin,
        /* [in] */ int _nOrderChange) = 0;
};

    #else /* C style interface */

typedef struct IMPluginsVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMPlugins        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMPlugins *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMPlugins *This);

    DECLSPEC_XFGVIRT(IMPlugins, PluginsGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PluginsGetCount)(IMPlugins       *This,
                                                                   /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMPlugins, PluginsGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PluginsGetByIndex)(IMPlugins             *This,
                                                                     /* [in] */ int         _nIndex,
                                                                     /* [out] */ IUnknown **_ppPlugin,
                                                                     /* [out] */ LONGLONG  *_pllCallbackUserData);

    DECLSPEC_XFGVIRT(IMPlugins, PluginsAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PluginsAdd)(IMPlugins           *This,
                                                              /* [in] */ IUnknown *_pPlugin,
                                                              /* [in] */ LONGLONG  _llCallbackUserData);

    DECLSPEC_XFGVIRT(IMPlugins, PluginsRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PluginsRemove)(IMPlugins           *This,
                                                                 /* [in] */ IUnknown *_pPlugin);

    DECLSPEC_XFGVIRT(IMPlugins, PluginsAddVB6)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PluginsAddVB6)(IMPlugins           *This,
                                                                 /* [in] */ IUnknown *_pPlugin,
                                                                 /* [in] */ LONG      _lCallbackUserData);

    DECLSPEC_XFGVIRT(IMPlugins, PluginsGetByIndexVB6)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PluginsGetByIndexVB6)(IMPlugins             *This,
                                                                        /* [in] */ int         _nIndex,
                                                                        /* [out] */ IUnknown **_ppPlugin,
                                                                        /* [out] */ LONG      *_pllCallbackUserData);

    DECLSPEC_XFGVIRT(IMPlugins, PluginsReorder)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PluginsReorder)(IMPlugins           *This,
                                                                  /* [in] */ IUnknown *_pPlugin,
                                                                  /* [in] */ int       _nOrderChange);

    END_INTERFACE
} IMPluginsVtbl;

interface IMPlugins { CONST_VTBL struct IMPluginsVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMPlugins_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMPlugins_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMPlugins_Release(This) ((This)->lpVtbl->Release(This))

            #define IMPlugins_PluginsGetCount(This, _pnCount) ((This)->lpVtbl->PluginsGetCount(This, _pnCount))

            #define IMPlugins_PluginsGetByIndex(This, _nIndex, _ppPlugin, _pllCallbackUserData) \
                ((This)->lpVtbl->PluginsGetByIndex(This, _nIndex, _ppPlugin, _pllCallbackUserData))

            #define IMPlugins_PluginsAdd(This, _pPlugin, _llCallbackUserData) \
                ((This)->lpVtbl->PluginsAdd(This, _pPlugin, _llCallbackUserData))

            #define IMPlugins_PluginsRemove(This, _pPlugin) ((This)->lpVtbl->PluginsRemove(This, _pPlugin))

            #define IMPlugins_PluginsAddVB6(This, _pPlugin, _lCallbackUserData) \
                ((This)->lpVtbl->PluginsAddVB6(This, _pPlugin, _lCallbackUserData))

            #define IMPlugins_PluginsGetByIndexVB6(This, _nIndex, _ppPlugin, _pllCallbackUserData) \
                ((This)->lpVtbl->PluginsGetByIndexVB6(This, _nIndex, _ppPlugin, _pllCallbackUserData))

            #define IMPlugins_PluginsReorder(This, _pPlugin, _nOrderChange) \
                ((This)->lpVtbl->PluginsReorder(This, _pPlugin, _nOrderChange))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMPlugins_INTERFACE_DEFINED__ */

#ifndef __IMPlugin_INTERFACE_DEFINED__
    #define __IMPlugin_INTERFACE_DEFINED__

/* interface IMPlugin */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMPlugin;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("5F366195-473F-4ad5-A5C2-428FE0C8E03E")
IMPlugin: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnMediaReceive(
        /* [in] */ LONGLONG _llCallbackUserData,
        /* [in] */ IUnknown * _pSender,
        /* [in] */ IMFrame * _pFrame,
        /* [out] */ IMFrame * *_ppFrameRes) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnMediaEnd(
        /* [in] */ LONGLONG _llCallbackUserData,
        /* [in] */ IUnknown * _pSender,
        /* [in] */ DWORD _dwFlags) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnMediaFlush(
        /* [in] */ LONGLONG _llCallbackUserData,
        /* [in] */ IUnknown * _pSender,
        /* [in] */ DWORD _dwFlags) = 0;
};

    #else /* C style interface */

typedef struct IMPluginVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMPlugin         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMPlugin *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMPlugin *This);

    DECLSPEC_XFGVIRT(IMPlugin, OnMediaReceive)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *OnMediaReceive)(IMPlugin             *This,
                                                                  /* [in] */ LONGLONG   _llCallbackUserData,
                                                                  /* [in] */ IUnknown  *_pSender,
                                                                  /* [in] */ IMFrame   *_pFrame,
                                                                  /* [out] */ IMFrame **_ppFrameRes);

    DECLSPEC_XFGVIRT(IMPlugin, OnMediaEnd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *OnMediaEnd)(IMPlugin            *This,
                                                              /* [in] */ LONGLONG  _llCallbackUserData,
                                                              /* [in] */ IUnknown *_pSender,
                                                              /* [in] */ DWORD     _dwFlags);

    DECLSPEC_XFGVIRT(IMPlugin, OnMediaFlush)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *OnMediaFlush)(IMPlugin            *This,
                                                                /* [in] */ LONGLONG  _llCallbackUserData,
                                                                /* [in] */ IUnknown *_pSender,
                                                                /* [in] */ DWORD     _dwFlags);

    END_INTERFACE
} IMPluginVtbl;

interface IMPlugin { CONST_VTBL struct IMPluginVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMPlugin_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMPlugin_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMPlugin_Release(This) ((This)->lpVtbl->Release(This))

            #define IMPlugin_OnMediaReceive(This, _llCallbackUserData, _pSender, _pFrame, _ppFrameRes) \
                ((This)->lpVtbl->OnMediaReceive(This, _llCallbackUserData, _pSender, _pFrame, _ppFrameRes))

            #define IMPlugin_OnMediaEnd(This, _llCallbackUserData, _pSender, _dwFlags) \
                ((This)->lpVtbl->OnMediaEnd(This, _llCallbackUserData, _pSender, _dwFlags))

            #define IMPlugin_OnMediaFlush(This, _llCallbackUserData, _pSender, _dwFlags) \
                ((This)->lpVtbl->OnMediaFlush(This, _llCallbackUserData, _pSender, _dwFlags))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMPlugin_INTERFACE_DEFINED__ */

#ifndef __IMElement_INTERFACE_DEFINED__
    #define __IMElement_INTERFACE_DEFINED__

/* interface IMElement */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMElement;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("082DA299-EEC4-4EF1-841E-3A280E7D0383")
IMElement: public IMAttributes
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementParentGet(
        /* [out] */ IMElement * *_ppParent) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementParentSet(
        /* [in] */ IMElement * _pParent) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementBoolSet(
        /* [in] */ BSTR   _bsAttributeName,
        /* [in] */ BOOL   _bValue,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementDoubleSet(
        /* [in] */ BSTR   _bsAttributeName,
        /* [in] */ double _dblValue,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementStringSet(
        /* [in] */ BSTR   _bsAttributeName,
        /* [in] */ BSTR   _bsValue,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementMultipleSet(
        /* [in] */ BSTR   _bsAttributesList,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementSet(
        /* [in] */ BSTR   _bsElementType,
        /* [in] */ BSTR   _bsXMLDescription,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementMediaSet(
        /* [in] */ IUnknown * _pExternOrRef,
        /* [in] */ BSTR   _bsPath,
        /* [in] */ BSTR   _bsParam,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementTypeGet(
        /* [out] */ BSTR * _pbsElementType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementGet(
        /* [out] */ BSTR * _pbsElementType,
        /* [out] */ BSTR * _pbsXMLDescription) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementReorder(
        /* [in] */ int _nAddIndex) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementInvoke(
        /* [in] */ BSTR   _bsCommand,
        /* [in] */ BSTR   _bsParam,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementDetach(
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementAbsolutePosGet(
        /* [out] */ double *_pdblXPos,
        /* [out] */ double *_pdblYPos,
        /* [out] */ double *_pdblWidth,
        /* [out] */ double *_pdblHeight) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementAbsolutePosSet(
        /* [in] */ double _dblXPos,
        /* [in] */ double _dblYPos,
        /* [in] */ double _dblWidth,
        /* [in] */ double _dblHeight) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementInfoGet(
        /* [in] */ BSTR _bsInfoType,
        /* [out] */ BSTR * _pbsDecription) = 0;
};

    #else /* C style interface */

typedef struct IMElementVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMElement        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMElement *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMElement *This);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesGetCount)(IMElement       *This,
                                                                      /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesGetByIndex)(IMElement        *This,
                                                                        /* [in] */ int    _nIndex,
                                                                        /* [out] */ BSTR *_pbsName,
                                                                        /* [out] */ BSTR *_pbsValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesRemove)(IMElement      *This,
                                                                    /* [in] */ BSTR _bsName);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesRemoveAll)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesRemoveAll)(IMElement *This);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesStringSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesStringSet)(IMElement      *This,
                                                                       /* [in] */ BSTR _bsName,
                                                                       /* [in] */ BSTR _bsValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesBoolSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesBoolSet)(IMElement      *This,
                                                                     /* [in] */ BSTR _bsName,
                                                                     /* [in] */ BOOL _bValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesIntSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesIntSet)(IMElement      *This,
                                                                    /* [in] */ BSTR _bsName,
                                                                    /* [in] */ int  _nValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesDoubleSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesDoubleSet)(IMElement        *This,
                                                                       /* [in] */ BSTR   _bsName,
                                                                       /* [in] */ double _dblValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesHave)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesHave)(IMElement        *This,
                                                                  /* [in] */ BSTR   _bsName,
                                                                  /* [out] */ BOOL *_pbHave,
                                                                  /* [out] */ BSTR *_pbsValueOrDefault);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesStringGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesStringGet)(IMElement        *This,
                                                                       /* [in] */ BSTR   _bsName,
                                                                       /* [out] */ BSTR *_pbsValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesIntGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesIntGet)(IMElement       *This,
                                                                    /* [in] */ BSTR  _bsName,
                                                                    /* [out] */ int *_pnValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesBoolGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesBoolGet)(IMElement        *This,
                                                                     /* [in] */ BSTR   _bsName,
                                                                     /* [out] */ BOOL *_pbValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesDoubleGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesDoubleGet)(IMElement          *This,
                                                                       /* [in] */ BSTR     _bsName,
                                                                       /* [out] */ double *_pdblValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesMultipleSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesMultipleSet)(IMElement              *This,
                                                                         /* [in] */ BSTR         _bsAttributesList,
                                                                         /* [in] */ eMUpdateType _eUpdateType);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesSave)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesSave)(IMElement        *This,
                                                                  /* [out] */ BSTR *_pbsAttributesList);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesClone)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesClone)(IMElement                 *This,
                                                                   /* [out] */ IMAttributes **_ppClone);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesSet)(IMElement               *This,
                                                                 /* [in] */ IMAttributes *_pAttributesList,
                                                                 /* [in] */ eMUpdateType  _eUpdateType);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesInfoGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesInfoGetCount)(IMElement       *This,
                                                                          /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesInfoGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesInfoGetByIndex)(IMElement        *This,
                                                                            /* [in] */ int    _nIndex,
                                                                            /* [out] */ BSTR *_pbsName);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesInfoGet)(IMElement            *This,
                                                                     /* [in] */ BSTR       _bsName,
                                                                     /* [in] */ eMInfoType _eType,
                                                                     /* [out] */ BSTR     *_pbsInfo);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesValuesInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesValuesInfoGet)(IMElement        *This,
                                                                           /* [in] */ BSTR   _bsName,
                                                                           /* [in] */ BSTR   _bsValue,
                                                                           /* [in] */ BSTR   _bsType,
                                                                           /* [out] */ BSTR *_pbsInfo);

    DECLSPEC_XFGVIRT(IMElement, ElementParentGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementParentGet)(IMElement              *This,
                                                                    /* [out] */ IMElement **_ppParent);

    DECLSPEC_XFGVIRT(IMElement, ElementParentSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementParentSet)(IMElement            *This,
                                                                    /* [in] */ IMElement *_pParent);

    DECLSPEC_XFGVIRT(IMElement, ElementBoolSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementBoolSet)(IMElement        *This,
                                                                  /* [in] */ BSTR   _bsAttributeName,
                                                                  /* [in] */ BOOL   _bValue,
                                                                  /* [in] */ double _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMElement, ElementDoubleSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementDoubleSet)(IMElement        *This,
                                                                    /* [in] */ BSTR   _bsAttributeName,
                                                                    /* [in] */ double _dblValue,
                                                                    /* [in] */ double _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMElement, ElementStringSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementStringSet)(IMElement        *This,
                                                                    /* [in] */ BSTR   _bsAttributeName,
                                                                    /* [in] */ BSTR   _bsValue,
                                                                    /* [in] */ double _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMElement, ElementMultipleSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementMultipleSet)(IMElement        *This,
                                                                      /* [in] */ BSTR   _bsAttributesList,
                                                                      /* [in] */ double _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMElement, ElementSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementSet)(IMElement        *This,
                                                              /* [in] */ BSTR   _bsElementType,
                                                              /* [in] */ BSTR   _bsXMLDescription,
                                                              /* [in] */ double _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMElement, ElementMediaSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementMediaSet)(IMElement           *This,
                                                                   /* [in] */ IUnknown *_pExternOrRef,
                                                                   /* [in] */ BSTR      _bsPath,
                                                                   /* [in] */ BSTR      _bsParam,
                                                                   /* [in] */ double    _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMElement, ElementTypeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementTypeGet)(IMElement        *This,
                                                                  /* [out] */ BSTR *_pbsElementType);

    DECLSPEC_XFGVIRT(IMElement, ElementGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementGet)(IMElement        *This,
                                                              /* [out] */ BSTR *_pbsElementType,
                                                              /* [out] */ BSTR *_pbsXMLDescription);

    DECLSPEC_XFGVIRT(IMElement, ElementReorder)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementReorder)(IMElement     *This,
                                                                  /* [in] */ int _nAddIndex);

    DECLSPEC_XFGVIRT(IMElement, ElementInvoke)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementInvoke)(IMElement        *This,
                                                                 /* [in] */ BSTR   _bsCommand,
                                                                 /* [in] */ BSTR   _bsParam,
                                                                 /* [in] */ double _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMElement, ElementDetach)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementDetach)(IMElement        *This,
                                                                 /* [in] */ double _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMElement, ElementAbsolutePosGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementAbsolutePosGet)(IMElement          *This,
                                                                         /* [out] */ double *_pdblXPos,
                                                                         /* [out] */ double *_pdblYPos,
                                                                         /* [out] */ double *_pdblWidth,
                                                                         /* [out] */ double *_pdblHeight);

    DECLSPEC_XFGVIRT(IMElement, ElementAbsolutePosSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementAbsolutePosSet)(IMElement        *This,
                                                                         /* [in] */ double _dblXPos,
                                                                         /* [in] */ double _dblYPos,
                                                                         /* [in] */ double _dblWidth,
                                                                         /* [in] */ double _dblHeight);

    DECLSPEC_XFGVIRT(IMElement, ElementInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementInfoGet)(IMElement        *This,
                                                                  /* [in] */ BSTR   _bsInfoType,
                                                                  /* [out] */ BSTR *_pbsDecription);

    END_INTERFACE
} IMElementVtbl;

interface IMElement { CONST_VTBL struct IMElementVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMElement_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMElement_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMElement_Release(This) ((This)->lpVtbl->Release(This))

            #define IMElement_AttributesGetCount(This, _pnCount) ((This)->lpVtbl->AttributesGetCount(This, _pnCount))

            #define IMElement_AttributesGetByIndex(This, _nIndex, _pbsName, _pbsValue) \
                ((This)->lpVtbl->AttributesGetByIndex(This, _nIndex, _pbsName, _pbsValue))

            #define IMElement_AttributesRemove(This, _bsName) ((This)->lpVtbl->AttributesRemove(This, _bsName))

            #define IMElement_AttributesRemoveAll(This) ((This)->lpVtbl->AttributesRemoveAll(This))

            #define IMElement_AttributesStringSet(This, _bsName, _bsValue) \
                ((This)->lpVtbl->AttributesStringSet(This, _bsName, _bsValue))

            #define IMElement_AttributesBoolSet(This, _bsName, _bValue) \
                ((This)->lpVtbl->AttributesBoolSet(This, _bsName, _bValue))

            #define IMElement_AttributesIntSet(This, _bsName, _nValue) \
                ((This)->lpVtbl->AttributesIntSet(This, _bsName, _nValue))

            #define IMElement_AttributesDoubleSet(This, _bsName, _dblValue) \
                ((This)->lpVtbl->AttributesDoubleSet(This, _bsName, _dblValue))

            #define IMElement_AttributesHave(This, _bsName, _pbHave, _pbsValueOrDefault) \
                ((This)->lpVtbl->AttributesHave(This, _bsName, _pbHave, _pbsValueOrDefault))

            #define IMElement_AttributesStringGet(This, _bsName, _pbsValue) \
                ((This)->lpVtbl->AttributesStringGet(This, _bsName, _pbsValue))

            #define IMElement_AttributesIntGet(This, _bsName, _pnValue) \
                ((This)->lpVtbl->AttributesIntGet(This, _bsName, _pnValue))

            #define IMElement_AttributesBoolGet(This, _bsName, _pbValue) \
                ((This)->lpVtbl->AttributesBoolGet(This, _bsName, _pbValue))

            #define IMElement_AttributesDoubleGet(This, _bsName, _pdblValue) \
                ((This)->lpVtbl->AttributesDoubleGet(This, _bsName, _pdblValue))

            #define IMElement_AttributesMultipleSet(This, _bsAttributesList, _eUpdateType) \
                ((This)->lpVtbl->AttributesMultipleSet(This, _bsAttributesList, _eUpdateType))

            #define IMElement_AttributesSave(This, _pbsAttributesList) \
                ((This)->lpVtbl->AttributesSave(This, _pbsAttributesList))

            #define IMElement_AttributesClone(This, _ppClone) ((This)->lpVtbl->AttributesClone(This, _ppClone))

            #define IMElement_AttributesSet(This, _pAttributesList, _eUpdateType) \
                ((This)->lpVtbl->AttributesSet(This, _pAttributesList, _eUpdateType))

            #define IMElement_AttributesInfoGetCount(This, _pnCount) \
                ((This)->lpVtbl->AttributesInfoGetCount(This, _pnCount))

            #define IMElement_AttributesInfoGetByIndex(This, _nIndex, _pbsName) \
                ((This)->lpVtbl->AttributesInfoGetByIndex(This, _nIndex, _pbsName))

            #define IMElement_AttributesInfoGet(This, _bsName, _eType, _pbsInfo) \
                ((This)->lpVtbl->AttributesInfoGet(This, _bsName, _eType, _pbsInfo))

            #define IMElement_AttributesValuesInfoGet(This, _bsName, _bsValue, _bsType, _pbsInfo) \
                ((This)->lpVtbl->AttributesValuesInfoGet(This, _bsName, _bsValue, _bsType, _pbsInfo))

            #define IMElement_ElementParentGet(This, _ppParent) ((This)->lpVtbl->ElementParentGet(This, _ppParent))

            #define IMElement_ElementParentSet(This, _pParent) ((This)->lpVtbl->ElementParentSet(This, _pParent))

            #define IMElement_ElementBoolSet(This, _bsAttributeName, _bValue, _dblTimeForChange) \
                ((This)->lpVtbl->ElementBoolSet(This, _bsAttributeName, _bValue, _dblTimeForChange))

            #define IMElement_ElementDoubleSet(This, _bsAttributeName, _dblValue, _dblTimeForChange) \
                ((This)->lpVtbl->ElementDoubleSet(This, _bsAttributeName, _dblValue, _dblTimeForChange))

            #define IMElement_ElementStringSet(This, _bsAttributeName, _bsValue, _dblTimeForChange) \
                ((This)->lpVtbl->ElementStringSet(This, _bsAttributeName, _bsValue, _dblTimeForChange))

            #define IMElement_ElementMultipleSet(This, _bsAttributesList, _dblTimeForChange) \
                ((This)->lpVtbl->ElementMultipleSet(This, _bsAttributesList, _dblTimeForChange))

            #define IMElement_ElementSet(This, _bsElementType, _bsXMLDescription, _dblTimeForChange) \
                ((This)->lpVtbl->ElementSet(This, _bsElementType, _bsXMLDescription, _dblTimeForChange))

            #define IMElement_ElementMediaSet(This, _pExternOrRef, _bsPath, _bsParam, _dblTimeForChange) \
                ((This)->lpVtbl->ElementMediaSet(This, _pExternOrRef, _bsPath, _bsParam, _dblTimeForChange))

            #define IMElement_ElementTypeGet(This, _pbsElementType) \
                ((This)->lpVtbl->ElementTypeGet(This, _pbsElementType))

            #define IMElement_ElementGet(This, _pbsElementType, _pbsXMLDescription) \
                ((This)->lpVtbl->ElementGet(This, _pbsElementType, _pbsXMLDescription))

            #define IMElement_ElementReorder(This, _nAddIndex) ((This)->lpVtbl->ElementReorder(This, _nAddIndex))

            #define IMElement_ElementInvoke(This, _bsCommand, _bsParam, _dblTimeForChange) \
                ((This)->lpVtbl->ElementInvoke(This, _bsCommand, _bsParam, _dblTimeForChange))

            #define IMElement_ElementDetach(This, _dblTimeForChange) \
                ((This)->lpVtbl->ElementDetach(This, _dblTimeForChange))

            #define IMElement_ElementAbsolutePosGet(This, _pdblXPos, _pdblYPos, _pdblWidth, _pdblHeight) \
                ((This)->lpVtbl->ElementAbsolutePosGet(This, _pdblXPos, _pdblYPos, _pdblWidth, _pdblHeight))

            #define IMElement_ElementAbsolutePosSet(This, _dblXPos, _dblYPos, _dblWidth, _dblHeight) \
                ((This)->lpVtbl->ElementAbsolutePosSet(This, _dblXPos, _dblYPos, _dblWidth, _dblHeight))

            #define IMElement_ElementInfoGet(This, _bsInfoType, _pbsDecription) \
                ((This)->lpVtbl->ElementInfoGet(This, _bsInfoType, _pbsDecription))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMElement_INTERFACE_DEFINED__ */

#ifndef __IMElements_INTERFACE_DEFINED__
    #define __IMElements_INTERFACE_DEFINED__

/* interface IMElements */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMElements;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("082DA298-EEC4-4EF1-841E-3A280E7D0383")
IMElements: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementsGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementsGetByIndex(
        /* [in] */ int          _nIndex,
        /* [out] */ IMElement **_ppChildElement) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementsGetByID(
        /* [in] */ BSTR _bsElementID,
        /* [out] */ IMElement * *_ppChildElement) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementsAdd(
        /* [in] */ BSTR _bsNewElementID,
        /* [in] */ BSTR _bsElementType,
        /* [in] */ BSTR _bsElementProps,
        /* [out] */ IMElement * *_ppChildElement,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ElementsMediaAdd(
        /* [in] */ BSTR _bsNewElementID,
        /* [in] */ IUnknown * _pExternOrRef,
        /* [in] */ BSTR _bsPath,
        /* [in] */ BSTR _bsParam,
        /* [out] */ IMElement * *_ppChildElement,
        /* [in] */ double _dblTimeForChange) = 0;
};

    #else /* C style interface */

typedef struct IMElementsVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMElements       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMElements *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMElements *This);

    DECLSPEC_XFGVIRT(IMElements, ElementsGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementsGetCount)(IMElements      *This,
                                                                    /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMElements, ElementsGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementsGetByIndex)(IMElements             *This,
                                                                      /* [in] */ int          _nIndex,
                                                                      /* [out] */ IMElement **_ppChildElement);

    DECLSPEC_XFGVIRT(IMElements, ElementsGetByID)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementsGetByID)(IMElements             *This,
                                                                   /* [in] */ BSTR         _bsElementID,
                                                                   /* [out] */ IMElement **_ppChildElement);

    DECLSPEC_XFGVIRT(IMElements, ElementsAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementsAdd)(IMElements             *This,
                                                               /* [in] */ BSTR         _bsNewElementID,
                                                               /* [in] */ BSTR         _bsElementType,
                                                               /* [in] */ BSTR         _bsElementProps,
                                                               /* [out] */ IMElement **_ppChildElement,
                                                               /* [in] */ double       _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMElements, ElementsMediaAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ElementsMediaAdd)(IMElements             *This,
                                                                    /* [in] */ BSTR         _bsNewElementID,
                                                                    /* [in] */ IUnknown    *_pExternOrRef,
                                                                    /* [in] */ BSTR         _bsPath,
                                                                    /* [in] */ BSTR         _bsParam,
                                                                    /* [out] */ IMElement **_ppChildElement,
                                                                    /* [in] */ double       _dblTimeForChange);

    END_INTERFACE
} IMElementsVtbl;

interface IMElements { CONST_VTBL struct IMElementsVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMElements_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMElements_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMElements_Release(This) ((This)->lpVtbl->Release(This))

            #define IMElements_ElementsGetCount(This, _pnCount) ((This)->lpVtbl->ElementsGetCount(This, _pnCount))

            #define IMElements_ElementsGetByIndex(This, _nIndex, _ppChildElement) \
                ((This)->lpVtbl->ElementsGetByIndex(This, _nIndex, _ppChildElement))

            #define IMElements_ElementsGetByID(This, _bsElementID, _ppChildElement) \
                ((This)->lpVtbl->ElementsGetByID(This, _bsElementID, _ppChildElement))

            #define IMElements_ElementsAdd(This,              \
                                           _bsNewElementID,   \
                                           _bsElementType,    \
                                           _bsElementProps,   \
                                           _ppChildElement,   \
                                           _dblTimeForChange) \
                ((This)->lpVtbl->ElementsAdd(This,            \
                                             _bsNewElementID, \
                                             _bsElementType,  \
                                             _bsElementProps, \
                                             _ppChildElement, \
                                             _dblTimeForChange))

            #define IMElements_ElementsMediaAdd(This,              \
                                                _bsNewElementID,   \
                                                _pExternOrRef,     \
                                                _bsPath,           \
                                                _bsParam,          \
                                                _ppChildElement,   \
                                                _dblTimeForChange) \
                ((This)->lpVtbl->ElementsMediaAdd(This,            \
                                                  _bsNewElementID, \
                                                  _pExternOrRef,   \
                                                  _bsPath,         \
                                                  _bsParam,        \
                                                  _ppChildElement, \
                                                  _dblTimeForChange))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMElements_INTERFACE_DEFINED__ */

#ifndef __IMScenes_INTERFACE_DEFINED__
    #define __IMScenes_INTERFACE_DEFINED__

/* interface IMScenes */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMScenes;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("082DA302-EEC4-4EF1-841E-3A280E7D0383")
IMScenes: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScenesGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScenesGetByIndex(
        /* [in] */ int           _nIndex,
        /* [out] */ BSTR        *_pbsSceneID,
        /* [out] */ IMElements **_ppScene) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScenesGet(
        /* [in] */ BSTR _bsSceneID,
        /* [out] */ IMElements * *_ppScene) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScenesAdd(
        /* [in] */ BSTR _bsXMLDescOrPathName,
        /* [out][in] */ BSTR * _pbsSceneID,
        /* [out] */ IMElements * *_ppScene) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScenesRemove(
        /* [in] */ BSTR _bsSceneID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScenesActiveGet(
        /* [out] */ BSTR * _pbsSceneID,
        /* [out] */ int         *_pnIndex,
        /* [out] */ IMElements **_ppScene) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScenesActiveSet(
        /* [in] */ BSTR _bsSceneID,
        /* [in] */ BSTR _bsParameters) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScenesElementGetByPos(
        /* [in] */ double       _dblPosX,
        /* [in] */ double       _dblPosY,
        /* [in] */ BOOL         _bHiddenReturn,
        /* [out] */ IMElement **_ppElement) = 0;
};

    #else /* C style interface */

typedef struct IMScenesVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMScenes         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMScenes *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMScenes *This);

    DECLSPEC_XFGVIRT(IMScenes, ScenesGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ScenesGetCount)(IMScenes        *This,
                                                                  /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMScenes, ScenesGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ScenesGetByIndex)(IMScenes                *This,
                                                                    /* [in] */ int           _nIndex,
                                                                    /* [out] */ BSTR        *_pbsSceneID,
                                                                    /* [out] */ IMElements **_ppScene);

    DECLSPEC_XFGVIRT(IMScenes, ScenesGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ScenesGet)(IMScenes                *This,
                                                             /* [in] */ BSTR          _bsSceneID,
                                                             /* [out] */ IMElements **_ppScene);

    DECLSPEC_XFGVIRT(IMScenes, ScenesAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ScenesAdd)(IMScenes                *This,
                                                             /* [in] */ BSTR          _bsXMLDescOrPathName,
                                                             /* [out][in] */ BSTR    *_pbsSceneID,
                                                             /* [out] */ IMElements **_ppScene);

    DECLSPEC_XFGVIRT(IMScenes, ScenesRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ScenesRemove)(IMScenes       *This,
                                                                /* [in] */ BSTR _bsSceneID);

    DECLSPEC_XFGVIRT(IMScenes, ScenesActiveGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ScenesActiveGet)(IMScenes                *This,
                                                                   /* [out] */ BSTR        *_pbsSceneID,
                                                                   /* [out] */ int         *_pnIndex,
                                                                   /* [out] */ IMElements **_ppScene);

    DECLSPEC_XFGVIRT(IMScenes, ScenesActiveSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ScenesActiveSet)(IMScenes       *This,
                                                                   /* [in] */ BSTR _bsSceneID,
                                                                   /* [in] */ BSTR _bsParameters);

    DECLSPEC_XFGVIRT(IMScenes, ScenesElementGetByPos)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ScenesElementGetByPos)(IMScenes               *This,
                                                                         /* [in] */ double       _dblPosX,
                                                                         /* [in] */ double       _dblPosY,
                                                                         /* [in] */ BOOL         _bHiddenReturn,
                                                                         /* [out] */ IMElement **_ppElement);

    END_INTERFACE
} IMScenesVtbl;

interface IMScenes { CONST_VTBL struct IMScenesVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMScenes_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMScenes_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMScenes_Release(This) ((This)->lpVtbl->Release(This))

            #define IMScenes_ScenesGetCount(This, _pnCount) ((This)->lpVtbl->ScenesGetCount(This, _pnCount))

            #define IMScenes_ScenesGetByIndex(This, _nIndex, _pbsSceneID, _ppScene) \
                ((This)->lpVtbl->ScenesGetByIndex(This, _nIndex, _pbsSceneID, _ppScene))

            #define IMScenes_ScenesGet(This, _bsSceneID, _ppScene) \
                ((This)->lpVtbl->ScenesGet(This, _bsSceneID, _ppScene))

            #define IMScenes_ScenesAdd(This, _bsXMLDescOrPathName, _pbsSceneID, _ppScene) \
                ((This)->lpVtbl->ScenesAdd(This, _bsXMLDescOrPathName, _pbsSceneID, _ppScene))

            #define IMScenes_ScenesRemove(This, _bsSceneID) ((This)->lpVtbl->ScenesRemove(This, _bsSceneID))

            #define IMScenes_ScenesActiveGet(This, _pbsSceneID, _pnIndex, _ppScene) \
                ((This)->lpVtbl->ScenesActiveGet(This, _pbsSceneID, _pnIndex, _ppScene))

            #define IMScenes_ScenesActiveSet(This, _bsSceneID, _bsParameters) \
                ((This)->lpVtbl->ScenesActiveSet(This, _bsSceneID, _bsParameters))

            #define IMScenes_ScenesElementGetByPos(This, _dblPosX, _dblPosY, _bHiddenReturn, _ppElement) \
                ((This)->lpVtbl->ScenesElementGetByPos(This, _dblPosX, _dblPosY, _bHiddenReturn, _ppElement))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMScenes_INTERFACE_DEFINED__ */

#ifndef __IMStreams_INTERFACE_DEFINED__
    #define __IMStreams_INTERFACE_DEFINED__

/* interface IMStreams */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMStreams;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("69429619-9BC2-45D9-AFE9-F42F18C38CBF")
IMStreams: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamsGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamsGetByIndex(
        /* [in] */ int       _nIndex,
        /* [out] */ BSTR    *_pbsStreamID,
        /* [out] */ IMItem **_ppStream) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamsGet(
        /* [in] */ BSTR      _bsStreamID,
        /* [out] */ int     *_pnIndex,
        /* [out] */ IMItem **_ppStream) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamsAdd(
        /* [in] */ BSTR _bsStreamID,
        /* [in] */ IUnknown * _pExternOrRef,
        /* [in] */ BSTR _bsPath,
        /* [in] */ BSTR _bsParam,
        /* [out] */ IMItem * *_ppItem,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamsRemove(
        /* [in] */ IMItem * _pStream,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamsRemoveByIndex(
        /* [in] */ int    _nIndex,
        /* [in] */ int    _nExtraRemove,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamsReorder(
        /* [in] */ IMItem * _pStream,
        /* [in] */ int    _nIndexAdd,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamsBackgroundSet(
        /* [in] */ IUnknown * _pExternOrRef,
        /* [in] */ BSTR _bsPath,
        /* [in] */ BSTR _bsParam,
        /* [out] */ IMItem * *_ppItemsItem,
        /* [in] */ double _dblTimeForChange) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamsBackgroundGet(
        /* [out] */ BSTR * _pbsPath,
        /* [out] */ IMItem * *_ppItemsItem) = 0;
};

    #else /* C style interface */

typedef struct IMStreamsVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMStreams        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMStreams *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMStreams *This);

    DECLSPEC_XFGVIRT(IMStreams, StreamsGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamsGetCount)(IMStreams       *This,
                                                                   /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMStreams, StreamsGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamsGetByIndex)(IMStreams           *This,
                                                                     /* [in] */ int       _nIndex,
                                                                     /* [out] */ BSTR    *_pbsStreamID,
                                                                     /* [out] */ IMItem **_ppStream);

    DECLSPEC_XFGVIRT(IMStreams, StreamsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamsGet)(IMStreams           *This,
                                                              /* [in] */ BSTR      _bsStreamID,
                                                              /* [out] */ int     *_pnIndex,
                                                              /* [out] */ IMItem **_ppStream);

    DECLSPEC_XFGVIRT(IMStreams, StreamsAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamsAdd)(IMStreams           *This,
                                                              /* [in] */ BSTR      _bsStreamID,
                                                              /* [in] */ IUnknown *_pExternOrRef,
                                                              /* [in] */ BSTR      _bsPath,
                                                              /* [in] */ BSTR      _bsParam,
                                                              /* [out] */ IMItem **_ppItem,
                                                              /* [in] */ double    _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMStreams, StreamsRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamsRemove)(IMStreams         *This,
                                                                 /* [in] */ IMItem *_pStream,
                                                                 /* [in] */ double  _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMStreams, StreamsRemoveByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamsRemoveByIndex)(IMStreams        *This,
                                                                        /* [in] */ int    _nIndex,
                                                                        /* [in] */ int    _nExtraRemove,
                                                                        /* [in] */ double _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMStreams, StreamsReorder)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamsReorder)(IMStreams         *This,
                                                                  /* [in] */ IMItem *_pStream,
                                                                  /* [in] */ int     _nIndexAdd,
                                                                  /* [in] */ double  _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMStreams, StreamsBackgroundSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamsBackgroundSet)(IMStreams           *This,
                                                                        /* [in] */ IUnknown *_pExternOrRef,
                                                                        /* [in] */ BSTR      _bsPath,
                                                                        /* [in] */ BSTR      _bsParam,
                                                                        /* [out] */ IMItem **_ppItemsItem,
                                                                        /* [in] */ double    _dblTimeForChange);

    DECLSPEC_XFGVIRT(IMStreams, StreamsBackgroundGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamsBackgroundGet)(IMStreams           *This,
                                                                        /* [out] */ BSTR    *_pbsPath,
                                                                        /* [out] */ IMItem **_ppItemsItem);

    END_INTERFACE
} IMStreamsVtbl;

interface IMStreams { CONST_VTBL struct IMStreamsVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMStreams_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMStreams_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMStreams_Release(This) ((This)->lpVtbl->Release(This))

            #define IMStreams_StreamsGetCount(This, _pnCount) ((This)->lpVtbl->StreamsGetCount(This, _pnCount))

            #define IMStreams_StreamsGetByIndex(This, _nIndex, _pbsStreamID, _ppStream) \
                ((This)->lpVtbl->StreamsGetByIndex(This, _nIndex, _pbsStreamID, _ppStream))

            #define IMStreams_StreamsGet(This, _bsStreamID, _pnIndex, _ppStream) \
                ((This)->lpVtbl->StreamsGet(This, _bsStreamID, _pnIndex, _ppStream))

            #define IMStreams_StreamsAdd(This,              \
                                         _bsStreamID,       \
                                         _pExternOrRef,     \
                                         _bsPath,           \
                                         _bsParam,          \
                                         _ppItem,           \
                                         _dblTimeForChange) \
                ((This)->lpVtbl->StreamsAdd(This,           \
                                            _bsStreamID,    \
                                            _pExternOrRef,  \
                                            _bsPath,        \
                                            _bsParam,       \
                                            _ppItem,        \
                                            _dblTimeForChange))

            #define IMStreams_StreamsRemove(This, _pStream, _dblTimeForChange) \
                ((This)->lpVtbl->StreamsRemove(This, _pStream, _dblTimeForChange))

            #define IMStreams_StreamsRemoveByIndex(This, _nIndex, _nExtraRemove, _dblTimeForChange) \
                ((This)->lpVtbl->StreamsRemoveByIndex(This, _nIndex, _nExtraRemove, _dblTimeForChange))

            #define IMStreams_StreamsReorder(This, _pStream, _nIndexAdd, _dblTimeForChange) \
                ((This)->lpVtbl->StreamsReorder(This, _pStream, _nIndexAdd, _dblTimeForChange))

            #define IMStreams_StreamsBackgroundSet(This,              \
                                                   _pExternOrRef,     \
                                                   _bsPath,           \
                                                   _bsParam,          \
                                                   _ppItemsItem,      \
                                                   _dblTimeForChange) \
                ((This)->lpVtbl->StreamsBackgroundSet(This,           \
                                                      _pExternOrRef,  \
                                                      _bsPath,        \
                                                      _bsParam,       \
                                                      _ppItemsItem,   \
                                                      _dblTimeForChange))

            #define IMStreams_StreamsBackgroundGet(This, _pbsPath, _ppItemsItem) \
                ((This)->lpVtbl->StreamsBackgroundGet(This, _pbsPath, _ppItemsItem))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMStreams_INTERFACE_DEFINED__ */

#ifndef __IMWriter_INTERFACE_DEFINED__
    #define __IMWriter_INTERFACE_DEFINED__

/* interface IMWriter */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMWriter;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("082DA400-EEC4-4EF1-841E-3A280E7D0383")
IMWriter: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriterNameSet(
        /* [in] */ BSTR _bsName,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriterNameGet(
        /* [out] */ BSTR * _pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriterSkip(
        /* [in] */ double _dblSkipTime) = 0;
};

    #else /* C style interface */

typedef struct IMWriterVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMWriter         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMWriter *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMWriter *This);

    DECLSPEC_XFGVIRT(IMWriter, WriterNameSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *WriterNameSet)(IMWriter       *This,
                                                                 /* [in] */ BSTR _bsName,
                                                                 /* [in] */ BSTR _bsProps);

    DECLSPEC_XFGVIRT(IMWriter, WriterNameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *WriterNameGet)(IMWriter         *This,
                                                                 /* [out] */ BSTR *_pbsName);

    DECLSPEC_XFGVIRT(IMWriter, WriterSkip)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *WriterSkip)(IMWriter         *This,
                                                              /* [in] */ double _dblSkipTime);

    END_INTERFACE
} IMWriterVtbl;

interface IMWriter { CONST_VTBL struct IMWriterVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMWriter_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMWriter_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMWriter_Release(This) ((This)->lpVtbl->Release(This))

            #define IMWriter_WriterNameSet(This, _bsName, _bsProps) \
                ((This)->lpVtbl->WriterNameSet(This, _bsName, _bsProps))

            #define IMWriter_WriterNameGet(This, _pbsName) ((This)->lpVtbl->WriterNameGet(This, _pbsName))

            #define IMWriter_WriterSkip(This, _dblSkipTime) ((This)->lpVtbl->WriterSkip(This, _dblSkipTime))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMWriter_INTERFACE_DEFINED__ */

#ifndef __IMDeckControl_INTERFACE_DEFINED__
    #define __IMDeckControl_INTERFACE_DEFINED__

/* interface IMDeckControl */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMDeckControl;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("7F366131-473F-4ad5-A5C2-428FE0C8E03E")
IMDeckControl: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckOpen(
        /* [in] */ BOOL _bTimecodeIsDropFrame,
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckClose(
        /* [in] */ BOOL _bStandbyOn) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckGetCurrentState(
        /* [out] */ eMBMDDeckControlMode * _pMode,
        /* [out] */ eMBMDDeckControlVTRControlState * _pVtrControlState,
        /* [out] */ long *_pFlags) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckSetStandby(
        /* [in] */ BOOL _bStandbyOn) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckSendCommand(
        /* [in] */ long                    _lInBufferSize,
        /* [in] */ LONGLONG                _pInBuffer,
        /* [out] */ long                  *_pOutDataSize,
        /* [in] */ LONGLONG                _ppOutBuffer,
        /* [in] */ long                    outBufferSize,
        /* [out] */ eMBMDDeckControlError *_pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckSendCommand_I(
        /* [in] */ long                      _lInBufferSize,
        /* [size_is][in] */ BYTE            *_pInBuffer,
        /* [out] */ long                    *_pOutDataSize,
        /* [size_is][size_is][out] */ BYTE **_ppOutBuffer,
        /* [in] */ long                      outBufferSize,
        /* [out] */ eMBMDDeckControlError   *_pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckPlay(
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckStop(
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckTogglePlayStop(
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckEject(
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckGoToTimecode(
        /* [in] */ M_TIMECODE _timecode,
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckFastForward(
        /* [in] */ BOOL _bViewTape,
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckRewind(
        /* [in] */ BOOL _bViewTape,
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckStepForward(
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckStepBack(
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckJog(
        /* [in] */ double                  _dblRate,
        /* [out] */ eMBMDDeckControlError *_pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckShuttle(
        /* [in] */ double                  _dblRate,
        /* [out] */ eMBMDDeckControlError *_pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckGetTimecodeString(
        /* [out] */ BSTR * _pCurrentTimeCode,
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckGetTimecode(
        /* [out] */ M_TIMECODE * _pCurrentTimeCode,
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckSetPreroll(
        /* [in] */ long _lPrerollSeconds) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckGetPreroll(
        /* [out] */ long *_pPrerollSeconds) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckSetCaptureOffset(
        /* [in] */ long _lCaptureOffsetFields) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckGetCaptureOffset(
        /* [out] */ long *_pCaptureOffsetFields) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckSetExportOffset(
        /* [in] */ long _lExportOffsetFields) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckGetExportOffset(
        /* [out] */ long *_pExportOffsetFields) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckGetManualExportOffset(
        /* [out] */ long *_pDeckManualExportOffsetFields) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckStartExport(
        /* [in] */ long                    _lInTimecode,
        /* [in] */ long                    _lOutTimecode,
        /* [in] */ long                    _lExportModeOps,
        /* [out] */ eMBMDDeckControlError *_pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckStartCapture(
        /* [in] */ BOOL                    _bUseVITC,
        /* [in] */ long                    _lInTimecode,
        /* [in] */ long                    _lOutTimecode,
        /* [out] */ eMBMDDeckControlError *_pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckGetDeviceID(
        /* [out] */ long                  *_pDeviceId,
        /* [out] */ eMBMDDeckControlError *_pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckAbort(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckCrashRecordStart(
        /* [out] */ eMBMDDeckControlError * _pError) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeckCrashRecordStop(
        /* [out] */ eMBMDDeckControlError * _pError) = 0;
};

    #else /* C style interface */

typedef struct IMDeckControlVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMDeckControl    *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMDeckControl *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMDeckControl *This);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckOpen)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckOpen)(IMDeckControl                     *This,
                                                            /* [in] */ BOOL                    _bTimecodeIsDropFrame,
                                                            /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckClose)(IMDeckControl  *This,
                                                             /* [in] */ BOOL _bStandbyOn);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckGetCurrentState)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckGetCurrentState)(
        IMDeckControl                               *This,
        /* [out] */ eMBMDDeckControlMode            *_pMode,
        /* [out] */ eMBMDDeckControlVTRControlState *_pVtrControlState,
        /* [out] */ long                            *_pFlags);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckSetStandby)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckSetStandby)(IMDeckControl  *This,
                                                                  /* [in] */ BOOL _bStandbyOn);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckSendCommand)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckSendCommand)(IMDeckControl                     *This,
                                                                   /* [in] */ long                    _lInBufferSize,
                                                                   /* [in] */ LONGLONG                _pInBuffer,
                                                                   /* [out] */ long                  *_pOutDataSize,
                                                                   /* [in] */ LONGLONG                _ppOutBuffer,
                                                                   /* [in] */ long                    outBufferSize,
                                                                   /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckSendCommand_I)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckSendCommand_I)(IMDeckControl            *This,
                                                                     /* [in] */ long           _lInBufferSize,
                                                                     /* [size_is][in] */ BYTE *_pInBuffer,
                                                                     /* [out] */ long         *_pOutDataSize,
                                                                     /* [size_is][size_is][out] */ BYTE **_ppOutBuffer,
                                                                     /* [in] */ long                      outBufferSize,
                                                                     /* [out] */ eMBMDDeckControlError   *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckPlay)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckPlay)(IMDeckControl                     *This,
                                                            /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckStop)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckStop)(IMDeckControl                     *This,
                                                            /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckTogglePlayStop)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckTogglePlayStop)(IMDeckControl                     *This,
                                                                      /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckEject)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckEject)(IMDeckControl                     *This,
                                                             /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckGoToTimecode)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckGoToTimecode)(IMDeckControl                     *This,
                                                                    /* [in] */ M_TIMECODE              _timecode,
                                                                    /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckFastForward)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckFastForward)(IMDeckControl                     *This,
                                                                   /* [in] */ BOOL                    _bViewTape,
                                                                   /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckRewind)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckRewind)(IMDeckControl                     *This,
                                                              /* [in] */ BOOL                    _bViewTape,
                                                              /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckStepForward)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckStepForward)(IMDeckControl                     *This,
                                                                   /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckStepBack)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckStepBack)(IMDeckControl                     *This,
                                                                /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckJog)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckJog)(IMDeckControl                     *This,
                                                           /* [in] */ double                  _dblRate,
                                                           /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckShuttle)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckShuttle)(IMDeckControl                     *This,
                                                               /* [in] */ double                  _dblRate,
                                                               /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckGetTimecodeString)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckGetTimecodeString)(IMDeckControl    *This,
                                                                         /* [out] */ BSTR *_pCurrentTimeCode,
                                                                         /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckGetTimecode)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckGetTimecode)(IMDeckControl                     *This,
                                                                   /* [out] */ M_TIMECODE            *_pCurrentTimeCode,
                                                                   /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckSetPreroll)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckSetPreroll)(IMDeckControl  *This,
                                                                  /* [in] */ long _lPrerollSeconds);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckGetPreroll)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckGetPreroll)(IMDeckControl    *This,
                                                                  /* [out] */ long *_pPrerollSeconds);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckSetCaptureOffset)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckSetCaptureOffset)(IMDeckControl  *This,
                                                                        /* [in] */ long _lCaptureOffsetFields);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckGetCaptureOffset)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckGetCaptureOffset)(IMDeckControl    *This,
                                                                        /* [out] */ long *_pCaptureOffsetFields);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckSetExportOffset)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckSetExportOffset)(IMDeckControl  *This,
                                                                       /* [in] */ long _lExportOffsetFields);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckGetExportOffset)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckGetExportOffset)(IMDeckControl    *This,
                                                                       /* [out] */ long *_pExportOffsetFields);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckGetManualExportOffset)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckGetManualExportOffset)(
        IMDeckControl    *This,
        /* [out] */ long *_pDeckManualExportOffsetFields);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckStartExport)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckStartExport)(IMDeckControl                     *This,
                                                                   /* [in] */ long                    _lInTimecode,
                                                                   /* [in] */ long                    _lOutTimecode,
                                                                   /* [in] */ long                    _lExportModeOps,
                                                                   /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckStartCapture)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckStartCapture)(IMDeckControl                     *This,
                                                                    /* [in] */ BOOL                    _bUseVITC,
                                                                    /* [in] */ long                    _lInTimecode,
                                                                    /* [in] */ long                    _lOutTimecode,
                                                                    /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckGetDeviceID)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckGetDeviceID)(IMDeckControl                     *This,
                                                                   /* [out] */ long                  *_pDeviceId,
                                                                   /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckAbort)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckAbort)(IMDeckControl *This);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckCrashRecordStart)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckCrashRecordStart)(IMDeckControl                     *This,
                                                                        /* [out] */ eMBMDDeckControlError *_pError);

    DECLSPEC_XFGVIRT(IMDeckControl, DeckCrashRecordStop)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeckCrashRecordStop)(IMDeckControl                     *This,
                                                                       /* [out] */ eMBMDDeckControlError *_pError);

    END_INTERFACE
} IMDeckControlVtbl;

interface IMDeckControl { CONST_VTBL struct IMDeckControlVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMDeckControl_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMDeckControl_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMDeckControl_Release(This) ((This)->lpVtbl->Release(This))

            #define IMDeckControl_DeckOpen(This, _bTimecodeIsDropFrame, _pError) \
                ((This)->lpVtbl->DeckOpen(This, _bTimecodeIsDropFrame, _pError))

            #define IMDeckControl_DeckClose(This, _bStandbyOn) ((This)->lpVtbl->DeckClose(This, _bStandbyOn))

            #define IMDeckControl_DeckGetCurrentState(This, _pMode, _pVtrControlState, _pFlags) \
                ((This)->lpVtbl->DeckGetCurrentState(This, _pMode, _pVtrControlState, _pFlags))

            #define IMDeckControl_DeckSetStandby(This, _bStandbyOn) ((This)->lpVtbl->DeckSetStandby(This, _bStandbyOn))

            #define IMDeckControl_DeckSendCommand(This,           \
                                                  _lInBufferSize, \
                                                  _pInBuffer,     \
                                                  _pOutDataSize,  \
                                                  _ppOutBuffer,   \
                                                  outBufferSize,  \
                                                  _pError)        \
                ((This)->lpVtbl->DeckSendCommand(This,            \
                                                 _lInBufferSize,  \
                                                 _pInBuffer,      \
                                                 _pOutDataSize,   \
                                                 _ppOutBuffer,    \
                                                 outBufferSize,   \
                                                 _pError))

            #define IMDeckControl_DeckSendCommand_I(This,           \
                                                    _lInBufferSize, \
                                                    _pInBuffer,     \
                                                    _pOutDataSize,  \
                                                    _ppOutBuffer,   \
                                                    outBufferSize,  \
                                                    _pError)        \
                ((This)->lpVtbl->DeckSendCommand_I(This,            \
                                                   _lInBufferSize,  \
                                                   _pInBuffer,      \
                                                   _pOutDataSize,   \
                                                   _ppOutBuffer,    \
                                                   outBufferSize,   \
                                                   _pError))

            #define IMDeckControl_DeckPlay(This, _pError) ((This)->lpVtbl->DeckPlay(This, _pError))

            #define IMDeckControl_DeckStop(This, _pError) ((This)->lpVtbl->DeckStop(This, _pError))

            #define IMDeckControl_DeckTogglePlayStop(This, _pError) ((This)->lpVtbl->DeckTogglePlayStop(This, _pError))

            #define IMDeckControl_DeckEject(This, _pError) ((This)->lpVtbl->DeckEject(This, _pError))

            #define IMDeckControl_DeckGoToTimecode(This, _timecode, _pError) \
                ((This)->lpVtbl->DeckGoToTimecode(This, _timecode, _pError))

            #define IMDeckControl_DeckFastForward(This, _bViewTape, _pError) \
                ((This)->lpVtbl->DeckFastForward(This, _bViewTape, _pError))

            #define IMDeckControl_DeckRewind(This, _bViewTape, _pError) \
                ((This)->lpVtbl->DeckRewind(This, _bViewTape, _pError))

            #define IMDeckControl_DeckStepForward(This, _pError) ((This)->lpVtbl->DeckStepForward(This, _pError))

            #define IMDeckControl_DeckStepBack(This, _pError) ((This)->lpVtbl->DeckStepBack(This, _pError))

            #define IMDeckControl_DeckJog(This, _dblRate, _pError) ((This)->lpVtbl->DeckJog(This, _dblRate, _pError))

            #define IMDeckControl_DeckShuttle(This, _dblRate, _pError) \
                ((This)->lpVtbl->DeckShuttle(This, _dblRate, _pError))

            #define IMDeckControl_DeckGetTimecodeString(This, _pCurrentTimeCode, _pError) \
                ((This)->lpVtbl->DeckGetTimecodeString(This, _pCurrentTimeCode, _pError))

            #define IMDeckControl_DeckGetTimecode(This, _pCurrentTimeCode, _pError) \
                ((This)->lpVtbl->DeckGetTimecode(This, _pCurrentTimeCode, _pError))

            #define IMDeckControl_DeckSetPreroll(This, _lPrerollSeconds) \
                ((This)->lpVtbl->DeckSetPreroll(This, _lPrerollSeconds))

            #define IMDeckControl_DeckGetPreroll(This, _pPrerollSeconds) \
                ((This)->lpVtbl->DeckGetPreroll(This, _pPrerollSeconds))

            #define IMDeckControl_DeckSetCaptureOffset(This, _lCaptureOffsetFields) \
                ((This)->lpVtbl->DeckSetCaptureOffset(This, _lCaptureOffsetFields))

            #define IMDeckControl_DeckGetCaptureOffset(This, _pCaptureOffsetFields) \
                ((This)->lpVtbl->DeckGetCaptureOffset(This, _pCaptureOffsetFields))

            #define IMDeckControl_DeckSetExportOffset(This, _lExportOffsetFields) \
                ((This)->lpVtbl->DeckSetExportOffset(This, _lExportOffsetFields))

            #define IMDeckControl_DeckGetExportOffset(This, _pExportOffsetFields) \
                ((This)->lpVtbl->DeckGetExportOffset(This, _pExportOffsetFields))

            #define IMDeckControl_DeckGetManualExportOffset(This, _pDeckManualExportOffsetFields) \
                ((This)->lpVtbl->DeckGetManualExportOffset(This, _pDeckManualExportOffsetFields))

            #define IMDeckControl_DeckStartExport(This, _lInTimecode, _lOutTimecode, _lExportModeOps, _pError) \
                ((This)->lpVtbl->DeckStartExport(This, _lInTimecode, _lOutTimecode, _lExportModeOps, _pError))

            #define IMDeckControl_DeckStartCapture(This, _bUseVITC, _lInTimecode, _lOutTimecode, _pError) \
                ((This)->lpVtbl->DeckStartCapture(This, _bUseVITC, _lInTimecode, _lOutTimecode, _pError))

            #define IMDeckControl_DeckGetDeviceID(This, _pDeviceId, _pError) \
                ((This)->lpVtbl->DeckGetDeviceID(This, _pDeviceId, _pError))

            #define IMDeckControl_DeckAbort(This) ((This)->lpVtbl->DeckAbort(This))

            #define IMDeckControl_DeckCrashRecordStart(This, _pError) \
                ((This)->lpVtbl->DeckCrashRecordStart(This, _pError))

            #define IMDeckControl_DeckCrashRecordStop(This, _pError) \
                ((This)->lpVtbl->DeckCrashRecordStop(This, _pError))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMDeckControl_INTERFACE_DEFINED__ */

#ifndef __IMConfig_INTERFACE_DEFINED__
    #define __IMConfig_INTERFACE_DEFINED__

/* interface IMConfig */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMConfig;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("082DA430-EEC4-4EF1-841E-3A280E7D0383")
IMConfig: public IMAttributes
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConfigTypesGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConfigTypesGetByIndex(
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsSubType) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConfigGetCount(
        /* [in] */ BSTR  _bsType,
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConfigGetByIndex(
        /* [in] */ BSTR   _bsType,
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConfigSet(
        /* [in] */ BSTR _bsType,
        /* [in] */ BSTR _bsName,
        /* [out] */ IMAttributes * *_ppConfigProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConfigGet(
        /* [in] */ BSTR _bsType,
        /* [out] */ BSTR * _pbsName,
        /* [out] */ IMAttributes * *_ppConfigProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConfigShowProps(
        /* [in] */ BSTR     _bsType,
        /* [in] */ BSTR     _bsPropsType,
        /* [in] */ LONGLONG _lWndHandle) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConfigSetAll(
        /* [in] */ BSTR _bsAttributesLineOrXML) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConfigGetAll(
        /* [in] */ BOOL _bAttributesLine,
        /* [out] */ BSTR * _pbsAttributesLineOrXML) = 0;
};

    #else /* C style interface */

typedef struct IMConfigVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMConfig         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMConfig *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMConfig *This);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesGetCount)(IMConfig        *This,
                                                                      /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesGetByIndex)(IMConfig         *This,
                                                                        /* [in] */ int    _nIndex,
                                                                        /* [out] */ BSTR *_pbsName,
                                                                        /* [out] */ BSTR *_pbsValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesRemove)(IMConfig       *This,
                                                                    /* [in] */ BSTR _bsName);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesRemoveAll)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesRemoveAll)(IMConfig *This);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesStringSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesStringSet)(IMConfig       *This,
                                                                       /* [in] */ BSTR _bsName,
                                                                       /* [in] */ BSTR _bsValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesBoolSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesBoolSet)(IMConfig       *This,
                                                                     /* [in] */ BSTR _bsName,
                                                                     /* [in] */ BOOL _bValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesIntSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesIntSet)(IMConfig       *This,
                                                                    /* [in] */ BSTR _bsName,
                                                                    /* [in] */ int  _nValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesDoubleSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesDoubleSet)(IMConfig         *This,
                                                                       /* [in] */ BSTR   _bsName,
                                                                       /* [in] */ double _dblValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesHave)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesHave)(IMConfig         *This,
                                                                  /* [in] */ BSTR   _bsName,
                                                                  /* [out] */ BOOL *_pbHave,
                                                                  /* [out] */ BSTR *_pbsValueOrDefault);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesStringGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesStringGet)(IMConfig         *This,
                                                                       /* [in] */ BSTR   _bsName,
                                                                       /* [out] */ BSTR *_pbsValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesIntGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesIntGet)(IMConfig        *This,
                                                                    /* [in] */ BSTR  _bsName,
                                                                    /* [out] */ int *_pnValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesBoolGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesBoolGet)(IMConfig         *This,
                                                                     /* [in] */ BSTR   _bsName,
                                                                     /* [out] */ BOOL *_pbValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesDoubleGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesDoubleGet)(IMConfig           *This,
                                                                       /* [in] */ BSTR     _bsName,
                                                                       /* [out] */ double *_pdblValue);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesMultipleSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesMultipleSet)(IMConfig               *This,
                                                                         /* [in] */ BSTR         _bsAttributesList,
                                                                         /* [in] */ eMUpdateType _eUpdateType);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesSave)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesSave)(IMConfig         *This,
                                                                  /* [out] */ BSTR *_pbsAttributesList);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesClone)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesClone)(IMConfig                  *This,
                                                                   /* [out] */ IMAttributes **_ppClone);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesSet)(IMConfig                *This,
                                                                 /* [in] */ IMAttributes *_pAttributesList,
                                                                 /* [in] */ eMUpdateType  _eUpdateType);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesInfoGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesInfoGetCount)(IMConfig        *This,
                                                                          /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesInfoGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesInfoGetByIndex)(IMConfig         *This,
                                                                            /* [in] */ int    _nIndex,
                                                                            /* [out] */ BSTR *_pbsName);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesInfoGet)(IMConfig             *This,
                                                                     /* [in] */ BSTR       _bsName,
                                                                     /* [in] */ eMInfoType _eType,
                                                                     /* [out] */ BSTR     *_pbsInfo);

    DECLSPEC_XFGVIRT(IMAttributes, AttributesValuesInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *AttributesValuesInfoGet)(IMConfig         *This,
                                                                           /* [in] */ BSTR   _bsName,
                                                                           /* [in] */ BSTR   _bsValue,
                                                                           /* [in] */ BSTR   _bsType,
                                                                           /* [out] */ BSTR *_pbsInfo);

    DECLSPEC_XFGVIRT(IMConfig, ConfigTypesGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConfigTypesGetCount)(IMConfig        *This,
                                                                       /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMConfig, ConfigTypesGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConfigTypesGetByIndex)(IMConfig         *This,
                                                                         /* [in] */ int    _nIndex,
                                                                         /* [out] */ BSTR *_pbsSubType);

    DECLSPEC_XFGVIRT(IMConfig, ConfigGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConfigGetCount)(IMConfig        *This,
                                                                  /* [in] */ BSTR  _bsType,
                                                                  /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMConfig, ConfigGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConfigGetByIndex)(IMConfig         *This,
                                                                    /* [in] */ BSTR   _bsType,
                                                                    /* [in] */ int    _nIndex,
                                                                    /* [out] */ BSTR *_pbsName);

    DECLSPEC_XFGVIRT(IMConfig, ConfigSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConfigSet)(IMConfig                  *This,
                                                             /* [in] */ BSTR            _bsType,
                                                             /* [in] */ BSTR            _bsName,
                                                             /* [out] */ IMAttributes **_ppConfigProps);

    DECLSPEC_XFGVIRT(IMConfig, ConfigGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConfigGet)(IMConfig                  *This,
                                                             /* [in] */ BSTR            _bsType,
                                                             /* [out] */ BSTR          *_pbsName,
                                                             /* [out] */ IMAttributes **_ppConfigProps);

    DECLSPEC_XFGVIRT(IMConfig, ConfigShowProps)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConfigShowProps)(IMConfig           *This,
                                                                   /* [in] */ BSTR     _bsType,
                                                                   /* [in] */ BSTR     _bsPropsType,
                                                                   /* [in] */ LONGLONG _lWndHandle);

    DECLSPEC_XFGVIRT(IMConfig, ConfigSetAll)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConfigSetAll)(IMConfig       *This,
                                                                /* [in] */ BSTR _bsAttributesLineOrXML);

    DECLSPEC_XFGVIRT(IMConfig, ConfigGetAll)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConfigGetAll)(IMConfig         *This,
                                                                /* [in] */ BOOL   _bAttributesLine,
                                                                /* [out] */ BSTR *_pbsAttributesLineOrXML);

    END_INTERFACE
} IMConfigVtbl;

interface IMConfig { CONST_VTBL struct IMConfigVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMConfig_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMConfig_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMConfig_Release(This) ((This)->lpVtbl->Release(This))

            #define IMConfig_AttributesGetCount(This, _pnCount) ((This)->lpVtbl->AttributesGetCount(This, _pnCount))

            #define IMConfig_AttributesGetByIndex(This, _nIndex, _pbsName, _pbsValue) \
                ((This)->lpVtbl->AttributesGetByIndex(This, _nIndex, _pbsName, _pbsValue))

            #define IMConfig_AttributesRemove(This, _bsName) ((This)->lpVtbl->AttributesRemove(This, _bsName))

            #define IMConfig_AttributesRemoveAll(This) ((This)->lpVtbl->AttributesRemoveAll(This))

            #define IMConfig_AttributesStringSet(This, _bsName, _bsValue) \
                ((This)->lpVtbl->AttributesStringSet(This, _bsName, _bsValue))

            #define IMConfig_AttributesBoolSet(This, _bsName, _bValue) \
                ((This)->lpVtbl->AttributesBoolSet(This, _bsName, _bValue))

            #define IMConfig_AttributesIntSet(This, _bsName, _nValue) \
                ((This)->lpVtbl->AttributesIntSet(This, _bsName, _nValue))

            #define IMConfig_AttributesDoubleSet(This, _bsName, _dblValue) \
                ((This)->lpVtbl->AttributesDoubleSet(This, _bsName, _dblValue))

            #define IMConfig_AttributesHave(This, _bsName, _pbHave, _pbsValueOrDefault) \
                ((This)->lpVtbl->AttributesHave(This, _bsName, _pbHave, _pbsValueOrDefault))

            #define IMConfig_AttributesStringGet(This, _bsName, _pbsValue) \
                ((This)->lpVtbl->AttributesStringGet(This, _bsName, _pbsValue))

            #define IMConfig_AttributesIntGet(This, _bsName, _pnValue) \
                ((This)->lpVtbl->AttributesIntGet(This, _bsName, _pnValue))

            #define IMConfig_AttributesBoolGet(This, _bsName, _pbValue) \
                ((This)->lpVtbl->AttributesBoolGet(This, _bsName, _pbValue))

            #define IMConfig_AttributesDoubleGet(This, _bsName, _pdblValue) \
                ((This)->lpVtbl->AttributesDoubleGet(This, _bsName, _pdblValue))

            #define IMConfig_AttributesMultipleSet(This, _bsAttributesList, _eUpdateType) \
                ((This)->lpVtbl->AttributesMultipleSet(This, _bsAttributesList, _eUpdateType))

            #define IMConfig_AttributesSave(This, _pbsAttributesList) \
                ((This)->lpVtbl->AttributesSave(This, _pbsAttributesList))

            #define IMConfig_AttributesClone(This, _ppClone) ((This)->lpVtbl->AttributesClone(This, _ppClone))

            #define IMConfig_AttributesSet(This, _pAttributesList, _eUpdateType) \
                ((This)->lpVtbl->AttributesSet(This, _pAttributesList, _eUpdateType))

            #define IMConfig_AttributesInfoGetCount(This, _pnCount) \
                ((This)->lpVtbl->AttributesInfoGetCount(This, _pnCount))

            #define IMConfig_AttributesInfoGetByIndex(This, _nIndex, _pbsName) \
                ((This)->lpVtbl->AttributesInfoGetByIndex(This, _nIndex, _pbsName))

            #define IMConfig_AttributesInfoGet(This, _bsName, _eType, _pbsInfo) \
                ((This)->lpVtbl->AttributesInfoGet(This, _bsName, _eType, _pbsInfo))

            #define IMConfig_AttributesValuesInfoGet(This, _bsName, _bsValue, _bsType, _pbsInfo) \
                ((This)->lpVtbl->AttributesValuesInfoGet(This, _bsName, _bsValue, _bsType, _pbsInfo))

            #define IMConfig_ConfigTypesGetCount(This, _pnCount) ((This)->lpVtbl->ConfigTypesGetCount(This, _pnCount))

            #define IMConfig_ConfigTypesGetByIndex(This, _nIndex, _pbsSubType) \
                ((This)->lpVtbl->ConfigTypesGetByIndex(This, _nIndex, _pbsSubType))

            #define IMConfig_ConfigGetCount(This, _bsType, _pnCount) \
                ((This)->lpVtbl->ConfigGetCount(This, _bsType, _pnCount))

            #define IMConfig_ConfigGetByIndex(This, _bsType, _nIndex, _pbsName) \
                ((This)->lpVtbl->ConfigGetByIndex(This, _bsType, _nIndex, _pbsName))

            #define IMConfig_ConfigSet(This, _bsType, _bsName, _ppConfigProps) \
                ((This)->lpVtbl->ConfigSet(This, _bsType, _bsName, _ppConfigProps))

            #define IMConfig_ConfigGet(This, _bsType, _pbsName, _ppConfigProps) \
                ((This)->lpVtbl->ConfigGet(This, _bsType, _pbsName, _ppConfigProps))

            #define IMConfig_ConfigShowProps(This, _bsType, _bsPropsType, _lWndHandle) \
                ((This)->lpVtbl->ConfigShowProps(This, _bsType, _bsPropsType, _lWndHandle))

            #define IMConfig_ConfigSetAll(This, _bsAttributesLineOrXML) \
                ((This)->lpVtbl->ConfigSetAll(This, _bsAttributesLineOrXML))

            #define IMConfig_ConfigGetAll(This, _bAttributesLine, _pbsAttributesLineOrXML) \
                ((This)->lpVtbl->ConfigGetAll(This, _bAttributesLine, _pbsAttributesLineOrXML))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMConfig_INTERFACE_DEFINED__ */

#ifndef __IMFactory_INTERFACE_DEFINED__
    #define __IMFactory_INTERFACE_DEFINED__

/* interface IMFactory */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFactory;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F367000-473F-4ad5-A5C2-428FE0C8E03E")
IMFactory: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectCreate(
        /* [in] */ BSTR _bsName,
        /* [out] */ IUnknown * *_ppObject) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFileCreate(
        /* [out] */ IMFile * *_ppFile,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MLiveCreate(
        /* [out] */ IMDevice * *_ppLive,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MPlaylistCreate(
        /* [out] */ IMPlaylist * *_ppPlaylist,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MMixerCreate(
        /* [out] */ IMObject * *_ppMixer,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MComposerCreate(
        /* [out] */ IMObject * *_ppComposer,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MPreviewCreate(
        /* [out] */ IMPreview * *_ppPreview,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MRendererCreate(
        /* [out] */ IMDevice * *_ppRenderer,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MProxyCreate(
        /* [out] */ IMReceiver * *_ppProxy,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MWriterCreate(
        /* [out] */ IMWriter * *_ppWriter,
        /* [in] */ BSTR _bsProps) = 0;
};

    #else /* C style interface */

typedef struct IMFactoryVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFactory        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFactory *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFactory *This);

    DECLSPEC_XFGVIRT(IMFactory, ObjectCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ObjectCreate)(IMFactory             *This,
                                                                /* [in] */ BSTR        _bsName,
                                                                /* [out] */ IUnknown **_ppObject);

    DECLSPEC_XFGVIRT(IMFactory, MFileCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFileCreate)(IMFactory           *This,
                                                               /* [out] */ IMFile **_ppFile,
                                                               /* [in] */ BSTR      _bsProps);

    DECLSPEC_XFGVIRT(IMFactory, MLiveCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MLiveCreate)(IMFactory             *This,
                                                               /* [out] */ IMDevice **_ppLive,
                                                               /* [in] */ BSTR        _bsProps);

    DECLSPEC_XFGVIRT(IMFactory, MPlaylistCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MPlaylistCreate)(IMFactory               *This,
                                                                   /* [out] */ IMPlaylist **_ppPlaylist,
                                                                   /* [in] */ BSTR          _bsProps);

    DECLSPEC_XFGVIRT(IMFactory, MMixerCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MMixerCreate)(IMFactory             *This,
                                                                /* [out] */ IMObject **_ppMixer,
                                                                /* [in] */ BSTR        _bsProps);

    DECLSPEC_XFGVIRT(IMFactory, MComposerCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MComposerCreate)(IMFactory             *This,
                                                                   /* [out] */ IMObject **_ppComposer,
                                                                   /* [in] */ BSTR        _bsProps);

    DECLSPEC_XFGVIRT(IMFactory, MPreviewCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MPreviewCreate)(IMFactory              *This,
                                                                  /* [out] */ IMPreview **_ppPreview,
                                                                  /* [in] */ BSTR         _bsProps);

    DECLSPEC_XFGVIRT(IMFactory, MRendererCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MRendererCreate)(IMFactory             *This,
                                                                   /* [out] */ IMDevice **_ppRenderer,
                                                                   /* [in] */ BSTR        _bsProps);

    DECLSPEC_XFGVIRT(IMFactory, MProxyCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MProxyCreate)(IMFactory               *This,
                                                                /* [out] */ IMReceiver **_ppProxy,
                                                                /* [in] */ BSTR          _bsProps);

    DECLSPEC_XFGVIRT(IMFactory, MWriterCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MWriterCreate)(IMFactory             *This,
                                                                 /* [out] */ IMWriter **_ppWriter,
                                                                 /* [in] */ BSTR        _bsProps);

    END_INTERFACE
} IMFactoryVtbl;

interface IMFactory { CONST_VTBL struct IMFactoryVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFactory_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFactory_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFactory_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFactory_ObjectCreate(This, _bsName, _ppObject) \
                ((This)->lpVtbl->ObjectCreate(This, _bsName, _ppObject))

            #define IMFactory_MFileCreate(This, _ppFile, _bsProps) \
                ((This)->lpVtbl->MFileCreate(This, _ppFile, _bsProps))

            #define IMFactory_MLiveCreate(This, _ppLive, _bsProps) \
                ((This)->lpVtbl->MLiveCreate(This, _ppLive, _bsProps))

            #define IMFactory_MPlaylistCreate(This, _ppPlaylist, _bsProps) \
                ((This)->lpVtbl->MPlaylistCreate(This, _ppPlaylist, _bsProps))

            #define IMFactory_MMixerCreate(This, _ppMixer, _bsProps) \
                ((This)->lpVtbl->MMixerCreate(This, _ppMixer, _bsProps))

            #define IMFactory_MComposerCreate(This, _ppComposer, _bsProps) \
                ((This)->lpVtbl->MComposerCreate(This, _ppComposer, _bsProps))

            #define IMFactory_MPreviewCreate(This, _ppPreview, _bsProps) \
                ((This)->lpVtbl->MPreviewCreate(This, _ppPreview, _bsProps))

            #define IMFactory_MRendererCreate(This, _ppRenderer, _bsProps) \
                ((This)->lpVtbl->MRendererCreate(This, _ppRenderer, _bsProps))

            #define IMFactory_MProxyCreate(This, _ppProxy, _bsProps) \
                ((This)->lpVtbl->MProxyCreate(This, _ppProxy, _bsProps))

            #define IMFactory_MWriterCreate(This, _ppWriter, _bsProps) \
                ((This)->lpVtbl->MWriterCreate(This, _ppWriter, _bsProps))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFactory_INTERFACE_DEFINED__ */

#ifndef __IMSync_INTERFACE_DEFINED__
    #define __IMSync_INTERFACE_DEFINED__

/* interface IMSync */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMSync;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366025-473F-4ad5-A5C2-428FE0C8E03E")
IMSync: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SyncSetCount(
        /* [in] */ int _nSyncCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SyncGetCount(
        /* [out] */ int *_pnSyncCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnableBreaksControl(BOOL _bEnable) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsEnabledBreaksControl(BOOL * _pbEnabled) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SkipFrames(BOOL _bSkip) = 0;
};

    #else /* C style interface */

typedef struct IMSyncVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMSync           *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMSync *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMSync *This);

    DECLSPEC_XFGVIRT(IMSync, SyncSetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SyncSetCount)(IMSync        *This,
                                                                /* [in] */ int _nSyncCount);

    DECLSPEC_XFGVIRT(IMSync, SyncGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SyncGetCount)(IMSync          *This,
                                                                /* [out] */ int *_pnSyncCount);

    DECLSPEC_XFGVIRT(IMSync, EnableBreaksControl)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *EnableBreaksControl)(IMSync *This, BOOL _bEnable);

    DECLSPEC_XFGVIRT(IMSync, IsEnabledBreaksControl)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *IsEnabledBreaksControl)(IMSync *This, BOOL *_pbEnabled);

    DECLSPEC_XFGVIRT(IMSync, SkipFrames)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SkipFrames)(IMSync *This, BOOL _bSkip);

    END_INTERFACE
} IMSyncVtbl;

interface IMSync { CONST_VTBL struct IMSyncVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMSync_QueryInterface(This, riid, ppvObject) ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMSync_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMSync_Release(This) ((This)->lpVtbl->Release(This))

            #define IMSync_SyncSetCount(This, _nSyncCount) ((This)->lpVtbl->SyncSetCount(This, _nSyncCount))

            #define IMSync_SyncGetCount(This, _pnSyncCount) ((This)->lpVtbl->SyncGetCount(This, _pnSyncCount))

            #define IMSync_EnableBreaksControl(This, _bEnable) ((This)->lpVtbl->EnableBreaksControl(This, _bEnable))

            #define IMSync_IsEnabledBreaksControl(This, _pbEnabled) \
                ((This)->lpVtbl->IsEnabledBreaksControl(This, _pbEnabled))

            #define IMSync_SkipFrames(This, _bSkip) ((This)->lpVtbl->SkipFrames(This, _bSkip))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMSync_INTERFACE_DEFINED__ */

#ifndef __IMSource_INTERFACE_DEFINED__
    #define __IMSource_INTERFACE_DEFINED__

/* interface IMSource */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMSource;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("CD799F70-3FD4-4237-92D4-D187B588D999")
IMSource: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SourceFrameGet(
        /* [in] */ REFERENCE_TIME _rtMaxWait,
        /* [out] */ IMFrame * *_ppFrame,
        /* [in] */ int _nFlags) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SourceFrameGetEx(
        /* [out][in] */ LONGLONG * _pllReaderID,
        /* [in] */ REFERENCE_TIME _rtMaxWait,
        /* [out] */ IMFrame * *_ppFrame,
        /* [in] */ eFrameGetFlags _eGetType) = 0;
};

    #else /* C style interface */

typedef struct IMSourceVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMSource         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMSource *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMSource *This);

    DECLSPEC_XFGVIRT(IMSource, SourceFrameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameGet)(IMSource                 *This,
                                                                  /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                  /* [out] */ IMFrame     **_ppFrame,
                                                                  /* [in] */ int            _nFlags);

    DECLSPEC_XFGVIRT(IMSource, SourceFrameGetEx)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameGetEx)(IMSource                 *This,
                                                                    /* [out][in] */ LONGLONG *_pllReaderID,
                                                                    /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                    /* [out] */ IMFrame     **_ppFrame,
                                                                    /* [in] */ eFrameGetFlags _eGetType);

    END_INTERFACE
} IMSourceVtbl;

interface IMSource { CONST_VTBL struct IMSourceVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMSource_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMSource_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMSource_Release(This) ((This)->lpVtbl->Release(This))

            #define IMSource_SourceFrameGet(This, _rtMaxWait, _ppFrame, _nFlags) \
                ((This)->lpVtbl->SourceFrameGet(This, _rtMaxWait, _ppFrame, _nFlags))

            #define IMSource_SourceFrameGetEx(This, _pllReaderID, _rtMaxWait, _ppFrame, _eGetType) \
                ((This)->lpVtbl->SourceFrameGetEx(This, _pllReaderID, _rtMaxWait, _ppFrame, _eGetType))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMSource_INTERFACE_DEFINED__ */

#ifndef __IMLLog_INTERFACE_DEFINED__
    #define __IMLLog_INTERFACE_DEFINED__

/* interface IMLLog */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMLLog;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("73CE4EC0-F5EE-41B7-A4D8-2F13830BC69C")
IMLLog: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init(
        /* [in] */ BSTR _bsDllName,
        /* [in] */ BSTR _bsAppName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsInit(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Trace(
        /* [in] */ int    _nLevel,
        /* [in] */ BSTR   _strMsg,
        /* [in] */ WORD   _nLine,
        /* [in] */ LPCSTR _pszFileName,
        /* [in] */ LPCSTR _pszFuncName) = 0;
};

    #else /* C style interface */

typedef struct IMLLogVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMLLog           *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMLLog *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMLLog *This);

    DECLSPEC_XFGVIRT(IMLLog, Init)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *Init)(IMLLog         *This,
                                                        /* [in] */ BSTR _bsDllName,
                                                        /* [in] */ BSTR _bsAppName);

    DECLSPEC_XFGVIRT(IMLLog, IsInit)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *IsInit)(IMLLog *This);

    DECLSPEC_XFGVIRT(IMLLog, Close)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *Close)(IMLLog *This);

    DECLSPEC_XFGVIRT(IMLLog, Trace)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *Trace)(IMLLog           *This,
                                                         /* [in] */ int    _nLevel,
                                                         /* [in] */ BSTR   _strMsg,
                                                         /* [in] */ WORD   _nLine,
                                                         /* [in] */ LPCSTR _pszFileName,
                                                         /* [in] */ LPCSTR _pszFuncName);

    END_INTERFACE
} IMLLogVtbl;

interface IMLLog { CONST_VTBL struct IMLLogVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMLLog_QueryInterface(This, riid, ppvObject) ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMLLog_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMLLog_Release(This) ((This)->lpVtbl->Release(This))

            #define IMLLog_Init(This, _bsDllName, _bsAppName) ((This)->lpVtbl->Init(This, _bsDllName, _bsAppName))

            #define IMLLog_IsInit(This) ((This)->lpVtbl->IsInit(This))

            #define IMLLog_Close(This) ((This)->lpVtbl->Close(This))

            #define IMLLog_Trace(This, _nLevel, _strMsg, _nLine, _pszFileName, _pszFuncName) \
                ((This)->lpVtbl->Trace(This, _nLevel, _strMsg, _nLine, _pszFileName, _pszFuncName))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMLLog_INTERFACE_DEFINED__ */

#ifndef __IMSource_I_INTERFACE_DEFINED__
    #define __IMSource_I_INTERFACE_DEFINED__

/* interface IMSource_I */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMSource_I;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("CD799F77-3FD4-4237-92D4-D187B588D999")
IMSource_I: public IMSource
{
public:
    virtual HRESULT STDMETHODCALLTYPE SourceInit(
        /* [out][in] */ LONGLONG * _plUserData) = 0;

    virtual HRESULT STDMETHODCALLTYPE SourceClose(
        /* [in] */ LONGLONG _lUserData) = 0;

    virtual HRESULT STDMETHODCALLTYPE SourceRefAdd(
        /* [in] */ DWORD _dwProcessID) = 0;

    virtual HRESULT STDMETHODCALLTYPE SourceRefRemove(
        /* [in] */ DWORD _dwProcessID) = 0;

    virtual HRESULT STDMETHODCALLTYPE SourceHaveRefs(
        /* [out] */ LONGLONG * _phWaitHandle) = 0;
};

    #else /* C style interface */

typedef struct IMSource_IVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMSource_I       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMSource_I *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMSource_I *This);

    DECLSPEC_XFGVIRT(IMSource, SourceFrameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameGet)(IMSource_I               *This,
                                                                  /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                  /* [out] */ IMFrame     **_ppFrame,
                                                                  /* [in] */ int            _nFlags);

    DECLSPEC_XFGVIRT(IMSource, SourceFrameGetEx)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameGetEx)(IMSource_I               *This,
                                                                    /* [out][in] */ LONGLONG *_pllReaderID,
                                                                    /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                    /* [out] */ IMFrame     **_ppFrame,
                                                                    /* [in] */ eFrameGetFlags _eGetType);

    DECLSPEC_XFGVIRT(IMSource_I, SourceInit)
    HRESULT(STDMETHODCALLTYPE *SourceInit)(IMSource_I               *This,
                                           /* [out][in] */ LONGLONG *_plUserData);

    DECLSPEC_XFGVIRT(IMSource_I, SourceClose)
    HRESULT(STDMETHODCALLTYPE *SourceClose)(IMSource_I         *This,
                                            /* [in] */ LONGLONG _lUserData);

    DECLSPEC_XFGVIRT(IMSource_I, SourceRefAdd)
    HRESULT(STDMETHODCALLTYPE *SourceRefAdd)(IMSource_I      *This,
                                             /* [in] */ DWORD _dwProcessID);

    DECLSPEC_XFGVIRT(IMSource_I, SourceRefRemove)
    HRESULT(STDMETHODCALLTYPE *SourceRefRemove)(IMSource_I      *This,
                                                /* [in] */ DWORD _dwProcessID);

    DECLSPEC_XFGVIRT(IMSource_I, SourceHaveRefs)
    HRESULT(STDMETHODCALLTYPE *SourceHaveRefs)(IMSource_I           *This,
                                               /* [out] */ LONGLONG *_phWaitHandle);

    END_INTERFACE
} IMSource_IVtbl;

interface IMSource_I { CONST_VTBL struct IMSource_IVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMSource_I_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMSource_I_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMSource_I_Release(This) ((This)->lpVtbl->Release(This))

            #define IMSource_I_SourceFrameGet(This, _rtMaxWait, _ppFrame, _nFlags) \
                ((This)->lpVtbl->SourceFrameGet(This, _rtMaxWait, _ppFrame, _nFlags))

            #define IMSource_I_SourceFrameGetEx(This, _pllReaderID, _rtMaxWait, _ppFrame, _eGetType) \
                ((This)->lpVtbl->SourceFrameGetEx(This, _pllReaderID, _rtMaxWait, _ppFrame, _eGetType))

            #define IMSource_I_SourceInit(This, _plUserData) ((This)->lpVtbl->SourceInit(This, _plUserData))

            #define IMSource_I_SourceClose(This, _lUserData) ((This)->lpVtbl->SourceClose(This, _lUserData))

            #define IMSource_I_SourceRefAdd(This, _dwProcessID) ((This)->lpVtbl->SourceRefAdd(This, _dwProcessID))

            #define IMSource_I_SourceRefRemove(This, _dwProcessID) ((This)->lpVtbl->SourceRefRemove(This, _dwProcessID))

            #define IMSource_I_SourceHaveRefs(This, _phWaitHandle) ((This)->lpVtbl->SourceHaveRefs(This, _phWaitHandle))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMSource_I_INTERFACE_DEFINED__ */

#ifndef __IMFExternal_INTERFACE_DEFINED__
    #define __IMFExternal_INTERFACE_DEFINED__

/* interface IMFExternal */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFExternal;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("CD799F79-3FD4-4237-92D4-D187B588D999")
IMFExternal: public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE ExternalPIDGet(
        /* [out] */ DWORD * _pdwProcessID) = 0;

    virtual HRESULT STDMETHODCALLTYPE ExternalRefAdd(
        /* [in] */ DWORD _dwProcessID) = 0;

    virtual HRESULT STDMETHODCALLTYPE ExternalRefRemove(
        /* [in] */ DWORD _dwProcessID) = 0;

    virtual HRESULT STDMETHODCALLTYPE ExternalHaveRefs(
        /* [out] */ LONGLONG * _phWaitHandle) = 0;
};

    #else /* C style interface */

typedef struct IMFExternalVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFExternal      *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFExternal *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFExternal *This);

    DECLSPEC_XFGVIRT(IMFExternal, ExternalPIDGet)
    HRESULT(STDMETHODCALLTYPE *ExternalPIDGet)(IMFExternal       *This,
                                               /* [out] */ DWORD *_pdwProcessID);

    DECLSPEC_XFGVIRT(IMFExternal, ExternalRefAdd)
    HRESULT(STDMETHODCALLTYPE *ExternalRefAdd)(IMFExternal     *This,
                                               /* [in] */ DWORD _dwProcessID);

    DECLSPEC_XFGVIRT(IMFExternal, ExternalRefRemove)
    HRESULT(STDMETHODCALLTYPE *ExternalRefRemove)(IMFExternal     *This,
                                                  /* [in] */ DWORD _dwProcessID);

    DECLSPEC_XFGVIRT(IMFExternal, ExternalHaveRefs)
    HRESULT(STDMETHODCALLTYPE *ExternalHaveRefs)(IMFExternal          *This,
                                                 /* [out] */ LONGLONG *_phWaitHandle);

    END_INTERFACE
} IMFExternalVtbl;

interface IMFExternal { CONST_VTBL struct IMFExternalVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFExternal_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFExternal_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFExternal_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFExternal_ExternalPIDGet(This, _pdwProcessID) \
                ((This)->lpVtbl->ExternalPIDGet(This, _pdwProcessID))

            #define IMFExternal_ExternalRefAdd(This, _dwProcessID) ((This)->lpVtbl->ExternalRefAdd(This, _dwProcessID))

            #define IMFExternal_ExternalRefRemove(This, _dwProcessID) \
                ((This)->lpVtbl->ExternalRefRemove(This, _dwProcessID))

            #define IMFExternal_ExternalHaveRefs(This, _phWaitHandle) \
                ((This)->lpVtbl->ExternalHaveRefs(This, _phWaitHandle))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFExternal_INTERFACE_DEFINED__ */

#ifndef __IMFrame_I_INTERFACE_DEFINED__
    #define __IMFrame_I_INTERFACE_DEFINED__

/* interface IMFrame_I */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFrame_I;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F367777-473F-4ad5-A5C2-428FE0C8E03E")
IMFrame_I: public IMFrame
{
public:
    virtual HRESULT STDMETHODCALLTYPE GetProcessID(
        /* [out] */ DWORD * _pdwProcessID) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetID(
        /* [out] */ LONGLONG * _plFrameID) = 0;

    virtual HRESULT STDMETHODCALLTYPE AudioGet(
        /* [out] */ DWORD * _pcbAudio,
        /* [size_is][size_is][out] */ BYTE * *_ppbAudio) = 0;

    virtual HRESULT STDMETHODCALLTYPE VideoGet(
        /* [out] */ DWORD * _pcbVideo,
        /* [size_is][size_is][out] */ BYTE * *_ppbVideo) = 0;

    virtual HRESULT STDMETHODCALLTYPE VideoGetOffset(
        /* [out] */ LONG * _plOffset) = 0;

    virtual HRESULT STDMETHODCALLTYPE AudioSet(
        /* [in] */ DWORD _cbAudio,
        /* [size_is][in] */ BYTE * _pbAudio) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFrameProps(
        /* [out] */ M_TIME * _pTime,
        /* [out] */ M_AV_PROPS * _pProps,
        /* [out] */ DWORD * _pcbVideo,
        /* [out] */ DWORD * _pcbAudio) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFramePropsAll(
        /* [out] */ M_TIME * _pTime,
        /* [out] */ M_AV_PROPS * _pProps,
        /* [out] */ DWORD * _pcbAudio,
        /* [out] */ BYTE * *_ppbAudio,
        /* [out] */ DWORD * _pcbVideo,
        /* [out] */ BYTE * *_ppbVideo) = 0;

    virtual HRESULT STDMETHODCALLTYPE ANCDataGet_I(
        /* [in] */ DWORD _dwDataFCC,
        /* [out] */ DWORD * _pcbANCData,
        /* [size_is][size_is][out] */ BYTE * *_ppbANCData) = 0;

    virtual HRESULT STDMETHODCALLTYPE ANCDataCopyFrom_I(
        /* [in] */ IMFrame_I * _pSource,
        /* [in] */ int _nCopyType) = 0;
};

    #else /* C style interface */

typedef struct IMFrame_IVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFrame_I        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFrame_I *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFrame_I *This);

    DECLSPEC_XFGVIRT(IMFrame, FrameAVPropsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameAVPropsGet)(IMFrame_I              *This,
                                                                   /* [out] */ M_AV_PROPS *_pProps);

    DECLSPEC_XFGVIRT(IMFrame, FrameAVPropsSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameAVPropsSet)(IMFrame_I             *This,
                                                                   /* [in] */ M_AV_PROPS *_pProps);

    DECLSPEC_XFGVIRT(IMFrame, FrameTimeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameTimeGet)(IMFrame_I          *This,
                                                                /* [out] */ M_TIME *_pTime);

    DECLSPEC_XFGVIRT(IMFrame, FrameTimeSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameTimeSet)(IMFrame_I         *This,
                                                                /* [in] */ M_TIME *_pTime);

    DECLSPEC_XFGVIRT(IMFrame, FrameAudioGetBytes)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameAudioGetBytes)(IMFrame_I            *This,
                                                                      /* [out] */ LONG     *_pcbSize,
                                                                      /* [out] */ LONGLONG *_ppbAudio);

    DECLSPEC_XFGVIRT(IMFrame, FrameVideoGetBytes)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameVideoGetBytes)(IMFrame_I            *This,
                                                                      /* [out] */ LONG     *_pcbSize,
                                                                      /* [out] */ LONGLONG *_ppbVideo);

    DECLSPEC_XFGVIRT(IMFrame, FrameVideoGetHbitmap)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameVideoGetHbitmap)(IMFrame_I            *This,
                                                                        /* [out] */ LONGLONG *_pcpHBitmap);

    DECLSPEC_XFGVIRT(IMFrame, FrameVideoSaveToFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameVideoSaveToFile)(IMFrame_I      *This,
                                                                        /* [in] */ BSTR _bsFileName);

    DECLSPEC_XFGVIRT(IMFrame, FrameAudioSaveToFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameAudioSaveToFile)(IMFrame_I      *This,
                                                                        /* [in] */ BSTR _bsFileName,
                                                                        /* [in] */ BOOL _bAppend);

    DECLSPEC_XFGVIRT(IMFrame, FrameDataGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameDataGetByIndex)(IMFrame_I            *This,
                                                                       /* [in] */ int        _nIndex,
                                                                       /* [out] */ LONG     *_pnDataFCC,
                                                                       /* [out] */ LONG     *_pcbANCData,
                                                                       /* [out] */ LONGLONG *_ppbANCData);

    DECLSPEC_XFGVIRT(IMFrame, FrameDataGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameDataGet)(IMFrame_I            *This,
                                                                /* [in] */ LONG       _nDataFCC,
                                                                /* [out] */ LONG     *_pcbANCData,
                                                                /* [out] */ LONGLONG *_ppbANCData);

    DECLSPEC_XFGVIRT(IMFrame, FrameDataSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameDataSet)(IMFrame_I          *This,
                                                                /* [in] */ LONG     _nDataFCC,
                                                                /* [in] */ LONG     _cbANCData,
                                                                /* [in] */ LONGLONG _pbANCData);

    DECLSPEC_XFGVIRT(IMFrame, FrameClone)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameClone)(IMFrame_I              *This,
                                                              /* [out] */ IMFrame   **_ppCloneFrame,
                                                              /* [in] */ eMFrameClone _eCloneType,
                                                              /* [in] */ eMFCC        _fccPixelFormat);

    DECLSPEC_XFGVIRT(IMFrame, FrameCut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameCut)(IMFrame_I            *This,
                                                            /* [in] */ int        _nField,
                                                            /* [in] */ RECT      *_pRect,
                                                            /* [out] */ IMFrame **_ppFrameRes);

    DECLSPEC_XFGVIRT(IMFrame, FrameConvert)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameConvert)(IMFrame_I              *This,
                                                                /* [in] */ M_VID_PROPS *_pVidPropsDest,
                                                                /* [out] */ IMFrame   **_ppFrameRes,
                                                                /* [in] */ BSTR         _bsPropsList);

    DECLSPEC_XFGVIRT(IMFrame, FrameOverlay)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameOverlay)(IMFrame_I          *This,
                                                                /* [in] */ IMFrame *_pFrameOver,
                                                                /* [in] */ int      _nPosX,
                                                                /* [in] */ int      _nPosY,
                                                                /* [in] */ double   _dblAlpha,
                                                                /* [in] */ BSTR     _bsPropsList);

    DECLSPEC_XFGVIRT(IMFrame, FrameRelease)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FrameRelease)(IMFrame_I *This);

    DECLSPEC_XFGVIRT(IMFrame_I, GetProcessID)
    HRESULT(STDMETHODCALLTYPE *GetProcessID)(IMFrame_I         *This,
                                             /* [out] */ DWORD *_pdwProcessID);

    DECLSPEC_XFGVIRT(IMFrame_I, GetID)
    HRESULT(STDMETHODCALLTYPE *GetID)(IMFrame_I            *This,
                                      /* [out] */ LONGLONG *_plFrameID);

    DECLSPEC_XFGVIRT(IMFrame_I, AudioGet)
    HRESULT(STDMETHODCALLTYPE *AudioGet)(IMFrame_I                           *This,
                                         /* [out] */ DWORD                   *_pcbAudio,
                                         /* [size_is][size_is][out] */ BYTE **_ppbAudio);

    DECLSPEC_XFGVIRT(IMFrame_I, VideoGet)
    HRESULT(STDMETHODCALLTYPE *VideoGet)(IMFrame_I                           *This,
                                         /* [out] */ DWORD                   *_pcbVideo,
                                         /* [size_is][size_is][out] */ BYTE **_ppbVideo);

    DECLSPEC_XFGVIRT(IMFrame_I, VideoGetOffset)
    HRESULT(STDMETHODCALLTYPE *VideoGetOffset)(IMFrame_I        *This,
                                               /* [out] */ LONG *_plOffset);

    DECLSPEC_XFGVIRT(IMFrame_I, AudioSet)
    HRESULT(STDMETHODCALLTYPE *AudioSet)(IMFrame_I                *This,
                                         /* [in] */ DWORD          _cbAudio,
                                         /* [size_is][in] */ BYTE *_pbAudio);

    DECLSPEC_XFGVIRT(IMFrame_I, GetFrameProps)
    HRESULT(STDMETHODCALLTYPE *GetFrameProps)(IMFrame_I              *This,
                                              /* [out] */ M_TIME     *_pTime,
                                              /* [out] */ M_AV_PROPS *_pProps,
                                              /* [out] */ DWORD      *_pcbVideo,
                                              /* [out] */ DWORD      *_pcbAudio);

    DECLSPEC_XFGVIRT(IMFrame_I, GetFramePropsAll)
    HRESULT(STDMETHODCALLTYPE *GetFramePropsAll)(IMFrame_I              *This,
                                                 /* [out] */ M_TIME     *_pTime,
                                                 /* [out] */ M_AV_PROPS *_pProps,
                                                 /* [out] */ DWORD      *_pcbAudio,
                                                 /* [out] */ BYTE      **_ppbAudio,
                                                 /* [out] */ DWORD      *_pcbVideo,
                                                 /* [out] */ BYTE      **_ppbVideo);

    DECLSPEC_XFGVIRT(IMFrame_I, ANCDataGet_I)
    HRESULT(STDMETHODCALLTYPE *ANCDataGet_I)(IMFrame_I                           *This,
                                             /* [in] */ DWORD                     _dwDataFCC,
                                             /* [out] */ DWORD                   *_pcbANCData,
                                             /* [size_is][size_is][out] */ BYTE **_ppbANCData);

    DECLSPEC_XFGVIRT(IMFrame_I, ANCDataCopyFrom_I)
    HRESULT(STDMETHODCALLTYPE *ANCDataCopyFrom_I)(IMFrame_I            *This,
                                                  /* [in] */ IMFrame_I *_pSource,
                                                  /* [in] */ int        _nCopyType);

    END_INTERFACE
} IMFrame_IVtbl;

interface IMFrame_I { CONST_VTBL struct IMFrame_IVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFrame_I_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFrame_I_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFrame_I_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFrame_I_FrameAVPropsGet(This, _pProps) ((This)->lpVtbl->FrameAVPropsGet(This, _pProps))

            #define IMFrame_I_FrameAVPropsSet(This, _pProps) ((This)->lpVtbl->FrameAVPropsSet(This, _pProps))

            #define IMFrame_I_FrameTimeGet(This, _pTime) ((This)->lpVtbl->FrameTimeGet(This, _pTime))

            #define IMFrame_I_FrameTimeSet(This, _pTime) ((This)->lpVtbl->FrameTimeSet(This, _pTime))

            #define IMFrame_I_FrameAudioGetBytes(This, _pcbSize, _ppbAudio) \
                ((This)->lpVtbl->FrameAudioGetBytes(This, _pcbSize, _ppbAudio))

            #define IMFrame_I_FrameVideoGetBytes(This, _pcbSize, _ppbVideo) \
                ((This)->lpVtbl->FrameVideoGetBytes(This, _pcbSize, _ppbVideo))

            #define IMFrame_I_FrameVideoGetHbitmap(This, _pcpHBitmap) \
                ((This)->lpVtbl->FrameVideoGetHbitmap(This, _pcpHBitmap))

            #define IMFrame_I_FrameVideoSaveToFile(This, _bsFileName) \
                ((This)->lpVtbl->FrameVideoSaveToFile(This, _bsFileName))

            #define IMFrame_I_FrameAudioSaveToFile(This, _bsFileName, _bAppend) \
                ((This)->lpVtbl->FrameAudioSaveToFile(This, _bsFileName, _bAppend))

            #define IMFrame_I_FrameDataGetByIndex(This, _nIndex, _pnDataFCC, _pcbANCData, _ppbANCData) \
                ((This)->lpVtbl->FrameDataGetByIndex(This, _nIndex, _pnDataFCC, _pcbANCData, _ppbANCData))

            #define IMFrame_I_FrameDataGet(This, _nDataFCC, _pcbANCData, _ppbANCData) \
                ((This)->lpVtbl->FrameDataGet(This, _nDataFCC, _pcbANCData, _ppbANCData))

            #define IMFrame_I_FrameDataSet(This, _nDataFCC, _cbANCData, _pbANCData) \
                ((This)->lpVtbl->FrameDataSet(This, _nDataFCC, _cbANCData, _pbANCData))

            #define IMFrame_I_FrameClone(This, _ppCloneFrame, _eCloneType, _fccPixelFormat) \
                ((This)->lpVtbl->FrameClone(This, _ppCloneFrame, _eCloneType, _fccPixelFormat))

            #define IMFrame_I_FrameCut(This, _nField, _pRect, _ppFrameRes) \
                ((This)->lpVtbl->FrameCut(This, _nField, _pRect, _ppFrameRes))

            #define IMFrame_I_FrameConvert(This, _pVidPropsDest, _ppFrameRes, _bsPropsList) \
                ((This)->lpVtbl->FrameConvert(This, _pVidPropsDest, _ppFrameRes, _bsPropsList))

            #define IMFrame_I_FrameOverlay(This, _pFrameOver, _nPosX, _nPosY, _dblAlpha, _bsPropsList) \
                ((This)->lpVtbl->FrameOverlay(This, _pFrameOver, _nPosX, _nPosY, _dblAlpha, _bsPropsList))

            #define IMFrame_I_FrameRelease(This) ((This)->lpVtbl->FrameRelease(This))

            #define IMFrame_I_GetProcessID(This, _pdwProcessID) ((This)->lpVtbl->GetProcessID(This, _pdwProcessID))

            #define IMFrame_I_GetID(This, _plFrameID) ((This)->lpVtbl->GetID(This, _plFrameID))

            #define IMFrame_I_AudioGet(This, _pcbAudio, _ppbAudio) \
                ((This)->lpVtbl->AudioGet(This, _pcbAudio, _ppbAudio))

            #define IMFrame_I_VideoGet(This, _pcbVideo, _ppbVideo) \
                ((This)->lpVtbl->VideoGet(This, _pcbVideo, _ppbVideo))

            #define IMFrame_I_VideoGetOffset(This, _plOffset) ((This)->lpVtbl->VideoGetOffset(This, _plOffset))

            #define IMFrame_I_AudioSet(This, _cbAudio, _pbAudio) ((This)->lpVtbl->AudioSet(This, _cbAudio, _pbAudio))

            #define IMFrame_I_GetFrameProps(This, _pTime, _pProps, _pcbVideo, _pcbAudio) \
                ((This)->lpVtbl->GetFrameProps(This, _pTime, _pProps, _pcbVideo, _pcbAudio))

            #define IMFrame_I_GetFramePropsAll(This, _pTime, _pProps, _pcbAudio, _ppbAudio, _pcbVideo, _ppbVideo) \
                ((This)->lpVtbl->GetFramePropsAll(This, _pTime, _pProps, _pcbAudio, _ppbAudio, _pcbVideo, _ppbVideo))

            #define IMFrame_I_ANCDataGet_I(This, _dwDataFCC, _pcbANCData, _ppbANCData) \
                ((This)->lpVtbl->ANCDataGet_I(This, _dwDataFCC, _pcbANCData, _ppbANCData))

            #define IMFrame_I_ANCDataCopyFrom_I(This, _pSource, _nCopyType) \
                ((This)->lpVtbl->ANCDataCopyFrom_I(This, _pSource, _nCopyType))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFrame_I_INTERFACE_DEFINED__ */

#ifndef __IMFrames_I_INTERFACE_DEFINED__
    #define __IMFrames_I_INTERFACE_DEFINED__

/* interface IMFrames_I */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFrames_I;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F367778-473F-4ad5-A5C2-428FE0C8E03E")
IMFrames_I: public IMFrames
{
public:
    virtual HRESULT STDMETHODCALLTYPE FramesCreate_I(
        /* [in] */ int          _cbVideoSize,
        /* [in] */ int          _cbAudioSize,
        /* [in] */ BSTR         _bsProps,
        /* [out] */ IMFrame_I **_ppFrame) = 0;

    virtual HRESULT STDMETHODCALLTYPE FramesClone_I(
        /* [in] */ IMFrame * _pFrame,
        /* [out] */ IMFrame_I * *_ppFrameClone,
        /* [in] */ eMFrameClone _eCloneType,
        /* [in] */ eMFCC        _fccPixelFormat) = 0;

    virtual HRESULT STDMETHODCALLTYPE FramesConvert_I(
        /* [in] */ IMFrame * _pFrameSrcL_F1,
        /* [in] */ IMFrame * _pFrameSrcR_F2,
        /* [in] */ M_VID_PROPS * _pVidPropsDest,
        /* [out] */ IMFrame * *_ppFrameDest,
        /* [in] */ BSTR _bsPropsList) = 0;

    virtual HRESULT STDMETHODCALLTYPE AllocBuffer(
        /* [in] */ DWORD _cbSize,
        /* [out] */ LONGLONG * _ppBuffer) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReleaseBuffer(
        /* [in] */ LONGLONG _pBuffer) = 0;
};

    #else /* C style interface */

typedef struct IMFrames_IVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFrames_I       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFrames_I *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFrames_I *This);

    DECLSPEC_XFGVIRT(IMFrames, FramesMakeLocal)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FramesMakeLocal)(IMFrames_I           *This,
                                                                   /* [in] */ IMFrame   *_ppFrame,
                                                                   /* [out] */ IMFrame **_ppFrameLocal,
                                                                   /* [in] */ BOOL       _bMakeRef);

    DECLSPEC_XFGVIRT(IMFrames, FramesCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FramesCreate)(IMFrames_I           *This,
                                                                /* [in] */ int        _cbVideoSize,
                                                                /* [in] */ BSTR       _bsProps,
                                                                /* [out] */ IMFrame **_ppFrame);

    DECLSPEC_XFGVIRT(IMFrames, FramesCreateFromMem)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FramesCreateFromMem)(IMFrames_I             *This,
                                                                       /* [in] */ M_VID_PROPS *_pVidProps,
                                                                       /* [in] */ LONGLONG     _pbVideo,
                                                                       /* [out] */ IMFrame   **_ppFrame,
                                                                       /* [in] */ BSTR         _bsPropsList);

    DECLSPEC_XFGVIRT(IMFrames, FramesCreateFromFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FramesCreateFromFile)(IMFrames_I           *This,
                                                                        /* [in] */ BSTR       _bsFileName,
                                                                        /* [out] */ IMFrame **_ppFrame,
                                                                        /* [in] */ BSTR       _bsPropsList);

    DECLSPEC_XFGVIRT(IMFrames, FramesCreateFromHBITMAP)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FramesCreateFromHBITMAP)(IMFrames_I           *This,
                                                                           /* [in] */ LONGLONG   _hBitmap,
                                                                           /* [out] */ IMFrame **_ppFrame,
                                                                           /* [in] */ BSTR       _bsPropsList);

    DECLSPEC_XFGVIRT(IMFrames, FramesCreateFromSurface)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FramesCreateFromSurface)(IMFrames_I           *This,
                                                                           /* [in] */ IUnknown  *_pSurface,
                                                                           /* [out] */ IMFrame **_ppFrame,
                                                                           /* [in] */ BSTR       _bsPropsList);

    DECLSPEC_XFGVIRT(IMFrames_I, FramesCreate_I)
    HRESULT(STDMETHODCALLTYPE *FramesCreate_I)(IMFrames_I             *This,
                                               /* [in] */ int          _cbVideoSize,
                                               /* [in] */ int          _cbAudioSize,
                                               /* [in] */ BSTR         _bsProps,
                                               /* [out] */ IMFrame_I **_ppFrame);

    DECLSPEC_XFGVIRT(IMFrames_I, FramesClone_I)
    HRESULT(STDMETHODCALLTYPE *FramesClone_I)(IMFrames_I             *This,
                                              /* [in] */ IMFrame     *_pFrame,
                                              /* [out] */ IMFrame_I **_ppFrameClone,
                                              /* [in] */ eMFrameClone _eCloneType,
                                              /* [in] */ eMFCC        _fccPixelFormat);

    DECLSPEC_XFGVIRT(IMFrames_I, FramesConvert_I)
    HRESULT(STDMETHODCALLTYPE *FramesConvert_I)(IMFrames_I             *This,
                                                /* [in] */ IMFrame     *_pFrameSrcL_F1,
                                                /* [in] */ IMFrame     *_pFrameSrcR_F2,
                                                /* [in] */ M_VID_PROPS *_pVidPropsDest,
                                                /* [out] */ IMFrame   **_ppFrameDest,
                                                /* [in] */ BSTR         _bsPropsList);

    DECLSPEC_XFGVIRT(IMFrames_I, AllocBuffer)
    HRESULT(STDMETHODCALLTYPE *AllocBuffer)(IMFrames_I           *This,
                                            /* [in] */ DWORD      _cbSize,
                                            /* [out] */ LONGLONG *_ppBuffer);

    DECLSPEC_XFGVIRT(IMFrames_I, ReleaseBuffer)
    HRESULT(STDMETHODCALLTYPE *ReleaseBuffer)(IMFrames_I         *This,
                                              /* [in] */ LONGLONG _pBuffer);

    END_INTERFACE
} IMFrames_IVtbl;

interface IMFrames_I { CONST_VTBL struct IMFrames_IVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFrames_I_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFrames_I_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFrames_I_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFrames_I_FramesMakeLocal(This, _ppFrame, _ppFrameLocal, _bMakeRef) \
                ((This)->lpVtbl->FramesMakeLocal(This, _ppFrame, _ppFrameLocal, _bMakeRef))

            #define IMFrames_I_FramesCreate(This, _cbVideoSize, _bsProps, _ppFrame) \
                ((This)->lpVtbl->FramesCreate(This, _cbVideoSize, _bsProps, _ppFrame))

            #define IMFrames_I_FramesCreateFromMem(This, _pVidProps, _pbVideo, _ppFrame, _bsPropsList) \
                ((This)->lpVtbl->FramesCreateFromMem(This, _pVidProps, _pbVideo, _ppFrame, _bsPropsList))

            #define IMFrames_I_FramesCreateFromFile(This, _bsFileName, _ppFrame, _bsPropsList) \
                ((This)->lpVtbl->FramesCreateFromFile(This, _bsFileName, _ppFrame, _bsPropsList))

            #define IMFrames_I_FramesCreateFromHBITMAP(This, _hBitmap, _ppFrame, _bsPropsList) \
                ((This)->lpVtbl->FramesCreateFromHBITMAP(This, _hBitmap, _ppFrame, _bsPropsList))

            #define IMFrames_I_FramesCreateFromSurface(This, _pSurface, _ppFrame, _bsPropsList) \
                ((This)->lpVtbl->FramesCreateFromSurface(This, _pSurface, _ppFrame, _bsPropsList))

            #define IMFrames_I_FramesCreate_I(This, _cbVideoSize, _cbAudioSize, _bsProps, _ppFrame) \
                ((This)->lpVtbl->FramesCreate_I(This, _cbVideoSize, _cbAudioSize, _bsProps, _ppFrame))

            #define IMFrames_I_FramesClone_I(This, _pFrame, _ppFrameClone, _eCloneType, _fccPixelFormat) \
                ((This)->lpVtbl->FramesClone_I(This, _pFrame, _ppFrameClone, _eCloneType, _fccPixelFormat))

            #define IMFrames_I_FramesConvert_I(This,             \
                                               _pFrameSrcL_F1,   \
                                               _pFrameSrcR_F2,   \
                                               _pVidPropsDest,   \
                                               _ppFrameDest,     \
                                               _bsPropsList)     \
                ((This)->lpVtbl->FramesConvert_I(This,           \
                                                 _pFrameSrcL_F1, \
                                                 _pFrameSrcR_F2, \
                                                 _pVidPropsDest, \
                                                 _ppFrameDest,   \
                                                 _bsPropsList))

            #define IMFrames_I_AllocBuffer(This, _cbSize, _ppBuffer) \
                ((This)->lpVtbl->AllocBuffer(This, _cbSize, _ppBuffer))

            #define IMFrames_I_ReleaseBuffer(This, _pBuffer) ((This)->lpVtbl->ReleaseBuffer(This, _pBuffer))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFrames_I_INTERFACE_DEFINED__ */

#ifndef __IMDevice_I_INTERFACE_DEFINED__
    #define __IMDevice_I_INTERFACE_DEFINED__

/* interface IMDevice_I */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMDevice_I;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F367A40-473F-4ad5-A5C2-428FE0C8E03E")
IMDevice_I: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsOwnDevice(
        /* [in] */ BSTR _bsType,
        /* [in] */ BSTR _bsName,
        /* [in] */ BSTR _bsMoniker) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDevices(
        /* [out] */ BSTR * _pbsXMLDevices,
        /* [out] */ BSTR * _pbsXMLCurrent) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDeviceOrProps(
        /* [in] */ BSTR _bsType,
        /* [in] */ BSTR _bsDeviceDesc,
        /* [out] */ BSTR * _pbsUpdatedDesc) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowDeviceProps(
        /* [in] */ BSTR     _bsType,
        /* [in] */ BSTR     _bsPropsType,
        /* [in] */ LONGLONG _lWndHandle) = 0;
};

    #else /* C style interface */

typedef struct IMDevice_IVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMDevice_I       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMDevice_I *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMDevice_I *This);

    DECLSPEC_XFGVIRT(IMDevice_I, IsOwnDevice)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *IsOwnDevice)(IMDevice_I     *This,
                                                               /* [in] */ BSTR _bsType,
                                                               /* [in] */ BSTR _bsName,
                                                               /* [in] */ BSTR _bsMoniker);

    DECLSPEC_XFGVIRT(IMDevice_I, GetDevices)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetDevices)(IMDevice_I       *This,
                                                              /* [out] */ BSTR *_pbsXMLDevices,
                                                              /* [out] */ BSTR *_pbsXMLCurrent);

    DECLSPEC_XFGVIRT(IMDevice_I, SetDeviceOrProps)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SetDeviceOrProps)(IMDevice_I       *This,
                                                                    /* [in] */ BSTR   _bsType,
                                                                    /* [in] */ BSTR   _bsDeviceDesc,
                                                                    /* [out] */ BSTR *_pbsUpdatedDesc);

    DECLSPEC_XFGVIRT(IMDevice_I, ShowDeviceProps)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ShowDeviceProps)(IMDevice_I         *This,
                                                                   /* [in] */ BSTR     _bsType,
                                                                   /* [in] */ BSTR     _bsPropsType,
                                                                   /* [in] */ LONGLONG _lWndHandle);

    END_INTERFACE
} IMDevice_IVtbl;

interface IMDevice_I { CONST_VTBL struct IMDevice_IVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMDevice_I_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMDevice_I_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMDevice_I_Release(This) ((This)->lpVtbl->Release(This))

            #define IMDevice_I_IsOwnDevice(This, _bsType, _bsName, _bsMoniker) \
                ((This)->lpVtbl->IsOwnDevice(This, _bsType, _bsName, _bsMoniker))

            #define IMDevice_I_GetDevices(This, _pbsXMLDevices, _pbsXMLCurrent) \
                ((This)->lpVtbl->GetDevices(This, _pbsXMLDevices, _pbsXMLCurrent))

            #define IMDevice_I_SetDeviceOrProps(This, _bsType, _bsDeviceDesc, _pbsUpdatedDesc) \
                ((This)->lpVtbl->SetDeviceOrProps(This, _bsType, _bsDeviceDesc, _pbsUpdatedDesc))

            #define IMDevice_I_ShowDeviceProps(This, _bsType, _bsPropsType, _lWndHandle) \
                ((This)->lpVtbl->ShowDeviceProps(This, _bsType, _bsPropsType, _lWndHandle))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMDevice_I_INTERFACE_DEFINED__ */

#ifndef __IMObject_I_INTERFACE_DEFINED__
    #define __IMObject_I_INTERFACE_DEFINED__

/* interface IMObject_I */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMObject_I;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366A00-473F-4ad5-A5C2-428FE0C8E03E")
IMObject_I: public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE Init(
        /* [in] */ IUnknown * _pReceiverOrSender) = 0;

    virtual HRESULT STDMETHODCALLTYPE Close(void) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetInterface(
        /* [in] */ IUnknown * _pReceiverOrSender,
        /* [in] */ BOOL _bNoEOS) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMediaProps(
        /* [out] */ M_VID_PROPS * _pVidProps,
        /* [out] */ M_AUD_PROPS * _pAudProps) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetState(
        /* [out] */ eMState * _peState,
        /* [out] */ IUnknown * *_ppReceiverOrSender) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInternalInterface(
        /* [in] */ BSTR _bsType,
        /* [out] */ IUnknown * *_ppObject) = 0;
};

    #else /* C style interface */

typedef struct IMObject_IVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMObject_I       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMObject_I *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMObject_I *This);

    DECLSPEC_XFGVIRT(IMObject_I, Init)
    HRESULT(STDMETHODCALLTYPE *Init)(IMObject_I          *This,
                                     /* [in] */ IUnknown *_pReceiverOrSender);

    DECLSPEC_XFGVIRT(IMObject_I, Close)
    HRESULT(STDMETHODCALLTYPE *Close)(IMObject_I *This);

    DECLSPEC_XFGVIRT(IMObject_I, SetInterface)
    HRESULT(STDMETHODCALLTYPE *SetInterface)(IMObject_I          *This,
                                             /* [in] */ IUnknown *_pReceiverOrSender,
                                             /* [in] */ BOOL      _bNoEOS);

    DECLSPEC_XFGVIRT(IMObject_I, GetMediaProps)
    HRESULT(STDMETHODCALLTYPE *GetMediaProps)(IMObject_I              *This,
                                              /* [out] */ M_VID_PROPS *_pVidProps,
                                              /* [out] */ M_AUD_PROPS *_pAudProps);

    DECLSPEC_XFGVIRT(IMObject_I, GetState)
    HRESULT(STDMETHODCALLTYPE *GetState)(IMObject_I            *This,
                                         /* [out] */ eMState   *_peState,
                                         /* [out] */ IUnknown **_ppReceiverOrSender);

    DECLSPEC_XFGVIRT(IMObject_I, GetInternalInterface)
    HRESULT(STDMETHODCALLTYPE *GetInternalInterface)(IMObject_I            *This,
                                                     /* [in] */ BSTR        _bsType,
                                                     /* [out] */ IUnknown **_ppObject);

    END_INTERFACE
} IMObject_IVtbl;

interface IMObject_I { CONST_VTBL struct IMObject_IVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMObject_I_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMObject_I_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMObject_I_Release(This) ((This)->lpVtbl->Release(This))

            #define IMObject_I_Init(This, _pReceiverOrSender) ((This)->lpVtbl->Init(This, _pReceiverOrSender))

            #define IMObject_I_Close(This) ((This)->lpVtbl->Close(This))

            #define IMObject_I_SetInterface(This, _pReceiverOrSender, _bNoEOS) \
                ((This)->lpVtbl->SetInterface(This, _pReceiverOrSender, _bNoEOS))

            #define IMObject_I_GetMediaProps(This, _pVidProps, _pAudProps) \
                ((This)->lpVtbl->GetMediaProps(This, _pVidProps, _pAudProps))

            #define IMObject_I_GetState(This, _peState, _ppReceiverOrSender) \
                ((This)->lpVtbl->GetState(This, _peState, _ppReceiverOrSender))

            #define IMObject_I_GetInternalInterface(This, _bsType, _ppObject) \
                ((This)->lpVtbl->GetInternalInterface(This, _bsType, _ppObject))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMObject_I_INTERFACE_DEFINED__ */

#ifndef __IMSender_I_INTERFACE_DEFINED__
    #define __IMSender_I_INTERFACE_DEFINED__

/* interface IMSender_I */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMSender_I;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F367A05-473F-4ad5-A5C2-428FE0C8E03E")
IMSender_I: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SenderChannelAdd(
        /* [in] */ IUnknown * _pReceiver,
        /* [in] */ BSTR _bsChannelID,
        /* [in] */ BSTR _bsXMLParam,
        /* [out] */ BOOL * _pbSenderRunning) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SenderChannelRemove(
        /* [in] */ BSTR _bsChannelID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SenderChannelGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SenderChannelGetByIndex(
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsChannelID,
        /* [out] */ BSTR *_pbsXMLParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SenderGetName(
        /* [out] */ BSTR * _pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SenderGetMediaProps(
        /* [out] */ M_VID_PROPS * _pVidProps,
        /* [out] */ M_AUD_PROPS * _pAudProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SenderCallbackAdd(
        /* [in] */ IUnknown * _pCallback,
        /* [in] */ LONGLONG _llCallbackUserData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SenderCallbackRemove(
        /* [in] */ IUnknown * _pCallback) = 0;
};

    #else /* C style interface */

typedef struct IMSender_IVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMSender_I       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMSender_I *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMSender_I *This);

    DECLSPEC_XFGVIRT(IMSender_I, SenderChannelAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SenderChannelAdd)(IMSender_I          *This,
                                                                    /* [in] */ IUnknown *_pReceiver,
                                                                    /* [in] */ BSTR      _bsChannelID,
                                                                    /* [in] */ BSTR      _bsXMLParam,
                                                                    /* [out] */ BOOL    *_pbSenderRunning);

    DECLSPEC_XFGVIRT(IMSender_I, SenderChannelRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SenderChannelRemove)(IMSender_I     *This,
                                                                       /* [in] */ BSTR _bsChannelID);

    DECLSPEC_XFGVIRT(IMSender_I, SenderChannelGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SenderChannelGetCount)(IMSender_I      *This,
                                                                         /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMSender_I, SenderChannelGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SenderChannelGetByIndex)(IMSender_I       *This,
                                                                           /* [in] */ int    _nIndex,
                                                                           /* [out] */ BSTR *_pbsChannelID,
                                                                           /* [out] */ BSTR *_pbsXMLParam);

    DECLSPEC_XFGVIRT(IMSender_I, SenderGetName)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SenderGetName)(IMSender_I       *This,
                                                                 /* [out] */ BSTR *_pbsName);

    DECLSPEC_XFGVIRT(IMSender_I, SenderGetMediaProps)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SenderGetMediaProps)(IMSender_I              *This,
                                                                       /* [out] */ M_VID_PROPS *_pVidProps,
                                                                       /* [out] */ M_AUD_PROPS *_pAudProps);

    DECLSPEC_XFGVIRT(IMSender_I, SenderCallbackAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SenderCallbackAdd)(IMSender_I          *This,
                                                                     /* [in] */ IUnknown *_pCallback,
                                                                     /* [in] */ LONGLONG  _llCallbackUserData);

    DECLSPEC_XFGVIRT(IMSender_I, SenderCallbackRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SenderCallbackRemove)(IMSender_I          *This,
                                                                        /* [in] */ IUnknown *_pCallback);

    END_INTERFACE
} IMSender_IVtbl;

interface IMSender_I { CONST_VTBL struct IMSender_IVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMSender_I_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMSender_I_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMSender_I_Release(This) ((This)->lpVtbl->Release(This))

            #define IMSender_I_SenderChannelAdd(This, _pReceiver, _bsChannelID, _bsXMLParam, _pbSenderRunning) \
                ((This)->lpVtbl->SenderChannelAdd(This, _pReceiver, _bsChannelID, _bsXMLParam, _pbSenderRunning))

            #define IMSender_I_SenderChannelRemove(This, _bsChannelID) \
                ((This)->lpVtbl->SenderChannelRemove(This, _bsChannelID))

            #define IMSender_I_SenderChannelGetCount(This, _pnCount) \
                ((This)->lpVtbl->SenderChannelGetCount(This, _pnCount))

            #define IMSender_I_SenderChannelGetByIndex(This, _nIndex, _pbsChannelID, _pbsXMLParam) \
                ((This)->lpVtbl->SenderChannelGetByIndex(This, _nIndex, _pbsChannelID, _pbsXMLParam))

            #define IMSender_I_SenderGetName(This, _pbsName) ((This)->lpVtbl->SenderGetName(This, _pbsName))

            #define IMSender_I_SenderGetMediaProps(This, _pVidProps, _pAudProps) \
                ((This)->lpVtbl->SenderGetMediaProps(This, _pVidProps, _pAudProps))

            #define IMSender_I_SenderCallbackAdd(This, _pCallback, _llCallbackUserData) \
                ((This)->lpVtbl->SenderCallbackAdd(This, _pCallback, _llCallbackUserData))

            #define IMSender_I_SenderCallbackRemove(This, _pCallback) \
                ((This)->lpVtbl->SenderCallbackRemove(This, _pCallback))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMSender_I_INTERFACE_DEFINED__ */

#ifndef __IMReceiver_I_INTERFACE_DEFINED__
    #define __IMReceiver_I_INTERFACE_DEFINED__

/* interface IMReceiver_I */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMReceiver_I;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F367A10-473F-4ad5-A5C2-428FE0C8E03E")
IMReceiver_I: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MediaReceive(
        /* [in] */ BSTR _bsChannelID,
        /* [in] */ IUnknown * _pSender,
        /* [in] */ IMFrame_I * _pFrame) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MediaEnd(
        /* [in] */ BSTR _bsChannelID,
        /* [in] */ IUnknown * _pSender,
        /* [in] */ DWORD _dwFlags) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MediaFlush(
        /* [in] */ BSTR _bsChannelID,
        /* [in] */ IUnknown * _pSender,
        /* [in] */ DWORD _dwFlags) = 0;
};

    #else /* C style interface */

typedef struct IMReceiver_IVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMReceiver_I     *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMReceiver_I *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMReceiver_I *This);

    DECLSPEC_XFGVIRT(IMReceiver_I, MediaReceive)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MediaReceive)(IMReceiver_I         *This,
                                                                /* [in] */ BSTR       _bsChannelID,
                                                                /* [in] */ IUnknown  *_pSender,
                                                                /* [in] */ IMFrame_I *_pFrame);

    DECLSPEC_XFGVIRT(IMReceiver_I, MediaEnd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MediaEnd)(IMReceiver_I        *This,
                                                            /* [in] */ BSTR      _bsChannelID,
                                                            /* [in] */ IUnknown *_pSender,
                                                            /* [in] */ DWORD     _dwFlags);

    DECLSPEC_XFGVIRT(IMReceiver_I, MediaFlush)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MediaFlush)(IMReceiver_I        *This,
                                                              /* [in] */ BSTR      _bsChannelID,
                                                              /* [in] */ IUnknown *_pSender,
                                                              /* [in] */ DWORD     _dwFlags);

    END_INTERFACE
} IMReceiver_IVtbl;

interface IMReceiver_I { CONST_VTBL struct IMReceiver_IVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMReceiver_I_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMReceiver_I_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMReceiver_I_Release(This) ((This)->lpVtbl->Release(This))

            #define IMReceiver_I_MediaReceive(This, _bsChannelID, _pSender, _pFrame) \
                ((This)->lpVtbl->MediaReceive(This, _bsChannelID, _pSender, _pFrame))

            #define IMReceiver_I_MediaEnd(This, _bsChannelID, _pSender, _dwFlags) \
                ((This)->lpVtbl->MediaEnd(This, _bsChannelID, _pSender, _dwFlags))

            #define IMReceiver_I_MediaFlush(This, _bsChannelID, _pSender, _dwFlags) \
                ((This)->lpVtbl->MediaFlush(This, _bsChannelID, _pSender, _dwFlags))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMReceiver_I_INTERFACE_DEFINED__ */

#ifndef __IMFReceiver_INTERFACE_DEFINED__
    #define __IMFReceiver_INTERFACE_DEFINED__

/* interface IMFReceiver */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFReceiver;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("CD799F87-3FD4-4237-92D4-D187B588D999")
IMFReceiver: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReceiverFramePut(
        /* [in] */ IMFFrame * _pFrame,
        /* [in] */ REFERENCE_TIME _rtMaxWait,
        /* [in] */ BSTR           _bsHints) = 0;
};

    #else /* C style interface */

typedef struct IMFReceiverVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFReceiver      *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFReceiver *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFReceiver *This);

    DECLSPEC_XFGVIRT(IMFReceiver, ReceiverFramePut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiverFramePut)(IMFReceiver              *This,
                                                                    /* [in] */ IMFFrame      *_pFrame,
                                                                    /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                    /* [in] */ BSTR           _bsHints);

    END_INTERFACE
} IMFReceiverVtbl;

interface IMFReceiver { CONST_VTBL struct IMFReceiverVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFReceiver_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFReceiver_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFReceiver_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFReceiver_ReceiverFramePut(This, _pFrame, _rtMaxWait, _bsHints) \
                ((This)->lpVtbl->ReceiverFramePut(This, _pFrame, _rtMaxWait, _bsHints))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFReceiver_INTERFACE_DEFINED__ */

#ifndef __IMFReceiverVB6_INTERFACE_DEFINED__
    #define __IMFReceiverVB6_INTERFACE_DEFINED__

/* interface IMFReceiverVB6 */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFReceiverVB6;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("CD799F88-3FD4-4237-92D4-D187B588D999")
IMFReceiverVB6: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReceiverFramePutVB6(
        /* [in] */ IMFFrame * _pFrame,
        /* [in] */ int  _nMaxWaitMsec,
        /* [in] */ BSTR _bsHints) = 0;
};

    #else /* C style interface */

typedef struct IMFReceiverVB6Vtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFReceiverVB6   *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFReceiverVB6 *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFReceiverVB6 *This);

    DECLSPEC_XFGVIRT(IMFReceiverVB6, ReceiverFramePutVB6)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiverFramePutVB6)(IMFReceiverVB6      *This,
                                                                       /* [in] */ IMFFrame *_pFrame,
                                                                       /* [in] */ int       _nMaxWaitMsec,
                                                                       /* [in] */ BSTR      _bsHints);

    END_INTERFACE
} IMFReceiverVB6Vtbl;

interface IMFReceiverVB6 { CONST_VTBL struct IMFReceiverVB6Vtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFReceiverVB6_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFReceiverVB6_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFReceiverVB6_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFReceiverVB6_ReceiverFramePutVB6(This, _pFrame, _nMaxWaitMsec, _bsHints) \
                ((This)->lpVtbl->ReceiverFramePutVB6(This, _pFrame, _nMaxWaitMsec, _bsHints))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFReceiverVB6_INTERFACE_DEFINED__ */

#ifndef __IMFSink_INTERFACE_DEFINED__
    #define __IMFSink_INTERFACE_DEFINED__

/* interface IMFSink */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFSink;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("10DB4AB7-89AF-4CD2-90A4-FB91B32DB3E0")
IMFSink: public IMFReceiver
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SinkInit(
        /* [in] */ BSTR _bsSinkName,
        /* [in] */ BSTR _bsVirtualSourceName,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SinkClose(void) = 0;
};

    #else /* C style interface */

typedef struct IMFSinkVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFSink          *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFSink *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFSink *This);

    DECLSPEC_XFGVIRT(IMFReceiver, ReceiverFramePut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiverFramePut)(IMFSink                  *This,
                                                                    /* [in] */ IMFFrame      *_pFrame,
                                                                    /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                    /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFSink, SinkInit)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SinkInit)(IMFSink        *This,
                                                            /* [in] */ BSTR _bsSinkName,
                                                            /* [in] */ BSTR _bsVirtualSourceName,
                                                            /* [in] */ BSTR _bsProps);

    DECLSPEC_XFGVIRT(IMFSink, SinkClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SinkClose)(IMFSink *This);

    END_INTERFACE
} IMFSinkVtbl;

interface IMFSink { CONST_VTBL struct IMFSinkVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFSink_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFSink_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFSink_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFSink_ReceiverFramePut(This, _pFrame, _rtMaxWait, _bsHints) \
                ((This)->lpVtbl->ReceiverFramePut(This, _pFrame, _rtMaxWait, _bsHints))

            #define IMFSink_SinkInit(This, _bsSinkName, _bsVirtualSourceName, _bsProps) \
                ((This)->lpVtbl->SinkInit(This, _bsSinkName, _bsVirtualSourceName, _bsProps))

            #define IMFSink_SinkClose(This) ((This)->lpVtbl->SinkClose(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFSink_INTERFACE_DEFINED__ */

#ifndef __IMFPipe_INTERFACE_DEFINED__
    #define __IMFPipe_INTERFACE_DEFINED__

/* interface IMFPipe */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFPipe;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FCCF24-887B-4AEB-B30C-408E98E6B397")
IMFPipe: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipeInfoGet(
        /* [out] */ BSTR * pbsPipeName,
        /* [in] */ BSTR bsChannel,
        /* [out] */ MF_PIPE_INFO * pPipeInfo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipeConnectedGetByIndex(
        /* [in] */ int        nIndex,
        /* [out] */ IMFPipe **ppPipe) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipeCreate(
        /* [in] */ BSTR bsPipeName,
        /* [in] */ BSTR bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipeOpen(
        /* [in] */ BSTR bsPipeName,
        /* [in] */ int  nMaxBuffers,
        /* [in] */ BSTR bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipeOpenDirect(
        /* [in] */ IMFPipe * pSourcePipeObj,
        /* [in] */ int  nMaxBuffers,
        /* [in] */ BSTR bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipePut(
        /* [in] */ BSTR bsChannel,
        /* [in] */ IUnknown * pObj,
        /* [in] */ REFERENCE_TIME rtMaxWait,
        /* [in] */ BSTR           bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipeGet(
        /* [in] */ BSTR bsChannel,
        /* [out] */ IUnknown * *ppObj,
        /* [in] */ REFERENCE_TIME rtMaxWait,
        /* [in] */ BSTR           bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipePeek(
        /* [in] */ BSTR           bsChannel,
        /* [in] */ int            nIndex,
        /* [out] */ IUnknown    **ppObj,
        /* [in] */ REFERENCE_TIME rtMaxWait,
        /* [in] */ BSTR           bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipeMessagePut(
        /* [in] */ BSTR bsChannel,
        /* [in] */ BSTR bsEventName,
        /* [in] */ BSTR bsEventParam,
        /* [in] */ IUnknown * pEventObject,
        /* [in] */ REFERENCE_TIME rtMaxWait) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipeMessageGet(
        /* [in] */ BSTR bsChannel,
        /* [out] */ BSTR * pbsEventName,
        /* [out] */ BSTR * pbsEventParam,
        /* [out] */ IUnknown * *ppEventObject,
        /* [in] */ REFERENCE_TIME rtMaxWait) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipeFlush(
        /* [in] */ BSTR          bsChannel,
        /* [in] */ eMFFlashFlags _eFlashFlags) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipeClose(void) = 0;
};

    #else /* C style interface */

typedef struct IMFPipeVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFPipe          *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFPipe *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFPipe *This);

    DECLSPEC_XFGVIRT(IMFPipe, PipeInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeInfoGet)(IMFPipe                  *This,
                                                               /* [out] */ BSTR         *pbsPipeName,
                                                               /* [in] */ BSTR           bsChannel,
                                                               /* [out] */ MF_PIPE_INFO *pPipeInfo);

    DECLSPEC_XFGVIRT(IMFPipe, PipeConnectedGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeConnectedGetByIndex)(IMFPipe              *This,
                                                                           /* [in] */ int        nIndex,
                                                                           /* [out] */ IMFPipe **ppPipe);

    DECLSPEC_XFGVIRT(IMFPipe, PipeCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeCreate)(IMFPipe        *This,
                                                              /* [in] */ BSTR bsPipeName,
                                                              /* [in] */ BSTR bsHints);

    DECLSPEC_XFGVIRT(IMFPipe, PipeOpen)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeOpen)(IMFPipe        *This,
                                                            /* [in] */ BSTR bsPipeName,
                                                            /* [in] */ int  nMaxBuffers,
                                                            /* [in] */ BSTR bsHints);

    DECLSPEC_XFGVIRT(IMFPipe, PipeOpenDirect)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeOpenDirect)(IMFPipe            *This,
                                                                  /* [in] */ IMFPipe *pSourcePipeObj,
                                                                  /* [in] */ int      nMaxBuffers,
                                                                  /* [in] */ BSTR     bsHints);

    DECLSPEC_XFGVIRT(IMFPipe, PipePut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipePut)(IMFPipe                  *This,
                                                           /* [in] */ BSTR           bsChannel,
                                                           /* [in] */ IUnknown      *pObj,
                                                           /* [in] */ REFERENCE_TIME rtMaxWait,
                                                           /* [in] */ BSTR           bsHints);

    DECLSPEC_XFGVIRT(IMFPipe, PipeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeGet)(IMFPipe                  *This,
                                                           /* [in] */ BSTR           bsChannel,
                                                           /* [out] */ IUnknown    **ppObj,
                                                           /* [in] */ REFERENCE_TIME rtMaxWait,
                                                           /* [in] */ BSTR           bsHints);

    DECLSPEC_XFGVIRT(IMFPipe, PipePeek)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipePeek)(IMFPipe                  *This,
                                                            /* [in] */ BSTR           bsChannel,
                                                            /* [in] */ int            nIndex,
                                                            /* [out] */ IUnknown    **ppObj,
                                                            /* [in] */ REFERENCE_TIME rtMaxWait,
                                                            /* [in] */ BSTR           bsHints);

    DECLSPEC_XFGVIRT(IMFPipe, PipeMessagePut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeMessagePut)(IMFPipe                  *This,
                                                                  /* [in] */ BSTR           bsChannel,
                                                                  /* [in] */ BSTR           bsEventName,
                                                                  /* [in] */ BSTR           bsEventParam,
                                                                  /* [in] */ IUnknown      *pEventObject,
                                                                  /* [in] */ REFERENCE_TIME rtMaxWait);

    DECLSPEC_XFGVIRT(IMFPipe, PipeMessageGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeMessageGet)(IMFPipe                  *This,
                                                                  /* [in] */ BSTR           bsChannel,
                                                                  /* [out] */ BSTR         *pbsEventName,
                                                                  /* [out] */ BSTR         *pbsEventParam,
                                                                  /* [out] */ IUnknown    **ppEventObject,
                                                                  /* [in] */ REFERENCE_TIME rtMaxWait);

    DECLSPEC_XFGVIRT(IMFPipe, PipeFlush)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeFlush)(IMFPipe                 *This,
                                                             /* [in] */ BSTR          bsChannel,
                                                             /* [in] */ eMFFlashFlags _eFlashFlags);

    DECLSPEC_XFGVIRT(IMFPipe, PipeClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeClose)(IMFPipe *This);

    END_INTERFACE
} IMFPipeVtbl;

interface IMFPipe { CONST_VTBL struct IMFPipeVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFPipe_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFPipe_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFPipe_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFPipe_PipeInfoGet(This, pbsPipeName, bsChannel, pPipeInfo) \
                ((This)->lpVtbl->PipeInfoGet(This, pbsPipeName, bsChannel, pPipeInfo))

            #define IMFPipe_PipeConnectedGetByIndex(This, nIndex, ppPipe) \
                ((This)->lpVtbl->PipeConnectedGetByIndex(This, nIndex, ppPipe))

            #define IMFPipe_PipeCreate(This, bsPipeName, bsHints) \
                ((This)->lpVtbl->PipeCreate(This, bsPipeName, bsHints))

            #define IMFPipe_PipeOpen(This, bsPipeName, nMaxBuffers, bsHints) \
                ((This)->lpVtbl->PipeOpen(This, bsPipeName, nMaxBuffers, bsHints))

            #define IMFPipe_PipeOpenDirect(This, pSourcePipeObj, nMaxBuffers, bsHints) \
                ((This)->lpVtbl->PipeOpenDirect(This, pSourcePipeObj, nMaxBuffers, bsHints))

            #define IMFPipe_PipePut(This, bsChannel, pObj, rtMaxWait, bsHints) \
                ((This)->lpVtbl->PipePut(This, bsChannel, pObj, rtMaxWait, bsHints))

            #define IMFPipe_PipeGet(This, bsChannel, ppObj, rtMaxWait, bsHints) \
                ((This)->lpVtbl->PipeGet(This, bsChannel, ppObj, rtMaxWait, bsHints))

            #define IMFPipe_PipePeek(This, bsChannel, nIndex, ppObj, rtMaxWait, bsHints) \
                ((This)->lpVtbl->PipePeek(This, bsChannel, nIndex, ppObj, rtMaxWait, bsHints))

            #define IMFPipe_PipeMessagePut(This, bsChannel, bsEventName, bsEventParam, pEventObject, rtMaxWait) \
                ((This)->lpVtbl->PipeMessagePut(This, bsChannel, bsEventName, bsEventParam, pEventObject, rtMaxWait))

            #define IMFPipe_PipeMessageGet(This, bsChannel, pbsEventName, pbsEventParam, ppEventObject, rtMaxWait) \
                ((This)->lpVtbl->PipeMessageGet(This, bsChannel, pbsEventName, pbsEventParam, ppEventObject, rtMaxWait))

            #define IMFPipe_PipeFlush(This, bsChannel, _eFlashFlags) \
                ((This)->lpVtbl->PipeFlush(This, bsChannel, _eFlashFlags))

            #define IMFPipe_PipeClose(This) ((This)->lpVtbl->PipeClose(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFPipe_INTERFACE_DEFINED__ */

#ifndef __IMFBasicStream_INTERFACE_DEFINED__
    #define __IMFBasicStream_INTERFACE_DEFINED__

/* interface IMFBasicStream */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFBasicStream;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FCCF27-887B-4AEB-B30C-408E98E6B397")
IMFBasicStream: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamWrite(
        /* [in] */ LONG           cbDataWrite,
        /* [in] */ LONGLONG       lpDataWrite,
        /* [in] */ REFERENCE_TIME rtMaxWait,
        /* [out] */ LONG * pcbDataWritten,
        /* [in] */ BSTR bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamRead(
        /* [in] */ LONG           cbDataRead,
        /* [in] */ LONGLONG       lpDataRead,
        /* [in] */ REFERENCE_TIME rtMaxWait,
        /* [out] */ LONG * pcbDataRead,
        /* [in] */ BSTR bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamPosSet(
        /* [in] */ LONGLONG llSeekPos,
        /* [in] */ ULONG    _ulWhence,
        /* [in] */ BSTR     bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamPosGet(
        /* [out] */ LONGLONG * pllSeekPos) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamMinMaxGet(
        /* [out] */ LONGLONG * pllMinSeekPos,
        /* [out] */ LONGLONG * pllMaxSeekPos) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StreamAbort(void) = 0;
};

    #else /* C style interface */

typedef struct IMFBasicStreamVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFBasicStream   *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFBasicStream *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFBasicStream *This);

    DECLSPEC_XFGVIRT(IMFBasicStream, StreamWrite)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamWrite)(IMFBasicStream           *This,
                                                               /* [in] */ LONG           cbDataWrite,
                                                               /* [in] */ LONGLONG       lpDataWrite,
                                                               /* [in] */ REFERENCE_TIME rtMaxWait,
                                                               /* [out] */ LONG         *pcbDataWritten,
                                                               /* [in] */ BSTR           bsHints);

    DECLSPEC_XFGVIRT(IMFBasicStream, StreamRead)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamRead)(IMFBasicStream           *This,
                                                              /* [in] */ LONG           cbDataRead,
                                                              /* [in] */ LONGLONG       lpDataRead,
                                                              /* [in] */ REFERENCE_TIME rtMaxWait,
                                                              /* [out] */ LONG         *pcbDataRead,
                                                              /* [in] */ BSTR           bsHints);

    DECLSPEC_XFGVIRT(IMFBasicStream, StreamPosSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamPosSet)(IMFBasicStream     *This,
                                                                /* [in] */ LONGLONG llSeekPos,
                                                                /* [in] */ ULONG    _ulWhence,
                                                                /* [in] */ BSTR     bsHints);

    DECLSPEC_XFGVIRT(IMFBasicStream, StreamPosGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamPosGet)(IMFBasicStream       *This,
                                                                /* [out] */ LONGLONG *pllSeekPos);

    DECLSPEC_XFGVIRT(IMFBasicStream, StreamMinMaxGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamMinMaxGet)(IMFBasicStream       *This,
                                                                   /* [out] */ LONGLONG *pllMinSeekPos,
                                                                   /* [out] */ LONGLONG *pllMaxSeekPos);

    DECLSPEC_XFGVIRT(IMFBasicStream, StreamAbort)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *StreamAbort)(IMFBasicStream *This);

    END_INTERFACE
} IMFBasicStreamVtbl;

interface IMFBasicStream { CONST_VTBL struct IMFBasicStreamVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFBasicStream_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFBasicStream_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFBasicStream_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFBasicStream_StreamWrite(This, cbDataWrite, lpDataWrite, rtMaxWait, pcbDataWritten, bsHints) \
                ((This)->lpVtbl->StreamWrite(This, cbDataWrite, lpDataWrite, rtMaxWait, pcbDataWritten, bsHints))

            #define IMFBasicStream_StreamRead(This, cbDataRead, lpDataRead, rtMaxWait, pcbDataRead, bsHints) \
                ((This)->lpVtbl->StreamRead(This, cbDataRead, lpDataRead, rtMaxWait, pcbDataRead, bsHints))

            #define IMFBasicStream_StreamPosSet(This, llSeekPos, _ulWhence, bsHints) \
                ((This)->lpVtbl->StreamPosSet(This, llSeekPos, _ulWhence, bsHints))

            #define IMFBasicStream_StreamPosGet(This, pllSeekPos) ((This)->lpVtbl->StreamPosGet(This, pllSeekPos))

            #define IMFBasicStream_StreamMinMaxGet(This, pllMinSeekPos, pllMaxSeekPos) \
                ((This)->lpVtbl->StreamMinMaxGet(This, pllMinSeekPos, pllMaxSeekPos))

            #define IMFBasicStream_StreamAbort(This) ((This)->lpVtbl->StreamAbort(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFBasicStream_INTERFACE_DEFINED__ */

#ifndef __IMFPipes_INTERFACE_DEFINED__
    #define __IMFPipes_INTERFACE_DEFINED__

/* interface IMFPipes */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFPipes;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FCCF22-887B-4AEB-B30C-408E98E6B397")
IMFPipes: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipesGetCount(
        /* [in] */ BSTR  bsProtocol,
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipesGetByIndex(
        /* [in] */ BSTR       bsProtocol,
        /* [in] */ int        nIndex,
        /* [out] */ BSTR     *_pbsPipeName,
        /* [out] */ IMFPipe **_ppPipeObj) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipesGetByID(
        /* [in] */ BSTR bsPipeName,
        /* [out] */ IMFPipe * *_ppPipeObj) = 0;
};

    #else /* C style interface */

typedef struct IMFPipesVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFPipes         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFPipes *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFPipes *This);

    DECLSPEC_XFGVIRT(IMFPipes, PipesGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipesGetCount)(IMFPipes        *This,
                                                                 /* [in] */ BSTR  bsProtocol,
                                                                 /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMFPipes, PipesGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipesGetByIndex)(IMFPipes             *This,
                                                                   /* [in] */ BSTR       bsProtocol,
                                                                   /* [in] */ int        nIndex,
                                                                   /* [out] */ BSTR     *_pbsPipeName,
                                                                   /* [out] */ IMFPipe **_ppPipeObj);

    DECLSPEC_XFGVIRT(IMFPipes, PipesGetByID)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipesGetByID)(IMFPipes             *This,
                                                                /* [in] */ BSTR       bsPipeName,
                                                                /* [out] */ IMFPipe **_ppPipeObj);

    END_INTERFACE
} IMFPipesVtbl;

interface IMFPipes { CONST_VTBL struct IMFPipesVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFPipes_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFPipes_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFPipes_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFPipes_PipesGetCount(This, bsProtocol, _pnCount) \
                ((This)->lpVtbl->PipesGetCount(This, bsProtocol, _pnCount))

            #define IMFPipes_PipesGetByIndex(This, bsProtocol, nIndex, _pbsPipeName, _ppPipeObj) \
                ((This)->lpVtbl->PipesGetByIndex(This, bsProtocol, nIndex, _pbsPipeName, _ppPipeObj))

            #define IMFPipes_PipesGetByID(This, bsPipeName, _ppPipeObj) \
                ((This)->lpVtbl->PipesGetByID(This, bsPipeName, _ppPipeObj))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFPipes_INTERFACE_DEFINED__ */

#ifndef __IMFPipe_Source_INTERFACE_DEFINED__
    #define __IMFPipe_Source_INTERFACE_DEFINED__

/* interface IMFPipe_Source */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFPipe_Source;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FCCF23-887B-4AEB-B30C-408E98E6B397")
IMFPipe_Source: public IMFPipe
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PipeReceiverAdd(
        /* [out] */ IMFPipe * *ppReader,
        /* [in] */ int  nMaxBuffers,
        /* [in] */ BOOL bBlockMode,
        /* [in] */ BSTR bsHints) = 0;
};

    #else /* C style interface */

typedef struct IMFPipe_SourceVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFPipe_Source   *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFPipe_Source *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFPipe_Source *This);

    DECLSPEC_XFGVIRT(IMFPipe, PipeInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeInfoGet)(IMFPipe_Source           *This,
                                                               /* [out] */ BSTR         *pbsPipeName,
                                                               /* [in] */ BSTR           bsChannel,
                                                               /* [out] */ MF_PIPE_INFO *pPipeInfo);

    DECLSPEC_XFGVIRT(IMFPipe, PipeConnectedGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeConnectedGetByIndex)(IMFPipe_Source       *This,
                                                                           /* [in] */ int        nIndex,
                                                                           /* [out] */ IMFPipe **ppPipe);

    DECLSPEC_XFGVIRT(IMFPipe, PipeCreate)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeCreate)(IMFPipe_Source *This,
                                                              /* [in] */ BSTR bsPipeName,
                                                              /* [in] */ BSTR bsHints);

    DECLSPEC_XFGVIRT(IMFPipe, PipeOpen)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeOpen)(IMFPipe_Source *This,
                                                            /* [in] */ BSTR bsPipeName,
                                                            /* [in] */ int  nMaxBuffers,
                                                            /* [in] */ BSTR bsHints);

    DECLSPEC_XFGVIRT(IMFPipe, PipeOpenDirect)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeOpenDirect)(IMFPipe_Source     *This,
                                                                  /* [in] */ IMFPipe *pSourcePipeObj,
                                                                  /* [in] */ int      nMaxBuffers,
                                                                  /* [in] */ BSTR     bsHints);

    DECLSPEC_XFGVIRT(IMFPipe, PipePut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipePut)(IMFPipe_Source           *This,
                                                           /* [in] */ BSTR           bsChannel,
                                                           /* [in] */ IUnknown      *pObj,
                                                           /* [in] */ REFERENCE_TIME rtMaxWait,
                                                           /* [in] */ BSTR           bsHints);

    DECLSPEC_XFGVIRT(IMFPipe, PipeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeGet)(IMFPipe_Source           *This,
                                                           /* [in] */ BSTR           bsChannel,
                                                           /* [out] */ IUnknown    **ppObj,
                                                           /* [in] */ REFERENCE_TIME rtMaxWait,
                                                           /* [in] */ BSTR           bsHints);

    DECLSPEC_XFGVIRT(IMFPipe, PipePeek)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipePeek)(IMFPipe_Source           *This,
                                                            /* [in] */ BSTR           bsChannel,
                                                            /* [in] */ int            nIndex,
                                                            /* [out] */ IUnknown    **ppObj,
                                                            /* [in] */ REFERENCE_TIME rtMaxWait,
                                                            /* [in] */ BSTR           bsHints);

    DECLSPEC_XFGVIRT(IMFPipe, PipeMessagePut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeMessagePut)(IMFPipe_Source           *This,
                                                                  /* [in] */ BSTR           bsChannel,
                                                                  /* [in] */ BSTR           bsEventName,
                                                                  /* [in] */ BSTR           bsEventParam,
                                                                  /* [in] */ IUnknown      *pEventObject,
                                                                  /* [in] */ REFERENCE_TIME rtMaxWait);

    DECLSPEC_XFGVIRT(IMFPipe, PipeMessageGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeMessageGet)(IMFPipe_Source           *This,
                                                                  /* [in] */ BSTR           bsChannel,
                                                                  /* [out] */ BSTR         *pbsEventName,
                                                                  /* [out] */ BSTR         *pbsEventParam,
                                                                  /* [out] */ IUnknown    **ppEventObject,
                                                                  /* [in] */ REFERENCE_TIME rtMaxWait);

    DECLSPEC_XFGVIRT(IMFPipe, PipeFlush)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeFlush)(IMFPipe_Source          *This,
                                                             /* [in] */ BSTR          bsChannel,
                                                             /* [in] */ eMFFlashFlags _eFlashFlags);

    DECLSPEC_XFGVIRT(IMFPipe, PipeClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeClose)(IMFPipe_Source *This);

    DECLSPEC_XFGVIRT(IMFPipe_Source, PipeReceiverAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PipeReceiverAdd)(IMFPipe_Source       *This,
                                                                   /* [out] */ IMFPipe **ppReader,
                                                                   /* [in] */ int        nMaxBuffers,
                                                                   /* [in] */ BOOL       bBlockMode,
                                                                   /* [in] */ BSTR       bsHints);

    END_INTERFACE
} IMFPipe_SourceVtbl;

interface IMFPipe_Source { CONST_VTBL struct IMFPipe_SourceVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFPipe_Source_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFPipe_Source_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFPipe_Source_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFPipe_Source_PipeInfoGet(This, pbsPipeName, bsChannel, pPipeInfo) \
                ((This)->lpVtbl->PipeInfoGet(This, pbsPipeName, bsChannel, pPipeInfo))

            #define IMFPipe_Source_PipeConnectedGetByIndex(This, nIndex, ppPipe) \
                ((This)->lpVtbl->PipeConnectedGetByIndex(This, nIndex, ppPipe))

            #define IMFPipe_Source_PipeCreate(This, bsPipeName, bsHints) \
                ((This)->lpVtbl->PipeCreate(This, bsPipeName, bsHints))

            #define IMFPipe_Source_PipeOpen(This, bsPipeName, nMaxBuffers, bsHints) \
                ((This)->lpVtbl->PipeOpen(This, bsPipeName, nMaxBuffers, bsHints))

            #define IMFPipe_Source_PipeOpenDirect(This, pSourcePipeObj, nMaxBuffers, bsHints) \
                ((This)->lpVtbl->PipeOpenDirect(This, pSourcePipeObj, nMaxBuffers, bsHints))

            #define IMFPipe_Source_PipePut(This, bsChannel, pObj, rtMaxWait, bsHints) \
                ((This)->lpVtbl->PipePut(This, bsChannel, pObj, rtMaxWait, bsHints))

            #define IMFPipe_Source_PipeGet(This, bsChannel, ppObj, rtMaxWait, bsHints) \
                ((This)->lpVtbl->PipeGet(This, bsChannel, ppObj, rtMaxWait, bsHints))

            #define IMFPipe_Source_PipePeek(This, bsChannel, nIndex, ppObj, rtMaxWait, bsHints) \
                ((This)->lpVtbl->PipePeek(This, bsChannel, nIndex, ppObj, rtMaxWait, bsHints))

            #define IMFPipe_Source_PipeMessagePut(This, bsChannel, bsEventName, bsEventParam, pEventObject, rtMaxWait) \
                ((This)->lpVtbl->PipeMessagePut(This, bsChannel, bsEventName, bsEventParam, pEventObject, rtMaxWait))

            #define IMFPipe_Source_PipeMessageGet(This,          \
                                                  bsChannel,     \
                                                  pbsEventName,  \
                                                  pbsEventParam, \
                                                  ppEventObject, \
                                                  rtMaxWait)     \
                ((This)->lpVtbl->PipeMessageGet(This, bsChannel, pbsEventName, pbsEventParam, ppEventObject, rtMaxWait))

            #define IMFPipe_Source_PipeFlush(This, bsChannel, _eFlashFlags) \
                ((This)->lpVtbl->PipeFlush(This, bsChannel, _eFlashFlags))

            #define IMFPipe_Source_PipeClose(This) ((This)->lpVtbl->PipeClose(This))

            #define IMFPipe_Source_PipeReceiverAdd(This, ppReader, nMaxBuffers, bBlockMode, bsHints) \
                ((This)->lpVtbl->PipeReceiverAdd(This, ppReader, nMaxBuffers, bBlockMode, bsHints))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFPipe_Source_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_MFormats_0000_0061 */
/* [local] */

#ifndef MFPROPS_DEFINED
    #define MFPROPS_DEFINED

extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0061_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0061_v0_0_s_ifspec;

    #ifndef __IMFProps_INTERFACE_DEFINED__
        #define __IMFProps_INTERFACE_DEFINED__

/* interface IMFProps */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFProps;

        #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366720-473F-4ad5-A5C2-428FE0C8E03E")
IMFProps: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsSet(
        /* [in] */ BSTR _bsPropName,
        /* [in] */ BSTR _bsPropValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsGet(
        /* [in] */ BSTR _bsPropName,
        /* [out] */ BSTR * _pbsPropValue) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsGetCount(
        /* [in] */ BSTR  _bsNodeName,
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsGetByIndex(
        /* [in] */ BSTR   _bsNodeName,
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsPropName,
        /* [out] */ BSTR *_pbsPropValue,
        /* [out] */ BOOL *_pbNode) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsRemove(
        /* [in] */ BSTR _bsPropName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsInfoGet(
        /* [in] */ BSTR       _bsPropName,
        /* [in] */ eMInfoType _eType,
        /* [out] */ BSTR * _pbsInfo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsOptionGetCount(
        /* [in] */ BSTR  _bsPropName,
        /* [out] */ int *_pnOptionCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsOptionGetByIndex(
        /* [in] */ BSTR   _bsPropName,
        /* [in] */ int    _nOptionIdx,
        /* [out] */ BSTR *_pbsOptionValue,
        /* [out] */ BSTR *_pbsHelp) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsOptionSetByIndex(
        /* [in] */ BSTR _bsPropName,
        /* [in] */ int  _nOptionInx) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropsOptionGet(
        /* [in] */ BSTR   _bsPropName,
        /* [out] */ int  *_pnOptionIdx,
        /* [out] */ BSTR *_pbsOptionValue,
        /* [out] */ BSTR *_pbsHelp) = 0;
};

        #else /* C style interface */

typedef struct IMFPropsVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFProps         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFProps *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFProps *This);

    DECLSPEC_XFGVIRT(IMFProps, PropsSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsSet)(IMFProps       *This,
                                                            /* [in] */ BSTR _bsPropName,
                                                            /* [in] */ BSTR _bsPropValue);

    DECLSPEC_XFGVIRT(IMFProps, PropsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsGet)(IMFProps         *This,
                                                            /* [in] */ BSTR   _bsPropName,
                                                            /* [out] */ BSTR *_pbsPropValue);

    DECLSPEC_XFGVIRT(IMFProps, PropsGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsGetCount)(IMFProps        *This,
                                                                 /* [in] */ BSTR  _bsNodeName,
                                                                 /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMFProps, PropsGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsGetByIndex)(IMFProps         *This,
                                                                   /* [in] */ BSTR   _bsNodeName,
                                                                   /* [in] */ int    _nIndex,
                                                                   /* [out] */ BSTR *_pbsPropName,
                                                                   /* [out] */ BSTR *_pbsPropValue,
                                                                   /* [out] */ BOOL *_pbNode);

    DECLSPEC_XFGVIRT(IMFProps, PropsRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsRemove)(IMFProps       *This,
                                                               /* [in] */ BSTR _bsPropName);

    DECLSPEC_XFGVIRT(IMFProps, PropsInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsInfoGet)(IMFProps             *This,
                                                                /* [in] */ BSTR       _bsPropName,
                                                                /* [in] */ eMInfoType _eType,
                                                                /* [out] */ BSTR     *_pbsInfo);

    DECLSPEC_XFGVIRT(IMFProps, PropsOptionGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsOptionGetCount)(IMFProps        *This,
                                                                       /* [in] */ BSTR  _bsPropName,
                                                                       /* [out] */ int *_pnOptionCount);

    DECLSPEC_XFGVIRT(IMFProps, PropsOptionGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsOptionGetByIndex)(IMFProps         *This,
                                                                         /* [in] */ BSTR   _bsPropName,
                                                                         /* [in] */ int    _nOptionIdx,
                                                                         /* [out] */ BSTR *_pbsOptionValue,
                                                                         /* [out] */ BSTR *_pbsHelp);

    DECLSPEC_XFGVIRT(IMFProps, PropsOptionSetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsOptionSetByIndex)(IMFProps       *This,
                                                                         /* [in] */ BSTR _bsPropName,
                                                                         /* [in] */ int  _nOptionInx);

    DECLSPEC_XFGVIRT(IMFProps, PropsOptionGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PropsOptionGet)(IMFProps         *This,
                                                                  /* [in] */ BSTR   _bsPropName,
                                                                  /* [out] */ int  *_pnOptionIdx,
                                                                  /* [out] */ BSTR *_pbsOptionValue,
                                                                  /* [out] */ BSTR *_pbsHelp);

    END_INTERFACE
} IMFPropsVtbl;

interface IMFProps { CONST_VTBL struct IMFPropsVtbl *lpVtbl; };

            #ifdef COBJMACROS

                #define IMFProps_QueryInterface(This, riid, ppvObject) \
                    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

                #define IMFProps_AddRef(This) ((This)->lpVtbl->AddRef(This))

                #define IMFProps_Release(This) ((This)->lpVtbl->Release(This))

                #define IMFProps_PropsSet(This, _bsPropName, _bsPropValue) \
                    ((This)->lpVtbl->PropsSet(This, _bsPropName, _bsPropValue))

                #define IMFProps_PropsGet(This, _bsPropName, _pbsPropValue) \
                    ((This)->lpVtbl->PropsGet(This, _bsPropName, _pbsPropValue))

                #define IMFProps_PropsGetCount(This, _bsNodeName, _pnCount) \
                    ((This)->lpVtbl->PropsGetCount(This, _bsNodeName, _pnCount))

                #define IMFProps_PropsGetByIndex(This, _bsNodeName, _nIndex, _pbsPropName, _pbsPropValue, _pbNode) \
                    ((This)->lpVtbl->PropsGetByIndex(This, _bsNodeName, _nIndex, _pbsPropName, _pbsPropValue, _pbNode))

                #define IMFProps_PropsRemove(This, _bsPropName) ((This)->lpVtbl->PropsRemove(This, _bsPropName))

                #define IMFProps_PropsInfoGet(This, _bsPropName, _eType, _pbsInfo) \
                    ((This)->lpVtbl->PropsInfoGet(This, _bsPropName, _eType, _pbsInfo))

                #define IMFProps_PropsOptionGetCount(This, _bsPropName, _pnOptionCount) \
                    ((This)->lpVtbl->PropsOptionGetCount(This, _bsPropName, _pnOptionCount))

                #define IMFProps_PropsOptionGetByIndex(This, _bsPropName, _nOptionIdx, _pbsOptionValue, _pbsHelp) \
                    ((This)->lpVtbl->PropsOptionGetByIndex(This, _bsPropName, _nOptionIdx, _pbsOptionValue, _pbsHelp))

                #define IMFProps_PropsOptionSetByIndex(This, _bsPropName, _nOptionInx) \
                    ((This)->lpVtbl->PropsOptionSetByIndex(This, _bsPropName, _nOptionInx))

                #define IMFProps_PropsOptionGet(This, _bsPropName, _pnOptionIdx, _pbsOptionValue, _pbsHelp) \
                    ((This)->lpVtbl->PropsOptionGet(This, _bsPropName, _pnOptionIdx, _pbsOptionValue, _pbsHelp))

            #endif /* COBJMACROS */

        #endif /* C style interface */

    #endif /* __IMFProps_INTERFACE_DEFINED__ */

    /* interface __MIDL_itf_MFormats_0000_0062 */
    /* [local] */

#endif // MFPROPS_DEFINED

extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0062_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0062_v0_0_s_ifspec;

#ifndef __IMFBrowser_INTERFACE_DEFINED__
    #define __IMFBrowser_INTERFACE_DEFINED__

/* interface IMFBrowser */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFBrowser;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("D4BA348C-2C10-47D8-923C-4B780683F39D")
IMFBrowser: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BrowserPageLoad(
        /* [in] */ BSTR _bsFilenameOrUrl) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BrowserHtmlDisplay(
        /* [in] */ BSTR _bsHTMLAsString) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BrowserCSSSet(
        /* [in] */ BSTR _bsCSSAsString) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BrowserJavascriptExecute(
        /* [in] */ BSTR _bsJScriptAsString) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BrowserClose(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BrowserCommand(
        /* [in] */ eMFBrowserCommand _eCommand,
        /* [in] */ BSTR              _bsParams) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BrowserMouseClick(
        /* [in] */ MF_MOUSE_EVENT * _pMouseProps,
        /* [in] */ eMFMouseButtons _eMouseButtons,
        /* [in] */ BOOL            _bMouseUp,
        /* [in] */ int             _nClickCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BrowserMouseMove(
        /* [in] */ MF_MOUSE_EVENT * _pMouseProps,
        /* [in] */ BOOL _bMouseLeave) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BrowserMouseWheel(
        /* [in] */ MF_MOUSE_EVENT * _pMouseProps,
        /* [in] */ int _nDeltaX,
        /* [in] */ int _nDeltaY) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BrowserKeyEvent(
        /* [in] */ MF_KEY_EVENT * _pKeyEvent) = 0;
};

    #else /* C style interface */

typedef struct IMFBrowserVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFBrowser       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFBrowser *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFBrowser *This);

    DECLSPEC_XFGVIRT(IMFBrowser, BrowserPageLoad)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BrowserPageLoad)(IMFBrowser     *This,
                                                                   /* [in] */ BSTR _bsFilenameOrUrl);

    DECLSPEC_XFGVIRT(IMFBrowser, BrowserHtmlDisplay)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BrowserHtmlDisplay)(IMFBrowser     *This,
                                                                      /* [in] */ BSTR _bsHTMLAsString);

    DECLSPEC_XFGVIRT(IMFBrowser, BrowserCSSSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BrowserCSSSet)(IMFBrowser     *This,
                                                                 /* [in] */ BSTR _bsCSSAsString);

    DECLSPEC_XFGVIRT(IMFBrowser, BrowserJavascriptExecute)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BrowserJavascriptExecute)(IMFBrowser     *This,
                                                                            /* [in] */ BSTR _bsJScriptAsString);

    DECLSPEC_XFGVIRT(IMFBrowser, BrowserClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BrowserClose)(IMFBrowser *This);

    DECLSPEC_XFGVIRT(IMFBrowser, BrowserCommand)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BrowserCommand)(IMFBrowser                  *This,
                                                                  /* [in] */ eMFBrowserCommand _eCommand,
                                                                  /* [in] */ BSTR              _bsParams);

    DECLSPEC_XFGVIRT(IMFBrowser, BrowserMouseClick)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BrowserMouseClick)(IMFBrowser                *This,
                                                                     /* [in] */ MF_MOUSE_EVENT *_pMouseProps,
                                                                     /* [in] */ eMFMouseButtons _eMouseButtons,
                                                                     /* [in] */ BOOL            _bMouseUp,
                                                                     /* [in] */ int             _nClickCount);

    DECLSPEC_XFGVIRT(IMFBrowser, BrowserMouseMove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BrowserMouseMove)(IMFBrowser                *This,
                                                                    /* [in] */ MF_MOUSE_EVENT *_pMouseProps,
                                                                    /* [in] */ BOOL            _bMouseLeave);

    DECLSPEC_XFGVIRT(IMFBrowser, BrowserMouseWheel)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BrowserMouseWheel)(IMFBrowser                *This,
                                                                     /* [in] */ MF_MOUSE_EVENT *_pMouseProps,
                                                                     /* [in] */ int             _nDeltaX,
                                                                     /* [in] */ int             _nDeltaY);

    DECLSPEC_XFGVIRT(IMFBrowser, BrowserKeyEvent)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BrowserKeyEvent)(IMFBrowser              *This,
                                                                   /* [in] */ MF_KEY_EVENT *_pKeyEvent);

    END_INTERFACE
} IMFBrowserVtbl;

interface IMFBrowser { CONST_VTBL struct IMFBrowserVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFBrowser_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFBrowser_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFBrowser_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFBrowser_BrowserPageLoad(This, _bsFilenameOrUrl) \
                ((This)->lpVtbl->BrowserPageLoad(This, _bsFilenameOrUrl))

            #define IMFBrowser_BrowserHtmlDisplay(This, _bsHTMLAsString) \
                ((This)->lpVtbl->BrowserHtmlDisplay(This, _bsHTMLAsString))

            #define IMFBrowser_BrowserCSSSet(This, _bsCSSAsString) ((This)->lpVtbl->BrowserCSSSet(This, _bsCSSAsString))

            #define IMFBrowser_BrowserJavascriptExecute(This, _bsJScriptAsString) \
                ((This)->lpVtbl->BrowserJavascriptExecute(This, _bsJScriptAsString))

            #define IMFBrowser_BrowserClose(This) ((This)->lpVtbl->BrowserClose(This))

            #define IMFBrowser_BrowserCommand(This, _eCommand, _bsParams) \
                ((This)->lpVtbl->BrowserCommand(This, _eCommand, _bsParams))

            #define IMFBrowser_BrowserMouseClick(This, _pMouseProps, _eMouseButtons, _bMouseUp, _nClickCount) \
                ((This)->lpVtbl->BrowserMouseClick(This, _pMouseProps, _eMouseButtons, _bMouseUp, _nClickCount))

            #define IMFBrowser_BrowserMouseMove(This, _pMouseProps, _bMouseLeave) \
                ((This)->lpVtbl->BrowserMouseMove(This, _pMouseProps, _bMouseLeave))

            #define IMFBrowser_BrowserMouseWheel(This, _pMouseProps, _nDeltaX, _nDeltaY) \
                ((This)->lpVtbl->BrowserMouseWheel(This, _pMouseProps, _nDeltaX, _nDeltaY))

            #define IMFBrowser_BrowserKeyEvent(This, _pKeyEvent) ((This)->lpVtbl->BrowserKeyEvent(This, _pKeyEvent))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFBrowser_INTERFACE_DEFINED__ */

#ifndef __IMFConfig_INTERFACE_DEFINED__
    #define __IMFConfig_INTERFACE_DEFINED__

/* interface IMFConfig */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFConfig;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F364005-473F-4ad5-A5C2-428FE0C8E03E")
IMFConfig: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveSettings(
        /* [in] */ BSTR _bsKeyName,
        /* [in] */ BSTR _bsAttributesList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadSettings(
        /* [in] */ BSTR _bsKeyName,
        /* [out] */ BSTR * _pbsAttributesList) = 0;
};

    #else /* C style interface */

typedef struct IMFConfigVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFConfig        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFConfig *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFConfig *This);

    DECLSPEC_XFGVIRT(IMFConfig, SaveSettings)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SaveSettings)(IMFConfig      *This,
                                                                /* [in] */ BSTR _bsKeyName,
                                                                /* [in] */ BSTR _bsAttributesList);

    DECLSPEC_XFGVIRT(IMFConfig, LoadSettings)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *LoadSettings)(IMFConfig        *This,
                                                                /* [in] */ BSTR   _bsKeyName,
                                                                /* [out] */ BSTR *_pbsAttributesList);

    END_INTERFACE
} IMFConfigVtbl;

interface IMFConfig { CONST_VTBL struct IMFConfigVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFConfig_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFConfig_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFConfig_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFConfig_SaveSettings(This, _bsKeyName, _bsAttributesList) \
                ((This)->lpVtbl->SaveSettings(This, _bsKeyName, _bsAttributesList))

            #define IMFConfig_LoadSettings(This, _bsKeyName, _pbsAttributesList) \
                ((This)->lpVtbl->LoadSettings(This, _bsKeyName, _pbsAttributesList))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFConfig_INTERFACE_DEFINED__ */

#ifndef __IMFProcess_INTERFACE_DEFINED__
    #define __IMFProcess_INTERFACE_DEFINED__

/* interface IMFProcess */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFProcess;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("B22982B5-E0D5-4977-847D-868F5F0BB90F")
IMFProcess: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ProcessFrame(
        /* [in] */ IMFFrame * _pFrameIn,
        /* [out] */ IMFFrame * *_ppFrameOut,
        /* [out] */ int *_pnFramesRest,
        /* [in] */ BSTR  _bsPropsList) = 0;
};

    #else /* C style interface */

typedef struct IMFProcessVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFProcess       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFProcess *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFProcess *This);

    DECLSPEC_XFGVIRT(IMFProcess, ProcessFrame)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ProcessFrame)(IMFProcess            *This,
                                                                /* [in] */ IMFFrame   *_pFrameIn,
                                                                /* [out] */ IMFFrame **_ppFrameOut,
                                                                /* [out] */ int       *_pnFramesRest,
                                                                /* [in] */ BSTR        _bsPropsList);

    END_INTERFACE
} IMFProcessVtbl;

interface IMFProcess { CONST_VTBL struct IMFProcessVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFProcess_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFProcess_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFProcess_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFProcess_ProcessFrame(This, _pFrameIn, _ppFrameOut, _pnFramesRest, _bsPropsList) \
                ((This)->lpVtbl->ProcessFrame(This, _pFrameIn, _ppFrameOut, _pnFramesRest, _bsPropsList))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFProcess_INTERFACE_DEFINED__ */

#ifndef __IMFAllocator_INTERFACE_DEFINED__
    #define __IMFAllocator_INTERFACE_DEFINED__

/* interface IMFAllocator */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFAllocator;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FBCB26-887B-4AEB-B30C-408E98E6B397")
IMFAllocator: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferAlloc(
        /* [in] */ eMFBufferFlags _eFlags,
        /* [in] */ DWORD          _cbSize,
        /* [out] */ LONGLONG * _plpData,
        /* [out] */ IUnknown * *_ppObject,
        /* [out] */ LONGLONG * _pllShareID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferAllocByProps(
        /* [in] */ eMFBufferFlags _eFlags,
        /* [in] */ M_VID_PROPS * _pVidProps,
        /* [out] */ LONGLONG * _plpData,
        /* [out] */ IUnknown * *_ppObject,
        /* [out] */ LONGLONG * _pllShareID) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferOpen(
        /* [in] */ LONGLONG _llShareID,
        /* [out] */ DWORD * _pdwSize,
        /* [out] */ LONGLONG * _plpData,
        /* [out] */ IUnknown * *_ppObject) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferFreeByPtr(
        /* [in] */ LONGLONG _lpData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferFreeByObj(
        /* [in] */ IUnknown * _pObject) = 0;
};

    #else /* C style interface */

typedef struct IMFAllocatorVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFAllocator     *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFAllocator *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFAllocator *This);

    DECLSPEC_XFGVIRT(IMFAllocator, BufferAlloc)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferAlloc)(IMFAllocator             *This,
                                                               /* [in] */ eMFBufferFlags _eFlags,
                                                               /* [in] */ DWORD          _cbSize,
                                                               /* [out] */ LONGLONG     *_plpData,
                                                               /* [out] */ IUnknown    **_ppObject,
                                                               /* [out] */ LONGLONG     *_pllShareID);

    DECLSPEC_XFGVIRT(IMFAllocator, BufferAllocByProps)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferAllocByProps)(IMFAllocator             *This,
                                                                      /* [in] */ eMFBufferFlags _eFlags,
                                                                      /* [in] */ M_VID_PROPS   *_pVidProps,
                                                                      /* [out] */ LONGLONG     *_plpData,
                                                                      /* [out] */ IUnknown    **_ppObject,
                                                                      /* [out] */ LONGLONG     *_pllShareID);

    DECLSPEC_XFGVIRT(IMFAllocator, BufferOpen)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferOpen)(IMFAllocator          *This,
                                                              /* [in] */ LONGLONG    _llShareID,
                                                              /* [out] */ DWORD     *_pdwSize,
                                                              /* [out] */ LONGLONG  *_plpData,
                                                              /* [out] */ IUnknown **_ppObject);

    DECLSPEC_XFGVIRT(IMFAllocator, BufferFreeByPtr)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferFreeByPtr)(IMFAllocator       *This,
                                                                   /* [in] */ LONGLONG _lpData);

    DECLSPEC_XFGVIRT(IMFAllocator, BufferFreeByObj)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferFreeByObj)(IMFAllocator        *This,
                                                                   /* [in] */ IUnknown *_pObject);

    END_INTERFACE
} IMFAllocatorVtbl;

interface IMFAllocator { CONST_VTBL struct IMFAllocatorVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFAllocator_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFAllocator_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFAllocator_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFAllocator_BufferAlloc(This, _eFlags, _cbSize, _plpData, _ppObject, _pllShareID) \
                ((This)->lpVtbl->BufferAlloc(This, _eFlags, _cbSize, _plpData, _ppObject, _pllShareID))

            #define IMFAllocator_BufferAllocByProps(This, _eFlags, _pVidProps, _plpData, _ppObject, _pllShareID) \
                ((This)->lpVtbl->BufferAllocByProps(This, _eFlags, _pVidProps, _plpData, _ppObject, _pllShareID))

            #define IMFAllocator_BufferOpen(This, _llShareID, _pdwSize, _plpData, _ppObject) \
                ((This)->lpVtbl->BufferOpen(This, _llShareID, _pdwSize, _plpData, _ppObject))

            #define IMFAllocator_BufferFreeByPtr(This, _lpData) ((This)->lpVtbl->BufferFreeByPtr(This, _lpData))

            #define IMFAllocator_BufferFreeByObj(This, _pObject) ((This)->lpVtbl->BufferFreeByObj(This, _pObject))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFAllocator_INTERFACE_DEFINED__ */

#ifndef __IMFPacket_INTERFACE_DEFINED__
    #define __IMFPacket_INTERFACE_DEFINED__

/* interface IMFPacket */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFPacket;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FBCF64-887B-4AEB-B30C-408E98E6B397")
IMFPacket: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PacketInfoGet(
        /* [out] */ M_PACKET_INFO * _pPacketInfo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PacketInfoSet(
        /* [in] */ M_PACKET_INFO * _pPacketInfo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PacketStreamInfoGet(
        /* [out] */ M_STREAM_INFO * _pStreamInfo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PacketTimeGet(
        /* [out] */ M_TIME * _pTime) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PacketAppendData(
        /* [in] */ LONG     cbData,
        /* [in] */ LONGLONG lpData) = 0;
};

    #else /* C style interface */

typedef struct IMFPacketVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFPacket        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFPacket *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFPacket *This);

    DECLSPEC_XFGVIRT(IMFPacket, PacketInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PacketInfoGet)(IMFPacket                 *This,
                                                                 /* [out] */ M_PACKET_INFO *_pPacketInfo);

    DECLSPEC_XFGVIRT(IMFPacket, PacketInfoSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PacketInfoSet)(IMFPacket                *This,
                                                                 /* [in] */ M_PACKET_INFO *_pPacketInfo);

    DECLSPEC_XFGVIRT(IMFPacket, PacketStreamInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PacketStreamInfoGet)(IMFPacket                 *This,
                                                                       /* [out] */ M_STREAM_INFO *_pStreamInfo);

    DECLSPEC_XFGVIRT(IMFPacket, PacketTimeGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PacketTimeGet)(IMFPacket          *This,
                                                                 /* [out] */ M_TIME *_pTime);

    DECLSPEC_XFGVIRT(IMFPacket, PacketAppendData)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *PacketAppendData)(IMFPacket          *This,
                                                                    /* [in] */ LONG     cbData,
                                                                    /* [in] */ LONGLONG lpData);

    END_INTERFACE
} IMFPacketVtbl;

interface IMFPacket { CONST_VTBL struct IMFPacketVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFPacket_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFPacket_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFPacket_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFPacket_PacketInfoGet(This, _pPacketInfo) ((This)->lpVtbl->PacketInfoGet(This, _pPacketInfo))

            #define IMFPacket_PacketInfoSet(This, _pPacketInfo) ((This)->lpVtbl->PacketInfoSet(This, _pPacketInfo))

            #define IMFPacket_PacketStreamInfoGet(This, _pStreamInfo) \
                ((This)->lpVtbl->PacketStreamInfoGet(This, _pStreamInfo))

            #define IMFPacket_PacketTimeGet(This, _pTime) ((This)->lpVtbl->PacketTimeGet(This, _pTime))

            #define IMFPacket_PacketAppendData(This, cbData, lpData) \
                ((This)->lpVtbl->PacketAppendData(This, cbData, lpData))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFPacket_INTERFACE_DEFINED__ */

#ifndef __IMFBuffersAllocator_INTERFACE_DEFINED__
    #define __IMFBuffersAllocator_INTERFACE_DEFINED__

/* interface IMFBuffersAllocator */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFBuffersAllocator;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FBCB24-887B-4AEB-B30C-408E98E6B397")
IMFBuffersAllocator: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFBufferTransferIPC(
        /* [in] */ IUnknown * _pRemoteBuffer,
        /* [out] */ IMFBuffer * *_ppLocalBuffer,
        /* [in] */ eMFTransferFlags _eFlags) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFBufferAlloc(
        /* [in] */ DWORD    _cbSize,
        /* [in] */ LONGLONG _lpBuffer,
        /* [out] */ IMFBuffer * *_ppBuffer,
        /* [in] */ eMFBufferFlags _eFlags) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFBufferAllocPacket(
        /* [in] */ M_STREAM_INFO * _pStreamInfo,
        /* [in] */ M_PACKET_INFO * _pPacketInfo,
        /* [out] */ IMFPacket * *_ppPacket) = 0;
};

    #else /* C style interface */

typedef struct IMFBuffersAllocatorVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFBuffersAllocator *This,
                                               /* [in] */ REFIID    riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFBuffersAllocator *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFBuffersAllocator *This);

    DECLSPEC_XFGVIRT(IMFBuffersAllocator, MFBufferTransferIPC)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFBufferTransferIPC)(IMFBuffersAllocator        *This,
                                                                       /* [in] */ IUnknown        *_pRemoteBuffer,
                                                                       /* [out] */ IMFBuffer     **_ppLocalBuffer,
                                                                       /* [in] */ eMFTransferFlags _eFlags);

    DECLSPEC_XFGVIRT(IMFBuffersAllocator, MFBufferAlloc)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFBufferAlloc)(IMFBuffersAllocator      *This,
                                                                 /* [in] */ DWORD          _cbSize,
                                                                 /* [in] */ LONGLONG       _lpBuffer,
                                                                 /* [out] */ IMFBuffer   **_ppBuffer,
                                                                 /* [in] */ eMFBufferFlags _eFlags);

    DECLSPEC_XFGVIRT(IMFBuffersAllocator, MFBufferAllocPacket)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFBufferAllocPacket)(IMFBuffersAllocator      *This,
                                                                       /* [in] */ M_STREAM_INFO *_pStreamInfo,
                                                                       /* [in] */ M_PACKET_INFO *_pPacketInfo,
                                                                       /* [out] */ IMFPacket   **_ppPacket);

    END_INTERFACE
} IMFBuffersAllocatorVtbl;

interface IMFBuffersAllocator { CONST_VTBL struct IMFBuffersAllocatorVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFBuffersAllocator_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFBuffersAllocator_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFBuffersAllocator_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFBuffersAllocator_MFBufferTransferIPC(This, _pRemoteBuffer, _ppLocalBuffer, _eFlags) \
                ((This)->lpVtbl->MFBufferTransferIPC(This, _pRemoteBuffer, _ppLocalBuffer, _eFlags))

            #define IMFBuffersAllocator_MFBufferAlloc(This, _cbSize, _lpBuffer, _ppBuffer, _eFlags) \
                ((This)->lpVtbl->MFBufferAlloc(This, _cbSize, _lpBuffer, _ppBuffer, _eFlags))

            #define IMFBuffersAllocator_MFBufferAllocPacket(This, _pStreamInfo, _pPacketInfo, _ppPacket) \
                ((This)->lpVtbl->MFBufferAllocPacket(This, _pStreamInfo, _pPacketInfo, _ppPacket))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFBuffersAllocator_INTERFACE_DEFINED__ */

#ifndef __IMFCache_INTERFACE_DEFINED__
    #define __IMFCache_INTERFACE_DEFINED__

/* interface IMFCache */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFCache;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FB0624-887B-4AEB-B30C-408E98E6B397")
IMFCache: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFCachePut(
        /* [in] */ BSTR     _bsCacheName,
        /* [in] */ LONGLONG _llKey,
        /* [in] */ IUnknown * _pCacheItem,
        /* [in] */ LONG           _lItemSizeBytes,
        /* [in] */ REFERENCE_TIME _rtKeepTime,
        /* [in] */ LONGLONG       _llMaxItemsCountOrSizeBytes) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFCacheTake(
        /* [in] */ BSTR     _bsCacheName,
        /* [in] */ LONGLONG _llKey,
        /* [out] */ IUnknown * *_ppObject) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFCacheFlush(
        /* [in] */ BSTR     _bsCacheName,
        /* [in] */ LONGLONG _llKey) = 0;
};

    #else /* C style interface */

typedef struct IMFCacheVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFCache         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFCache *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFCache *This);

    DECLSPEC_XFGVIRT(IMFCache, MFCachePut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFCachePut)(IMFCache                 *This,
                                                              /* [in] */ BSTR           _bsCacheName,
                                                              /* [in] */ LONGLONG       _llKey,
                                                              /* [in] */ IUnknown      *_pCacheItem,
                                                              /* [in] */ LONG           _lItemSizeBytes,
                                                              /* [in] */ REFERENCE_TIME _rtKeepTime,
                                                              /* [in] */ LONGLONG       _llMaxItemsCountOrSizeBytes);

    DECLSPEC_XFGVIRT(IMFCache, MFCacheTake)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFCacheTake)(IMFCache              *This,
                                                               /* [in] */ BSTR        _bsCacheName,
                                                               /* [in] */ LONGLONG    _llKey,
                                                               /* [out] */ IUnknown **_ppObject);

    DECLSPEC_XFGVIRT(IMFCache, MFCacheFlush)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFCacheFlush)(IMFCache           *This,
                                                                /* [in] */ BSTR     _bsCacheName,
                                                                /* [in] */ LONGLONG _llKey);

    END_INTERFACE
} IMFCacheVtbl;

interface IMFCache { CONST_VTBL struct IMFCacheVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFCache_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFCache_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFCache_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFCache_MFCachePut(This,                        \
                                        _bsCacheName,                \
                                        _llKey,                      \
                                        _pCacheItem,                 \
                                        _lItemSizeBytes,             \
                                        _rtKeepTime,                 \
                                        _llMaxItemsCountOrSizeBytes) \
                ((This)->lpVtbl->MFCachePut(This,                    \
                                            _bsCacheName,            \
                                            _llKey,                  \
                                            _pCacheItem,             \
                                            _lItemSizeBytes,         \
                                            _rtKeepTime,             \
                                            _llMaxItemsCountOrSizeBytes))

            #define IMFCache_MFCacheTake(This, _bsCacheName, _llKey, _ppObject) \
                ((This)->lpVtbl->MFCacheTake(This, _bsCacheName, _llKey, _ppObject))

            #define IMFCache_MFCacheFlush(This, _bsCacheName, _llKey) \
                ((This)->lpVtbl->MFCacheFlush(This, _bsCacheName, _llKey))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFCache_INTERFACE_DEFINED__ */

#ifndef __IMFSideData_INTERFACE_DEFINED__
    #define __IMFSideData_INTERFACE_DEFINED__

/* interface IMFSideData */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFSideData;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FBC164-877B-4AEB-B30C-408E98E6B397")
IMFSideData: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFDataGetByIndex(
        /* [in] */ int        _nIndex,
        /* [out] */ BSTR     *_pbsDataID,
        /* [out] */ LONG     *_pcbANCData,
        /* [out] */ LONGLONG *_ppbANCData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFDataGet(
        /* [in] */ BSTR _bsDataID,
        /* [out] */ LONG * _pcbANCData,
        /* [out] */ LONGLONG * _ppbANCData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFDataSet(
        /* [in] */ BSTR     _bsDataID,
        /* [in] */ LONG     _cbANCData,
        /* [in] */ LONGLONG _pbANCData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFObjGetByIndex(
        /* [in] */ int         _nIndex,
        /* [out] */ BSTR      *_pbsObjID,
        /* [out] */ IUnknown **_ppObj,
        /* [in] */ BOOL        _bMakeFrameLocal) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFObjGet(
        /* [in] */ BSTR _bsObjID,
        /* [out] */ IUnknown * *_ppObj,
        /* [in] */ BOOL _bMakeFrameLocal) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFObjSet(
        /* [in] */ BSTR _bsObjID,
        /* [in] */ IUnknown * _pObj) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFStrGetByIndex(
        /* [in] */ int    _nIndex,
        /* [out] */ BSTR *_pbsStrID,
        /* [out] */ BSTR *_pbsString) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFStrGet(
        /* [in] */ BSTR _bsStrID,
        /* [out] */ BSTR * _pbsString) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFStrSet(
        /* [in] */ BSTR _bsStrID,
        /* [in] */ BSTR _bsString) = 0;
};

    #else /* C style interface */

typedef struct IMFSideDataVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFSideData      *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFSideData *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFSideData *This);

    DECLSPEC_XFGVIRT(IMFSideData, MFDataGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFDataGetByIndex)(IMFSideData          *This,
                                                                    /* [in] */ int        _nIndex,
                                                                    /* [out] */ BSTR     *_pbsDataID,
                                                                    /* [out] */ LONG     *_pcbANCData,
                                                                    /* [out] */ LONGLONG *_ppbANCData);

    DECLSPEC_XFGVIRT(IMFSideData, MFDataGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFDataGet)(IMFSideData          *This,
                                                             /* [in] */ BSTR       _bsDataID,
                                                             /* [out] */ LONG     *_pcbANCData,
                                                             /* [out] */ LONGLONG *_ppbANCData);

    DECLSPEC_XFGVIRT(IMFSideData, MFDataSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFDataSet)(IMFSideData        *This,
                                                             /* [in] */ BSTR     _bsDataID,
                                                             /* [in] */ LONG     _cbANCData,
                                                             /* [in] */ LONGLONG _pbANCData);

    DECLSPEC_XFGVIRT(IMFSideData, MFObjGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFObjGetByIndex)(IMFSideData           *This,
                                                                   /* [in] */ int         _nIndex,
                                                                   /* [out] */ BSTR      *_pbsObjID,
                                                                   /* [out] */ IUnknown **_ppObj,
                                                                   /* [in] */ BOOL        _bMakeFrameLocal);

    DECLSPEC_XFGVIRT(IMFSideData, MFObjGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFObjGet)(IMFSideData           *This,
                                                            /* [in] */ BSTR        _bsObjID,
                                                            /* [out] */ IUnknown **_ppObj,
                                                            /* [in] */ BOOL        _bMakeFrameLocal);

    DECLSPEC_XFGVIRT(IMFSideData, MFObjSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFObjSet)(IMFSideData         *This,
                                                            /* [in] */ BSTR      _bsObjID,
                                                            /* [in] */ IUnknown *_pObj);

    DECLSPEC_XFGVIRT(IMFSideData, MFStrGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFStrGetByIndex)(IMFSideData      *This,
                                                                   /* [in] */ int    _nIndex,
                                                                   /* [out] */ BSTR *_pbsStrID,
                                                                   /* [out] */ BSTR *_pbsString);

    DECLSPEC_XFGVIRT(IMFSideData, MFStrGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFStrGet)(IMFSideData      *This,
                                                            /* [in] */ BSTR   _bsStrID,
                                                            /* [out] */ BSTR *_pbsString);

    DECLSPEC_XFGVIRT(IMFSideData, MFStrSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFStrSet)(IMFSideData    *This,
                                                            /* [in] */ BSTR _bsStrID,
                                                            /* [in] */ BSTR _bsString);

    END_INTERFACE
} IMFSideDataVtbl;

interface IMFSideData { CONST_VTBL struct IMFSideDataVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFSideData_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFSideData_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFSideData_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFSideData_MFDataGetByIndex(This, _nIndex, _pbsDataID, _pcbANCData, _ppbANCData) \
                ((This)->lpVtbl->MFDataGetByIndex(This, _nIndex, _pbsDataID, _pcbANCData, _ppbANCData))

            #define IMFSideData_MFDataGet(This, _bsDataID, _pcbANCData, _ppbANCData) \
                ((This)->lpVtbl->MFDataGet(This, _bsDataID, _pcbANCData, _ppbANCData))

            #define IMFSideData_MFDataSet(This, _bsDataID, _cbANCData, _pbANCData) \
                ((This)->lpVtbl->MFDataSet(This, _bsDataID, _cbANCData, _pbANCData))

            #define IMFSideData_MFObjGetByIndex(This, _nIndex, _pbsObjID, _ppObj, _bMakeFrameLocal) \
                ((This)->lpVtbl->MFObjGetByIndex(This, _nIndex, _pbsObjID, _ppObj, _bMakeFrameLocal))

            #define IMFSideData_MFObjGet(This, _bsObjID, _ppObj, _bMakeFrameLocal) \
                ((This)->lpVtbl->MFObjGet(This, _bsObjID, _ppObj, _bMakeFrameLocal))

            #define IMFSideData_MFObjSet(This, _bsObjID, _pObj) ((This)->lpVtbl->MFObjSet(This, _bsObjID, _pObj))

            #define IMFSideData_MFStrGetByIndex(This, _nIndex, _pbsStrID, _pbsString) \
                ((This)->lpVtbl->MFStrGetByIndex(This, _nIndex, _pbsStrID, _pbsString))

            #define IMFSideData_MFStrGet(This, _bsStrID, _pbsString) \
                ((This)->lpVtbl->MFStrGet(This, _bsStrID, _pbsString))

            #define IMFSideData_MFStrSet(This, _bsStrID, _bsString) \
                ((This)->lpVtbl->MFStrSet(This, _bsStrID, _bsString))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFSideData_INTERFACE_DEFINED__ */

#ifndef __IMFObject_INTERFACE_DEFINED__
    #define __IMFObject_INTERFACE_DEFINED__

/* interface IMFObject */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFObject;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FCCF26-887B-4AEB-B30C-408E98E6B397")
IMFObject: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFStateGet(
        /* [out] */ eMState * _peState,
        /* [out] */ BSTR * _pbsExtraInfo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFCallbackSet(
        /* [in] */ IMCallback * _pCallback,
        /* [in] */ LONGLONG _llCallbackUserData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFCallbackSetFunc(
        /* [in] */ LONGLONG _lpPFOnEvent,
        /* [in] */ LONGLONG _lpPFOnFrame,
        /* [in] */ LONGLONG _llCallbackUserData) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFInternalGet(
        /* [in] */ BSTR _bsType,
        /* [out] */ IUnknown * *_ppObject) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MFClose(void) = 0;
};

    #else /* C style interface */

typedef struct IMFObjectVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFObject        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFObject *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFObject *This);

    DECLSPEC_XFGVIRT(IMFObject, MFStateGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFStateGet)(IMFObject           *This,
                                                              /* [out] */ eMState *_peState,
                                                              /* [out] */ BSTR    *_pbsExtraInfo);

    DECLSPEC_XFGVIRT(IMFObject, MFCallbackSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFCallbackSet)(IMFObject             *This,
                                                                 /* [in] */ IMCallback *_pCallback,
                                                                 /* [in] */ LONGLONG    _llCallbackUserData);

    DECLSPEC_XFGVIRT(IMFObject, MFCallbackSetFunc)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFCallbackSetFunc)(IMFObject          *This,
                                                                     /* [in] */ LONGLONG _lpPFOnEvent,
                                                                     /* [in] */ LONGLONG _lpPFOnFrame,
                                                                     /* [in] */ LONGLONG _llCallbackUserData);

    DECLSPEC_XFGVIRT(IMFObject, MFInternalGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFInternalGet)(IMFObject             *This,
                                                                 /* [in] */ BSTR        _bsType,
                                                                 /* [out] */ IUnknown **_ppObject);

    DECLSPEC_XFGVIRT(IMFObject, MFClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MFClose)(IMFObject *This);

    END_INTERFACE
} IMFObjectVtbl;

interface IMFObject { CONST_VTBL struct IMFObjectVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFObject_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFObject_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFObject_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFObject_MFStateGet(This, _peState, _pbsExtraInfo) \
                ((This)->lpVtbl->MFStateGet(This, _peState, _pbsExtraInfo))

            #define IMFObject_MFCallbackSet(This, _pCallback, _llCallbackUserData) \
                ((This)->lpVtbl->MFCallbackSet(This, _pCallback, _llCallbackUserData))

            #define IMFObject_MFCallbackSetFunc(This, _lpPFOnEvent, _lpPFOnFrame, _llCallbackUserData) \
                ((This)->lpVtbl->MFCallbackSetFunc(This, _lpPFOnEvent, _lpPFOnFrame, _llCallbackUserData))

            #define IMFObject_MFInternalGet(This, _bsType, _ppObject) \
                ((This)->lpVtbl->MFInternalGet(This, _bsType, _ppObject))

            #define IMFObject_MFClose(This) ((This)->lpVtbl->MFClose(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFObject_INTERFACE_DEFINED__ */

#ifndef __IMDelay_INTERFACE_DEFINED__
    #define __IMDelay_INTERFACE_DEFINED__

/* interface IMDelay */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMDelay;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("52DB5EBD-1414-47F8-9AB8-50C35A4D67FE")
IMDelay: public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE Init(void) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsInit(void) = 0;

    virtual HRESULT STDMETHODCALLTYPE Available(
        /* [out] */ REFERENCE_TIME * _prtStart,
        /* [out] */ REFERENCE_TIME * _prtStop) = 0;

    virtual HRESULT STDMETHODCALLTYPE Close(void) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFrameForPos(
        /* [in] */ REFERENCE_TIME _rtPos,
        /* [in] */ int            _nNextOrPrevFrame,
        /* [out] */ IUnknown    **_ppMFFrame) = 0;
};

    #else /* C style interface */

typedef struct IMDelayVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMDelay          *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMDelay *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMDelay *This);

    DECLSPEC_XFGVIRT(IMDelay, Init)
    HRESULT(STDMETHODCALLTYPE *Init)(IMDelay *This);

    DECLSPEC_XFGVIRT(IMDelay, IsInit)
    HRESULT(STDMETHODCALLTYPE *IsInit)(IMDelay *This);

    DECLSPEC_XFGVIRT(IMDelay, Available)
    HRESULT(STDMETHODCALLTYPE *Available)(IMDelay                    *This,
                                          /* [out] */ REFERENCE_TIME *_prtStart,
                                          /* [out] */ REFERENCE_TIME *_prtStop);

    DECLSPEC_XFGVIRT(IMDelay, Close)
    HRESULT(STDMETHODCALLTYPE *Close)(IMDelay *This);

    DECLSPEC_XFGVIRT(IMDelay, GetFrameForPos)
    HRESULT(STDMETHODCALLTYPE *GetFrameForPos)(IMDelay                  *This,
                                               /* [in] */ REFERENCE_TIME _rtPos,
                                               /* [in] */ int            _nNextOrPrevFrame,
                                               /* [out] */ IUnknown    **_ppMFFrame);

    END_INTERFACE
} IMDelayVtbl;

interface IMDelay { CONST_VTBL struct IMDelayVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMDelay_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMDelay_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMDelay_Release(This) ((This)->lpVtbl->Release(This))

            #define IMDelay_Init(This) ((This)->lpVtbl->Init(This))

            #define IMDelay_IsInit(This) ((This)->lpVtbl->IsInit(This))

            #define IMDelay_Available(This, _prtStart, _prtStop) ((This)->lpVtbl->Available(This, _prtStart, _prtStop))

            #define IMDelay_Close(This) ((This)->lpVtbl->Close(This))

            #define IMDelay_GetFrameForPos(This, _rtPos, _nNextOrPrevFrame, _ppMFFrame) \
                ((This)->lpVtbl->GetFrameForPos(This, _rtPos, _nNextOrPrevFrame, _ppMFFrame))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMDelay_INTERFACE_DEFINED__ */

#ifndef __IMFCaptionsDecoder_INTERFACE_DEFINED__
    #define __IMFCaptionsDecoder_INTERFACE_DEFINED__

/* interface IMFCaptionsDecoder */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFCaptionsDecoder;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("2981E240-7AD9-4120-969C-F48668507DF8")
IMFCaptionsDecoder: public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE AnalyzePacketForCC(
        /* [in] */ IMFPacket * _pMFPacket) = 0;

    virtual HRESULT STDMETHODCALLTYPE UpdateFrameCC(
        /* [in] */ IMFFrame * _pMFFrame,
        /* [in] */ BSTR _bsProps) = 0;

    virtual HRESULT STDMETHODCALLTYPE OpenCCFile(
        /* [in] */ BSTR   _bsMediaFile,
        /* [in] */ double _dblRate,
        /* [out] */ int  *_pnFileType) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetStartTimecode(
        /* [in] */ M_TIMECODE _tcStart) = 0;
};

    #else /* C style interface */

typedef struct IMFCaptionsDecoderVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFCaptionsDecoder *This,
                                               /* [in] */ REFIID   riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFCaptionsDecoder *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFCaptionsDecoder *This);

    DECLSPEC_XFGVIRT(IMFCaptionsDecoder, AnalyzePacketForCC)
    HRESULT(STDMETHODCALLTYPE *AnalyzePacketForCC)(IMFCaptionsDecoder   *This,
                                                   /* [in] */ IMFPacket *_pMFPacket);

    DECLSPEC_XFGVIRT(IMFCaptionsDecoder, UpdateFrameCC)
    HRESULT(STDMETHODCALLTYPE *UpdateFrameCC)(IMFCaptionsDecoder  *This,
                                              /* [in] */ IMFFrame *_pMFFrame,
                                              /* [in] */ BSTR      _bsProps);

    DECLSPEC_XFGVIRT(IMFCaptionsDecoder, OpenCCFile)
    HRESULT(STDMETHODCALLTYPE *OpenCCFile)(IMFCaptionsDecoder *This,
                                           /* [in] */ BSTR     _bsMediaFile,
                                           /* [in] */ double   _dblRate,
                                           /* [out] */ int    *_pnFileType);

    DECLSPEC_XFGVIRT(IMFCaptionsDecoder, SetStartTimecode)
    HRESULT(STDMETHODCALLTYPE *SetStartTimecode)(IMFCaptionsDecoder   *This,
                                                 /* [in] */ M_TIMECODE _tcStart);

    END_INTERFACE
} IMFCaptionsDecoderVtbl;

interface IMFCaptionsDecoder { CONST_VTBL struct IMFCaptionsDecoderVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFCaptionsDecoder_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFCaptionsDecoder_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFCaptionsDecoder_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFCaptionsDecoder_AnalyzePacketForCC(This, _pMFPacket) \
                ((This)->lpVtbl->AnalyzePacketForCC(This, _pMFPacket))

            #define IMFCaptionsDecoder_UpdateFrameCC(This, _pMFFrame, _bsProps) \
                ((This)->lpVtbl->UpdateFrameCC(This, _pMFFrame, _bsProps))

            #define IMFCaptionsDecoder_OpenCCFile(This, _bsMediaFile, _dblRate, _pnFileType) \
                ((This)->lpVtbl->OpenCCFile(This, _bsMediaFile, _dblRate, _pnFileType))

            #define IMFCaptionsDecoder_SetStartTimecode(This, _tcStart) \
                ((This)->lpVtbl->SetStartTimecode(This, _tcStart))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFCaptionsDecoder_INTERFACE_DEFINED__ */

#ifndef __IMSourceDS_INTERFACE_DEFINED__
    #define __IMSourceDS_INTERFACE_DEFINED__

/* interface IMSourceDS */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMSourceDS;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("9FDA39AE-4090-43C8-A919-3A01CBF51EC3")
IMSourceDS: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConnectToSenderPtr(
        /* [in] */ IUnknown * _pSender,
        /* [in] */ BSTR _bsChannelID,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConnectToSender(
        /* [in] */ BSTR _bsName,
        /* [in] */ BSTR _bsChannelID,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DisconnectFromSender(void) = 0;
};

    #else /* C style interface */

typedef struct IMSourceDSVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMSourceDS       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMSourceDS *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMSourceDS *This);

    DECLSPEC_XFGVIRT(IMSourceDS, ConnectToSenderPtr)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConnectToSenderPtr)(IMSourceDS          *This,
                                                                      /* [in] */ IUnknown *_pSender,
                                                                      /* [in] */ BSTR      _bsChannelID,
                                                                      /* [in] */ BSTR      _bsProps);

    DECLSPEC_XFGVIRT(IMSourceDS, ConnectToSender)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConnectToSender)(IMSourceDS     *This,
                                                                   /* [in] */ BSTR _bsName,
                                                                   /* [in] */ BSTR _bsChannelID,
                                                                   /* [in] */ BSTR _bsProps);

    DECLSPEC_XFGVIRT(IMSourceDS, DisconnectFromSender)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DisconnectFromSender)(IMSourceDS *This);

    END_INTERFACE
} IMSourceDSVtbl;

interface IMSourceDS { CONST_VTBL struct IMSourceDSVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMSourceDS_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMSourceDS_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMSourceDS_Release(This) ((This)->lpVtbl->Release(This))

            #define IMSourceDS_ConnectToSenderPtr(This, _pSender, _bsChannelID, _bsProps) \
                ((This)->lpVtbl->ConnectToSenderPtr(This, _pSender, _bsChannelID, _bsProps))

            #define IMSourceDS_ConnectToSender(This, _bsName, _bsChannelID, _bsProps) \
                ((This)->lpVtbl->ConnectToSender(This, _bsName, _bsChannelID, _bsProps))

            #define IMSourceDS_DisconnectFromSender(This) ((This)->lpVtbl->DisconnectFromSender(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMSourceDS_INTERFACE_DEFINED__ */

#ifndef __IMSinkDS_INTERFACE_DEFINED__
    #define __IMSinkDS_INTERFACE_DEFINED__

/* interface IMSinkDS */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMSinkDS;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("82503DDF-C56C-4AB9-BBC8-63F4F1A93CF2")
IMSinkDS: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProxy(
        /* [in] */ IUnknown * _pProxy,
        /* [in] */ IUnknown * _pCallbackSender,
        /* [in] */ BOOL _bAuto) = 0;
};

    #else /* C style interface */

typedef struct IMSinkDSVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMSinkDS         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMSinkDS *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMSinkDS *This);

    DECLSPEC_XFGVIRT(IMSinkDS, SetProxy)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SetProxy)(IMSinkDS            *This,
                                                            /* [in] */ IUnknown *_pProxy,
                                                            /* [in] */ IUnknown *_pCallbackSender,
                                                            /* [in] */ BOOL      _bAuto);

    END_INTERFACE
} IMSinkDSVtbl;

interface IMSinkDS { CONST_VTBL struct IMSinkDSVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMSinkDS_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMSinkDS_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMSinkDS_Release(This) ((This)->lpVtbl->Release(This))

            #define IMSinkDS_SetProxy(This, _pProxy, _pCallbackSender, _bAuto) \
                ((This)->lpVtbl->SetProxy(This, _pProxy, _pCallbackSender, _bAuto))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMSinkDS_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_MFormats_0000_0075 */
/* [local] */

#ifndef EASIODRVTYPE_DEFINED
    #define EASIODRVTYPE_DEFINED
typedef /* [v1_enum] */
    enum eASIODrvType {
        eASIO_Unknown       = 0,
        eASIO_Render        = 1,
        eASIO_Capture       = 2,
        eASIO_RenderCapture = 3
    } eASIODrvType;

#endif

extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0075_v0_0_s_ifspec;

#ifndef __IMFObjectASIO_INTERFACE_DEFINED__
    #define __IMFObjectASIO_INTERFACE_DEFINED__

/* interface IMFObjectASIO */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFObjectASIO;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("66DE1C85-3D78-4F52-B1EF-3172D151DA20")
IMFObjectASIO: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDriversCount(
        /* [in] */ eASIODrvType _eDrvType,
        /* [out] */ int        *_piCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDriverName(
        /* [in] */ eASIODrvType _eDrvType,
        /* [in] */ int          _iNum,
        /* [out] */ BSTR       *_pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadDriverByName(
        /* [in] */ eASIODrvType _eDrvType,
        /* [in] */ BSTR         _bsName,
        /* [in] */ BSTR         _bsPropsList,
        /* [in] */ IUnknown * _pCaller,
        /* [out] */ int *_piId) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadDriverByIndex(
        /* [in] */ eASIODrvType _eDrvType,
        /* [in] */ int          _iIndex,
        /* [in] */ BSTR         _bsPropsList,
        /* [in] */ IUnknown    *_pCaller,
        /* [out] */ int        *_piId) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CloseDriver(
        /* [in] */ int _iId) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLoadedDriverName(
        /* [out] */ BSTR * _pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLoadedDriverIndex(
        /* [in] */ eASIODrvType _eDrvType,
        /* [out] */ int        *_piIndex) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DriverIsLoaded(
        /* [out] */ BOOL * _pbLoaded) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Start(
        /* [in] */ int _iId) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Stop(
        /* [in] */ int _iId) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsStarted(
        /* [in] */ int    _iId,
        /* [out] */ BOOL *_pbStarted) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProps(
        /* [out] */ M_AUD_PROPS * _pInputProps,
        /* [out] */ M_AUD_PROPS * _pOutputProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLatencies(
        /* [out] */ int *_piInputLatency,
        /* [out] */ int *_piOutputLatency) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBufferSizes(
        /* [out] */ int *_piMinSize,
        /* [out] */ int *_piMaxSize,
        /* [out] */ int *_piPreferredSize,
        /* [out] */ int *_piGranularity) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelName(
        /* [in] */ eASIODrvType _eDrvType,
        /* [in] */ int          _iNum,
        /* [out] */ BSTR       *_pbsName) = 0;
};

    #else /* C style interface */

typedef struct IMFObjectASIOVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFObjectASIO    *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFObjectASIO *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFObjectASIO *This);

    DECLSPEC_XFGVIRT(IMFObjectASIO, GetDriversCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetDriversCount)(IMFObjectASIO          *This,
                                                                   /* [in] */ eASIODrvType _eDrvType,
                                                                   /* [out] */ int        *_piCount);

    DECLSPEC_XFGVIRT(IMFObjectASIO, GetDriverName)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetDriverName)(IMFObjectASIO          *This,
                                                                 /* [in] */ eASIODrvType _eDrvType,
                                                                 /* [in] */ int          _iNum,
                                                                 /* [out] */ BSTR       *_pbsName);

    DECLSPEC_XFGVIRT(IMFObjectASIO, LoadDriverByName)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *LoadDriverByName)(IMFObjectASIO          *This,
                                                                    /* [in] */ eASIODrvType _eDrvType,
                                                                    /* [in] */ BSTR         _bsName,
                                                                    /* [in] */ BSTR         _bsPropsList,
                                                                    /* [in] */ IUnknown    *_pCaller,
                                                                    /* [out] */ int        *_piId);

    DECLSPEC_XFGVIRT(IMFObjectASIO, LoadDriverByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *LoadDriverByIndex)(IMFObjectASIO          *This,
                                                                     /* [in] */ eASIODrvType _eDrvType,
                                                                     /* [in] */ int          _iIndex,
                                                                     /* [in] */ BSTR         _bsPropsList,
                                                                     /* [in] */ IUnknown    *_pCaller,
                                                                     /* [out] */ int        *_piId);

    DECLSPEC_XFGVIRT(IMFObjectASIO, CloseDriver)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *CloseDriver)(IMFObjectASIO *This,
                                                               /* [in] */ int _iId);

    DECLSPEC_XFGVIRT(IMFObjectASIO, GetLoadedDriverName)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetLoadedDriverName)(IMFObjectASIO    *This,
                                                                       /* [out] */ BSTR *_pbsName);

    DECLSPEC_XFGVIRT(IMFObjectASIO, GetLoadedDriverIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetLoadedDriverIndex)(IMFObjectASIO          *This,
                                                                        /* [in] */ eASIODrvType _eDrvType,
                                                                        /* [out] */ int        *_piIndex);

    DECLSPEC_XFGVIRT(IMFObjectASIO, DriverIsLoaded)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DriverIsLoaded)(IMFObjectASIO    *This,
                                                                  /* [out] */ BOOL *_pbLoaded);

    DECLSPEC_XFGVIRT(IMFObjectASIO, Start)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *Start)(IMFObjectASIO *This,
                                                         /* [in] */ int _iId);

    DECLSPEC_XFGVIRT(IMFObjectASIO, Stop)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *Stop)(IMFObjectASIO *This,
                                                        /* [in] */ int _iId);

    DECLSPEC_XFGVIRT(IMFObjectASIO, IsStarted)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *IsStarted)(IMFObjectASIO    *This,
                                                             /* [in] */ int    _iId,
                                                             /* [out] */ BOOL *_pbStarted);

    DECLSPEC_XFGVIRT(IMFObjectASIO, GetProps)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetProps)(IMFObjectASIO           *This,
                                                            /* [out] */ M_AUD_PROPS *_pInputProps,
                                                            /* [out] */ M_AUD_PROPS *_pOutputProps);

    DECLSPEC_XFGVIRT(IMFObjectASIO, GetLatencies)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetLatencies)(IMFObjectASIO   *This,
                                                                /* [out] */ int *_piInputLatency,
                                                                /* [out] */ int *_piOutputLatency);

    DECLSPEC_XFGVIRT(IMFObjectASIO, GetBufferSizes)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetBufferSizes)(IMFObjectASIO   *This,
                                                                  /* [out] */ int *_piMinSize,
                                                                  /* [out] */ int *_piMaxSize,
                                                                  /* [out] */ int *_piPreferredSize,
                                                                  /* [out] */ int *_piGranularity);

    DECLSPEC_XFGVIRT(IMFObjectASIO, GetChannelName)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GetChannelName)(IMFObjectASIO          *This,
                                                                  /* [in] */ eASIODrvType _eDrvType,
                                                                  /* [in] */ int          _iNum,
                                                                  /* [out] */ BSTR       *_pbsName);

    END_INTERFACE
} IMFObjectASIOVtbl;

interface IMFObjectASIO { CONST_VTBL struct IMFObjectASIOVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFObjectASIO_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFObjectASIO_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFObjectASIO_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFObjectASIO_GetDriversCount(This, _eDrvType, _piCount) \
                ((This)->lpVtbl->GetDriversCount(This, _eDrvType, _piCount))

            #define IMFObjectASIO_GetDriverName(This, _eDrvType, _iNum, _pbsName) \
                ((This)->lpVtbl->GetDriverName(This, _eDrvType, _iNum, _pbsName))

            #define IMFObjectASIO_LoadDriverByName(This, _eDrvType, _bsName, _bsPropsList, _pCaller, _piId) \
                ((This)->lpVtbl->LoadDriverByName(This, _eDrvType, _bsName, _bsPropsList, _pCaller, _piId))

            #define IMFObjectASIO_LoadDriverByIndex(This, _eDrvType, _iIndex, _bsPropsList, _pCaller, _piId) \
                ((This)->lpVtbl->LoadDriverByIndex(This, _eDrvType, _iIndex, _bsPropsList, _pCaller, _piId))

            #define IMFObjectASIO_CloseDriver(This, _iId) ((This)->lpVtbl->CloseDriver(This, _iId))

            #define IMFObjectASIO_GetLoadedDriverName(This, _pbsName) \
                ((This)->lpVtbl->GetLoadedDriverName(This, _pbsName))

            #define IMFObjectASIO_GetLoadedDriverIndex(This, _eDrvType, _piIndex) \
                ((This)->lpVtbl->GetLoadedDriverIndex(This, _eDrvType, _piIndex))

            #define IMFObjectASIO_DriverIsLoaded(This, _pbLoaded) ((This)->lpVtbl->DriverIsLoaded(This, _pbLoaded))

            #define IMFObjectASIO_Start(This, _iId) ((This)->lpVtbl->Start(This, _iId))

            #define IMFObjectASIO_Stop(This, _iId) ((This)->lpVtbl->Stop(This, _iId))

            #define IMFObjectASIO_IsStarted(This, _iId, _pbStarted) ((This)->lpVtbl->IsStarted(This, _iId, _pbStarted))

            #define IMFObjectASIO_GetProps(This, _pInputProps, _pOutputProps) \
                ((This)->lpVtbl->GetProps(This, _pInputProps, _pOutputProps))

            #define IMFObjectASIO_GetLatencies(This, _piInputLatency, _piOutputLatency) \
                ((This)->lpVtbl->GetLatencies(This, _piInputLatency, _piOutputLatency))

            #define IMFObjectASIO_GetBufferSizes(This, _piMinSize, _piMaxSize, _piPreferredSize, _piGranularity) \
                ((This)->lpVtbl->GetBufferSizes(This, _piMinSize, _piMaxSize, _piPreferredSize, _piGranularity))

            #define IMFObjectASIO_GetChannelName(This, _eDrvType, _iNum, _pbsName) \
                ((This)->lpVtbl->GetChannelName(This, _eDrvType, _iNum, _pbsName))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFObjectASIO_INTERFACE_DEFINED__ */

#ifndef __IMFAsyncOperation_INTERFACE_DEFINED__
    #define __IMFAsyncOperation_INTERFACE_DEFINED__

/* interface IMFAsyncOperation */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFAsyncOperation;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("41B11234-7E3B-419D-8835-9DB3A9D57B6D")
IMFAsyncOperation: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OperationGetState(
        /* [out] */ eMState * _peState,
        /* [out] */ double *_pdblProgress) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OperationControl(
        /* [in] */ BSTR _bsCommand,
        /* [in] */ BSTR _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OperationCancel(void) = 0;
};

    #else /* C style interface */

typedef struct IMFAsyncOperationVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFAsyncOperation *This,
                                               /* [in] */ REFIID  riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFAsyncOperation *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFAsyncOperation *This);

    DECLSPEC_XFGVIRT(IMFAsyncOperation, OperationGetState)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *OperationGetState)(IMFAsyncOperation   *This,
                                                                     /* [out] */ eMState *_peState,
                                                                     /* [out] */ double  *_pdblProgress);

    DECLSPEC_XFGVIRT(IMFAsyncOperation, OperationControl)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *OperationControl)(IMFAsyncOperation *This,
                                                                    /* [in] */ BSTR    _bsCommand,
                                                                    /* [in] */ BSTR    _bsHints);

    DECLSPEC_XFGVIRT(IMFAsyncOperation, OperationCancel)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *OperationCancel)(IMFAsyncOperation *This);

    END_INTERFACE
} IMFAsyncOperationVtbl;

interface IMFAsyncOperation { CONST_VTBL struct IMFAsyncOperationVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFAsyncOperation_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFAsyncOperation_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFAsyncOperation_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFAsyncOperation_OperationGetState(This, _peState, _pdblProgress) \
                ((This)->lpVtbl->OperationGetState(This, _peState, _pdblProgress))

            #define IMFAsyncOperation_OperationControl(This, _bsCommand, _bsHints) \
                ((This)->lpVtbl->OperationControl(This, _bsCommand, _bsHints))

            #define IMFAsyncOperation_OperationCancel(This) ((This)->lpVtbl->OperationCancel(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFAsyncOperation_INTERFACE_DEFINED__ */

#ifndef __IMFDelay_INTERFACE_DEFINED__
    #define __IMFDelay_INTERFACE_DEFINED__

/* interface IMFDelay */
/* [object][helpstring][uuid] */

EXTERN_C const IID IID_IMFDelay;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("2A29B2F5-A947-46DF-8E73-25B9F3C76534")
IMFDelay: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DelayInit(
        /* [in] */ BSTR _bsStoragePath) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DelayEnable(
        /* [in] */ BOOL _bEnable) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DelayAvailable(
        /* [out] */ M_DATETIME * _pBufferStartTime,
        /* [out] */ double *_pdblBufferMinSec,
        /* [out] */ double *_pdblBufferMaxSec) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DelayFrameGetByTime(
        /* [in] */ double      _dblBufferTimeSec,
        /* [in] */ BOOL        _bReverseDirection,
        /* [out] */ IUnknown **_ppMFFrame,
        /* [in] */ BSTR        _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DelayExportBufferByTime(
        /* [in] */ BSTR                 _bsFilePath,
        /* [in] */ BSTR                 _bsPropsList,
        /* [in] */ double               _dblBufferTimeSec,
        /* [in] */ double               _dblDurationSec,
        /* [out] */ IMFAsyncOperation **_ppAsyncOp) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DelayExportGetCount(
        /* [out] */ int *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DelayExportGetByIndex(
        /* [in] */ int                  _nIndex,
        /* [out] */ IMFAsyncOperation **_ppAsyncOp) = 0;
};

    #else /* C style interface */

typedef struct IMFDelayVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFDelay         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFDelay *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFDelay *This);

    DECLSPEC_XFGVIRT(IMFDelay, DelayInit)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DelayInit)(IMFDelay       *This,
                                                             /* [in] */ BSTR _bsStoragePath);

    DECLSPEC_XFGVIRT(IMFDelay, DelayEnable)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DelayEnable)(IMFDelay       *This,
                                                               /* [in] */ BOOL _bEnable);

    DECLSPEC_XFGVIRT(IMFDelay, DelayAvailable)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DelayAvailable)(IMFDelay               *This,
                                                                  /* [out] */ M_DATETIME *_pBufferStartTime,
                                                                  /* [out] */ double     *_pdblBufferMinSec,
                                                                  /* [out] */ double     *_pdblBufferMaxSec);

    DECLSPEC_XFGVIRT(IMFDelay, DelayFrameGetByTime)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DelayFrameGetByTime)(IMFDelay              *This,
                                                                       /* [in] */ double      _dblBufferTimeSec,
                                                                       /* [in] */ BOOL        _bReverseDirection,
                                                                       /* [out] */ IUnknown **_ppMFFrame,
                                                                       /* [in] */ BSTR        _bsHints);

    DECLSPEC_XFGVIRT(IMFDelay, DelayExportBufferByTime)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DelayExportBufferByTime)(IMFDelay         *This,
                                                                           /* [in] */ BSTR   _bsFilePath,
                                                                           /* [in] */ BSTR   _bsPropsList,
                                                                           /* [in] */ double _dblBufferTimeSec,
                                                                           /* [in] */ double _dblDurationSec,
                                                                           /* [out] */ IMFAsyncOperation **_ppAsyncOp);

    DECLSPEC_XFGVIRT(IMFDelay, DelayExportGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DelayExportGetCount)(IMFDelay        *This,
                                                                       /* [out] */ int *_pnCount);

    DECLSPEC_XFGVIRT(IMFDelay, DelayExportGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DelayExportGetByIndex)(IMFDelay                       *This,
                                                                         /* [in] */ int                  _nIndex,
                                                                         /* [out] */ IMFAsyncOperation **_ppAsyncOp);

    END_INTERFACE
} IMFDelayVtbl;

interface IMFDelay { CONST_VTBL struct IMFDelayVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFDelay_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFDelay_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFDelay_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFDelay_DelayInit(This, _bsStoragePath) ((This)->lpVtbl->DelayInit(This, _bsStoragePath))

            #define IMFDelay_DelayEnable(This, _bEnable) ((This)->lpVtbl->DelayEnable(This, _bEnable))

            #define IMFDelay_DelayAvailable(This, _pBufferStartTime, _pdblBufferMinSec, _pdblBufferMaxSec) \
                ((This)->lpVtbl->DelayAvailable(This, _pBufferStartTime, _pdblBufferMinSec, _pdblBufferMaxSec))

            #define IMFDelay_DelayFrameGetByTime(This, _dblBufferTimeSec, _bReverseDirection, _ppMFFrame, _bsHints) \
                ((This)->lpVtbl->DelayFrameGetByTime(This, _dblBufferTimeSec, _bReverseDirection, _ppMFFrame, _bsHints))

            #define IMFDelay_DelayExportBufferByTime(This,                  \
                                                     _bsFilePath,           \
                                                     _bsPropsList,          \
                                                     _dblBufferTimeSec,     \
                                                     _dblDurationSec,       \
                                                     _ppAsyncOp)            \
                ((This)->lpVtbl->DelayExportBufferByTime(This,              \
                                                         _bsFilePath,       \
                                                         _bsPropsList,      \
                                                         _dblBufferTimeSec, \
                                                         _dblDurationSec,   \
                                                         _ppAsyncOp))

            #define IMFDelay_DelayExportGetCount(This, _pnCount) ((This)->lpVtbl->DelayExportGetCount(This, _pnCount))

            #define IMFDelay_DelayExportGetByIndex(This, _nIndex, _ppAsyncOp) \
                ((This)->lpVtbl->DelayExportGetByIndex(This, _nIndex, _ppAsyncOp))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFDelay_INTERFACE_DEFINED__ */

#ifndef __IMFGPUSwitcher_INTERFACE_DEFINED__
    #define __IMFGPUSwitcher_INTERFACE_DEFINED__

/* interface IMFGPUSwitcher */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFGPUSwitcher;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("171A6373-E5BF-40DE-A378-EBD3CFF7227B")
IMFGPUSwitcher: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GPUGetCount(
        /* [out] */ int *_piCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GPUGetAdapterDescByIndex(
        /* [in] */ int              _nIndex,
        /* [out] */ M_ADAPTER_DESC *_pDesc) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GPUSetAdapterByLuid(
        /* [in] */ LONGLONG _llLUID,
        /* [in] */ BSTR     _bsParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GPUGetCurrentAdapterDesc(
        /* [out] */ M_ADAPTER_DESC * _pDesc) = 0;
};

    #else /* C style interface */

typedef struct IMFGPUSwitcherVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFGPUSwitcher   *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFGPUSwitcher *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFGPUSwitcher *This);

    DECLSPEC_XFGVIRT(IMFGPUSwitcher, GPUGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GPUGetCount)(IMFGPUSwitcher  *This,
                                                               /* [out] */ int *_piCount);

    DECLSPEC_XFGVIRT(IMFGPUSwitcher, GPUGetAdapterDescByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GPUGetAdapterDescByIndex)(IMFGPUSwitcher             *This,
                                                                            /* [in] */ int              _nIndex,
                                                                            /* [out] */ M_ADAPTER_DESC *_pDesc);

    DECLSPEC_XFGVIRT(IMFGPUSwitcher, GPUSetAdapterByLuid)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GPUSetAdapterByLuid)(IMFGPUSwitcher     *This,
                                                                       /* [in] */ LONGLONG _llLUID,
                                                                       /* [in] */ BSTR     _bsParam);

    DECLSPEC_XFGVIRT(IMFGPUSwitcher, GPUGetCurrentAdapterDesc)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *GPUGetCurrentAdapterDesc)(IMFGPUSwitcher             *This,
                                                                            /* [out] */ M_ADAPTER_DESC *_pDesc);

    END_INTERFACE
} IMFGPUSwitcherVtbl;

interface IMFGPUSwitcher { CONST_VTBL struct IMFGPUSwitcherVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFGPUSwitcher_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFGPUSwitcher_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFGPUSwitcher_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFGPUSwitcher_GPUGetCount(This, _piCount) ((This)->lpVtbl->GPUGetCount(This, _piCount))

            #define IMFGPUSwitcher_GPUGetAdapterDescByIndex(This, _nIndex, _pDesc) \
                ((This)->lpVtbl->GPUGetAdapterDescByIndex(This, _nIndex, _pDesc))

            #define IMFGPUSwitcher_GPUSetAdapterByLuid(This, _llLUID, _bsParam) \
                ((This)->lpVtbl->GPUSetAdapterByLuid(This, _llLUID, _bsParam))

            #define IMFGPUSwitcher_GPUGetCurrentAdapterDesc(This, _pDesc) \
                ((This)->lpVtbl->GPUGetCurrentAdapterDesc(This, _pDesc))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFGPUSwitcher_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_MFormats_0000_0079 */
/* [local] */

#ifndef VTSG_STATE_DEFINED
    #define VTSG_STATE_DEFINED
typedef enum eVTSG_State {
    eVTSG_Closed                  = 0,
    eVTSG_Connecting              = 0x2,
    eVTSG_LoggedIn                = 0x3,
    eVTSG_Connected               = 0x4,
    eVTSG_Disconnecting           = 0x5,
    eVTSG_Disconnected            = 0x6,
    eVTSG_Error                   = 0x10,
    eVTSG_Reconnect               = 0x100,
    eVTSG_Reconnect_Connecting    = 0x102,
    eVTSG_Reconnect_LoggedIn      = 0x103,
    eVTSG_Reconnect_Disconnecting = 0x105,
    eVTSG_Reconnect_Disconnected  = 0x106,
    eVTSG_Reconnect_Error         = 0x110
} eVTSG_State;

#endif // VTSG_STATE_DEFINED
#ifndef MCONNECT_TYPEDEF_DEFINED
    #define MCONNECT_TYPEDEF_DEFINED
typedef enum eMC_ChannelState { eMCCS_Closed = 0, eMCCS_Connected = 1, eMCCS_Reconnecting = 2 } eMC_ChannelState;

typedef enum eChannelMode { eCM_Closed = 0, eCM_Receiver = 1, eCM_Transmitter = 2, eCM_Transiever = 3 } eChannelMode;

typedef struct CHANNEL_INFO {
    eMC_ChannelState eDataState;
    eChannelMode     eChannelMode;
    eVTSG_State      eSGNState;
    int              nChannelsConnected;
    LONGLONG         cbDataSend;
    LONGLONG         cbDataReceived;
    double           dblRcvBandwidth;
    double           dblSendBandwidth;
} CHANNEL_INFO;

#endif // MCONNECT_TYPEDEF_DEFINED

extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0079_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0079_v0_0_s_ifspec;

#ifndef __IMCChannelCallback_INTERFACE_DEFINED__
    #define __IMCChannelCallback_INTERFACE_DEFINED__

/* interface IMCChannelCallback */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMCChannelCallback;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("978e1a01-3984-4a9f-8d55-463702ccc535")
IMCChannelCallback: public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE OnChannelEvent(
        /* [in] */ IUnknown * _pChannel,
        /* [in] */ BSTR _bsEventName,
        /* [in] */ BSTR _bsEventParam,
        /* [in] */ IUnknown * _pEventData) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnChannelSGNMessage(
        /* [in] */ IUnknown * _pChannel,
        /* [in] */ BSTR _bsSourceUPI,
        /* [in] */ BSTR _bsMessageName,
        /* [in] */ BSTR _bsMessageBody,
        /* [in] */ IUnknown * _pMessageObj) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnChannelMessage(
        /* [in] */ IUnknown * _pChannel,
        /* [in] */ BSTR _bsSourceUPI,
        /* [in] */ BSTR _bsMessageName,
        /* [in] */ BSTR _bsMessageBody) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnChannelData(
        /* [in] */ IUnknown * _pChannel,
        /* [in] */ BSTR _bsSourceUPI,
        /* [in] */ IUnknown * _pFrameOrData) = 0;
};

    #else /* C style interface */

typedef struct IMCChannelCallbackVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMCChannelCallback *This,
                                               /* [in] */ REFIID   riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMCChannelCallback *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMCChannelCallback *This);

    DECLSPEC_XFGVIRT(IMCChannelCallback, OnChannelEvent)
    HRESULT(STDMETHODCALLTYPE *OnChannelEvent)(IMCChannelCallback  *This,
                                               /* [in] */ IUnknown *_pChannel,
                                               /* [in] */ BSTR      _bsEventName,
                                               /* [in] */ BSTR      _bsEventParam,
                                               /* [in] */ IUnknown *_pEventData);

    DECLSPEC_XFGVIRT(IMCChannelCallback, OnChannelSGNMessage)
    HRESULT(STDMETHODCALLTYPE *OnChannelSGNMessage)(IMCChannelCallback  *This,
                                                    /* [in] */ IUnknown *_pChannel,
                                                    /* [in] */ BSTR      _bsSourceUPI,
                                                    /* [in] */ BSTR      _bsMessageName,
                                                    /* [in] */ BSTR      _bsMessageBody,
                                                    /* [in] */ IUnknown *_pMessageObj);

    DECLSPEC_XFGVIRT(IMCChannelCallback, OnChannelMessage)
    HRESULT(STDMETHODCALLTYPE *OnChannelMessage)(IMCChannelCallback  *This,
                                                 /* [in] */ IUnknown *_pChannel,
                                                 /* [in] */ BSTR      _bsSourceUPI,
                                                 /* [in] */ BSTR      _bsMessageName,
                                                 /* [in] */ BSTR      _bsMessageBody);

    DECLSPEC_XFGVIRT(IMCChannelCallback, OnChannelData)
    HRESULT(STDMETHODCALLTYPE *OnChannelData)(IMCChannelCallback  *This,
                                              /* [in] */ IUnknown *_pChannel,
                                              /* [in] */ BSTR      _bsSourceUPI,
                                              /* [in] */ IUnknown *_pFrameOrData);

    END_INTERFACE
} IMCChannelCallbackVtbl;

interface IMCChannelCallback { CONST_VTBL struct IMCChannelCallbackVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMCChannelCallback_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMCChannelCallback_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMCChannelCallback_Release(This) ((This)->lpVtbl->Release(This))

            #define IMCChannelCallback_OnChannelEvent(This, _pChannel, _bsEventName, _bsEventParam, _pEventData) \
                ((This)->lpVtbl->OnChannelEvent(This, _pChannel, _bsEventName, _bsEventParam, _pEventData))

            #define IMCChannelCallback_OnChannelSGNMessage(This,           \
                                                           _pChannel,      \
                                                           _bsSourceUPI,   \
                                                           _bsMessageName, \
                                                           _bsMessageBody, \
                                                           _pMessageObj)   \
                ((This)->lpVtbl->OnChannelSGNMessage(This,                 \
                                                     _pChannel,            \
                                                     _bsSourceUPI,         \
                                                     _bsMessageName,       \
                                                     _bsMessageBody,       \
                                                     _pMessageObj))

            #define IMCChannelCallback_OnChannelMessage(This, _pChannel, _bsSourceUPI, _bsMessageName, _bsMessageBody) \
                ((This)->lpVtbl->OnChannelMessage(This, _pChannel, _bsSourceUPI, _bsMessageName, _bsMessageBody))

            #define IMCChannelCallback_OnChannelData(This, _pChannel, _bsSourceUPI, _pFrameOrData) \
                ((This)->lpVtbl->OnChannelData(This, _pChannel, _bsSourceUPI, _pFrameOrData))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMCChannelCallback_INTERFACE_DEFINED__ */

#ifndef __IMCChannelSGN_INTERFACE_DEFINED__
    #define __IMCChannelSGN_INTERFACE_DEFINED__

/* interface IMCChannelSGN */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMCChannelSGN;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("978e1f01-3984-4a9f-8d55-463702ccc535")
IMCChannelSGN: public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE VTSG_InfoGet(
        /* [out] */ BSTR * _pbsUPI,
        /* [out] */ BSTR * _pbsID,
        /* [out] */ eVTSG_State * _peState,
        /* [out] */ int *_pnMessagesHave) = 0;

    virtual HRESULT STDMETHODCALLTYPE VTSG_EnumFind(
        /* [in] */ BSTR _bsPrefix,
        /* [in] */ BSTR _bsFindUPIorID,
        /* [out] */ BSTR * _pbsChannelUPI,
        /* [out] */ IMAttributes * *_ppChannelProps) = 0;

    virtual HRESULT STDMETHODCALLTYPE VTSG_EnumGetCount(
        /* [in] */ BSTR  _bsPrefix,
        /* [out] */ int *_pnCount,
        /* [in] */ BSTR  _bsHints) = 0;

    virtual HRESULT STDMETHODCALLTYPE VTSG_EnumGetByIndex(
        /* [in] */ BSTR            _bsPrefix,
        /* [in] */ int             _nIndex,
        /* [out] */ BSTR          *_pbsChannelUPI,
        /* [out] */ IMAttributes **_ppChannelProps) = 0;

    virtual HRESULT STDMETHODCALLTYPE VTSG_EnumGetChannelProps(
        /* [in] */ BSTR _bsPrefix,
        /* [in] */ BSTR _bsChannelUPI,
        /* [in] */ BSTR _bsPropName,
        /* [out] */ BSTR * _pbsPropsValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE VTSG_MessageSend(
        /* [in] */ BSTR _bsDestinationUPI,
        /* [in] */ BSTR _bsMessageName,
        /* [in] */ BSTR _bsMessageBody,
        /* [in] */ IUnknown * _pMessageObj,
        /* [in] */ BSTR _bsHints) = 0;

    virtual HRESULT STDMETHODCALLTYPE VTSG_MessageTake(
        /* [in] */ int         _nTimeoutMsec,
        /* [out] */ BSTR      *_pbsSourceUPI,
        /* [out] */ BSTR      *_pbsMessageName,
        /* [out] */ BSTR      *_pbsMessageBody,
        /* [out] */ IUnknown **_ppMessageObj) = 0;
};

    #else /* C style interface */

typedef struct IMCChannelSGNVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMCChannelSGN    *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMCChannelSGN *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMCChannelSGN *This);

    DECLSPEC_XFGVIRT(IMCChannelSGN, VTSG_InfoGet)
    HRESULT(STDMETHODCALLTYPE *VTSG_InfoGet)(IMCChannelSGN           *This,
                                             /* [out] */ BSTR        *_pbsUPI,
                                             /* [out] */ BSTR        *_pbsID,
                                             /* [out] */ eVTSG_State *_peState,
                                             /* [out] */ int         *_pnMessagesHave);

    DECLSPEC_XFGVIRT(IMCChannelSGN, VTSG_EnumFind)
    HRESULT(STDMETHODCALLTYPE *VTSG_EnumFind)(IMCChannelSGN             *This,
                                              /* [in] */ BSTR            _bsPrefix,
                                              /* [in] */ BSTR            _bsFindUPIorID,
                                              /* [out] */ BSTR          *_pbsChannelUPI,
                                              /* [out] */ IMAttributes **_ppChannelProps);

    DECLSPEC_XFGVIRT(IMCChannelSGN, VTSG_EnumGetCount)
    HRESULT(STDMETHODCALLTYPE *VTSG_EnumGetCount)(IMCChannelSGN   *This,
                                                  /* [in] */ BSTR  _bsPrefix,
                                                  /* [out] */ int *_pnCount,
                                                  /* [in] */ BSTR  _bsHints);

    DECLSPEC_XFGVIRT(IMCChannelSGN, VTSG_EnumGetByIndex)
    HRESULT(STDMETHODCALLTYPE *VTSG_EnumGetByIndex)(IMCChannelSGN             *This,
                                                    /* [in] */ BSTR            _bsPrefix,
                                                    /* [in] */ int             _nIndex,
                                                    /* [out] */ BSTR          *_pbsChannelUPI,
                                                    /* [out] */ IMAttributes **_ppChannelProps);

    DECLSPEC_XFGVIRT(IMCChannelSGN, VTSG_EnumGetChannelProps)
    HRESULT(STDMETHODCALLTYPE *VTSG_EnumGetChannelProps)(IMCChannelSGN    *This,
                                                         /* [in] */ BSTR   _bsPrefix,
                                                         /* [in] */ BSTR   _bsChannelUPI,
                                                         /* [in] */ BSTR   _bsPropName,
                                                         /* [out] */ BSTR *_pbsPropsValue);

    DECLSPEC_XFGVIRT(IMCChannelSGN, VTSG_MessageSend)
    HRESULT(STDMETHODCALLTYPE *VTSG_MessageSend)(IMCChannelSGN       *This,
                                                 /* [in] */ BSTR      _bsDestinationUPI,
                                                 /* [in] */ BSTR      _bsMessageName,
                                                 /* [in] */ BSTR      _bsMessageBody,
                                                 /* [in] */ IUnknown *_pMessageObj,
                                                 /* [in] */ BSTR      _bsHints);

    DECLSPEC_XFGVIRT(IMCChannelSGN, VTSG_MessageTake)
    HRESULT(STDMETHODCALLTYPE *VTSG_MessageTake)(IMCChannelSGN         *This,
                                                 /* [in] */ int         _nTimeoutMsec,
                                                 /* [out] */ BSTR      *_pbsSourceUPI,
                                                 /* [out] */ BSTR      *_pbsMessageName,
                                                 /* [out] */ BSTR      *_pbsMessageBody,
                                                 /* [out] */ IUnknown **_ppMessageObj);

    END_INTERFACE
} IMCChannelSGNVtbl;

interface IMCChannelSGN { CONST_VTBL struct IMCChannelSGNVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMCChannelSGN_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMCChannelSGN_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMCChannelSGN_Release(This) ((This)->lpVtbl->Release(This))

            #define IMCChannelSGN_VTSG_InfoGet(This, _pbsUPI, _pbsID, _peState, _pnMessagesHave) \
                ((This)->lpVtbl->VTSG_InfoGet(This, _pbsUPI, _pbsID, _peState, _pnMessagesHave))

            #define IMCChannelSGN_VTSG_EnumFind(This, _bsPrefix, _bsFindUPIorID, _pbsChannelUPI, _ppChannelProps) \
                ((This)->lpVtbl->VTSG_EnumFind(This, _bsPrefix, _bsFindUPIorID, _pbsChannelUPI, _ppChannelProps))

            #define IMCChannelSGN_VTSG_EnumGetCount(This, _bsPrefix, _pnCount, _bsHints) \
                ((This)->lpVtbl->VTSG_EnumGetCount(This, _bsPrefix, _pnCount, _bsHints))

            #define IMCChannelSGN_VTSG_EnumGetByIndex(This, _bsPrefix, _nIndex, _pbsChannelUPI, _ppChannelProps) \
                ((This)->lpVtbl->VTSG_EnumGetByIndex(This, _bsPrefix, _nIndex, _pbsChannelUPI, _ppChannelProps))

            #define IMCChannelSGN_VTSG_EnumGetChannelProps(This,           \
                                                           _bsPrefix,      \
                                                           _bsChannelUPI,  \
                                                           _bsPropName,    \
                                                           _pbsPropsValue) \
                ((This)->lpVtbl->VTSG_EnumGetChannelProps(This, _bsPrefix, _bsChannelUPI, _bsPropName, _pbsPropsValue))

            #define IMCChannelSGN_VTSG_MessageSend(This,              \
                                                   _bsDestinationUPI, \
                                                   _bsMessageName,    \
                                                   _bsMessageBody,    \
                                                   _pMessageObj,      \
                                                   _bsHints)          \
                ((This)->lpVtbl->VTSG_MessageSend(This,               \
                                                  _bsDestinationUPI,  \
                                                  _bsMessageName,     \
                                                  _bsMessageBody,     \
                                                  _pMessageObj,       \
                                                  _bsHints))

            #define IMCChannelSGN_VTSG_MessageTake(This,            \
                                                   _nTimeoutMsec,   \
                                                   _pbsSourceUPI,   \
                                                   _pbsMessageName, \
                                                   _pbsMessageBody, \
                                                   _ppMessageObj)   \
                ((This)->lpVtbl->VTSG_MessageTake(This,             \
                                                  _nTimeoutMsec,    \
                                                  _pbsSourceUPI,    \
                                                  _pbsMessageName,  \
                                                  _pbsMessageBody,  \
                                                  _ppMessageObj))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMCChannelSGN_INTERFACE_DEFINED__ */

#ifndef __IMCChannel_INTERFACE_DEFINED__
    #define __IMCChannel_INTERFACE_DEFINED__

/* interface IMCChannel */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMCChannel;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("978e1f11-3984-4a9f-8d55-463702ccc535")
IMCChannel: public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE ChannelInfoGet(
        /* [out] */ CHANNEL_INFO * _pChannelInfo) = 0;

    virtual HRESULT STDMETHODCALLTYPE ChannelDisconnect(
        /* [in] */ BSTR _bsConnectedUPIorID,
        /* [in] */ BSTR _bsReason) = 0;

    virtual HRESULT STDMETHODCALLTYPE ChannelSend(
        /* [in] */ int       _nStreamIdx,
        /* [in] */ IUnknown *_pFrameOrData,
        /* [in] */ BSTR      _bsHints) = 0;

    virtual HRESULT STDMETHODCALLTYPE ChannelReceive(
        /* [in] */ int         _nTimeoutMsec,
        /* [in] */ int         _nStreamIdx,
        /* [in] */ BSTR        _bsFromUPIorID,
        /* [out] */ IUnknown **_ppFrameOrData,
        /* [in] */ BSTR        _bsHints) = 0;

    virtual HRESULT STDMETHODCALLTYPE ChannelMsgSend(
        /* [in] */ BSTR _bsMessageName,
        /* [in] */ BSTR _bsMessageBody,
        /* [in] */ BSTR _bsHints) = 0;

    virtual HRESULT STDMETHODCALLTYPE ChannelMsgReceive(
        /* [in] */ int    _nTimeoutMsec,
        /* [out] */ BSTR *_pbsFromUPIorID,
        /* [out] */ BSTR *_pbsMessageName,
        /* [out] */ BSTR *_pbsMessageBody,
        /* [in] */ BSTR   _bsHints) = 0;

    virtual HRESULT STDMETHODCALLTYPE ChannelClose(
        /* [in] */ BSTR _bsHints) = 0;

    virtual HRESULT STDMETHODCALLTYPE ChannelAuthOperation(
        /* [in] */ BSTR _bsOperation,
        /* [in] */ BSTR _bsUpdateRemotePropsList,
        /* [out] */ BSTR * _pbsAuthInfoJson,
        /* [out] */ BSTR * _pbsPrevInfoJson) = 0;
};

    #else /* C style interface */

typedef struct IMCChannelVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMCChannel       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMCChannel *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMCChannel *This);

    DECLSPEC_XFGVIRT(IMCChannel, ChannelInfoGet)
    HRESULT(STDMETHODCALLTYPE *ChannelInfoGet)(IMCChannel               *This,
                                               /* [out] */ CHANNEL_INFO *_pChannelInfo);

    DECLSPEC_XFGVIRT(IMCChannel, ChannelDisconnect)
    HRESULT(STDMETHODCALLTYPE *ChannelDisconnect)(IMCChannel     *This,
                                                  /* [in] */ BSTR _bsConnectedUPIorID,
                                                  /* [in] */ BSTR _bsReason);

    DECLSPEC_XFGVIRT(IMCChannel, ChannelSend)
    HRESULT(STDMETHODCALLTYPE *ChannelSend)(IMCChannel          *This,
                                            /* [in] */ int       _nStreamIdx,
                                            /* [in] */ IUnknown *_pFrameOrData,
                                            /* [in] */ BSTR      _bsHints);

    DECLSPEC_XFGVIRT(IMCChannel, ChannelReceive)
    HRESULT(STDMETHODCALLTYPE *ChannelReceive)(IMCChannel            *This,
                                               /* [in] */ int         _nTimeoutMsec,
                                               /* [in] */ int         _nStreamIdx,
                                               /* [in] */ BSTR        _bsFromUPIorID,
                                               /* [out] */ IUnknown **_ppFrameOrData,
                                               /* [in] */ BSTR        _bsHints);

    DECLSPEC_XFGVIRT(IMCChannel, ChannelMsgSend)
    HRESULT(STDMETHODCALLTYPE *ChannelMsgSend)(IMCChannel     *This,
                                               /* [in] */ BSTR _bsMessageName,
                                               /* [in] */ BSTR _bsMessageBody,
                                               /* [in] */ BSTR _bsHints);

    DECLSPEC_XFGVIRT(IMCChannel, ChannelMsgReceive)
    HRESULT(STDMETHODCALLTYPE *ChannelMsgReceive)(IMCChannel       *This,
                                                  /* [in] */ int    _nTimeoutMsec,
                                                  /* [out] */ BSTR *_pbsFromUPIorID,
                                                  /* [out] */ BSTR *_pbsMessageName,
                                                  /* [out] */ BSTR *_pbsMessageBody,
                                                  /* [in] */ BSTR   _bsHints);

    DECLSPEC_XFGVIRT(IMCChannel, ChannelClose)
    HRESULT(STDMETHODCALLTYPE *ChannelClose)(IMCChannel     *This,
                                             /* [in] */ BSTR _bsHints);

    DECLSPEC_XFGVIRT(IMCChannel, ChannelAuthOperation)
    HRESULT(STDMETHODCALLTYPE *ChannelAuthOperation)(IMCChannel       *This,
                                                     /* [in] */ BSTR   _bsOperation,
                                                     /* [in] */ BSTR   _bsUpdateRemotePropsList,
                                                     /* [out] */ BSTR *_pbsAuthInfoJson,
                                                     /* [out] */ BSTR *_pbsPrevInfoJson);

    END_INTERFACE
} IMCChannelVtbl;

interface IMCChannel { CONST_VTBL struct IMCChannelVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMCChannel_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMCChannel_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMCChannel_Release(This) ((This)->lpVtbl->Release(This))

            #define IMCChannel_ChannelInfoGet(This, _pChannelInfo) ((This)->lpVtbl->ChannelInfoGet(This, _pChannelInfo))

            #define IMCChannel_ChannelDisconnect(This, _bsConnectedUPIorID, _bsReason) \
                ((This)->lpVtbl->ChannelDisconnect(This, _bsConnectedUPIorID, _bsReason))

            #define IMCChannel_ChannelSend(This, _nStreamIdx, _pFrameOrData, _bsHints) \
                ((This)->lpVtbl->ChannelSend(This, _nStreamIdx, _pFrameOrData, _bsHints))

            #define IMCChannel_ChannelReceive(This,             \
                                              _nTimeoutMsec,    \
                                              _nStreamIdx,      \
                                              _bsFromUPIorID,   \
                                              _ppFrameOrData,   \
                                              _bsHints)         \
                ((This)->lpVtbl->ChannelReceive(This,           \
                                                _nTimeoutMsec,  \
                                                _nStreamIdx,    \
                                                _bsFromUPIorID, \
                                                _ppFrameOrData, \
                                                _bsHints))

            #define IMCChannel_ChannelMsgSend(This, _bsMessageName, _bsMessageBody, _bsHints) \
                ((This)->lpVtbl->ChannelMsgSend(This, _bsMessageName, _bsMessageBody, _bsHints))

            #define IMCChannel_ChannelMsgReceive(This,              \
                                                 _nTimeoutMsec,     \
                                                 _pbsFromUPIorID,   \
                                                 _pbsMessageName,   \
                                                 _pbsMessageBody,   \
                                                 _bsHints)          \
                ((This)->lpVtbl->ChannelMsgReceive(This,            \
                                                   _nTimeoutMsec,   \
                                                   _pbsFromUPIorID, \
                                                   _pbsMessageName, \
                                                   _pbsMessageBody, \
                                                   _bsHints))

            #define IMCChannel_ChannelClose(This, _bsHints) ((This)->lpVtbl->ChannelClose(This, _bsHints))

            #define IMCChannel_ChannelAuthOperation(This,                       \
                                                    _bsOperation,               \
                                                    _bsUpdateRemotePropsList,   \
                                                    _pbsAuthInfoJson,           \
                                                    _pbsPrevInfoJson)           \
                ((This)->lpVtbl->ChannelAuthOperation(This,                     \
                                                      _bsOperation,             \
                                                      _bsUpdateRemotePropsList, \
                                                      _pbsAuthInfoJson,         \
                                                      _pbsPrevInfoJson))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMCChannel_INTERFACE_DEFINED__ */

#ifndef __IMConnect_INTERFACE_DEFINED__
    #define __IMConnect_INTERFACE_DEFINED__

/* interface IMConnect */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMConnect;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("978e1e01-3984-4a9f-8d55-463702ccc535")
IMConnect: public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE Enum_Create(
        /* [in] */ BSTR _bsEnumURL,
        /* [in] */ BSTR _bsRemoteProps,
        /* [in] */ BSTR _bsHints,
        /* [in] */ IMCChannelCallback * _pCallback,
        /* [out] */ IMCChannelSGN * *_ppMChannelSGN) = 0;

    virtual HRESULT STDMETHODCALLTYPE Channel_Create(
        /* [in] */ BSTR _bsChannelUPI,
        /* [in] */ BSTR _bsRemoteProps,
        /* [in] */ BSTR _bsHints,
        /* [in] */ IMCChannelCallback * _pCallback,
        /* [out] */ IMCChannel * *_ppMChannel) = 0;

    virtual HRESULT STDMETHODCALLTYPE Channel_Connect(
        /* [in] */ BSTR _bsChannelUPI,
        /* [in] */ BSTR _bsRemoteProps,
        /* [in] */ BSTR _bsHints,
        /* [in] */ IMCChannelCallback * _pCallback,
        /* [out] */ IMCChannel * *_ppMChannel) = 0;
};

    #else /* C style interface */

typedef struct IMConnectVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMConnect        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMConnect *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMConnect *This);

    DECLSPEC_XFGVIRT(IMConnect, Enum_Create)
    HRESULT(STDMETHODCALLTYPE *Enum_Create)(IMConnect                     *This,
                                            /* [in] */ BSTR                _bsEnumURL,
                                            /* [in] */ BSTR                _bsRemoteProps,
                                            /* [in] */ BSTR                _bsHints,
                                            /* [in] */ IMCChannelCallback *_pCallback,
                                            /* [out] */ IMCChannelSGN    **_ppMChannelSGN);

    DECLSPEC_XFGVIRT(IMConnect, Channel_Create)
    HRESULT(STDMETHODCALLTYPE *Channel_Create)(IMConnect                     *This,
                                               /* [in] */ BSTR                _bsChannelUPI,
                                               /* [in] */ BSTR                _bsRemoteProps,
                                               /* [in] */ BSTR                _bsHints,
                                               /* [in] */ IMCChannelCallback *_pCallback,
                                               /* [out] */ IMCChannel       **_ppMChannel);

    DECLSPEC_XFGVIRT(IMConnect, Channel_Connect)
    HRESULT(STDMETHODCALLTYPE *Channel_Connect)(IMConnect                     *This,
                                                /* [in] */ BSTR                _bsChannelUPI,
                                                /* [in] */ BSTR                _bsRemoteProps,
                                                /* [in] */ BSTR                _bsHints,
                                                /* [in] */ IMCChannelCallback *_pCallback,
                                                /* [out] */ IMCChannel       **_ppMChannel);

    END_INTERFACE
} IMConnectVtbl;

interface IMConnect { CONST_VTBL struct IMConnectVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMConnect_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMConnect_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMConnect_Release(This) ((This)->lpVtbl->Release(This))

            #define IMConnect_Enum_Create(This, _bsEnumURL, _bsRemoteProps, _bsHints, _pCallback, _ppMChannelSGN) \
                ((This)->lpVtbl->Enum_Create(This, _bsEnumURL, _bsRemoteProps, _bsHints, _pCallback, _ppMChannelSGN))

            #define IMConnect_Channel_Create(This, _bsChannelUPI, _bsRemoteProps, _bsHints, _pCallback, _ppMChannel) \
                ((This)->lpVtbl->Channel_Create(This, _bsChannelUPI, _bsRemoteProps, _bsHints, _pCallback, _ppMChannel))

            #define IMConnect_Channel_Connect(This, _bsChannelUPI, _bsRemoteProps, _bsHints, _pCallback, _ppMChannel) \
                ((This)->lpVtbl->Channel_Connect(This,                                                                \
                                                 _bsChannelUPI,                                                       \
                                                 _bsRemoteProps,                                                      \
                                                 _bsHints,                                                            \
                                                 _pCallback,                                                          \
                                                 _ppMChannel))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMConnect_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_MFormats_0000_0083 */
/* [local] */

#ifndef MFSOURCE_DEFINED
    #define MFSOURCE_DEFINED

extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0083_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0083_v0_0_s_ifspec;

    #ifndef __IMFSource_INTERFACE_DEFINED__
        #define __IMFSource_INTERFACE_DEFINED__

/* interface IMFSource */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFSource;

        #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("CD799B77-3FD4-4237-92D4-D187B588D999")
IMFSource: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SourceAVPropsGet(
        /* [out] */ M_AV_PROPS * _pAVProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SourceFrameGet(
        /* [in] */ REFERENCE_TIME _rtMaxWait,
        /* [out] */ IMFFrame * *_ppFrame,
        /* [in] */ BSTR _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SourceFrameConvertedGet(
        /* [in] */ M_AV_PROPS * _pAVPropsOut,
        /* [in] */ REFERENCE_TIME _rtMaxWait,
        /* [out] */ IMFFrame * *_ppFrame,
        /* [in] */ BSTR _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SourceFrameGetByTime(
        /* [in] */ double         _dblTimeSec,
        /* [in] */ REFERENCE_TIME _rtMaxWait,
        /* [out] */ IMFFrame    **_ppFrame,
        /* [in] */ BSTR           _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SourceFrameGetByNumber(
        /* [in] */ int            _nFrameNo,
        /* [in] */ REFERENCE_TIME _rtMaxWait,
        /* [out] */ IMFFrame    **_ppFrame,
        /* [in] */ BSTR           _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SourceFrameConvertedGetByTime(
        /* [in] */ M_AV_PROPS * _pAVPropsOut,
        /* [in] */ double         _dblTimeSec,
        /* [in] */ REFERENCE_TIME _rtMaxWait,
        /* [out] */ IMFFrame    **_ppFrame,
        /* [in] */ BSTR           _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SourceFrameConvertedGetByNumber(
        /* [in] */ M_AV_PROPS * _pAVPropsOut,
        /* [in] */ int            _nFrameNo,
        /* [in] */ REFERENCE_TIME _rtMaxWait,
        /* [out] */ IMFFrame    **_ppFrame,
        /* [in] */ BSTR           _bsHints) = 0;
};

        #else /* C style interface */

typedef struct IMFSourceVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFSource        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFSource *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFSource *This);

    DECLSPEC_XFGVIRT(IMFSource, SourceAVPropsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceAVPropsGet)(IMFSource              *This,
                                                                    /* [out] */ M_AV_PROPS *_pAVProps);

    DECLSPEC_XFGVIRT(IMFSource, SourceFrameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameGet)(IMFSource                *This,
                                                                  /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                  /* [out] */ IMFFrame    **_ppFrame,
                                                                  /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFSource, SourceFrameConvertedGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameConvertedGet)(IMFSource                *This,
                                                                           /* [in] */ M_AV_PROPS    *_pAVPropsOut,
                                                                           /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                           /* [out] */ IMFFrame    **_ppFrame,
                                                                           /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFSource, SourceFrameGetByTime)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameGetByTime)(IMFSource                *This,
                                                                        /* [in] */ double         _dblTimeSec,
                                                                        /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                        /* [out] */ IMFFrame    **_ppFrame,
                                                                        /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFSource, SourceFrameGetByNumber)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameGetByNumber)(IMFSource                *This,
                                                                          /* [in] */ int            _nFrameNo,
                                                                          /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                          /* [out] */ IMFFrame    **_ppFrame,
                                                                          /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFSource, SourceFrameConvertedGetByTime)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameConvertedGetByTime)(IMFSource                *This,
                                                                                 /* [in] */ M_AV_PROPS    *_pAVPropsOut,
                                                                                 /* [in] */ double         _dblTimeSec,
                                                                                 /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                                 /* [out] */ IMFFrame    **_ppFrame,
                                                                                 /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFSource, SourceFrameConvertedGetByNumber)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameConvertedGetByNumber)(IMFSource             *This,
                                                                                   /* [in] */ M_AV_PROPS *_pAVPropsOut,
                                                                                   /* [in] */ int         _nFrameNo,
                                                                                   /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                                   /* [out] */ IMFFrame    **_ppFrame,
                                                                                   /* [in] */ BSTR           _bsHints);

    END_INTERFACE
} IMFSourceVtbl;

interface IMFSource { CONST_VTBL struct IMFSourceVtbl *lpVtbl; };

            #ifdef COBJMACROS

                #define IMFSource_QueryInterface(This, riid, ppvObject) \
                    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

                #define IMFSource_AddRef(This) ((This)->lpVtbl->AddRef(This))

                #define IMFSource_Release(This) ((This)->lpVtbl->Release(This))

                #define IMFSource_SourceAVPropsGet(This, _pAVProps) ((This)->lpVtbl->SourceAVPropsGet(This, _pAVProps))

                #define IMFSource_SourceFrameGet(This, _rtMaxWait, _ppFrame, _bsHints) \
                    ((This)->lpVtbl->SourceFrameGet(This, _rtMaxWait, _ppFrame, _bsHints))

                #define IMFSource_SourceFrameConvertedGet(This, _pAVPropsOut, _rtMaxWait, _ppFrame, _bsHints) \
                    ((This)->lpVtbl->SourceFrameConvertedGet(This, _pAVPropsOut, _rtMaxWait, _ppFrame, _bsHints))

                #define IMFSource_SourceFrameGetByTime(This, _dblTimeSec, _rtMaxWait, _ppFrame, _bsHints) \
                    ((This)->lpVtbl->SourceFrameGetByTime(This, _dblTimeSec, _rtMaxWait, _ppFrame, _bsHints))

                #define IMFSource_SourceFrameGetByNumber(This, _nFrameNo, _rtMaxWait, _ppFrame, _bsHints) \
                    ((This)->lpVtbl->SourceFrameGetByNumber(This, _nFrameNo, _rtMaxWait, _ppFrame, _bsHints))

                #define IMFSource_SourceFrameConvertedGetByTime(This,            \
                                                                _pAVPropsOut,    \
                                                                _dblTimeSec,     \
                                                                _rtMaxWait,      \
                                                                _ppFrame,        \
                                                                _bsHints)        \
                    ((This)->lpVtbl->SourceFrameConvertedGetByTime(This,         \
                                                                   _pAVPropsOut, \
                                                                   _dblTimeSec,  \
                                                                   _rtMaxWait,   \
                                                                   _ppFrame,     \
                                                                   _bsHints))

                #define IMFSource_SourceFrameConvertedGetByNumber(This,            \
                                                                  _pAVPropsOut,    \
                                                                  _nFrameNo,       \
                                                                  _rtMaxWait,      \
                                                                  _ppFrame,        \
                                                                  _bsHints)        \
                    ((This)->lpVtbl->SourceFrameConvertedGetByNumber(This,         \
                                                                     _pAVPropsOut, \
                                                                     _nFrameNo,    \
                                                                     _rtMaxWait,   \
                                                                     _ppFrame,     \
                                                                     _bsHints))

            #endif /* COBJMACROS */

        #endif /* C style interface */

    #endif /* __IMFSource_INTERFACE_DEFINED__ */

    /* interface __MIDL_itf_MFormats_0000_0084 */
    /* [local] */

#endif // MFSOURCE_DEFINED
#ifndef MFREADER_DEFINED
    #define MFREADER_DEFINED

extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0084_v0_0_s_ifspec;

    #ifndef __IMFReader_INTERFACE_DEFINED__
        #define __IMFReader_INTERFACE_DEFINED__

/* interface IMFReader */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFReader;

        #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("10DB43C6-89AF-4CD2-90A4-FB91B32DB3E0")
IMFReader: public IMFSource
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReaderOpen(
        /* [in] */ BSTR _bsPath,
        /* [in] */ BSTR _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReaderDurationGet(
        /* [out] */ double *_pdblDuration) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReaderNameGet(
        /* [out] */ BSTR * _pbsFileName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReaderAbort(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReaderClose(void) = 0;
};

        #else /* C style interface */

typedef struct IMFReaderVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFReader        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFReader *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFReader *This);

    DECLSPEC_XFGVIRT(IMFSource, SourceAVPropsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceAVPropsGet)(IMFReader              *This,
                                                                    /* [out] */ M_AV_PROPS *_pAVProps);

    DECLSPEC_XFGVIRT(IMFSource, SourceFrameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameGet)(IMFReader                *This,
                                                                  /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                  /* [out] */ IMFFrame    **_ppFrame,
                                                                  /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFSource, SourceFrameConvertedGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameConvertedGet)(IMFReader                *This,
                                                                           /* [in] */ M_AV_PROPS    *_pAVPropsOut,
                                                                           /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                           /* [out] */ IMFFrame    **_ppFrame,
                                                                           /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFSource, SourceFrameGetByTime)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameGetByTime)(IMFReader                *This,
                                                                        /* [in] */ double         _dblTimeSec,
                                                                        /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                        /* [out] */ IMFFrame    **_ppFrame,
                                                                        /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFSource, SourceFrameGetByNumber)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameGetByNumber)(IMFReader                *This,
                                                                          /* [in] */ int            _nFrameNo,
                                                                          /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                          /* [out] */ IMFFrame    **_ppFrame,
                                                                          /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFSource, SourceFrameConvertedGetByTime)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameConvertedGetByTime)(IMFReader                *This,
                                                                                 /* [in] */ M_AV_PROPS    *_pAVPropsOut,
                                                                                 /* [in] */ double         _dblTimeSec,
                                                                                 /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                                 /* [out] */ IMFFrame    **_ppFrame,
                                                                                 /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFSource, SourceFrameConvertedGetByNumber)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameConvertedGetByNumber)(IMFReader             *This,
                                                                                   /* [in] */ M_AV_PROPS *_pAVPropsOut,
                                                                                   /* [in] */ int         _nFrameNo,
                                                                                   /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                                   /* [out] */ IMFFrame    **_ppFrame,
                                                                                   /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFReader, ReaderOpen)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReaderOpen)(IMFReader      *This,
                                                              /* [in] */ BSTR _bsPath,
                                                              /* [in] */ BSTR _bsPropsList);

    DECLSPEC_XFGVIRT(IMFReader, ReaderDurationGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReaderDurationGet)(IMFReader          *This,
                                                                     /* [out] */ double *_pdblDuration);

    DECLSPEC_XFGVIRT(IMFReader, ReaderNameGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReaderNameGet)(IMFReader        *This,
                                                                 /* [out] */ BSTR *_pbsFileName);

    DECLSPEC_XFGVIRT(IMFReader, ReaderAbort)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReaderAbort)(IMFReader *This);

    DECLSPEC_XFGVIRT(IMFReader, ReaderClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReaderClose)(IMFReader *This);

    END_INTERFACE
} IMFReaderVtbl;

interface IMFReader { CONST_VTBL struct IMFReaderVtbl *lpVtbl; };

            #ifdef COBJMACROS

                #define IMFReader_QueryInterface(This, riid, ppvObject) \
                    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

                #define IMFReader_AddRef(This) ((This)->lpVtbl->AddRef(This))

                #define IMFReader_Release(This) ((This)->lpVtbl->Release(This))

                #define IMFReader_SourceAVPropsGet(This, _pAVProps) ((This)->lpVtbl->SourceAVPropsGet(This, _pAVProps))

                #define IMFReader_SourceFrameGet(This, _rtMaxWait, _ppFrame, _bsHints) \
                    ((This)->lpVtbl->SourceFrameGet(This, _rtMaxWait, _ppFrame, _bsHints))

                #define IMFReader_SourceFrameConvertedGet(This, _pAVPropsOut, _rtMaxWait, _ppFrame, _bsHints) \
                    ((This)->lpVtbl->SourceFrameConvertedGet(This, _pAVPropsOut, _rtMaxWait, _ppFrame, _bsHints))

                #define IMFReader_SourceFrameGetByTime(This, _dblTimeSec, _rtMaxWait, _ppFrame, _bsHints) \
                    ((This)->lpVtbl->SourceFrameGetByTime(This, _dblTimeSec, _rtMaxWait, _ppFrame, _bsHints))

                #define IMFReader_SourceFrameGetByNumber(This, _nFrameNo, _rtMaxWait, _ppFrame, _bsHints) \
                    ((This)->lpVtbl->SourceFrameGetByNumber(This, _nFrameNo, _rtMaxWait, _ppFrame, _bsHints))

                #define IMFReader_SourceFrameConvertedGetByTime(This,            \
                                                                _pAVPropsOut,    \
                                                                _dblTimeSec,     \
                                                                _rtMaxWait,      \
                                                                _ppFrame,        \
                                                                _bsHints)        \
                    ((This)->lpVtbl->SourceFrameConvertedGetByTime(This,         \
                                                                   _pAVPropsOut, \
                                                                   _dblTimeSec,  \
                                                                   _rtMaxWait,   \
                                                                   _ppFrame,     \
                                                                   _bsHints))

                #define IMFReader_SourceFrameConvertedGetByNumber(This,            \
                                                                  _pAVPropsOut,    \
                                                                  _nFrameNo,       \
                                                                  _rtMaxWait,      \
                                                                  _ppFrame,        \
                                                                  _bsHints)        \
                    ((This)->lpVtbl->SourceFrameConvertedGetByNumber(This,         \
                                                                     _pAVPropsOut, \
                                                                     _nFrameNo,    \
                                                                     _rtMaxWait,   \
                                                                     _ppFrame,     \
                                                                     _bsHints))

                #define IMFReader_ReaderOpen(This, _bsPath, _bsPropsList) \
                    ((This)->lpVtbl->ReaderOpen(This, _bsPath, _bsPropsList))

                #define IMFReader_ReaderDurationGet(This, _pdblDuration) \
                    ((This)->lpVtbl->ReaderDurationGet(This, _pdblDuration))

                #define IMFReader_ReaderNameGet(This, _pbsFileName) ((This)->lpVtbl->ReaderNameGet(This, _pbsFileName))

                #define IMFReader_ReaderAbort(This) ((This)->lpVtbl->ReaderAbort(This))

                #define IMFReader_ReaderClose(This) ((This)->lpVtbl->ReaderClose(This))

            #endif /* COBJMACROS */

        #endif /* C style interface */

    #endif /* __IMFReader_INTERFACE_DEFINED__ */

    /* interface __MIDL_itf_MFormats_0000_0085 */
    /* [local] */

#endif // MFREADER_DEFINED
#define MFORMATS_INTERFACES
typedef enum eMFDeviceType {
    eMFDT_Video       = 0,
    eMFDT_Audio       = (eMFDT_Video + 1),
    eMFDT_ExtAudio    = (eMFDT_Audio + 1),
    eMFDT_ExtAudio_2  = (eMFDT_ExtAudio + 1),
    eMFDT_ExtAudio_3  = (eMFDT_ExtAudio_2 + 1),
    eMFDT_ExtAudio_4  = (eMFDT_ExtAudio_3 + 1),
    eMFDT_ExtAudio_5  = (eMFDT_ExtAudio_4 + 1),
    eMFDT_ExtAudio_6  = (eMFDT_ExtAudio_5 + 1),
    eMFDT_ExtAudio_7  = (eMFDT_ExtAudio_6 + 1),
    eMFDT_ExtAudio_8  = (eMFDT_ExtAudio_7 + 1),
    eMFDT_ExtAudio_9  = (eMFDT_ExtAudio_8 + 1),
    eMFDT_ExtAudio_10 = (eMFDT_ExtAudio_9 + 1),
    eMFDT_ExtAudio_11 = (eMFDT_ExtAudio_10 + 1),
    eMFDT_ExtAudio_12 = (eMFDT_ExtAudio_11 + 1),
    eMFDT_ExtAudio_13 = (eMFDT_ExtAudio_12 + 1),
    eMFDT_ExtAudio_14 = (eMFDT_ExtAudio_13 + 1),
    eMFDT_ExtAudio_15 = (eMFDT_ExtAudio_14 + 1),
    eMFDT_ExtAudio_16 = (eMFDT_ExtAudio_15 + 1),
    eMFDT_MPLink      = (eMFDT_ExtAudio_16 + 1),
    eMFDT_All         = (eMFDT_MPLink + 1)
} eMFDeviceType;

typedef enum eMFWriterOption {
    eMFWO_Format     = 0,
    eMFWO_VideoCodec = (eMFWO_Format + 1),
    eMFWO_AudioCodec = (eMFWO_VideoCodec + 1)
} eMFWriterOption;

extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0085_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFormats_0000_0085_v0_0_s_ifspec;

#ifndef __IMFFormat_INTERFACE_DEFINED__
    #define __IMFFormat_INTERFACE_DEFINED__

/* interface IMFFormat */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFFormat;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F366705-473F-4ad5-A5C2-428FE0C8E03E")
IMFFormat: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatVideoGetCount(
        /* [in] */ eMFormatType _eFormatType,
        /* [out] */ int        *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatVideoGetByIndex(
        /* [in] */ eMFormatType  _eFormatType,
        /* [in] */ int           _nIndex,
        /* [out] */ M_VID_PROPS *_pVidProps,
        /* [out] */ BSTR        *_pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatVideoSet(
        /* [in] */ eMFormatType _eFormatType,
        /* [in] */ M_VID_PROPS * _pVidProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatVideoGet(
        /* [in] */ eMFormatType _eFormatType,
        /* [out] */ M_VID_PROPS * _pVidProps,
        /* [out] */ int  *_pnIndex,
        /* [out] */ BSTR *_pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatAudioGetCount(
        /* [in] */ eMFormatType _eFormatType,
        /* [out] */ int        *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatAudioGetByIndex(
        /* [in] */ eMFormatType  _eFormatType,
        /* [in] */ int           _nIndex,
        /* [out] */ M_AUD_PROPS *_pAudProps,
        /* [out] */ BSTR        *_pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatAudioSet(
        /* [in] */ eMFormatType _eFormatType,
        /* [in] */ M_AUD_PROPS * _pAudProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatAudioGet(
        /* [in] */ eMFormatType _eFormatType,
        /* [out] */ M_AUD_PROPS * _pAudProps,
        /* [out] */ int  *_pnIndex,
        /* [out] */ BSTR *_pbsName) = 0;
};

    #else /* C style interface */

typedef struct IMFFormatVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFFormat        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFFormat *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFFormat *This);

    DECLSPEC_XFGVIRT(IMFFormat, FormatVideoGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatVideoGetCount)(IMFFormat              *This,
                                                                       /* [in] */ eMFormatType _eFormatType,
                                                                       /* [out] */ int        *_pnCount);

    DECLSPEC_XFGVIRT(IMFFormat, FormatVideoGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatVideoGetByIndex)(IMFFormat               *This,
                                                                         /* [in] */ eMFormatType  _eFormatType,
                                                                         /* [in] */ int           _nIndex,
                                                                         /* [out] */ M_VID_PROPS *_pVidProps,
                                                                         /* [out] */ BSTR        *_pbsName);

    DECLSPEC_XFGVIRT(IMFFormat, FormatVideoSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatVideoSet)(IMFFormat              *This,
                                                                  /* [in] */ eMFormatType _eFormatType,
                                                                  /* [in] */ M_VID_PROPS *_pVidProps);

    DECLSPEC_XFGVIRT(IMFFormat, FormatVideoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatVideoGet)(IMFFormat               *This,
                                                                  /* [in] */ eMFormatType  _eFormatType,
                                                                  /* [out] */ M_VID_PROPS *_pVidProps,
                                                                  /* [out] */ int         *_pnIndex,
                                                                  /* [out] */ BSTR        *_pbsName);

    DECLSPEC_XFGVIRT(IMFFormat, FormatAudioGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatAudioGetCount)(IMFFormat              *This,
                                                                       /* [in] */ eMFormatType _eFormatType,
                                                                       /* [out] */ int        *_pnCount);

    DECLSPEC_XFGVIRT(IMFFormat, FormatAudioGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatAudioGetByIndex)(IMFFormat               *This,
                                                                         /* [in] */ eMFormatType  _eFormatType,
                                                                         /* [in] */ int           _nIndex,
                                                                         /* [out] */ M_AUD_PROPS *_pAudProps,
                                                                         /* [out] */ BSTR        *_pbsName);

    DECLSPEC_XFGVIRT(IMFFormat, FormatAudioSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatAudioSet)(IMFFormat              *This,
                                                                  /* [in] */ eMFormatType _eFormatType,
                                                                  /* [in] */ M_AUD_PROPS *_pAudProps);

    DECLSPEC_XFGVIRT(IMFFormat, FormatAudioGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *FormatAudioGet)(IMFFormat               *This,
                                                                  /* [in] */ eMFormatType  _eFormatType,
                                                                  /* [out] */ M_AUD_PROPS *_pAudProps,
                                                                  /* [out] */ int         *_pnIndex,
                                                                  /* [out] */ BSTR        *_pbsName);

    END_INTERFACE
} IMFFormatVtbl;

interface IMFFormat { CONST_VTBL struct IMFFormatVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFFormat_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFFormat_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFFormat_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFFormat_FormatVideoGetCount(This, _eFormatType, _pnCount) \
                ((This)->lpVtbl->FormatVideoGetCount(This, _eFormatType, _pnCount))

            #define IMFFormat_FormatVideoGetByIndex(This, _eFormatType, _nIndex, _pVidProps, _pbsName) \
                ((This)->lpVtbl->FormatVideoGetByIndex(This, _eFormatType, _nIndex, _pVidProps, _pbsName))

            #define IMFFormat_FormatVideoSet(This, _eFormatType, _pVidProps) \
                ((This)->lpVtbl->FormatVideoSet(This, _eFormatType, _pVidProps))

            #define IMFFormat_FormatVideoGet(This, _eFormatType, _pVidProps, _pnIndex, _pbsName) \
                ((This)->lpVtbl->FormatVideoGet(This, _eFormatType, _pVidProps, _pnIndex, _pbsName))

            #define IMFFormat_FormatAudioGetCount(This, _eFormatType, _pnCount) \
                ((This)->lpVtbl->FormatAudioGetCount(This, _eFormatType, _pnCount))

            #define IMFFormat_FormatAudioGetByIndex(This, _eFormatType, _nIndex, _pAudProps, _pbsName) \
                ((This)->lpVtbl->FormatAudioGetByIndex(This, _eFormatType, _nIndex, _pAudProps, _pbsName))

            #define IMFFormat_FormatAudioSet(This, _eFormatType, _pAudProps) \
                ((This)->lpVtbl->FormatAudioSet(This, _eFormatType, _pAudProps))

            #define IMFFormat_FormatAudioGet(This, _eFormatType, _pAudProps, _pnIndex, _pbsName) \
                ((This)->lpVtbl->FormatAudioGet(This, _eFormatType, _pAudProps, _pnIndex, _pbsName))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFFormat_INTERFACE_DEFINED__ */

#ifndef __IMFAudioBuffer_INTERFACE_DEFINED__
    #define __IMFAudioBuffer_INTERFACE_DEFINED__

/* interface IMFAudioBuffer */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFAudioBuffer;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("B22982A1-E0D5-4977-847D-868F5F0BB90F")
IMFAudioBuffer: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferLoadFromFile(
        /* [in] */ BSTR _bsLine,
        /* [in] */ BSTR _bsFileName,
        /* [in] */ long _lSamplesOffset,
        /* [in] */ long _lSamplesLoad) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferPropsSet(
        /* [in] */ BSTR _bsLine,
        /* [in] */ M_AUD_PROPS * _pAudProps,
        /* [in] */ BOOL _bResetBuffer) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferPropsGet(
        /* [in] */ BSTR _bsLine,
        /* [out] */ M_AUD_PROPS * _pAudProps,
        /* [out] */ long *_plSamples) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferPutPtr(
        /* [in] */ BSTR _bsLine,
        /* [in] */ M_AUD_PROPS * _pAudProps,
        /* [in] */ long     _lSamples,
        /* [in] */ LONGLONG _pbAudio,
        /* [in] */ BSTR     _bsChannelsListOrTrack) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferFramePut(
        /* [in] */ BSTR _bsLine,
        /* [in] */ IMFFrame * _pFrame,
        /* [in] */ BSTR _bsChannelsListOrTrack) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferFrameFill(
        /* [in] */ BSTR _bsLine,
        /* [in] */ IMFFrame * _pFrame,
        /* [out][in] */ long *_plSamples,
        /* [in] */ BSTR       _bsChannelsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferFrameMix(
        /* [in] */ BSTR _bsLineFrom,
        /* [in] */ IMFFrame * _pFrameTo,
        /* [out] */ long *_plSamplesMix,
        /* [in] */ double _dblGainFromStartDb,
        /* [in] */ double _dblGainFromEndDb,
        /* [in] */ BSTR   _bsChannelsListIn,
        /* [in] */ BSTR   _bsChannelsListOut) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferFrameChannelsAppend(
        /* [in] */ BSTR _bsLine,
        /* [in] */ IMFFrame * _pFrame,
        /* [out][in] */ long *_plSamplesAppend,
        /* [in] */ BSTR       _bsChannelsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferLinesMix(
        /* [in] */ BSTR       _bsLineFrom,
        /* [in] */ BSTR       _bsLineTo,
        /* [out][in] */ long *_plSamplesMix,
        /* [in] */ double     _dblGainFromStartDb,
        /* [in] */ double     _dblGainFromEndDb,
        /* [in] */ double     _dblGainToStartDb,
        /* [in] */ double     _dblGainToEndDb,
        /* [in] */ BSTR       _bsChannelsListIn,
        /* [in] */ BSTR       _bsChannelsListOut) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferLinesRemove(
        /* [in] */ BSTR _bsLine) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferRemove(
        /* [in] */ BSTR       _bsLine,
        /* [out][in] */ long *_plSamples) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferPutPtrEx(
        /* [in] */ BSTR           _bsLine,
        /* [in] */ REFERENCE_TIME _rtTime,
        /* [in] */ M_AUD_PROPS * _pAudProps,
        /* [in] */ long     _lSamples,
        /* [in] */ LONGLONG _pbAudio,
        /* [in] */ int      _cbAudioPlane,
        /* [in] */ BSTR     _bsChannelsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferGet(
        /* [in] */ BSTR           _bsLine,
        /* [out][in] */ long     *_plSamples,
        /* [out][in] */ LONGLONG *_ppbAudio,
        /* [in] */ int            _cbAudioPlane,
        /* [in] */ BSTR           _bsChannelsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferTimesEnable(
        /* [in] */ BSTR           _bsLine,
        /* [in] */ BOOL           _bEnable,
        /* [in] */ REFERENCE_TIME _prtMinDiff,
        /* [in] */ REFERENCE_TIME _prtMaxDiff) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferTimesIsEnabled(
        /* [in] */ BSTR _bsLine,
        /* [out] */ BOOL * _pbEnabled,
        /* [out] */ REFERENCE_TIME * _prtMinDiff,
        /* [out] */ REFERENCE_TIME * _prtMaxDiff) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferTimesGet(
        /* [in] */ BSTR _bsLine,
        /* [out] */ REFERENCE_TIME * _prtStartTime,
        /* [out] */ REFERENCE_TIME * _prtEndTime) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BufferTimesSet(
        /* [in] */ BSTR           _bsLine,
        /* [in] */ REFERENCE_TIME _rtStartTime,
        /* [in] */ REFERENCE_TIME _rtMinEndTime) = 0;
};

    #else /* C style interface */

typedef struct IMFAudioBufferVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFAudioBuffer   *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFAudioBuffer *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFAudioBuffer *This);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferLoadFromFile)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferLoadFromFile)(IMFAudioBuffer *This,
                                                                      /* [in] */ BSTR _bsLine,
                                                                      /* [in] */ BSTR _bsFileName,
                                                                      /* [in] */ long _lSamplesOffset,
                                                                      /* [in] */ long _lSamplesLoad);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferPropsSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferPropsSet)(IMFAudioBuffer         *This,
                                                                  /* [in] */ BSTR         _bsLine,
                                                                  /* [in] */ M_AUD_PROPS *_pAudProps,
                                                                  /* [in] */ BOOL         _bResetBuffer);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferPropsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferPropsGet)(IMFAudioBuffer          *This,
                                                                  /* [in] */ BSTR          _bsLine,
                                                                  /* [out] */ M_AUD_PROPS *_pAudProps,
                                                                  /* [out] */ long        *_plSamples);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferPutPtr)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferPutPtr)(IMFAudioBuffer         *This,
                                                                /* [in] */ BSTR         _bsLine,
                                                                /* [in] */ M_AUD_PROPS *_pAudProps,
                                                                /* [in] */ long         _lSamples,
                                                                /* [in] */ LONGLONG     _pbAudio,
                                                                /* [in] */ BSTR         _bsChannelsListOrTrack);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferFramePut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferFramePut)(IMFAudioBuffer      *This,
                                                                  /* [in] */ BSTR      _bsLine,
                                                                  /* [in] */ IMFFrame *_pFrame,
                                                                  /* [in] */ BSTR      _bsChannelsListOrTrack);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferFrameFill)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferFrameFill)(IMFAudioBuffer       *This,
                                                                   /* [in] */ BSTR       _bsLine,
                                                                   /* [in] */ IMFFrame  *_pFrame,
                                                                   /* [out][in] */ long *_plSamples,
                                                                   /* [in] */ BSTR       _bsChannelsList);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferFrameMix)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferFrameMix)(IMFAudioBuffer      *This,
                                                                  /* [in] */ BSTR      _bsLineFrom,
                                                                  /* [in] */ IMFFrame *_pFrameTo,
                                                                  /* [out] */ long    *_plSamplesMix,
                                                                  /* [in] */ double    _dblGainFromStartDb,
                                                                  /* [in] */ double    _dblGainFromEndDb,
                                                                  /* [in] */ BSTR      _bsChannelsListIn,
                                                                  /* [in] */ BSTR      _bsChannelsListOut);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferFrameChannelsAppend)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferFrameChannelsAppend)(IMFAudioBuffer       *This,
                                                                             /* [in] */ BSTR       _bsLine,
                                                                             /* [in] */ IMFFrame  *_pFrame,
                                                                             /* [out][in] */ long *_plSamplesAppend,
                                                                             /* [in] */ BSTR       _bsChannelsList);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferLinesMix)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferLinesMix)(IMFAudioBuffer       *This,
                                                                  /* [in] */ BSTR       _bsLineFrom,
                                                                  /* [in] */ BSTR       _bsLineTo,
                                                                  /* [out][in] */ long *_plSamplesMix,
                                                                  /* [in] */ double     _dblGainFromStartDb,
                                                                  /* [in] */ double     _dblGainFromEndDb,
                                                                  /* [in] */ double     _dblGainToStartDb,
                                                                  /* [in] */ double     _dblGainToEndDb,
                                                                  /* [in] */ BSTR       _bsChannelsListIn,
                                                                  /* [in] */ BSTR       _bsChannelsListOut);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferLinesRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferLinesRemove)(IMFAudioBuffer *This,
                                                                     /* [in] */ BSTR _bsLine);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferRemove)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferRemove)(IMFAudioBuffer       *This,
                                                                /* [in] */ BSTR       _bsLine,
                                                                /* [out][in] */ long *_plSamples);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferPutPtrEx)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferPutPtrEx)(IMFAudioBuffer           *This,
                                                                  /* [in] */ BSTR           _bsLine,
                                                                  /* [in] */ REFERENCE_TIME _rtTime,
                                                                  /* [in] */ M_AUD_PROPS   *_pAudProps,
                                                                  /* [in] */ long           _lSamples,
                                                                  /* [in] */ LONGLONG       _pbAudio,
                                                                  /* [in] */ int            _cbAudioPlane,
                                                                  /* [in] */ BSTR           _bsChannelsList);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferGet)(IMFAudioBuffer           *This,
                                                             /* [in] */ BSTR           _bsLine,
                                                             /* [out][in] */ long     *_plSamples,
                                                             /* [out][in] */ LONGLONG *_ppbAudio,
                                                             /* [in] */ int            _cbAudioPlane,
                                                             /* [in] */ BSTR           _bsChannelsList);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferTimesEnable)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferTimesEnable)(IMFAudioBuffer           *This,
                                                                     /* [in] */ BSTR           _bsLine,
                                                                     /* [in] */ BOOL           _bEnable,
                                                                     /* [in] */ REFERENCE_TIME _prtMinDiff,
                                                                     /* [in] */ REFERENCE_TIME _prtMaxDiff);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferTimesIsEnabled)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferTimesIsEnabled)(IMFAudioBuffer             *This,
                                                                        /* [in] */ BSTR             _bsLine,
                                                                        /* [out] */ BOOL           *_pbEnabled,
                                                                        /* [out] */ REFERENCE_TIME *_prtMinDiff,
                                                                        /* [out] */ REFERENCE_TIME *_prtMaxDiff);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferTimesGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferTimesGet)(IMFAudioBuffer             *This,
                                                                  /* [in] */ BSTR             _bsLine,
                                                                  /* [out] */ REFERENCE_TIME *_prtStartTime,
                                                                  /* [out] */ REFERENCE_TIME *_prtEndTime);

    DECLSPEC_XFGVIRT(IMFAudioBuffer, BufferTimesSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *BufferTimesSet)(IMFAudioBuffer           *This,
                                                                  /* [in] */ BSTR           _bsLine,
                                                                  /* [in] */ REFERENCE_TIME _rtStartTime,
                                                                  /* [in] */ REFERENCE_TIME _rtMinEndTime);

    END_INTERFACE
} IMFAudioBufferVtbl;

interface IMFAudioBuffer { CONST_VTBL struct IMFAudioBufferVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFAudioBuffer_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFAudioBuffer_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFAudioBuffer_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFAudioBuffer_BufferLoadFromFile(This, _bsLine, _bsFileName, _lSamplesOffset, _lSamplesLoad) \
                ((This)->lpVtbl->BufferLoadFromFile(This, _bsLine, _bsFileName, _lSamplesOffset, _lSamplesLoad))

            #define IMFAudioBuffer_BufferPropsSet(This, _bsLine, _pAudProps, _bResetBuffer) \
                ((This)->lpVtbl->BufferPropsSet(This, _bsLine, _pAudProps, _bResetBuffer))

            #define IMFAudioBuffer_BufferPropsGet(This, _bsLine, _pAudProps, _plSamples) \
                ((This)->lpVtbl->BufferPropsGet(This, _bsLine, _pAudProps, _plSamples))

            #define IMFAudioBuffer_BufferPutPtr(This,                   \
                                                _bsLine,                \
                                                _pAudProps,             \
                                                _lSamples,              \
                                                _pbAudio,               \
                                                _bsChannelsListOrTrack) \
                ((This)->lpVtbl->BufferPutPtr(This, _bsLine, _pAudProps, _lSamples, _pbAudio, _bsChannelsListOrTrack))

            #define IMFAudioBuffer_BufferFramePut(This, _bsLine, _pFrame, _bsChannelsListOrTrack) \
                ((This)->lpVtbl->BufferFramePut(This, _bsLine, _pFrame, _bsChannelsListOrTrack))

            #define IMFAudioBuffer_BufferFrameFill(This, _bsLine, _pFrame, _plSamples, _bsChannelsList) \
                ((This)->lpVtbl->BufferFrameFill(This, _bsLine, _pFrame, _plSamples, _bsChannelsList))

            #define IMFAudioBuffer_BufferFrameMix(This,                \
                                                  _bsLineFrom,         \
                                                  _pFrameTo,           \
                                                  _plSamplesMix,       \
                                                  _dblGainFromStartDb, \
                                                  _dblGainFromEndDb,   \
                                                  _bsChannelsListIn,   \
                                                  _bsChannelsListOut)  \
                ((This)->lpVtbl->BufferFrameMix(This,                  \
                                                _bsLineFrom,           \
                                                _pFrameTo,             \
                                                _plSamplesMix,         \
                                                _dblGainFromStartDb,   \
                                                _dblGainFromEndDb,     \
                                                _bsChannelsListIn,     \
                                                _bsChannelsListOut))

            #define IMFAudioBuffer_BufferFrameChannelsAppend(This,             \
                                                             _bsLine,          \
                                                             _pFrame,          \
                                                             _plSamplesAppend, \
                                                             _bsChannelsList)  \
                ((This)->lpVtbl->BufferFrameChannelsAppend(This, _bsLine, _pFrame, _plSamplesAppend, _bsChannelsList))

            #define IMFAudioBuffer_BufferLinesMix(This,                \
                                                  _bsLineFrom,         \
                                                  _bsLineTo,           \
                                                  _plSamplesMix,       \
                                                  _dblGainFromStartDb, \
                                                  _dblGainFromEndDb,   \
                                                  _dblGainToStartDb,   \
                                                  _dblGainToEndDb,     \
                                                  _bsChannelsListIn,   \
                                                  _bsChannelsListOut)  \
                ((This)->lpVtbl->BufferLinesMix(This,                  \
                                                _bsLineFrom,           \
                                                _bsLineTo,             \
                                                _plSamplesMix,         \
                                                _dblGainFromStartDb,   \
                                                _dblGainFromEndDb,     \
                                                _dblGainToStartDb,     \
                                                _dblGainToEndDb,       \
                                                _bsChannelsListIn,     \
                                                _bsChannelsListOut))

            #define IMFAudioBuffer_BufferLinesRemove(This, _bsLine) ((This)->lpVtbl->BufferLinesRemove(This, _bsLine))

            #define IMFAudioBuffer_BufferRemove(This, _bsLine, _plSamples) \
                ((This)->lpVtbl->BufferRemove(This, _bsLine, _plSamples))

            #define IMFAudioBuffer_BufferPutPtrEx(This,            \
                                                  _bsLine,         \
                                                  _rtTime,         \
                                                  _pAudProps,      \
                                                  _lSamples,       \
                                                  _pbAudio,        \
                                                  _cbAudioPlane,   \
                                                  _bsChannelsList) \
                ((This)->lpVtbl->BufferPutPtrEx(This,              \
                                                _bsLine,           \
                                                _rtTime,           \
                                                _pAudProps,        \
                                                _lSamples,         \
                                                _pbAudio,          \
                                                _cbAudioPlane,     \
                                                _bsChannelsList))

            #define IMFAudioBuffer_BufferGet(This, _bsLine, _plSamples, _ppbAudio, _cbAudioPlane, _bsChannelsList) \
                ((This)->lpVtbl->BufferGet(This, _bsLine, _plSamples, _ppbAudio, _cbAudioPlane, _bsChannelsList))

            #define IMFAudioBuffer_BufferTimesEnable(This, _bsLine, _bEnable, _prtMinDiff, _prtMaxDiff) \
                ((This)->lpVtbl->BufferTimesEnable(This, _bsLine, _bEnable, _prtMinDiff, _prtMaxDiff))

            #define IMFAudioBuffer_BufferTimesIsEnabled(This, _bsLine, _pbEnabled, _prtMinDiff, _prtMaxDiff) \
                ((This)->lpVtbl->BufferTimesIsEnabled(This, _bsLine, _pbEnabled, _prtMinDiff, _prtMaxDiff))

            #define IMFAudioBuffer_BufferTimesGet(This, _bsLine, _prtStartTime, _prtEndTime) \
                ((This)->lpVtbl->BufferTimesGet(This, _bsLine, _prtStartTime, _prtEndTime))

            #define IMFAudioBuffer_BufferTimesSet(This, _bsLine, _rtStartTime, _rtMinEndTime) \
                ((This)->lpVtbl->BufferTimesSet(This, _bsLine, _rtStartTime, _rtMinEndTime))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFAudioBuffer_INTERFACE_DEFINED__ */

#ifndef __IMFConverter_INTERFACE_DEFINED__
    #define __IMFConverter_INTERFACE_DEFINED__

/* interface IMFConverter */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFConverter;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("B22982B1-E0D5-4977-847D-868F5F0BB90F")
IMFConverter: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConverterFrameConvert(
        /* [in] */ BSTR _bsLine,
        /* [in] */ IMFFrame * _pFrameIn,
        /* [in] */ M_AV_PROPS * _pAVPropsOut,
        /* [out] */ IMFFrame * *_ppFrameOut,
        /* [out] */ int *_pnFramesRest,
        /* [in] */ BSTR  _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConverterReset(
        /* [in] */ BSTR _bsLine) = 0;
};

    #else /* C style interface */

typedef struct IMFConverterVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFConverter     *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFConverter *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFConverter *This);

    DECLSPEC_XFGVIRT(IMFConverter, ConverterFrameConvert)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConverterFrameConvert)(IMFConverter          *This,
                                                                         /* [in] */ BSTR        _bsLine,
                                                                         /* [in] */ IMFFrame   *_pFrameIn,
                                                                         /* [in] */ M_AV_PROPS *_pAVPropsOut,
                                                                         /* [out] */ IMFFrame **_ppFrameOut,
                                                                         /* [out] */ int       *_pnFramesRest,
                                                                         /* [in] */ BSTR        _bsPropsList);

    DECLSPEC_XFGVIRT(IMFConverter, ConverterReset)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ConverterReset)(IMFConverter   *This,
                                                                  /* [in] */ BSTR _bsLine);

    END_INTERFACE
} IMFConverterVtbl;

interface IMFConverter { CONST_VTBL struct IMFConverterVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFConverter_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFConverter_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFConverter_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFConverter_ConverterFrameConvert(This,          \
                                                       _bsLine,       \
                                                       _pFrameIn,     \
                                                       _pAVPropsOut,  \
                                                       _ppFrameOut,   \
                                                       _pnFramesRest, \
                                                       _bsPropsList)  \
                ((This)->lpVtbl->ConverterFrameConvert(This,          \
                                                       _bsLine,       \
                                                       _pFrameIn,     \
                                                       _pAVPropsOut,  \
                                                       _ppFrameOut,   \
                                                       _pnFramesRest, \
                                                       _bsPropsList))

            #define IMFConverter_ConverterReset(This, _bsLine) ((This)->lpVtbl->ConverterReset(This, _bsLine))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFConverter_INTERFACE_DEFINED__ */

#ifndef __IMFTransition_INTERFACE_DEFINED__
    #define __IMFTransition_INTERFACE_DEFINED__

/* interface IMFTransition */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFTransition;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("B22982B7-E0D5-4977-847D-868F5F0BB90F")
IMFTransition: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TransitionMake(
        /* [in] */ BSTR _bsLine,
        /* [in] */ IMFFrame * _pFrameFrom,
        /* [in] */ IMFFrame * _pFrameTo,
        /* [in] */ double      _dblPos,
        /* [out] */ IMFFrame **_ppFrameTrans,
        /* [in] */ BSTR        _bsTransition,
        /* [in] */ BSTR        _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TransitionReset(
        /* [in] */ BSTR _bsLine) = 0;
};

    #else /* C style interface */

typedef struct IMFTransitionVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFTransition    *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFTransition *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFTransition *This);

    DECLSPEC_XFGVIRT(IMFTransition, TransitionMake)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TransitionMake)(IMFTransition         *This,
                                                                  /* [in] */ BSTR        _bsLine,
                                                                  /* [in] */ IMFFrame   *_pFrameFrom,
                                                                  /* [in] */ IMFFrame   *_pFrameTo,
                                                                  /* [in] */ double      _dblPos,
                                                                  /* [out] */ IMFFrame **_ppFrameTrans,
                                                                  /* [in] */ BSTR        _bsTransition,
                                                                  /* [in] */ BSTR        _bsPropsList);

    DECLSPEC_XFGVIRT(IMFTransition, TransitionReset)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *TransitionReset)(IMFTransition  *This,
                                                                   /* [in] */ BSTR _bsLine);

    END_INTERFACE
} IMFTransitionVtbl;

interface IMFTransition { CONST_VTBL struct IMFTransitionVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFTransition_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFTransition_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFTransition_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFTransition_TransitionMake(This,          \
                                                 _bsLine,       \
                                                 _pFrameFrom,   \
                                                 _pFrameTo,     \
                                                 _dblPos,       \
                                                 _ppFrameTrans, \
                                                 _bsTransition, \
                                                 _bsPropsList)  \
                ((This)->lpVtbl->TransitionMake(This,           \
                                                _bsLine,        \
                                                _pFrameFrom,    \
                                                _pFrameTo,      \
                                                _dblPos,        \
                                                _ppFrameTrans,  \
                                                _bsTransition,  \
                                                _bsPropsList))

            #define IMFTransition_TransitionReset(This, _bsLine) ((This)->lpVtbl->TransitionReset(This, _bsLine))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFTransition_INTERFACE_DEFINED__ */

#ifndef __IMFSourceVB6_INTERFACE_DEFINED__
    #define __IMFSourceVB6_INTERFACE_DEFINED__

/* interface IMFSourceVB6 */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFSourceVB6;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("CD799B78-3FD4-4237-92D4-D187B588D999")
IMFSourceVB6: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SourceFrameConvertedGetByTimeVB6(
        /* [in] */ M_AV_PROPS * _pAVPropsOut,
        /* [in] */ double      _dblTimeSec,
        /* [in] */ int         _nMaxWaitMsec,
        /* [out] */ IMFFrame **_ppFrame,
        /* [in] */ BSTR        _bsHints) = 0;
};

    #else /* C style interface */

typedef struct IMFSourceVB6Vtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFSourceVB6     *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFSourceVB6 *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFSourceVB6 *This);

    DECLSPEC_XFGVIRT(IMFSourceVB6, SourceFrameConvertedGetByTimeVB6)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SourceFrameConvertedGetByTimeVB6)(IMFSourceVB6          *This,
                                                                                    /* [in] */ M_AV_PROPS *_pAVPropsOut,
                                                                                    /* [in] */ double      _dblTimeSec,
                                                                                    /* [in] */ int _nMaxWaitMsec,
                                                                                    /* [out] */ IMFFrame **_ppFrame,
                                                                                    /* [in] */ BSTR        _bsHints);

    END_INTERFACE
} IMFSourceVB6Vtbl;

interface IMFSourceVB6 { CONST_VTBL struct IMFSourceVB6Vtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFSourceVB6_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFSourceVB6_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFSourceVB6_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFSourceVB6_SourceFrameConvertedGetByTimeVB6(This,          \
                                                                  _pAVPropsOut,  \
                                                                  _dblTimeSec,   \
                                                                  _nMaxWaitMsec, \
                                                                  _ppFrame,      \
                                                                  _bsHints)      \
                ((This)->lpVtbl->SourceFrameConvertedGetByTimeVB6(This,          \
                                                                  _pAVPropsOut,  \
                                                                  _dblTimeSec,   \
                                                                  _nMaxWaitMsec, \
                                                                  _ppFrame,      \
                                                                  _bsHints))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFSourceVB6_INTERFACE_DEFINED__ */

#ifndef __IMFDevice_INTERFACE_DEFINED__
    #define __IMFDevice_INTERFACE_DEFINED__

/* interface IMFDevice */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFDevice;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("10DB43D6-89AF-4CD2-90A4-FB91B32DB3E0")
IMFDevice: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceGetCount(
        /* [in] */ eMFDeviceType _eDevType,
        /* [out] */ int         *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceGetByIndex(
        /* [in] */ eMFDeviceType _eDevType,
        /* [in] */ int           _nIndex,
        /* [out] */ BSTR        *_pbsName,
        /* [out] */ BOOL        *_pbBusy) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceSet(
        /* [in] */ eMFDeviceType _eDevType,
        /* [in] */ int           _nIndex,
        /* [in] */ BSTR          _bsParam) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceGet(
        /* [in] */ eMFDeviceType _eDevType,
        /* [out] */ int         *_pnIndex,
        /* [out] */ BSTR        *_pbsName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceShowProps(
        /* [in] */ eMFDeviceType _eDevType,
        /* [in] */ BSTR          _bsPropsType,
        /* [in] */ LONGLONG      _lWndHandle) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceOpen(
        /* [in] */ BSTR _bsDeviceConfig,
        /* [in] */ BSTR _bsPropsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceClose(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceGetInternal(
        /* [in] */ eMFDeviceType _eDevType,
        /* [out] */ IUnknown * *_ppObject) = 0;
};

    #else /* C style interface */

typedef struct IMFDeviceVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFDevice        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFDevice *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFDevice *This);

    DECLSPEC_XFGVIRT(IMFDevice, DeviceGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceGetCount)(IMFDevice               *This,
                                                                  /* [in] */ eMFDeviceType _eDevType,
                                                                  /* [out] */ int         *_pnCount);

    DECLSPEC_XFGVIRT(IMFDevice, DeviceGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceGetByIndex)(IMFDevice               *This,
                                                                    /* [in] */ eMFDeviceType _eDevType,
                                                                    /* [in] */ int           _nIndex,
                                                                    /* [out] */ BSTR        *_pbsName,
                                                                    /* [out] */ BOOL        *_pbBusy);

    DECLSPEC_XFGVIRT(IMFDevice, DeviceSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceSet)(IMFDevice               *This,
                                                             /* [in] */ eMFDeviceType _eDevType,
                                                             /* [in] */ int           _nIndex,
                                                             /* [in] */ BSTR          _bsParam);

    DECLSPEC_XFGVIRT(IMFDevice, DeviceGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceGet)(IMFDevice               *This,
                                                             /* [in] */ eMFDeviceType _eDevType,
                                                             /* [out] */ int         *_pnIndex,
                                                             /* [out] */ BSTR        *_pbsName);

    DECLSPEC_XFGVIRT(IMFDevice, DeviceShowProps)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceShowProps)(IMFDevice               *This,
                                                                   /* [in] */ eMFDeviceType _eDevType,
                                                                   /* [in] */ BSTR          _bsPropsType,
                                                                   /* [in] */ LONGLONG      _lWndHandle);

    DECLSPEC_XFGVIRT(IMFDevice, DeviceOpen)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceOpen)(IMFDevice      *This,
                                                              /* [in] */ BSTR _bsDeviceConfig,
                                                              /* [in] */ BSTR _bsPropsList);

    DECLSPEC_XFGVIRT(IMFDevice, DeviceClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceClose)(IMFDevice *This);

    DECLSPEC_XFGVIRT(IMFDevice, DeviceGetInternal)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DeviceGetInternal)(IMFDevice               *This,
                                                                     /* [in] */ eMFDeviceType _eDevType,
                                                                     /* [out] */ IUnknown   **_ppObject);

    END_INTERFACE
} IMFDeviceVtbl;

interface IMFDevice { CONST_VTBL struct IMFDeviceVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFDevice_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFDevice_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFDevice_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFDevice_DeviceGetCount(This, _eDevType, _pnCount) \
                ((This)->lpVtbl->DeviceGetCount(This, _eDevType, _pnCount))

            #define IMFDevice_DeviceGetByIndex(This, _eDevType, _nIndex, _pbsName, _pbBusy) \
                ((This)->lpVtbl->DeviceGetByIndex(This, _eDevType, _nIndex, _pbsName, _pbBusy))

            #define IMFDevice_DeviceSet(This, _eDevType, _nIndex, _bsParam) \
                ((This)->lpVtbl->DeviceSet(This, _eDevType, _nIndex, _bsParam))

            #define IMFDevice_DeviceGet(This, _eDevType, _pnIndex, _pbsName) \
                ((This)->lpVtbl->DeviceGet(This, _eDevType, _pnIndex, _pbsName))

            #define IMFDevice_DeviceShowProps(This, _eDevType, _bsPropsType, _lWndHandle) \
                ((This)->lpVtbl->DeviceShowProps(This, _eDevType, _bsPropsType, _lWndHandle))

            #define IMFDevice_DeviceOpen(This, _bsDeviceConfig, _bsPropsList) \
                ((This)->lpVtbl->DeviceOpen(This, _bsDeviceConfig, _bsPropsList))

            #define IMFDevice_DeviceClose(This) ((This)->lpVtbl->DeviceClose(This))

            #define IMFDevice_DeviceGetInternal(This, _eDevType, _ppObject) \
                ((This)->lpVtbl->DeviceGetInternal(This, _eDevType, _ppObject))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFDevice_INTERFACE_DEFINED__ */

#ifndef __IMFWriter_INTERFACE_DEFINED__
    #define __IMFWriter_INTERFACE_DEFINED__

/* interface IMFWriter */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFWriter;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("10DB4AC7-89AF-4CD2-90A4-FB91B32DB3E0")
IMFWriter: public IMFReceiver
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriterOptionGetCount(
        /* [in] */ eMFWriterOption _eType,
        /* [out] */ int           *_pnCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriterOptionGetByIndex(
        /* [in] */ eMFWriterOption _eType,
        /* [in] */ int             _nIndex,
        /* [out] */ BSTR          *_pbsShortName,
        /* [out] */ BSTR          *_pbsLongName) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriterOptionSetByIndex(
        /* [in] */ eMFWriterOption _eType,
        /* [in] */ int             _nIndex,
        /* [out] */ IMFProps     **_ppProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriterOptionSet(
        /* [in] */ eMFWriterOption _eType,
        /* [in] */ BSTR            _bsName,
        /* [out] */ IMFProps * *_ppProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriterOptionGet(
        /* [in] */ eMFWriterOption _eType,
        /* [out] */ BSTR * _pbsName,
        /* [out] */ IMFProps * *_ppProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriterSet(
        /* [in] */ BSTR _bsTargetPath,
        /* [in] */ BOOL _bResetOption,
        /* [in] */ BSTR _bsOptionsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriterGet(
        /* [out] */ BSTR * _pbsTargetPath,
        /* [out] */ BSTR * _pbsOptionsList) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriterClose(
        /* [in] */ BOOL _bAsync) = 0;
};

    #else /* C style interface */

typedef struct IMFWriterVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFWriter        *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFWriter *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFWriter *This);

    DECLSPEC_XFGVIRT(IMFReceiver, ReceiverFramePut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *ReceiverFramePut)(IMFWriter                *This,
                                                                    /* [in] */ IMFFrame      *_pFrame,
                                                                    /* [in] */ REFERENCE_TIME _rtMaxWait,
                                                                    /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFWriter, WriterOptionGetCount)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *WriterOptionGetCount)(IMFWriter                 *This,
                                                                        /* [in] */ eMFWriterOption _eType,
                                                                        /* [out] */ int           *_pnCount);

    DECLSPEC_XFGVIRT(IMFWriter, WriterOptionGetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *WriterOptionGetByIndex)(IMFWriter                 *This,
                                                                          /* [in] */ eMFWriterOption _eType,
                                                                          /* [in] */ int             _nIndex,
                                                                          /* [out] */ BSTR          *_pbsShortName,
                                                                          /* [out] */ BSTR          *_pbsLongName);

    DECLSPEC_XFGVIRT(IMFWriter, WriterOptionSetByIndex)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *WriterOptionSetByIndex)(IMFWriter                 *This,
                                                                          /* [in] */ eMFWriterOption _eType,
                                                                          /* [in] */ int             _nIndex,
                                                                          /* [out] */ IMFProps     **_ppProps);

    DECLSPEC_XFGVIRT(IMFWriter, WriterOptionSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *WriterOptionSet)(IMFWriter                 *This,
                                                                   /* [in] */ eMFWriterOption _eType,
                                                                   /* [in] */ BSTR            _bsName,
                                                                   /* [out] */ IMFProps     **_ppProps);

    DECLSPEC_XFGVIRT(IMFWriter, WriterOptionGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *WriterOptionGet)(IMFWriter                 *This,
                                                                   /* [in] */ eMFWriterOption _eType,
                                                                   /* [out] */ BSTR          *_pbsName,
                                                                   /* [out] */ IMFProps     **_ppProps);

    DECLSPEC_XFGVIRT(IMFWriter, WriterSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *WriterSet)(IMFWriter      *This,
                                                             /* [in] */ BSTR _bsTargetPath,
                                                             /* [in] */ BOOL _bResetOption,
                                                             /* [in] */ BSTR _bsOptionsList);

    DECLSPEC_XFGVIRT(IMFWriter, WriterGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *WriterGet)(IMFWriter        *This,
                                                             /* [out] */ BSTR *_pbsTargetPath,
                                                             /* [out] */ BSTR *_pbsOptionsList);

    DECLSPEC_XFGVIRT(IMFWriter, WriterClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *WriterClose)(IMFWriter      *This,
                                                               /* [in] */ BOOL _bAsync);

    END_INTERFACE
} IMFWriterVtbl;

interface IMFWriter { CONST_VTBL struct IMFWriterVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFWriter_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFWriter_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFWriter_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFWriter_ReceiverFramePut(This, _pFrame, _rtMaxWait, _bsHints) \
                ((This)->lpVtbl->ReceiverFramePut(This, _pFrame, _rtMaxWait, _bsHints))

            #define IMFWriter_WriterOptionGetCount(This, _eType, _pnCount) \
                ((This)->lpVtbl->WriterOptionGetCount(This, _eType, _pnCount))

            #define IMFWriter_WriterOptionGetByIndex(This, _eType, _nIndex, _pbsShortName, _pbsLongName) \
                ((This)->lpVtbl->WriterOptionGetByIndex(This, _eType, _nIndex, _pbsShortName, _pbsLongName))

            #define IMFWriter_WriterOptionSetByIndex(This, _eType, _nIndex, _ppProps) \
                ((This)->lpVtbl->WriterOptionSetByIndex(This, _eType, _nIndex, _ppProps))

            #define IMFWriter_WriterOptionSet(This, _eType, _bsName, _ppProps) \
                ((This)->lpVtbl->WriterOptionSet(This, _eType, _bsName, _ppProps))

            #define IMFWriter_WriterOptionGet(This, _eType, _pbsName, _ppProps) \
                ((This)->lpVtbl->WriterOptionGet(This, _eType, _pbsName, _ppProps))

            #define IMFWriter_WriterSet(This, _bsTargetPath, _bResetOption, _bsOptionsList) \
                ((This)->lpVtbl->WriterSet(This, _bsTargetPath, _bResetOption, _bsOptionsList))

            #define IMFWriter_WriterGet(This, _pbsTargetPath, _pbsOptionsList) \
                ((This)->lpVtbl->WriterGet(This, _pbsTargetPath, _pbsOptionsList))

            #define IMFWriter_WriterClose(This, _bAsync) ((This)->lpVtbl->WriterClose(This, _bAsync))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFWriter_INTERFACE_DEFINED__ */

#ifndef __IMFSplitter_INTERFACE_DEFINED__
    #define __IMFSplitter_INTERFACE_DEFINED__

/* interface IMFSplitter */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFSplitter;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FBCF02-887B-4AEB-B30C-408E98E6B397")
IMFSplitter: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SplitterOpen(
        /* [in] */ BSTR  _bsFilePath,
        /* [in] */ BSTR  _bsProps,
        /* [out] */ int *_pnStreamsCount) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SplitterInfoGet(
        /* [out] */ BSTR * _pbsFilePath,
        /* [out] */ BSTR * _pbsXMLInfo,
        /* [out] */ int            *_pnStreamsCount,
        /* [out] */ REFERENCE_TIME *_prtTotalDuration) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SplitterStreamInfoGet(
        /* [in] */ int             _nStream,
        /* [out] */ M_STREAM_INFO *_pStreamInfo,
        /* [out] */ BSTR          *_pbsStreamXMLInfo) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SplitterBeginSegment(
        /* [in] */ REFERENCE_TIME _rtSegmentStart,
        /* [in] */ BSTR           _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SplitterPacketGet(
        /* [in] */ int          _nStreamIdx,
        /* [out] */ IMFPacket **_ppPacket,
        /* [in] */ BSTR         _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SplitterStop(void) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SplitterClose(void) = 0;
};

    #else /* C style interface */

typedef struct IMFSplitterVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFSplitter      *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFSplitter *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFSplitter *This);

    DECLSPEC_XFGVIRT(IMFSplitter, SplitterOpen)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SplitterOpen)(IMFSplitter     *This,
                                                                /* [in] */ BSTR  _bsFilePath,
                                                                /* [in] */ BSTR  _bsProps,
                                                                /* [out] */ int *_pnStreamsCount);

    DECLSPEC_XFGVIRT(IMFSplitter, SplitterInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SplitterInfoGet)(IMFSplitter                *This,
                                                                   /* [out] */ BSTR           *_pbsFilePath,
                                                                   /* [out] */ BSTR           *_pbsXMLInfo,
                                                                   /* [out] */ int            *_pnStreamsCount,
                                                                   /* [out] */ REFERENCE_TIME *_prtTotalDuration);

    DECLSPEC_XFGVIRT(IMFSplitter, SplitterStreamInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SplitterStreamInfoGet)(IMFSplitter               *This,
                                                                         /* [in] */ int             _nStream,
                                                                         /* [out] */ M_STREAM_INFO *_pStreamInfo,
                                                                         /* [out] */ BSTR          *_pbsStreamXMLInfo);

    DECLSPEC_XFGVIRT(IMFSplitter, SplitterBeginSegment)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SplitterBeginSegment)(IMFSplitter              *This,
                                                                        /* [in] */ REFERENCE_TIME _rtSegmentStart,
                                                                        /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFSplitter, SplitterPacketGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SplitterPacketGet)(IMFSplitter            *This,
                                                                     /* [in] */ int          _nStreamIdx,
                                                                     /* [out] */ IMFPacket **_ppPacket,
                                                                     /* [in] */ BSTR         _bsHints);

    DECLSPEC_XFGVIRT(IMFSplitter, SplitterStop)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SplitterStop)(IMFSplitter *This);

    DECLSPEC_XFGVIRT(IMFSplitter, SplitterClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *SplitterClose)(IMFSplitter *This);

    END_INTERFACE
} IMFSplitterVtbl;

interface IMFSplitter { CONST_VTBL struct IMFSplitterVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFSplitter_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFSplitter_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFSplitter_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFSplitter_SplitterOpen(This, _bsFilePath, _bsProps, _pnStreamsCount) \
                ((This)->lpVtbl->SplitterOpen(This, _bsFilePath, _bsProps, _pnStreamsCount))

            #define IMFSplitter_SplitterInfoGet(This, _pbsFilePath, _pbsXMLInfo, _pnStreamsCount, _prtTotalDuration) \
                ((This)->lpVtbl->SplitterInfoGet(This, _pbsFilePath, _pbsXMLInfo, _pnStreamsCount, _prtTotalDuration))

            #define IMFSplitter_SplitterStreamInfoGet(This, _nStream, _pStreamInfo, _pbsStreamXMLInfo) \
                ((This)->lpVtbl->SplitterStreamInfoGet(This, _nStream, _pStreamInfo, _pbsStreamXMLInfo))

            #define IMFSplitter_SplitterBeginSegment(This, _rtSegmentStart, _bsHints) \
                ((This)->lpVtbl->SplitterBeginSegment(This, _rtSegmentStart, _bsHints))

            #define IMFSplitter_SplitterPacketGet(This, _nStreamIdx, _ppPacket, _bsHints) \
                ((This)->lpVtbl->SplitterPacketGet(This, _nStreamIdx, _ppPacket, _bsHints))

            #define IMFSplitter_SplitterStop(This) ((This)->lpVtbl->SplitterStop(This))

            #define IMFSplitter_SplitterClose(This) ((This)->lpVtbl->SplitterClose(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFSplitter_INTERFACE_DEFINED__ */

#ifndef __IMFDecoder_INTERFACE_DEFINED__
    #define __IMFDecoder_INTERFACE_DEFINED__

/* interface IMFDecoder */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFDecoder;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FBCF79-887B-4AEB-B30C-408E98E6B397")
IMFDecoder: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DecodeIsSupported(
        /* [in] */ M_STREAM_INFO * _pStreamInfo,
        /* [in] */ IMFPacket * _pMFPacket,
        /* [out] */ BOOL * _pbSupported) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DecodePacket(
        /* [in] */ IMFPacket * _pMFPacket,
        /* [in] */ REFERENCE_TIME _rtSegmentStart,
        /* [in] */ M_AV_PROPS * _pAVPropsOut,
        /* [out] */ IMFFrame * *_ppFrame,
        /* [in] */ BSTR _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DecodeAudio(
        /* [in] */ IMFPacket * _pMFPacket,
        /* [in] */ REFERENCE_TIME _rtSegmentStart,
        /* [in] */ IMFAudioBuffer * _pAudioBuffer,
        /* [out] */ long *_plSamplesDecode,
        /* [in] */ BSTR   _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DecodeClose(void) = 0;
};

    #else /* C style interface */

typedef struct IMFDecoderVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFDecoder       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFDecoder *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFDecoder *This);

    DECLSPEC_XFGVIRT(IMFDecoder, DecodeIsSupported)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DecodeIsSupported)(IMFDecoder               *This,
                                                                     /* [in] */ M_STREAM_INFO *_pStreamInfo,
                                                                     /* [in] */ IMFPacket     *_pMFPacket,
                                                                     /* [out] */ BOOL         *_pbSupported);

    DECLSPEC_XFGVIRT(IMFDecoder, DecodePacket)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DecodePacket)(IMFDecoder               *This,
                                                                /* [in] */ IMFPacket     *_pMFPacket,
                                                                /* [in] */ REFERENCE_TIME _rtSegmentStart,
                                                                /* [in] */ M_AV_PROPS    *_pAVPropsOut,
                                                                /* [out] */ IMFFrame    **_ppFrame,
                                                                /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFDecoder, DecodeAudio)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DecodeAudio)(IMFDecoder                *This,
                                                               /* [in] */ IMFPacket      *_pMFPacket,
                                                               /* [in] */ REFERENCE_TIME  _rtSegmentStart,
                                                               /* [in] */ IMFAudioBuffer *_pAudioBuffer,
                                                               /* [out] */ long          *_plSamplesDecode,
                                                               /* [in] */ BSTR            _bsHints);

    DECLSPEC_XFGVIRT(IMFDecoder, DecodeClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *DecodeClose)(IMFDecoder *This);

    END_INTERFACE
} IMFDecoderVtbl;

interface IMFDecoder { CONST_VTBL struct IMFDecoderVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFDecoder_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFDecoder_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFDecoder_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFDecoder_DecodeIsSupported(This, _pStreamInfo, _pMFPacket, _pbSupported) \
                ((This)->lpVtbl->DecodeIsSupported(This, _pStreamInfo, _pMFPacket, _pbSupported))

            #define IMFDecoder_DecodePacket(This, _pMFPacket, _rtSegmentStart, _pAVPropsOut, _ppFrame, _bsHints) \
                ((This)->lpVtbl->DecodePacket(This, _pMFPacket, _rtSegmentStart, _pAVPropsOut, _ppFrame, _bsHints))

            #define IMFDecoder_DecodeAudio(This,               \
                                           _pMFPacket,         \
                                           _rtSegmentStart,    \
                                           _pAudioBuffer,      \
                                           _plSamplesDecode,   \
                                           _bsHints)           \
                ((This)->lpVtbl->DecodeAudio(This,             \
                                             _pMFPacket,       \
                                             _rtSegmentStart,  \
                                             _pAudioBuffer,    \
                                             _plSamplesDecode, \
                                             _bsHints))

            #define IMFDecoder_DecodeClose(This) ((This)->lpVtbl->DecodeClose(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFDecoder_INTERFACE_DEFINED__ */

#ifndef __IMFMuxer_INTERFACE_DEFINED__
    #define __IMFMuxer_INTERFACE_DEFINED__

/* interface IMFMuxer */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFMuxer;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FBCF23-887B-4AEB-B30C-408E98E6B397")
IMFMuxer: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MuxerSet(
        /* [in] */ BSTR _bsFilePath,
        /* [in] */ BSTR _bsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MuxerStreamAdd(
        /* [in] */ M_STREAM_INFO * _pStreamInfo,
        /* [in] */ BSTR  _bsProps,
        /* [out] */ int *_pnStreamIdx) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MuxerStreamInfoGet(
        /* [in] */ int             _nStreamIdx,
        /* [out] */ M_STREAM_INFO *_pStreamInfo,
        /* [out] */ BSTR          *_pbsProps) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MuxerPacketPut(
        /* [in] */ int        _nStreamIdx,
        /* [in] */ IMFPacket *_pPacket,
        /* [in] */ BSTR       _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MuxerClose(void) = 0;
};

    #else /* C style interface */

typedef struct IMFMuxerVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFMuxer         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFMuxer *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFMuxer *This);

    DECLSPEC_XFGVIRT(IMFMuxer, MuxerSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MuxerSet)(IMFMuxer       *This,
                                                            /* [in] */ BSTR _bsFilePath,
                                                            /* [in] */ BSTR _bsProps);

    DECLSPEC_XFGVIRT(IMFMuxer, MuxerStreamAdd)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MuxerStreamAdd)(IMFMuxer                 *This,
                                                                  /* [in] */ M_STREAM_INFO *_pStreamInfo,
                                                                  /* [in] */ BSTR           _bsProps,
                                                                  /* [out] */ int          *_pnStreamIdx);

    DECLSPEC_XFGVIRT(IMFMuxer, MuxerStreamInfoGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MuxerStreamInfoGet)(IMFMuxer                  *This,
                                                                      /* [in] */ int             _nStreamIdx,
                                                                      /* [out] */ M_STREAM_INFO *_pStreamInfo,
                                                                      /* [out] */ BSTR          *_pbsProps);

    DECLSPEC_XFGVIRT(IMFMuxer, MuxerPacketPut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MuxerPacketPut)(IMFMuxer             *This,
                                                                  /* [in] */ int        _nStreamIdx,
                                                                  /* [in] */ IMFPacket *_pPacket,
                                                                  /* [in] */ BSTR       _bsHints);

    DECLSPEC_XFGVIRT(IMFMuxer, MuxerClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *MuxerClose)(IMFMuxer *This);

    END_INTERFACE
} IMFMuxerVtbl;

interface IMFMuxer { CONST_VTBL struct IMFMuxerVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFMuxer_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFMuxer_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFMuxer_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFMuxer_MuxerSet(This, _bsFilePath, _bsProps) \
                ((This)->lpVtbl->MuxerSet(This, _bsFilePath, _bsProps))

            #define IMFMuxer_MuxerStreamAdd(This, _pStreamInfo, _bsProps, _pnStreamIdx) \
                ((This)->lpVtbl->MuxerStreamAdd(This, _pStreamInfo, _bsProps, _pnStreamIdx))

            #define IMFMuxer_MuxerStreamInfoGet(This, _nStreamIdx, _pStreamInfo, _pbsProps) \
                ((This)->lpVtbl->MuxerStreamInfoGet(This, _nStreamIdx, _pStreamInfo, _pbsProps))

            #define IMFMuxer_MuxerPacketPut(This, _nStreamIdx, _pPacket, _bsHints) \
                ((This)->lpVtbl->MuxerPacketPut(This, _nStreamIdx, _pPacket, _bsHints))

            #define IMFMuxer_MuxerClose(This) ((This)->lpVtbl->MuxerClose(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFMuxer_INTERFACE_DEFINED__ */

#ifndef __IMFEncoder_INTERFACE_DEFINED__
    #define __IMFEncoder_INTERFACE_DEFINED__

/* interface IMFEncoder */
/* [unique][uuid][object] */

EXTERN_C const IID IID_IMFEncoder;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("04FBCF26-887B-4AEB-B30C-408E98E6B397")
IMFEncoder: public IUnknown
{
public:
    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EncodeCodecSet(
        /* [in] */ eMFMediaType _eCodecType,
        /* [in] */ BSTR         _bsConfigParams) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EncodeFramePut(
        /* [in] */ IMFFrame * _pFrame,
        /* [in] */ M_AV_PROPS * _pAVPropsOut,
        /* [out] */ IMFPacket * *_ppPacket,
        /* [in] */ BSTR _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EncodePacketsGet(
        /* [out] */ IMFPacket * *_ppPacket,
        /* [out] */ int          *_pnReadyPackets,
        /* [in] */ REFERENCE_TIME _rtMaxWaitTime,
        /* [in] */ BSTR           _bsHints) = 0;

    virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EncodeClose(void) = 0;
};

    #else /* C style interface */

typedef struct IMFEncoderVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFEncoder       *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFEncoder *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFEncoder *This);

    DECLSPEC_XFGVIRT(IMFEncoder, EncodeCodecSet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *EncodeCodecSet)(IMFEncoder             *This,
                                                                  /* [in] */ eMFMediaType _eCodecType,
                                                                  /* [in] */ BSTR         _bsConfigParams);

    DECLSPEC_XFGVIRT(IMFEncoder, EncodeFramePut)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *EncodeFramePut)(IMFEncoder             *This,
                                                                  /* [in] */ IMFFrame    *_pFrame,
                                                                  /* [in] */ M_AV_PROPS  *_pAVPropsOut,
                                                                  /* [out] */ IMFPacket **_ppPacket,
                                                                  /* [in] */ BSTR         _bsHints);

    DECLSPEC_XFGVIRT(IMFEncoder, EncodePacketsGet)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *EncodePacketsGet)(IMFEncoder               *This,
                                                                    /* [out] */ IMFPacket   **_ppPacket,
                                                                    /* [out] */ int          *_pnReadyPackets,
                                                                    /* [in] */ REFERENCE_TIME _rtMaxWaitTime,
                                                                    /* [in] */ BSTR           _bsHints);

    DECLSPEC_XFGVIRT(IMFEncoder, EncodeClose)
    /* [helpstring] */ HRESULT(STDMETHODCALLTYPE *EncodeClose)(IMFEncoder *This);

    END_INTERFACE
} IMFEncoderVtbl;

interface IMFEncoder { CONST_VTBL struct IMFEncoderVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFEncoder_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFEncoder_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFEncoder_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFEncoder_EncodeCodecSet(This, _eCodecType, _bsConfigParams) \
                ((This)->lpVtbl->EncodeCodecSet(This, _eCodecType, _bsConfigParams))

            #define IMFEncoder_EncodeFramePut(This, _pFrame, _pAVPropsOut, _ppPacket, _bsHints) \
                ((This)->lpVtbl->EncodeFramePut(This, _pFrame, _pAVPropsOut, _ppPacket, _bsHints))

            #define IMFEncoder_EncodePacketsGet(This, _ppPacket, _pnReadyPackets, _rtMaxWaitTime, _bsHints) \
                ((This)->lpVtbl->EncodePacketsGet(This, _ppPacket, _pnReadyPackets, _rtMaxWaitTime, _bsHints))

            #define IMFEncoder_EncodeClose(This) ((This)->lpVtbl->EncodeClose(This))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFEncoder_INTERFACE_DEFINED__ */

#ifndef __IMFSource_I_INTERFACE_DEFINED__
    #define __IMFSource_I_INTERFACE_DEFINED__

/* interface IMFSource_I */
/* [unique][helpstring][uuid][object] */

EXTERN_C const IID IID_IMFSource_I;

    #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("CD799A77-3FD4-4237-92D4-D187B588D999")
IMFSource_I: public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE MFSourceFrameGet(
        /* [out] */ IMFFrame * *_ppFrame,
        /* [in] */ REFERENCE_TIME _rtMaxWaitTime,
        /* [in] */ BSTR           _bsPropsList) = 0;

    virtual HRESULT STDMETHODCALLTYPE MFSourceFrameGetEx(
        /* [out][in] */ LONGLONG * _plReaderID,
        /* [out] */ IMFFrame * *_ppFrame,
        /* [in] */ REFERENCE_TIME _rtMaxWaitTime,
        /* [in] */ BSTR           _bsPropsList) = 0;

    virtual HRESULT STDMETHODCALLTYPE MFSourceInit(
        /* [out][in] */ LONGLONG * _plUserData) = 0;

    virtual HRESULT STDMETHODCALLTYPE MFSourceClose(
        /* [in] */ LONGLONG _lUserData) = 0;

    virtual HRESULT STDMETHODCALLTYPE MFSourceRefAdd(
        /* [in] */ DWORD _dwProcessID) = 0;

    virtual HRESULT STDMETHODCALLTYPE MFSourceRefRemove(
        /* [in] */ DWORD _dwProcessID) = 0;

    virtual HRESULT STDMETHODCALLTYPE MFSourceHaveRefs(
        /* [out] */ LONGLONG * _phWaitHandle) = 0;

    virtual HRESULT STDMETHODCALLTYPE MFSourcePropsGet(
        /* [out] */ M_AV_PROPS * _pAVProps) = 0;
};

    #else /* C style interface */

typedef struct IMFSource_IVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMFSource_I      *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMFSource_I *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMFSource_I *This);

    DECLSPEC_XFGVIRT(IMFSource_I, MFSourceFrameGet)
    HRESULT(STDMETHODCALLTYPE *MFSourceFrameGet)(IMFSource_I              *This,
                                                 /* [out] */ IMFFrame    **_ppFrame,
                                                 /* [in] */ REFERENCE_TIME _rtMaxWaitTime,
                                                 /* [in] */ BSTR           _bsPropsList);

    DECLSPEC_XFGVIRT(IMFSource_I, MFSourceFrameGetEx)
    HRESULT(STDMETHODCALLTYPE *MFSourceFrameGetEx)(IMFSource_I              *This,
                                                   /* [out][in] */ LONGLONG *_plReaderID,
                                                   /* [out] */ IMFFrame    **_ppFrame,
                                                   /* [in] */ REFERENCE_TIME _rtMaxWaitTime,
                                                   /* [in] */ BSTR           _bsPropsList);

    DECLSPEC_XFGVIRT(IMFSource_I, MFSourceInit)
    HRESULT(STDMETHODCALLTYPE *MFSourceInit)(IMFSource_I              *This,
                                             /* [out][in] */ LONGLONG *_plUserData);

    DECLSPEC_XFGVIRT(IMFSource_I, MFSourceClose)
    HRESULT(STDMETHODCALLTYPE *MFSourceClose)(IMFSource_I        *This,
                                              /* [in] */ LONGLONG _lUserData);

    DECLSPEC_XFGVIRT(IMFSource_I, MFSourceRefAdd)
    HRESULT(STDMETHODCALLTYPE *MFSourceRefAdd)(IMFSource_I     *This,
                                               /* [in] */ DWORD _dwProcessID);

    DECLSPEC_XFGVIRT(IMFSource_I, MFSourceRefRemove)
    HRESULT(STDMETHODCALLTYPE *MFSourceRefRemove)(IMFSource_I     *This,
                                                  /* [in] */ DWORD _dwProcessID);

    DECLSPEC_XFGVIRT(IMFSource_I, MFSourceHaveRefs)
    HRESULT(STDMETHODCALLTYPE *MFSourceHaveRefs)(IMFSource_I          *This,
                                                 /* [out] */ LONGLONG *_phWaitHandle);

    DECLSPEC_XFGVIRT(IMFSource_I, MFSourcePropsGet)
    HRESULT(STDMETHODCALLTYPE *MFSourcePropsGet)(IMFSource_I            *This,
                                                 /* [out] */ M_AV_PROPS *_pAVProps);

    END_INTERFACE
} IMFSource_IVtbl;

interface IMFSource_I { CONST_VTBL struct IMFSource_IVtbl *lpVtbl; };

        #ifdef COBJMACROS

            #define IMFSource_I_QueryInterface(This, riid, ppvObject) \
                ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

            #define IMFSource_I_AddRef(This) ((This)->lpVtbl->AddRef(This))

            #define IMFSource_I_Release(This) ((This)->lpVtbl->Release(This))

            #define IMFSource_I_MFSourceFrameGet(This, _ppFrame, _rtMaxWaitTime, _bsPropsList) \
                ((This)->lpVtbl->MFSourceFrameGet(This, _ppFrame, _rtMaxWaitTime, _bsPropsList))

            #define IMFSource_I_MFSourceFrameGetEx(This, _plReaderID, _ppFrame, _rtMaxWaitTime, _bsPropsList) \
                ((This)->lpVtbl->MFSourceFrameGetEx(This, _plReaderID, _ppFrame, _rtMaxWaitTime, _bsPropsList))

            #define IMFSource_I_MFSourceInit(This, _plUserData) ((This)->lpVtbl->MFSourceInit(This, _plUserData))

            #define IMFSource_I_MFSourceClose(This, _lUserData) ((This)->lpVtbl->MFSourceClose(This, _lUserData))

            #define IMFSource_I_MFSourceRefAdd(This, _dwProcessID) ((This)->lpVtbl->MFSourceRefAdd(This, _dwProcessID))

            #define IMFSource_I_MFSourceRefRemove(This, _dwProcessID) \
                ((This)->lpVtbl->MFSourceRefRemove(This, _dwProcessID))

            #define IMFSource_I_MFSourceHaveRefs(This, _phWaitHandle) \
                ((This)->lpVtbl->MFSourceHaveRefs(This, _phWaitHandle))

            #define IMFSource_I_MFSourcePropsGet(This, _pAVProps) ((This)->lpVtbl->MFSourcePropsGet(This, _pAVProps))

        #endif /* COBJMACROS */

    #endif /* C style interface */

#endif /* __IMFSource_I_INTERFACE_DEFINED__ */

#ifndef __MFORMATSLib_LIBRARY_DEFINED__
    #define __MFORMATSLib_LIBRARY_DEFINED__

/* library MFORMATSLib */
/* [helpstring][version][uuid] */

EXTERN_C const IID LIBID_MFORMATSLib;

    #ifndef __IMEvents_DISPINTERFACE_DEFINED__
        #define __IMEvents_DISPINTERFACE_DEFINED__

/* dispinterface IMEvents */
/* [helpstring][uuid] */

EXTERN_C const IID DIID_IMEvents;

        #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F365161-473F-4ad5-A5C2-428FE0C8E03E")
IMEvents: public IDispatch {};

        #else /* C style interface */

typedef struct IMEventsVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMEvents         *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMEvents *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMEvents *This);

    DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
    HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount)(IMEvents         *This,
                                                 /* [out] */ UINT *pctinfo);

    DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
    HRESULT(STDMETHODCALLTYPE *GetTypeInfo)(IMEvents               *This,
                                            /* [in] */ UINT         iTInfo,
                                            /* [in] */ LCID         lcid,
                                            /* [out] */ ITypeInfo **ppTInfo);

    DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
    HRESULT(STDMETHODCALLTYPE *GetIDsOfNames)(IMEvents                     *This,
                                              /* [in] */ REFIID             riid,
                                              /* [size_is][in] */ LPOLESTR *rgszNames,
                                              /* [range][in] */ UINT        cNames,
                                              /* [in] */ LCID               lcid,
                                              /* [size_is][out] */ DISPID  *rgDispId);

    DECLSPEC_XFGVIRT(IDispatch, Invoke)
    /* [local] */ HRESULT(STDMETHODCALLTYPE *Invoke)(IMEvents *This,
                                                     /* [annotation][in] */
                                                     _In_ DISPID dispIdMember,
                                                     /* [annotation][in] */
                                                     _In_ REFIID riid,
                                                     /* [annotation][in] */
                                                     _In_ LCID lcid,
                                                     /* [annotation][in] */
                                                     _In_ WORD wFlags,
                                                     /* [annotation][out][in] */
                                                     _In_ DISPPARAMS *pDispParams,
                                                     /* [annotation][out] */
                                                     _Out_opt_ VARIANT *pVarResult,
                                                     /* [annotation][out] */
                                                     _Out_opt_ EXCEPINFO *pExcepInfo,
                                                     /* [annotation][out] */
                                                     _Out_opt_ UINT *puArgErr);

    END_INTERFACE
} IMEventsVtbl;

interface IMEvents { CONST_VTBL struct IMEventsVtbl *lpVtbl; };

            #ifdef COBJMACROS

                #define IMEvents_QueryInterface(This, riid, ppvObject) \
                    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

                #define IMEvents_AddRef(This) ((This)->lpVtbl->AddRef(This))

                #define IMEvents_Release(This) ((This)->lpVtbl->Release(This))

                #define IMEvents_GetTypeInfoCount(This, pctinfo) ((This)->lpVtbl->GetTypeInfoCount(This, pctinfo))

                #define IMEvents_GetTypeInfo(This, iTInfo, lcid, ppTInfo) \
                    ((This)->lpVtbl->GetTypeInfo(This, iTInfo, lcid, ppTInfo))

                #define IMEvents_GetIDsOfNames(This, riid, rgszNames, cNames, lcid, rgDispId) \
                    ((This)->lpVtbl->GetIDsOfNames(This, riid, rgszNames, cNames, lcid, rgDispId))

                #define IMEvents_Invoke(This,             \
                                        dispIdMember,     \
                                        riid,             \
                                        lcid,             \
                                        wFlags,           \
                                        pDispParams,      \
                                        pVarResult,       \
                                        pExcepInfo,       \
                                        puArgErr)         \
                    ((This)->lpVtbl->Invoke(This,         \
                                            dispIdMember, \
                                            riid,         \
                                            lcid,         \
                                            wFlags,       \
                                            pDispParams,  \
                                            pVarResult,   \
                                            pExcepInfo,   \
                                            puArgErr))

            #endif /* COBJMACROS */

        #endif /* C style interface */

    #endif /* __IMEvents_DISPINTERFACE_DEFINED__ */

    #ifndef __IMEventsEvent_DISPINTERFACE_DEFINED__
        #define __IMEventsEvent_DISPINTERFACE_DEFINED__

/* dispinterface IMEventsEvent */
/* [helpstring][uuid] */

EXTERN_C const IID DIID_IMEventsEvent;

        #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F365171-473F-4ad5-A5C2-428FE0C8E03E")
IMEventsEvent: public IDispatch {};

        #else /* C style interface */

typedef struct IMEventsEventVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMEventsEvent    *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMEventsEvent *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMEventsEvent *This);

    DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
    HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount)(IMEventsEvent    *This,
                                                 /* [out] */ UINT *pctinfo);

    DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
    HRESULT(STDMETHODCALLTYPE *GetTypeInfo)(IMEventsEvent          *This,
                                            /* [in] */ UINT         iTInfo,
                                            /* [in] */ LCID         lcid,
                                            /* [out] */ ITypeInfo **ppTInfo);

    DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
    HRESULT(STDMETHODCALLTYPE *GetIDsOfNames)(IMEventsEvent                *This,
                                              /* [in] */ REFIID             riid,
                                              /* [size_is][in] */ LPOLESTR *rgszNames,
                                              /* [range][in] */ UINT        cNames,
                                              /* [in] */ LCID               lcid,
                                              /* [size_is][out] */ DISPID  *rgDispId);

    DECLSPEC_XFGVIRT(IDispatch, Invoke)
    /* [local] */ HRESULT(STDMETHODCALLTYPE *Invoke)(IMEventsEvent *This,
                                                     /* [annotation][in] */
                                                     _In_ DISPID dispIdMember,
                                                     /* [annotation][in] */
                                                     _In_ REFIID riid,
                                                     /* [annotation][in] */
                                                     _In_ LCID lcid,
                                                     /* [annotation][in] */
                                                     _In_ WORD wFlags,
                                                     /* [annotation][out][in] */
                                                     _In_ DISPPARAMS *pDispParams,
                                                     /* [annotation][out] */
                                                     _Out_opt_ VARIANT *pVarResult,
                                                     /* [annotation][out] */
                                                     _Out_opt_ EXCEPINFO *pExcepInfo,
                                                     /* [annotation][out] */
                                                     _Out_opt_ UINT *puArgErr);

    END_INTERFACE
} IMEventsEventVtbl;

interface IMEventsEvent { CONST_VTBL struct IMEventsEventVtbl *lpVtbl; };

            #ifdef COBJMACROS

                #define IMEventsEvent_QueryInterface(This, riid, ppvObject) \
                    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

                #define IMEventsEvent_AddRef(This) ((This)->lpVtbl->AddRef(This))

                #define IMEventsEvent_Release(This) ((This)->lpVtbl->Release(This))

                #define IMEventsEvent_GetTypeInfoCount(This, pctinfo) ((This)->lpVtbl->GetTypeInfoCount(This, pctinfo))

                #define IMEventsEvent_GetTypeInfo(This, iTInfo, lcid, ppTInfo) \
                    ((This)->lpVtbl->GetTypeInfo(This, iTInfo, lcid, ppTInfo))

                #define IMEventsEvent_GetIDsOfNames(This, riid, rgszNames, cNames, lcid, rgDispId) \
                    ((This)->lpVtbl->GetIDsOfNames(This, riid, rgszNames, cNames, lcid, rgDispId))

                #define IMEventsEvent_Invoke(This,         \
                                             dispIdMember, \
                                             riid,         \
                                             lcid,         \
                                             wFlags,       \
                                             pDispParams,  \
                                             pVarResult,   \
                                             pExcepInfo,   \
                                             puArgErr)     \
                    ((This)->lpVtbl->Invoke(This,          \
                                            dispIdMember,  \
                                            riid,          \
                                            lcid,          \
                                            wFlags,        \
                                            pDispParams,   \
                                            pVarResult,    \
                                            pExcepInfo,    \
                                            puArgErr))

            #endif /* COBJMACROS */

        #endif /* C style interface */

    #endif /* __IMEventsEvent_DISPINTERFACE_DEFINED__ */

    #ifndef __IMEventsFrame_DISPINTERFACE_DEFINED__
        #define __IMEventsFrame_DISPINTERFACE_DEFINED__

/* dispinterface IMEventsFrame */
/* [helpstring][uuid] */

EXTERN_C const IID DIID_IMEventsFrame;

        #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("4F365172-473F-4ad5-A5C2-428FE0C8E03E")
IMEventsFrame: public IDispatch {};

        #else /* C style interface */

typedef struct IMEventsFrameVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(IMEventsFrame    *This,
                                               /* [in] */ REFIID riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(IMEventsFrame *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(IMEventsFrame *This);

    DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
    HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount)(IMEventsFrame    *This,
                                                 /* [out] */ UINT *pctinfo);

    DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
    HRESULT(STDMETHODCALLTYPE *GetTypeInfo)(IMEventsFrame          *This,
                                            /* [in] */ UINT         iTInfo,
                                            /* [in] */ LCID         lcid,
                                            /* [out] */ ITypeInfo **ppTInfo);

    DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
    HRESULT(STDMETHODCALLTYPE *GetIDsOfNames)(IMEventsFrame                *This,
                                              /* [in] */ REFIID             riid,
                                              /* [size_is][in] */ LPOLESTR *rgszNames,
                                              /* [range][in] */ UINT        cNames,
                                              /* [in] */ LCID               lcid,
                                              /* [size_is][out] */ DISPID  *rgDispId);

    DECLSPEC_XFGVIRT(IDispatch, Invoke)
    /* [local] */ HRESULT(STDMETHODCALLTYPE *Invoke)(IMEventsFrame *This,
                                                     /* [annotation][in] */
                                                     _In_ DISPID dispIdMember,
                                                     /* [annotation][in] */
                                                     _In_ REFIID riid,
                                                     /* [annotation][in] */
                                                     _In_ LCID lcid,
                                                     /* [annotation][in] */
                                                     _In_ WORD wFlags,
                                                     /* [annotation][out][in] */
                                                     _In_ DISPPARAMS *pDispParams,
                                                     /* [annotation][out] */
                                                     _Out_opt_ VARIANT *pVarResult,
                                                     /* [annotation][out] */
                                                     _Out_opt_ EXCEPINFO *pExcepInfo,
                                                     /* [annotation][out] */
                                                     _Out_opt_ UINT *puArgErr);

    END_INTERFACE
} IMEventsFrameVtbl;

interface IMEventsFrame { CONST_VTBL struct IMEventsFrameVtbl *lpVtbl; };

            #ifdef COBJMACROS

                #define IMEventsFrame_QueryInterface(This, riid, ppvObject) \
                    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

                #define IMEventsFrame_AddRef(This) ((This)->lpVtbl->AddRef(This))

                #define IMEventsFrame_Release(This) ((This)->lpVtbl->Release(This))

                #define IMEventsFrame_GetTypeInfoCount(This, pctinfo) ((This)->lpVtbl->GetTypeInfoCount(This, pctinfo))

                #define IMEventsFrame_GetTypeInfo(This, iTInfo, lcid, ppTInfo) \
                    ((This)->lpVtbl->GetTypeInfo(This, iTInfo, lcid, ppTInfo))

                #define IMEventsFrame_GetIDsOfNames(This, riid, rgszNames, cNames, lcid, rgDispId) \
                    ((This)->lpVtbl->GetIDsOfNames(This, riid, rgszNames, cNames, lcid, rgDispId))

                #define IMEventsFrame_Invoke(This,         \
                                             dispIdMember, \
                                             riid,         \
                                             lcid,         \
                                             wFlags,       \
                                             pDispParams,  \
                                             pVarResult,   \
                                             pExcepInfo,   \
                                             puArgErr)     \
                    ((This)->lpVtbl->Invoke(This,          \
                                            dispIdMember,  \
                                            riid,          \
                                            lcid,          \
                                            wFlags,        \
                                            pDispParams,   \
                                            pVarResult,    \
                                            pExcepInfo,    \
                                            puArgErr))

            #endif /* COBJMACROS */

        #endif /* C style interface */

    #endif /* __IMEventsFrame_DISPINTERFACE_DEFINED__ */

EXTERN_C const CLSID CLSID_MFFrame;

    #ifdef __cplusplus

class DECLSPEC_UUID("4F365060-473F-4ad5-A5C2-428FE0C8E03E") MFFrame;
    #endif

EXTERN_C const CLSID CLSID_MFFactory;

    #ifdef __cplusplus

class DECLSPEC_UUID("4F365177-473F-4ad5-A5C2-428FE0C8E03E") MFFactory;
    #endif

EXTERN_C const CLSID CLSID_MFAudioBuffer;

    #ifdef __cplusplus

class DECLSPEC_UUID("0792B96A-E4CB-4140-B848-EE96C6660837") MFAudioBuffer;
    #endif

EXTERN_C const CLSID CLSID_MFConverter;

    #ifdef __cplusplus

class DECLSPEC_UUID("0792B97B-E4CB-4140-B848-EE96C6660837") MFConverter;
    #endif

EXTERN_C const CLSID CLSID_MFPreview;

    #ifdef __cplusplus

class DECLSPEC_UUID("49859777-08F5-4C7A-B439-3255A8A8E9E4") MFPreview;
    #endif

EXTERN_C const CLSID CLSID_MFReader;

    #ifdef __cplusplus

class DECLSPEC_UUID("C08A796D-5CCF-4251-B22F-27AAA7ECABF3") MFReader;
    #endif

EXTERN_C const CLSID CLSID_MFRenderer;

    #ifdef __cplusplus

class DECLSPEC_UUID("C08A797D-5CCF-4251-B22F-27AAA7ECABF3") MFRenderer;
    #endif

EXTERN_C const CLSID CLSID_MFWriter;

    #ifdef __cplusplus

class DECLSPEC_UUID("C08A164D-5CCF-4251-B22F-27AAA7ECABF3") MFWriter;
    #endif

EXTERN_C const CLSID CLSID_MFSink;

    #ifdef __cplusplus

class DECLSPEC_UUID("C08B164D-5CCF-4251-B22F-27AAA7ECABF3") MFSink;
    #endif

EXTERN_C const CLSID CLSID_MFSinkReader;

    #ifdef __cplusplus

class DECLSPEC_UUID("C08B164E-7CCF-4251-B22F-27AAA7ECABF3") MFSinkReader;
    #endif

EXTERN_C const CLSID CLSID_MFLive;

    #ifdef __cplusplus

class DECLSPEC_UUID("C08A797F-5CCF-4251-B22F-27AAA7ECABF3") MFLive;
    #endif

EXTERN_C const CLSID CLSID_MFRendererBMD;

    #ifdef __cplusplus

class DECLSPEC_UUID("C08A798D-5CCF-4251-B22F-27AAA7ECABF3") MFRendererBMD;
    #endif

EXTERN_C const CLSID CLSID_MFRendererBMD2;

    #ifdef __cplusplus

class DECLSPEC_UUID("27E96760-6C12-4EA0-81A6-66CFB9CC0EB0") MFRendererBMD2;
    #endif

EXTERN_C const CLSID CLSID_MDelay;

    #ifdef __cplusplus

class DECLSPEC_UUID("40CD2744-06D8-4D57-ACD9-E1D523660AD4") MDelay;
    #endif

EXTERN_C const CLSID CLSID_MWebRTC;

    #ifdef __cplusplus

class DECLSPEC_UUID("B9E821B5-D77D-4B28-B13E-62C0235F8C5C") MWebRTC;
    #endif

EXTERN_C const CLSID CLSID_MFSignalingDTMF;

    #ifdef __cplusplus

class DECLSPEC_UUID("E09BF84E-9028-4448-AD34-8CF08BB45565") MFSignalingDTMF;
    #endif

EXTERN_C const CLSID CLSID_MFShader;

    #ifdef __cplusplus

class DECLSPEC_UUID("2D2479B0-3C45-4D7B-A725-6848181A80AC") MFShader;
    #endif

EXTERN_C const CLSID CLSID_MFOverlayHTML;

    #ifdef __cplusplus

class DECLSPEC_UUID("F587E2D0-20B1-4C47-9586-1202D2447B04") MFOverlayHTML;
    #endif

EXTERN_C const CLSID CLSID_MCCDisplay;

    #ifdef __cplusplus

class DECLSPEC_UUID("4102E84B-B00A-4351-B4A2-FED0C3FFDC86") MCCDisplay;
    #endif

EXTERN_C const CLSID CLSID_CoMColors;

    #ifdef __cplusplus

class DECLSPEC_UUID("8D54BB99-D639-4336-9C3A-17F2D0EAAFA0") CoMColors;
    #endif

EXTERN_C const CLSID CLSID_MFSideData;

    #ifdef __cplusplus

class DECLSPEC_UUID("8D54AB24-D639-4336-9C3A-17F2D0EAAFA0") MFSideData;
    #endif

EXTERN_C const CLSID CLSID_MFPipe;

    #ifdef __cplusplus

class DECLSPEC_UUID("8D54AB26-D639-4336-9C3A-17F2D0EAAFA0") MFPipe;
    #endif

EXTERN_C const CLSID CLSID_MFObjectASIO;

    #ifdef __cplusplus

class DECLSPEC_UUID("95D508BF-A5F0-4FA0-83D0-B20782874B75") MFObjectASIO;
    #endif

    #ifndef ___IMCChannelEvents_DISPINTERFACE_DEFINED__
        #define ___IMCChannelEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IMCChannelEvents */
/* [helpstring][uuid] */

EXTERN_C const IID DIID__IMCChannelEvents;

        #if defined(__cplusplus) && !defined(CINTERFACE)

MIDL_INTERFACE("bac54e48-ffaa-40ff-98f5-14f9ef00935c")
_IMCChannelEvents: public IDispatch {};

        #else /* C style interface */

typedef struct _IMCChannelEventsVtbl {
    BEGIN_INTERFACE

    DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
    HRESULT(STDMETHODCALLTYPE *QueryInterface)(_IMCChannelEvents *This,
                                               /* [in] */ REFIID  riid,
                                               /* [annotation][iid_is][out] */
                                               _COM_Outptr_ void **ppvObject);

    DECLSPEC_XFGVIRT(IUnknown, AddRef)
    ULONG(STDMETHODCALLTYPE *AddRef)(_IMCChannelEvents *This);

    DECLSPEC_XFGVIRT(IUnknown, Release)
    ULONG(STDMETHODCALLTYPE *Release)(_IMCChannelEvents *This);

    DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
    HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount)(_IMCChannelEvents *This,
                                                 /* [out] */ UINT  *pctinfo);

    DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
    HRESULT(STDMETHODCALLTYPE *GetTypeInfo)(_IMCChannelEvents      *This,
                                            /* [in] */ UINT         iTInfo,
                                            /* [in] */ LCID         lcid,
                                            /* [out] */ ITypeInfo **ppTInfo);

    DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
    HRESULT(STDMETHODCALLTYPE *GetIDsOfNames)(_IMCChannelEvents            *This,
                                              /* [in] */ REFIID             riid,
                                              /* [size_is][in] */ LPOLESTR *rgszNames,
                                              /* [range][in] */ UINT        cNames,
                                              /* [in] */ LCID               lcid,
                                              /* [size_is][out] */ DISPID  *rgDispId);

    DECLSPEC_XFGVIRT(IDispatch, Invoke)
    /* [local] */ HRESULT(STDMETHODCALLTYPE *Invoke)(_IMCChannelEvents *This,
                                                     /* [annotation][in] */
                                                     _In_ DISPID dispIdMember,
                                                     /* [annotation][in] */
                                                     _In_ REFIID riid,
                                                     /* [annotation][in] */
                                                     _In_ LCID lcid,
                                                     /* [annotation][in] */
                                                     _In_ WORD wFlags,
                                                     /* [annotation][out][in] */
                                                     _In_ DISPPARAMS *pDispParams,
                                                     /* [annotation][out] */
                                                     _Out_opt_ VARIANT *pVarResult,
                                                     /* [annotation][out] */
                                                     _Out_opt_ EXCEPINFO *pExcepInfo,
                                                     /* [annotation][out] */
                                                     _Out_opt_ UINT *puArgErr);

    END_INTERFACE
} _IMCChannelEventsVtbl;

interface _IMCChannelEvents { CONST_VTBL struct _IMCChannelEventsVtbl *lpVtbl; };

            #ifdef COBJMACROS

                #define _IMCChannelEvents_QueryInterface(This, riid, ppvObject) \
                    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

                #define _IMCChannelEvents_AddRef(This) ((This)->lpVtbl->AddRef(This))

                #define _IMCChannelEvents_Release(This) ((This)->lpVtbl->Release(This))

                #define _IMCChannelEvents_GetTypeInfoCount(This, pctinfo) \
                    ((This)->lpVtbl->GetTypeInfoCount(This, pctinfo))

                #define _IMCChannelEvents_GetTypeInfo(This, iTInfo, lcid, ppTInfo) \
                    ((This)->lpVtbl->GetTypeInfo(This, iTInfo, lcid, ppTInfo))

                #define _IMCChannelEvents_GetIDsOfNames(This, riid, rgszNames, cNames, lcid, rgDispId) \
                    ((This)->lpVtbl->GetIDsOfNames(This, riid, rgszNames, cNames, lcid, rgDispId))

                #define _IMCChannelEvents_Invoke(This,         \
                                                 dispIdMember, \
                                                 riid,         \
                                                 lcid,         \
                                                 wFlags,       \
                                                 pDispParams,  \
                                                 pVarResult,   \
                                                 pExcepInfo,   \
                                                 puArgErr)     \
                    ((This)->lpVtbl->Invoke(This,              \
                                            dispIdMember,      \
                                            riid,              \
                                            lcid,              \
                                            wFlags,            \
                                            pDispParams,       \
                                            pVarResult,        \
                                            pExcepInfo,        \
                                            puArgErr))

            #endif /* COBJMACROS */

        #endif /* C style interface */

    #endif /* ___IMCChannelEvents_DISPINTERFACE_DEFINED__ */

EXTERN_C const CLSID CLSID_MConnect;

    #ifdef __cplusplus

class DECLSPEC_UUID("09f8f9f4-2f3f-4f1c-ab72-06d4532791a2") MConnect;
    #endif

EXTERN_C const CLSID CLSID_MCChannel;

    #ifdef __cplusplus

class DECLSPEC_UUID("09f8f9f5-2f3f-4f1c-ab72-06d4532791a2") MCChannel;
    #endif
#endif /* __MFORMATSLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long __RPC_USER  BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER           BSTR_UserFree(unsigned long *, BSTR *);

unsigned long __RPC_USER  BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER           BSTR_UserFree64(unsigned long *, BSTR *);

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
