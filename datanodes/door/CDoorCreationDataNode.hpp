#pragma once

#include <cstdint>
#include "../../rage/vector.hpp"

#pragma pack(push, 4)
class CDoorCreationDataNode
{
public:
  char pad_0000[192]; //0x0000
  uint32_t m_model; //0x00C0
  char pad_00C4[12]; //0x00C4
  rage::fvector3 m_pos; //0x00D0
  char pad_00DC[12]; //0x00DC
  bool m_is_script_door; //0x00E8
  bool m_player_wants_control; //0x00E9
}; //Size: 0x00EC
static_assert(sizeof(CDoorCreationDataNode) == 0xEC);
#pragma pack(pop)
