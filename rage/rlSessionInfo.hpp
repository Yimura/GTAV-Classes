#pragma once

#include <cstdint>
#include "../rage/rlGamerInfoBase.hpp"

namespace rage
{
    class rlSessionInfo
    {    
    public:
        uint64_t m_unk; //0x0000
        uint64_t m_session_token; //0x0008
        rlGamerInfoBase m_net_player_data; //0x0010
    };
    static_assert(sizeof(rlSessionInfo) == 0x70);
}