/*
 *  Copyright (C) 2012-2013 Team XBMC
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include <string>

class CAndroidFeatures
{
  public:

  static bool         HasNeon();
  static int          GetVersion();
  static int          GetCPUCount();
};
