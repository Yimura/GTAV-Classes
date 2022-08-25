#pragma once

#include "../player/CPlayerInfo.hpp"
#include "../player/CNonPhysicalPlayerData.hpp"

#include "ClandData.hpp"
#include "netPlayer.hpp"

#include <cstdint>

#pragma pack(push, 8)
class CNetGamePlayer : public rage::netPlayer
{
public:
    char pad_00A0[8]; //0x00A0
    uint32_t m_matchmaking_group; //0x00A8
    CPlayerInfo* m_player_info; //0x00B0
    char pad_00B0[16]; //0x00B0
    class ClanData m_clan_data; //0x00C8
    char m_crew_rank_title[25]; //0x0180
    bool m_is_rockstar_dev; //0x0199
    bool m_is_rockstar_qa; //0x019A
    bool m_is_cheater; //0x019B
    char pad_019C[14]; //0x019C
    bool m_has_started_transition; //0x01AA
    char pad_01AB[5]; //0x01AB
    char m_transition_info_buffer[125]; //0x01B0
    char pad_022D[19]; //0x022D
    uint32_t m_mute_count; //0x0240
    uint32_t m_mute_talkers_count; //0x0244
    char pad_0248[112]; //0x0248
    uint32_t unk_02B8; //0x02B8
}; //Size: 0x02C0
static_assert(sizeof(CNetGamePlayer) == 0x2C0);
#pragma pack(pop)
