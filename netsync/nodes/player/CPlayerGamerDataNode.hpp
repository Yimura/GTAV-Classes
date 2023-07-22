#pragma once
#include <cstdint>
#include "network/ClanData.hpp"
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 8)
class CPlayerGamerDataNode : CSyncDataNodeInfrequent
{
public:
	ClanData m_clan_data;               //0x00C0
	bool m_need_crew_rank_sysflags;     //0x0178
	bool m_need_crew_rank_title;        //0x0179
	char m_crew_rank_title[25];         //0x017A
	bool m_has_started_transition;      //0x0193
	bool m_has_transition_info;         //0x0194
	char m_transition_info_buffer[169]; //0x0195
	int m_player_privilege_flags;       //0x0240
	uint32_t m_matchmaking_group;       //0x0244
	bool m_need_mute_data;              //0x0248
	int32_t m_mute_count;               //0x024C
	int32_t m_mute_talkers_count;       //0x0250
	uint32_t m_unk;                     //0x0254
	int32_t m_account_id;               //0x0258
};
static_assert(sizeof(CPlayerGamerDataNode) == 0x260);
#pragma pack(pop)