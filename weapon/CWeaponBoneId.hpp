#pragma once

#include <cstdint>

class CWeaponBoneId
{
public:
    uint16_t m_bone_id;
}; // Size: 0x0002
static_assert(sizeof(CWeaponBoneId) == 0x2);