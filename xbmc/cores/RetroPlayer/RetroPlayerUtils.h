/*
 *  Copyright (C) 2017 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "cores/GameSettings.h"

#include <string>

namespace KODI
{
namespace RETRO
{
  class CRetroPlayerUtils
  {
  public:
    static std::string ViewModeToDescription(VIEWMODE viewMode);
  };
}
}
