#pragma once
#include "../rage/rlMetric.hpp"
#include "../security/ObfVar.hpp"
#include "CNetComplaintMgr.hpp"
#include "snSession.hpp"
#include <cstring>

#pragma pack(push, 1)

class MetricSessionMigrated : public rage::rlMetric
{
public:
	char pad_0008[828]; //0x0008
	uint32_t m_num_players; //0x0344
}; //Size: 0x0348
static_assert(sizeof(MetricSessionMigrated) == 0x348);

class NetworkGameConfig
{
public:
	char pad_0000[48]; //0x0000
	uint32_t m_public_slots; //0x0030
	uint32_t m_private_slots; //0x0034
	char pad_0038[272]; //0x0038
}; //Size: 0x0148
static_assert(sizeof(NetworkGameConfig) == 0x148);

class NetworkGameFilterMatchmakingComponent
{
public:
	// do not use for actual network filters, this will break things
	inline void SetParameter(const char* name, int index, int value)
	{
		std::strcpy(m_param_names[index], name);
		m_param_mappings[index] = index;
		m_param_values[index] = value;
		m_enabled_params_bitset |= (1 << index);

		if (m_num_parameters <= (uint32_t)index)
			m_num_parameters++;
	}

	uint32_t m_filter_type; //0x0000
	char m_filter_name[24]; //0x0004
	uint32_t m_num_parameters; //0x001C
	uint16_t m_game_mode; //0x0020
	uint16_t m_session_type; //0x0022
	uint32_t m_param_unk[8]; //0x0024
	char m_param_names[8][24]; //0x0044
	char pad_0104[4]; //0x0104
	uint32_t m_param_mappings[8]; //0x0108
	char pad_0128[352]; //0x0128
	uint32_t m_param_values[8]; //0x0288
	char pad_02A8[96]; //0x02A8
	uint32_t m_enabled_params_bitset; //0x0308
	char pad_030C[8]; //0x030C
}; //Size: 0x0314
static_assert(sizeof(NetworkGameFilterMatchmakingComponent) == 0x314);

class MatchmakingAttributes
{
public:
	uint32_t m_game_mode; //0x0000
	uint32_t m_num_params; //0x0004
	uint32_t m_param_unk[8]; //0x0008
	char m_param_names[8][24]; //0x0028
	uint32_t m_param_values[8]; //0x00E8
	uint32_t m_params_bitset; //0x0108
}; //Size: 0x010C
static_assert(sizeof(MatchmakingAttributes) == 0x10C);

class NetworkGameFilter
{
public:
	virtual ~NetworkGameFilter() = default;
	virtual void Reset() {};

	uint32_t m_build_type; //0x0008
	uint32_t m_discriminator; //0x000C
	uint32_t m_discriminator_mapping; //0x0010
	uint32_t m_region_mapping; //0x0014
	uint32_t m_language_mapping; //0x0018
	uint32_t m_mm_group_1_mapping; //0x001C
	uint32_t m_mm_group_2_mapping; //0x0020
	uint32_t m_activity_type_mapping; //0x0024
	uint32_t m_activity_id_mapping; //0x0028
	uint32_t m_activity_players_mapping; //0x002C
	class NetworkGameFilterMatchmakingComponent m_matchmaking_component; //0x0030
}; //Size: 0x0344
static_assert(sizeof(NetworkGameFilter) == 0x344);

class SessionInfoBackup
{
public:
	class rage::rlSessionInfo m_session_info;
	uint32_t m_unk; //0x0070
	char pad_0074[4]; //0x0074
	uint32_t m_flags; //0x0078
}; //Size: 0x007C
static_assert(sizeof(SessionInfoBackup) == 0xDC);

class MatchmakingSessionResult
{
public:
	class rage::rlSessionDetail m_detail;
	char pad_03B8[24]; //0x03B8
}; //Size: 0x03D0
static_assert(sizeof(MatchmakingSessionResult) == 0x490);

class PlayerNameMapNode
{
public:
	char m_name[16]; //0x0000
	class rage::rlGamerHandle m_handle; //0x0010
	class PlayerNameMapNode* m_next; //0x0020
	class PlayerNameMapNode* m_prev; //0x0028
}; //Size: 0x0030
static_assert(sizeof(PlayerNameMapNode) == 0x30);

class JoiningPlayerNameMap
{
public:
	class PlayerNameMapNode m_names[100]; //0x0000
	char pad_12C0[40]; //0x12C0
	uint32_t m_num_name_nodes; //0x12E8
	char pad_12EC[796]; //0x12EC
}; //Size: 0x1608
static_assert(sizeof(JoiningPlayerNameMap) == 0x1608);

class CNetBlacklistNode
{
public:
	class rage::rlGamerHandle m_handle; //0x0000
	bool m_block_rejoin; //0x0010
	char pad_0011[3]; //0x0011
	uint32_t m_added_time; //0x0014
	class CNetBlacklistNode* m_next; //0x0018
	class CNetBlacklistNode* m_prev; //0x0020
}; //Size: 0x0028
static_assert(sizeof(CNetBlacklistNode) == 0x28);

class CNetBlacklist
{
public:
	class CNetBlacklistNode m_nodes[16]; //0x0000
	class CNetBlacklistNode* m_head; //0x0280
	class CNetBlacklistNode* m_tail; //0x0288
	uint32_t m_free_nodes; //0x0290
	char pad_0294[4]; //0x0294
	class CNetBlacklistNode* m_start; //0x0298
	char pad_02A0[24]; //0x02A0
}; //Size: 0x02B8
static_assert(sizeof(CNetBlacklist) == 0x2B8);

class RemotePlayerData
{
public:
	class rage::netGamePlayerData m_data[32]; //0x0000
	uint32_t m_count; //0x0600
	char pad_0604[4]; //0x0604
}; //Size: 0x0608
static_assert(sizeof(RemotePlayerData) == 0x608);

class InvitedGamer
{
public:
	class rage::rlGamerHandle m_handle;
	char pad_0010[12]; //0x0010
	uint32_t m_flags; //0x001C
}; //Size: 0x0020
static_assert(sizeof(InvitedGamer) == 0x20);

class InvitedGamers
{
public:
	class InvitedGamer m_invited_gamers[100]; //0x0000
	uint32_t m_num_invited_gamers; //0x0C80
	char pad_0C84[4]; //0x0C84
}; //Size: 0x0C88
static_assert(sizeof(InvitedGamers) == 0xC88);

class Network
{
public:
	rage::rlSessionInfo m_steam_unk_session; //0x0000
	rage::Obf32 m_num_dinput8_instances; //0x0070
	rage::Obf32 m_last_time_dinput8_checked; //0x0080
	class rage::snSession m_game_session; //0x00F0
	class rage::snSession m_transition_session; //0x5578
	char pad_AA00[16]; //0xAA00
	class rage::snSession* m_game_session_ptr_2; //0xAA10
	class rage::snSession* m_transition_session_ptr_2; //0xAA18
	char pad_AA20[16]; //0xAA20
	class rage::snSession* m_game_session_ptr; //0xAA30
	class rage::snSession* m_transition_session_ptr; //0xAA38
	char pad_AA40[24]; //0xAA40
	class NetworkGameConfig m_network_game_config; //0xAA58
	class NetworkGameConfig m_network_transition_config; //0xABA0
	bool m_session_attributes_dirty; //0xACE8
	char pad_ACE9[19]; //0xACE9
	uint32_t m_session_visibility_flags; //0xACFC
	uint32_t m_transition_visibility_flags; //0xAD00
	char pad_AD04[68]; //0xAD04
	class MetricSessionMigrated m_metric_session_migrated; //0xAD48
	bool m_migrated_metric_enabled; //0xB090
	char pad_B091[3]; //0xB091
	uint32_t m_game_session_state; //0xB094
	class NetworkGameFilter m_network_game_filter; //0xB098
	char pad_B3DC[33]; //0xB3DC
	bool m_was_invited; //0xB3FD
	char pad_B3FE[10]; //0xB3FE
	class rage::rlSessionInfo m_unk_session_info; //0xB408
	char pad_B4D8[635]; //0xB4D8
	bool m_need_host_change; //0xB753
	char pad_B754[74316]; //0xB754
	class rage::rlSessionDetail m_joining_session_detail; //0x1D9A0
	class SessionInfoBackup m_last_joined_session; //0x1DE18
	char pad_1DEF4[40]; //0x1DEF4
	uint32_t m_current_matchmaking_group; //0x1DF1C
	uint32_t m_matchmaking_group_max_players[5]; //0x1DF20
	uint32_t m_num_active_matchmaking_groups; //0x1DF34
	char pad_1DF38[8]; //0x1DF38
	uint8_t m_matchmaking_property_id; //0x1DF40
	uint8_t m_matchmaking_mental_state; //0x1DF41
	char pad_1DF42[366]; //0x1DF42
	class rage::rlMatchmakingFindResult m_game_session_matchmaking[3]; //0x1E0B0
	char pad_2ABC0[40]; //0x2ABC0
	class MatchmakingSessionResult m_game_matchmaking_session_results[10]; //0x2ABE8
	char pad_2D988[308]; //0x2D988
	uint32_t m_num_bosses; //0x2DABC
	bool m_num_bosses_set; //0x2DAC0
	char pad_2DAC1[7]; //0x2DAC1
	class rage::rlGamerHandle m_transition_creator_handle; //0x2DAC8
	char pad_2DAD8[12]; //0x2DAD8
	bool m_is_waiting_async; //0x2DAE4
	bool m_is_preferred_activity; //0x2DAE5
	char pad_2DAE6[2]; //0x2DAE6
	uint32_t m_in_progress_finish_time; //0x2DAE8
	char pad_2DAEC[4]; //0x2DAEC
	bool m_local_player_info_dirty; //0x2DAF0
	char pad_2DAF1[495]; //0x2DAF1
	class rage::rlGamerHandle m_inviter_handle; //0x2DCE0
	class CNetComplaintMgr m_game_complaint_mgr; //0x2DCF0
	class CNetComplaintMgr m_transition_complaint_mgr; //0x2EB88
	char pad_2FA20[32]; //0x2FA20
	class JoiningPlayerNameMap m_unused_joining_player_name_map; //0x2FA40
	char pad_31048[8]; //0x31048
	class CNetBlacklist m_blacklist; //0x31050
	char pad_31308[8]; //0x31308
	class InvitedGamers m_game_invited_gamers; //0x31310
	char pad_31F98[5888]; //0x31F98
	class SessionInfoBackup m_last_joined_transition; //0x33698
	uint32_t m_activity_max_players; //0x33774
	uint32_t m_activity_max_spectators; //0x33778
	char pad_3377C[48]; //0x3377C
	bool m_do_not_launch_from_join_as_migrated_host; //0x337AC
	char pad_337AD[7]; //0x337AD
	bool m_is_activity_session; //0x337B4
	char pad_337B5[35]; //0x337B5
	class RemotePlayerData m_remote_player_data; //0x337D8
	char pad_33DE0[8]; //0x33DE0
	class rage::netGamePlayerData m_local_net_game_player_data; //0x33DE8
	char pad_33E18[608]; //0x33E18
	class rage::rlMatchmakingFindResult m_transition_matchmaking[4]; //0x34078
	class NetworkGameFilter m_transition_filters[4]; //0x44F38
	char pad_45C48[20]; //0x45C48
	uint32_t m_transition_quickmatch_group_handle_count; //0x45C5C
	class rage::rlGamerHandle m_transition_quickmatch_group_handles[32]; //0x45C60
	bool m_retain_activity_group; //0x45E60
	char pad_45E61[7]; //0x45E61
	class rage::rlSessionInfo m_transition_to_activity_session_info; //0x45E68
	char pad_45F38[48]; //0x45F38
	class MatchmakingSessionResult m_transition_matchmaking_session_results[10]; //0x45F68
	char pad_48D08[8]; //0x48D08
	class InvitedGamers m_transition_invited_gamers; //0x48D10
	char pad_49998[16]; //0x49998
	class rage::rlGamerHandle m_transition_to_game_handle; //0x499A8
	class rage::rlSessionInfo m_transition_to_game_session_info; //0x499B8
	char pad_49A88[4]; //0x49A88
	uint32_t m_transition_to_game_session_participant_count; //0x49A8C
	class rage::rlGamerHandle m_transition_to_game_session_participants[32]; //0x49A90
	char pad_49C90[80]; //0x49C90
	class rage::rlGamerHandle m_follower_handles[32]; //0x49CE0
	uint32_t m_follower_count; //0x49EE0
	char pad_49EE4[628]; //0x49EE4
}; //Size: 0x38650
static_assert(sizeof(Network) == 0x4A158);
#pragma pack(pop)