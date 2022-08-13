#pragma once

#include <cstdint>

#pragma pack(push, 8)
struct CPhysicalHealthDataNode
{
  char pad_0000[192]; //0x0000
  bool unk_00C0; //0x00C0
  bool m_has_max_health_changed; //0x00C1
  uint32_t m_max_health; //0x00C4
  uint32_t m_current_health; //0x00C8
  uint16_t m_weapon_damage_entity; //0x00CC
  uint32_t m_weapon_damage_hash; //0x00D0
  uint64_t unk_00D8; //0x00D8
};
static_assert(sizeof(CPhysicalHealthDataNode) == 0xE0);
#pragma pack(pop)