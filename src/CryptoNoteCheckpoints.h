// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
{          0, "b236fabadcca36bc87ea84f1744d14e5ca97b0320e716e53d3657edaa3557213"},	
{       2500, "818d116cd5fced26e0c74c827a10fb8b5bb2052724e2c882067f988b15c00c46"},
{       5000, "0beb854c388436bb7ff1ca4f60d0884291b42665fd36a07da2bb20f7ffa34a07"},
{       7500, "3116f34f7875096278eb44a07c4669d21dd56b494bd58265675174a07b652583"},
{      10000, "b5bf5344ae47f9d6408bab460d711632c4e9c1bd39794e38e4e0214a34627079"}
};
}
