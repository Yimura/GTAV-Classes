#pragma once

#include <cstdint>

#pragma pack(push,4)
class CPlayerCreationDataNode
{
public:
    char pad_0000[192]; //0x0000
    uint32_t m_model; //0x00C0
    uint32_t m_num_scars; //0x00C4
    char unk_struct_0xC8[192]; //0x00C8
    uint32_t unk_0188; //0x0188
    char pad_018C[4]; //0x018C
    char m_scar_struct[176]; //0x0190
    bool unk_0240; //0x0240
    char pad_0241[19]; //0x0241
}; //Size: 0x0254
static_assert(sizeof(CPlayerCreationDataNode) == 0x254);
#pragma pack(pop)