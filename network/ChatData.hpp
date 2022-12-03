#pragma once
#include <cstdint>

class ChatData
{
public:
    uint32_t m_timer_one; //0x0000
    uint32_t m_timer_two; //0x0004
    uint32_t m_char_count; //0x0008
    uint32_t m_key_held_time; //0x000C
    uint32_t m_team_label; //0x0010
    uint8_t m_chat_open; //0x0014
    uint8_t m_is_job; //0x0015
    uint8_t m_disabled; //0x0016
    uint8_t m_not_typing; //0x0017
    uint32_t m_focus_mode; //0x0018
    uint32_t m_chat_mode; //0x001C
    uint32_t m_scaleform; //0x0020
    char pad_0024[8]; //0x0024
    char16_t m_current_text[142]; //0x002C
    uint32_t m_hud_color; //0x0148
    uint8_t m_hud_color_override; // 0x014C
    char pad_014D[43]; // 0x014D
}; //Size: 0x0178
static_assert(sizeof(ChatData) == 0x178);