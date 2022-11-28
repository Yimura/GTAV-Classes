#pragma once
#include <cstdint>

class ChatData
{
public:
    char pad_0000[4];
    uint32_t m_unk04;
    uint32_t m_char_count; //0x0008
    uint32_t m_seed; //0x000C
    char pad_0010[4]; //0x0010
    uint8_t m_chat_open; //0x0014
    char pad_0015[2]; //0x0015
    uint8_t m_not_typing; //0x0017
    uint8_t m_unk18; //0x0018
    char pad_0019[7]; //0x0019
    uint32_t m_active_mode; //0x0020
    char pad_0024[8]; //0x0024
    char16_t m_current_text[256]; //0x002C
}; //Size: 0x022C
static_assert(sizeof(ChatData) == 0x22C);