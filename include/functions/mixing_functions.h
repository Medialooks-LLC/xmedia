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

// TODO:
inline INode::SPtr StoreMixerState(const IMediaMixer* _mixer_p, INode::SPtr&& _dest = {}) { return std::move(_dest); }

inline xbase::XResult<IMediaMixer::SPtr> CreateMixerFromState(const INode::SPtr&   _mixer_state,
                                                              const xbase::IClock* _clock_p = nullptr)
{
    return {};
}

} // namespace xsdk::xmixer
