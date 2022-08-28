#pragma once

#include <cstdint>
#include "netPlayerDataBase.hpp"

namespace rage
{
#pragma pack(push,8)
    class netPlayerData : public netPlayerDataBase
    {
    public:
        uint64_t m_host_token;
        uint64_t m_platform_data;
        rlGamerHandle m_gamer_handle_2;
        uint32_t m_ros_privilege;
        char m_name[20];
    }; //Size: 0x0098
    static_assert(sizeof(netPlayerData) == 0x98);
#pragma pack(pop)
}
