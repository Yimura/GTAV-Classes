#pragma once

#include <cstdint>
#include <cstddef>
#include "rlGamerHandle.hpp"

union netAddress {
    uint32_t m_packed; //0x0000
    struct {
        uint8_t m_field4; //0x0000
        uint8_t m_field3; //0x0001
        uint8_t m_field2; //0x0002
        uint8_t m_field1; //0x0003
    };
}; //Size: 0x0004
static_assert(sizeof(netAddress) == 0x04);

namespace rage
{
#pragma pack(push,8)
    class rlGamerInfoBase
    {
    public:
        char pad_0000[0x8];              //0x0000
        uint64_t m_peer_id;              //0x0008
        rlGamerHandle m_gamer_handle;    //0x0010
        char m_aes_key[0x20];            //0x0020
        char pad_0040[0x8];              //0x0040
        netAddress m_unk_ip;             //0x0048
        uint16_t m_unk_port;             //0x004C
        netAddress m_relay_ip;           //0x0050
        uint16_t m_relay_port;           //0x0054
        char pad_0058[0x12];             //0x0056
        char pad_0068[0x40];             //0x0068
        netAddress m_external_ip;        //0x00A8
        uint16_t m_external_port;        //0x00AC
        netAddress m_internal_ip;        //0x00B0
        uint16_t m_internal_port;        //0x00B4
        char pad_00B6[0x2];              //0x00B6
        uint32_t unk_00B8;               //0x00B8
        char pad_00BC[0x4];              //0x00BC
    };
    static_assert(sizeof(rlGamerInfoBase) == 0xC0);
#pragma pack(pop)
}
