#pragma once

#include "CAmmoProjectileInfo.hpp"

#include <cstdint>

class CAmmoThrownInfo : CAmmoProjectileInfo
{
    float m_thrown_force; //0x0170
    float m_thrown_force_from_vehicle; //0x0174
    int32_t m_ammo_max_mp_bonus; //0x0178
}; // Size: 0x017C
static_assert(sizeof(CAmmoThrownInfo) == 0x17C);