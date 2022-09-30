#pragma once

#include <cstdint>
#include "../../network/ClanData.hpp"

#pragma pack(push, 1)
class CPlayerGamerDataNode
{
public:
    char pad_0000[192]; //0x0000
    ClanData m_clan_data; //0x00C0
    bool m_need_crew_rank_sysflags; //0x0178
    bool m_need_crew_rank_title; //0x0179
    char m_crew_rank_title[25]; //0x017A
    bool m_has_started_transition; //0x0193
    bool m_has_transition_info; //0x0194
    char m_transition_info_buffer[125]; //0x0195
    bool m_is_rockstar_dev; //0x0212
    bool m_is_rockstar_qa; //0x0213
    bool m_is_cheater; //0x0214
    char pad_0215[3]; //0x0215
    uint32_t m_matchmaking_group; //0x0218
    bool m_need_mute_data; //0x021C
    char pad_021D[3]; //0x021D
    int32_t m_mute_count; //0x0220
    int32_t m_mute_talkers_count; //0x0224
    uint32_t unk_0228; //0x0228
    bool m_has_communication_privilege; //0x022C
    char pad_022D[3]; //0x022D
    int32_t unk_0230; //0x0230
    char pad_0234[620]; //0x0234
}; //Size: 0x04A0
static_assert(sizeof(CPlayerGamerDataNode) == 0x4A0);
#pragma pack(pop)