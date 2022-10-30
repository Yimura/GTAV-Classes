#pragma once

#include <cstdint>

class datBitBuffer;

#pragma pack(push,8)
namespace rage {
    class playerDataMsg
    {
    public:
        virtual ~playerDataMsg() = 0;
        virtual int GetBufferSize() = 0;
        virtual void Log() = 0;
        virtual bool Serialize(datBitBuffer* buffer) = 0;
        virtual bool Deserialize(datBitBuffer* buffer) = 0;

        uint32_t m_game_version; //0x0008
        uint32_t m_nat_type; //0x000C
    }; //Size: 0x0010
    static_assert(sizeof(playerDataMsg) == 0x10);
}

class CNetGamePlayerDataMsg : public rage::playerDataMsg
{
public:
    uint32_t m_player_type; //0x0010
    uint32_t m_matchmaking_group; //0x0014
    uint32_t m_flags; //0x0018
    uint32_t m_team; //0x001C
    uint64_t m_crew_id; //0x0020
    uint32_t m_aim_preference; //0x0028
    uint16_t m_rank; //0x002C
    uint16_t unk_002E; //0x002E
    uint16_t unk_0030; //0x0030
}; //Size: 0x0038
static_assert(sizeof(CNetGamePlayerDataMsg) == 0x38);
#pragma pack(pop)