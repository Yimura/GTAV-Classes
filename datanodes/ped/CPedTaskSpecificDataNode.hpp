#pragma once

#include <cstdint>

#pragma pack(push,4)
class CPedTaskSpecificDataNode
{
private:
    char pad_0000[192]; //0x0000
    uint32_t m_task_index; //0x00C0
    uint32_t m_task_type; //0x00C4
    uint32_t m_buffer_size; //0x00C8
    uint8_t m_task_data_buffer[603]; //0x00CC
}; //Size: 0x0328
static_assert(sizeof(CPedTaskSpecificDataNode) == 0x328);
#pragma pack(pop)