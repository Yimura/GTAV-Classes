#pragma once

#include "../weapon/CWeaponInfo.hpp"

#include <cstdint>

class CPedWeaponManager
{
public:
    char pad_0000[16]; //0x0000
    class CPed* m_owner; //0x0010
    uint32_t m_selected_weapon_hash; //0x0018
    char pad_001C[4]; //0x001C
    class CWeaponInfo* m_weapon_info; //0x0020
    char pad_0028[72]; //0x0028
    class CWeaponInfo* m_vehicle_weapon_info; //0x0070
    class CObject* m_weapon_object; //0x0078
}; //Size: 0x0080
static_assert(sizeof(CPedWeaponManager) == 0x80);
