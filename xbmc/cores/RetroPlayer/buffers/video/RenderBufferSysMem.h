/*
 *  Copyright (C) 2017 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "cores/RetroPlayer/buffers/BaseRenderBuffer.h"

#include <stdint.h>
#include <vector>

extern "C" {
#include "libavutil/pixfmt.h"
}

namespace KODI
{
namespace RETRO
{
  class CRenderBufferSysMem : public CBaseRenderBuffer
  {
  public:
    CRenderBufferSysMem() = default;
    virtual ~CRenderBufferSysMem() = default;

    // implementation of IRenderBuffer
    bool Allocate(AVPixelFormat format, unsigned int width, unsigned int height) override;
    size_t GetFrameSize() const override;
    uint8_t *GetMemory() override;

    // Utility functions
    static size_t GetBufferSize(AVPixelFormat format, unsigned int width, unsigned int height);

  protected:
    std::vector<uint8_t> m_data;
  };

}
}
