/*
 *  Copyright (C) 2005-2013 Team XBMC
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include <windows.h>


struct threadOpaque
{
  HANDLE handle;
};

typedef DWORD ThreadIdentifier;
typedef threadOpaque ThreadOpaque;
#define THREADFUNC unsigned __stdcall

namespace XbmcThreads
{
  inline static void ThreadSleep(unsigned int millis) { Sleep(millis); }
}

