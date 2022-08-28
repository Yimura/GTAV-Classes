#pragma once

#include "../player/CPlayerInfo.hpp"
#include "../player/CNonPhysicalPlayerData.hpp"

#include "../rage/rlSessionInfo.hpp"

#include "ClanData.hpp"
#include "netPlayer.hpp"

#include <cstdint>

#pragma pack(push, 8)
class CNetGamePlayer : public rage::netPlayer
{
public:
    CPlayerInfo* m_player_info; //0x00A0
    uint32_t m_matchmaking_group; //0x0008
    bool m_is_spectating; //0x000C
    char pad_00AD[3]; //0x000AD
    uint64_t unk_00B0; //0x00B0
    char unk_00B8; //0x00B8
    char pad_00B9[3]; //0x00B9
    uint32_t unk_00BC; //0x00BC
    uint32_t unk_00C0; //0x00C0
    char pad_00C4[4]; //0x00C4
    ClanData m_clan_data; //0x00C8
    char m_crew_rank_title[25]; //0x0180
    bool m_is_rockstar_dev; //0x0199
    bool m_is_rockstar_qa; //0x019A
    bool m_is_cheater; //0x019B
    uint32_t unk_019C; //0x019C
    uint16_t unk_01A0; //0x01A0
    char unk_01A2; //0x01A2
    char pad_01A3; //0x01A3
    uint32_t m_phone_explosion_vehicle_net_id; //0x01A4
    uint16_t unk_01A8; //0x01A8
    bool m_has_started_transition; //0x01AA
    char pad_01AB[5]; //0x01AB
    rage::rlSessionInfo m_transition_session_info; //0x01A3
    char pad_022D[16]; //0x022D
    uint64_t unk_0230; //0x0230
    uint64_t unk_0238; //0x0238
    uint32_t m_mute_count; //0x0240
    uint32_t m_mute_talkers_count; //0x0244
    char pad_0248[5]; //0x0248
    bool m_have_communication_privileges; //0x024D
    uint16_t unk_024E; //0x024E
    uint16_t unk_0250; //0x0250
    char pad_0252[2]; //0x0252
    uint32_t m_cheat_report_ids[20]; //0x0254
    uint32_t m_num_cheat_reports; //0x02A4
    uint8_t unk_02A8; //0x02A8
    char pad_02A9[3]; //0x02A9
    uint32_t unk_02AC; //0x02AC
    char unk_02B0; //0x02B0
    char pad_02B1[3]; //0x02B1
    uint32_t unk_02B4; //0x02B4
    uint32_t m_account_id; //0x02B4
    uint32_t m_unk_02BC; //0x02BC
}; //Size: 0x02C0
static_assert(sizeof(CNetGamePlayer) == 0x2C0);
#pragma pack(pop)
