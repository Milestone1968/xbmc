/*
 *  Copyright (C) 2005-2013 Team XBMC
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "ImusicInfoTagLoader.h"

namespace MUSIC_INFO
{
  class CMusicInfoTagLoaderCDDA: public IMusicInfoTagLoader
  {
  public:
    CMusicInfoTagLoaderCDDA(void);
    ~CMusicInfoTagLoaderCDDA() override;

    bool Load(const std::string& strFileName, CMusicInfoTag& tag, EmbeddedArt *art = NULL) override;
  };
}
