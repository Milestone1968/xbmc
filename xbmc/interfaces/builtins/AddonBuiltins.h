/*
 *  Copyright (C) 2005-2015 Team XBMC
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "Builtins.h"

//! \brief Class providing add-on related built-in commands.
class CAddonBuiltins
{
public:
  //! \brief Returns the map of operations.
  CBuiltins::CommandMap GetOperations() const;
};
