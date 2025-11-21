#pragma once

#include "../xmedia_errors.h"
#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include "xbase.h"
#include "xnode.h"

namespace xsdk::xmixer {

/**
 * @brief - Create media mixer object
 */
IMediaMixer::SPtr CreateMediaMixer(const INode::SPtr& _mixer_props = {}, const xbase::IClock* _clock_p = nullptr);

/**
 * @brief - Store complete mixer state including all sources and their current media
 *
 * This function captures the current state of the mixer including:
 * - Mixer's format and state
 * - Background source with current media
 * - All regular sources with their current media and playback positions
 *
 * @param _mixer_p - Pointer to the mixer to store
 * @param _dest - Optional destination node, will be created if empty
 * @return INode containing the complete mixer state
 */
INode::SPtr StoreMixerState(const IMediaMixer* _mixer_p, INode::SPtr&& _dest = {});

/**
 * @brief - Create mixer from previously stored state
 *
 * This function recreates a mixer with all sources and their media based on
 * the previously stored state. New media players will be created automatically.
 *
 * @param _mixer_state - Node containing the mixer state (created by StoreMixerState)
 * @param _clock_p - Optional clock for the new mixer
 * @return Mixer created from the stored state
 */
xbase::XResult<IMediaMixer::SPtr> CreateMixerFromState(const INode::SPtrC&  _mixer_state,
                                                       const xbase::IClock* _clock_p = nullptr);

/**
 * @brief - Store individual source state
 *
 * @param _source - Source to store
 * @param _type - Type of source (regular or background)
 * @param _dest - Optional destination node
 * @return INode containing the source state
 */
INode::SPtr StoreSourceState(const IMediaMixerSources::Source& _source,
                             const std::string_view            _type,
                             INode::SPtr&&                     _dest = {});

/**
 * @brief - Create source from stored state
 *
 * @param _mixer - Mixer to add the source to
 * @param _source_state - Node containing the source state
 * @param _type - Type of source (regular or background)
 * @return Created source with recreated media player
 */
xbase::XResult<IMediaMixerSources::Source> CreateSourceFromState(IMediaMixer&        _mixer,
                                                                 const INode::SPtrC& _source_state);

/**
 * @brief - Create background from stored state
 *
 * @param _mixer - Mixer to set the background to
 * @param _background_state - Node containing the background state
 * @return Created background source with recreated media player
 */
xbase::XResult<IMediaMixerSources::Source> CreateBackgroundFromState(IMediaMixer&        _mixer,
                                                                     const INode::SPtrC& _background_state);

/**
 * @brief - Get current media from a source (including from running player)
 *
 * @param _source - Source to get media from
 * @return Current media with updated position information
 */
Media GetMediaFromSource(const IMediaMixerSources::Source& _source);

/**
 * @brief - Convert mixer state to JSON string
 *
 * @param _mixer_p - Mixer to serialize
 * @param _json_format - JSON formatting options
 * @return JSON string representation of the mixer state
 */
std::string StoreMixerStateToJson(const IMediaMixer*      _mixer_p,
                                  const xnode::JsonFormat _json_format = xnode::JsonFormat::kPretty);

/**
 * @brief - Create mixer from JSON string
 *
 * @param _json - JSON string containing mixer state
 * @param _clock_p - Optional clock for the new mixer
 * @return Mixer created from JSON state
 */
xbase::XResult<IMediaMixer::SPtr> CreateMixerFromJson(const std::string&   _json,
                                                      const xbase::IClock* _clock_p = nullptr);

} // namespace xsdk::xmixer
