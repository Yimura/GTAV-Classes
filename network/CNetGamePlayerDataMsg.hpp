#pragma once

#include <cstdint>

class datBitBuffer;

#pragma pack(push, 8)
namespace rage {
    class playerDataMsg
    {
    public:
        virtual ~playerDataMsg() = default;
        virtual int GetBufferSize() { return 0; };
        virtual void Log() {};
        virtual bool Serialize(datBitBuffer* buffer) { return true; };
        virtual bool Deserialize(datBitBuffer* buffer) { return true; };

        uint32_t m_game_version; //0x0008
        uint32_t m_nat_type; //0x000C
    }; //Size: 0x0010
    static_assert(sizeof(playerDataMsg) == 0x10);
}

class CNetGamePlayerDataMsg : public rage::playerDataMsg
{
public:
    int32_t m_account_id; //0x0010
    uint32_t m_player_type; //0x0014
    uint32_t m_matchmaking_group; //0x0018
    uint32_t m_flags; //0x001C
    int32_t m_team; //0x0020
    int64_t m_crew_id; //0x0028
    int32_t m_aim_preference; //0x0030
    uint16_t m_rank; //0x0034
    uint16_t m_rating; //0x0036
    uint32_t m_region; //0x0038
}; //Size: 0x0040
static_assert(sizeof(CNetGamePlayerDataMsg) == 0x40);
#pragma pack(pop)