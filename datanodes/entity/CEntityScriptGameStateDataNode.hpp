#pragma once

struct CEntityScriptGameStateDataNode
{
  char pad_0x0[192]; //0x0000
  bool m_visible; //0x00C0
  bool m_uses_collision; //0x00C1
  bool m_fixed; //0x00C2
}; //Size: 0x00C3
static_assert(sizeof(CEntityScriptGameStateDataNode) == 0xC3);