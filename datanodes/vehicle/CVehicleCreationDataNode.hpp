#pragma once

#include <cstdint>

#pragma pack(push,4)
class CVehicleCreationDataNode
{
public:
    char pad_0000[192]; //0x00B0
    uint32_t m_pop_type; //0x00C0
    uint32_t m_random_seed; //0x00C4
    uint32_t m_model; //0x00C8
    uint32_t m_vehicle_status; //0x00CC
    uint32_t m_max_health; //0x00D0
    uint32_t m_creation_token; //0x00D4
    bool m_car_budget; //0x00D8
    bool m_needs_to_be_hotwired; //0x00D9
    bool m_tires_dont_burst; //0x00DA
    char pad_00DB[165]; //0x00DB
}; //Size: 0x0180
static_assert(sizeof(CVehicleCreationDataNode) == 0x180);
#pragma pack(pop)