/*
 *  Copyright (C) 2005-2013 Team XBMC
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "UPowerSyscall.h"
#include "DBusUtil.h"

class CConsoleUPowerSyscall : public CUPowerSyscall
{
public:
  CConsoleUPowerSyscall();
  bool Powerdown() override;
  bool Reboot() override;
  static bool HasConsoleKitAndUPower();
private:
  static bool ConsoleKitMethodCall(const char *method);
};
