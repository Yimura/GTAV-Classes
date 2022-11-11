#pragma once

#include <cstdint>

enum eVehicleGadgetType : uint32_t
{
    FORKS,
    SEARCH_LIGHT,
    PICK_UP_ROPE_WITH_HOOK,
    PICK_UP_ROPE_WITH_MAGNET,
    DIGGER_ARM,
    HANDLER_FRAME,
    BOMB_BAY,
};

#pragma pack(push,4)
class CVehicleGadgetData
{
public:
    eVehicleGadgetType m_gadget_type; //0x0000
    uint8_t m_data[94]; //0x0004
}; //Size: 0x64
static_assert(sizeof(CVehicleGadgetData) == 0x64);

class CVehicleGadgetDataNode
{
public:
    char pad_0000[192]; //0x0000
    bool m_has_parent_offset; //0x00C0
    char pad_00C1[15]; //0x00C1
    uint32_t m_parent_offset_x; //0x00D0
    uint32_t m_parent_offset_y; //0x00D4
    uint32_t m_parent_offset_z; //0x00D8
    uint32_t m_parent_offset_w; //0x00DC
    uint32_t m_gadget_count; //0x00E0
    CVehicleGadgetData m_gadget_data[2]; //0x00E4
}; //Size: 0x01AC
static_assert(sizeof(CVehicleGadgetDataNode) == 0x1AC);
#pragma pack(pop)