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
        uint64_t m_peer_id;
        rlGamerHandle m_gamer_handle;
        char m_aes_key[32];
        uint8_t unk_0038;
        netAddress m_unk_ip;
        uint16_t m_unk_port;
        netAddress m_relay_ip;
        uint16_t m_relay_port;
        netAddress m_external_ip;
        uint16_t m_external_port;
        netAddress m_internal_ip;
        uint16_t m_internal_port;
        uint32_t unk_005C;
    };
    static_assert(sizeof(rlGamerInfoBase) == 0x60);
#pragma pack(pop)
}