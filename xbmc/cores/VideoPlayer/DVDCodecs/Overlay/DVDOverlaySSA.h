/*
 *  Copyright (C) 2005-2013 Team XBMC
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "system.h" // for SAFE_RELEASE
#include "DVDOverlay.h"
#include "../../DVDSubtitles/DVDSubtitlesLibass.h"

class CDVDOverlaySSA : public CDVDOverlay
{
public:

  CDVDSubtitlesLibass* m_libass;

  explicit CDVDOverlaySSA(CDVDSubtitlesLibass* libass) : CDVDOverlay(DVDOVERLAY_TYPE_SSA)
  {
    replace = true;
    m_libass = libass;
    libass->Acquire();
  }

  CDVDOverlaySSA(CDVDOverlaySSA& src)
    : CDVDOverlay(src)
    , m_libass(src.m_libass)
  {
    m_libass->Acquire();
  }

  ~CDVDOverlaySSA() override
  {
    if(m_libass)
      SAFE_RELEASE(m_libass);
  }

  CDVDOverlaySSA* Clone() override
  {
    return new CDVDOverlaySSA(*this);
  }
};
