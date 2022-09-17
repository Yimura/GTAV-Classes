#pragma once

#include "CItemInfo.hpp"

#include <cstdint>

enum class eAmmoSpecialType : int32_t
{
    None,
    ArmorPiercing,
    Explosive,
    FMJ,
    HollowPoint,
    Incendiary,
    Tracer
};

enum class eAmmoFlags : uint32_t
{
    InfiniteAmmo = 0,
    AddSmokeOnExplosion = 1,
    Fuse = 2,
    FixedAfterExplosion = 3,
};

class CAmmoInfo : public CItemInfo
{
public:
    int32_t m_ammo_max; //0x0020
    int32_t m_ammo_max_50; //0x0024
    int32_t m_ammo_max_100; //0x0028
    int32_t m_ammo_max_mp; //0x002C
    int32_t m_ammo_max_50_mp; //0x0030
    int32_t m_ammo_max_100_mp; //0x0034
    eAmmoFlags m_ammo_flags; //0x0038
    eAmmoSpecialType m_ammo_special_type; //0x003C
}; //Size: 0x040
static_assert(sizeof(CAmmoInfo) == 0x40);
