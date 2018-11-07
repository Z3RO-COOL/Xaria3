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
{      10000, "b5bf5344ae47f9d6408bab460d711632c4e9c1bd39794e38e4e0214a34627079"},
{      15000, "dbef8f35df5f9bcf15840feda1203361190d0e41b6c762a91353373bce6a4836"},
{      20000, "39de0e5f6c82ca7db6c56aee6859a2a8bb5657d787279a56589f632bd8c8edb9"},
{      25000, "15e0b46a2c0ff043fafd7c71c602e4a3cae988ce934384bd3bcdea36717045e9"},
{      30000, "e6350f89c5c21fa2a013aa4ff439da7177694ec5f6254e92fee3ee9896fa1782"},
{      35000, "7f18b4079300983eeb3fa7d8e10261e9f332390ef1d4230fe8b851cac9c8d4be"},
{      40000, "6f22abe0108f830316cff909f8b69303c0585137d6a7b58559f369da3ba0ecc6"},
{      45000, "1deff99a455870d965a957afc75bf91fc127cf82eb48a1a0d56602c4b8ca139b"},
{      50000, "2c52f35335429f635603e080f8a2e1298318bfcb29b7ccba6285d48ecbee3695"}
};
}
