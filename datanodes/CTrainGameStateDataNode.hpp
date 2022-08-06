#pragma once

#include <cstdint>

#pragma pack(push,4)
class CTrainGameStateDataNode
{
public:
    char pad_0000[192]; //0x0000
    bool m_is_engine; //0x00C0
    bool m_is_caboose; //0x00C1
    bool m_is_mission_train; //0x00C2
    bool m_direction; //0x00C3
    bool m_has_passenger_carriages; //0x00C4
    bool m_render_derailed; //0x00C5
    bool unk_00C6; //0x00C6
    bool unk_00C7; //0x00C7
    uint16_t m_engine_id; //0x00C8
    int8_t m_train_config_index; //0x00CA
    int8_t m_carriage_config_index; //0x00CB
    int8_t m_track_id; //0x00CC
    char pad_00CD[3]; //0x00CD
    float m_distance_from_engine; //0x00D0
    float m_cruise_speed; //0x00D4
    uint16_t m_linked_to_backward_id; //0x00D8
    uint16_t m_linked_to_forward_id; //0x00DA
    uint32_t m_train_state; //0x0DC
    bool unk_00E0; //0x00E0
    bool m_force_doors_open; //0x0E1
}; //Size: 0x00E4
static_assert(sizeof(CTrainGameStateDataNode) == 0xE4);
#pragma pack(pop)