#pragma once
#include "../rage/rlMetric.hpp"
#include "../security/Obf32.hpp"
#include "CNetComplaintMgr.hpp"
#include "snSession.hpp"

#pragma pack(push, 1)

class MetricSessionMigrated : public rage::rlMetric
{
public:
	char pad_0008[804]; //0x0008
	uint32_t m_num_players; //0x032C
}; //Size: 0x0330
static_assert(sizeof(MetricSessionMigrated) == 0x330);

class NetworkGameConfig
{
public:
	char pad_0000[48]; //0x0000
	uint32_t m_public_slots; //0x0030
	uint32_t m_private_slots; //0x0034
	char pad_0038[272]; //0x0038
}; //Size: 0x0148
static_assert(sizeof(NetworkGameConfig) == 0x148);

class NetworkGameFilter
{
public:
	char pad_0000[16]; //0x0000
	char m_game_mode[24]; //0x0010
	char pad_0028[8]; //0x0028
	uint32_t m_attribute_values[8]; //0x0030
	char m_attribute_names[8][24]; //0x0050
	char pad_0110[564]; //0x0110
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
static_assert(sizeof(SessionInfoBackup) == 0x7C);

class MatchmakingSessionResult
{
public:
	class rage::rlSessionDetail m_detail;
	char pad_03B8[24]; //0x03B8
}; //Size: 0x03D0
static_assert(sizeof(MatchmakingSessionResult) == 0x3D0);

class PlayerNameMapNode
{
public:
	char m_name[24]; //0x0000
	class rage::rlGamerHandle m_handle; //0x0018
	class PlayerNameMapNode* m_next; //0x0028
	class PlayerNameMapNode* m_prev; //0x0030
}; //Size: 0x0038
static_assert(sizeof(PlayerNameMapNode) == 0x38);

class JoiningPlayerNameMap
{
public:
	class PlayerNameMapNode m_names[100]; //0x0000
	char pad_15E0[40]; //0x15E0
	uint32_t m_num_name_nodes; //0x1608
	char pad_160C[796]; //0x160C
}; //Size: 0x1928
static_assert(sizeof(JoiningPlayerNameMap) == 0x1928);

class CNetBlacklistNode : public rage::rlGamerHandle
{
public:
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
	class rage::rlSessionInfo m_session_info;
	class Obf32 m_num_dinput8_instances;
	class Obf32 m_last_time_dinput8_checked; //0x0010
	class rage::snSession* m_game_session_ptr; //0x0020
	class rage::snSession* m_transition_session_ptr; //0x0028
	char pad_0030[24]; //0x0030
	class rage::snSession m_game_session; //0x0048
	class rage::snSession m_transition_session; //0x3EB8
	char pad_7D28[16]; //0x7D28
	class NetworkGameConfig m_network_game_config; //0x7D38
	class NetworkGameConfig m_network_transition_config; //0x7E80
	bool m_session_attributes_dirty; //0x7FC8
	char pad_7FC9[19]; //0x7FC9
	uint32_t m_session_visibility_flags; //0x7FDC
	uint32_t m_transition_visibility_flags; //0x7FE0
	char pad_7FE4[36]; //0x7FE4
	class MetricSessionMigrated m_metric_session_migrated; //0x8008
	bool m_migrated_metric_enabled; //0x8338
	char pad_8339[3]; //0x8339
	uint32_t m_game_session_state; //0x833C
	class NetworkGameFilter m_network_game_filter; //0x8340
	char pad_8684[33]; //0x8684
	bool m_was_invited; //0x86A5
	char pad_86A6[757]; //0x86A6
	bool m_need_host_change; //0x899B
	char pad_899C[2620]; //0x899C
	class rage::rlSessionDetail m_joining_session_detail; //0x93D8
	class SessionInfoBackup m_last_joined_session; //0x9790
	char pad_980C[40]; //0x980C
	uint32_t m_current_matchmaking_group; //0x9834
	uint32_t m_matchmaking_group_max_players[5]; //0x9838
	uint32_t m_num_active_matchmaking_groups; //0x984C
	char pad_9850[8]; //0x9850
	uint8_t m_matchmaking_property_id; //0x9858
	uint8_t m_matchmaking_mental_state; //0x9859
	char pad_985A[374]; //0x985A
	class rage::rlMatchmakingFindResult m_game_session_matchmaking[3]; //0x99D0
	char pad_14320[40]; //0x14320
	class MatchmakingSessionResult m_game_matchmaking_session_results[10]; //0x14348
	char pad_16968[320]; //0x16968
	class rage::rlGamerHandle m_transition_creator_handle; //0x16AA8
	char pad_16AB8[24]; //0x16AB8
	bool m_local_player_info_dirty; //0x16AD0
	char pad_16AD1[495]; //0x16AD1
	class rage::rlGamerHandle m_inviter_handle; //0x16CC0
	class CNetComplaintMgr m_game_complaint_mgr; //0x16CD0
	class CNetComplaintMgr m_transition_complaint_mgr; //0x17968
	char pad_18600[32]; //0x18600
	class JoiningPlayerNameMap m_unused_joining_player_name_map; //0x18620
	char pad_19F48[8]; //0x19F48
	class CNetBlacklist m_blacklist; //0x19F50
	char pad_1A208[8]; //0x1A208
	class InvitedGamers m_game_invited_gamers; //0x1A210
	char pad_1AE98[56]; //0x1AE98
	class SessionInfoBackup m_last_joined_transition; //0x1AED0
	char pad_1AF4C[4]; //0x1AF4C
	uint32_t m_activity_spectator_max_players; //0x1AF50
	char pad_1AF54[56]; //0x1AF54
	bool m_is_activity_session; //0x1AF8C
	char pad_1AF8D[35]; //0x1AF8D
	class RemotePlayerData m_remote_player_data; //0x1AFB0
	char pad_1B5B8[8]; //0x1B5B8
	class rage::netGamePlayerData m_local_net_game_player_data; //0x1B5C0
	char pad_1B5F0[600]; //0x1B5F0
	class rage::rlMatchmakingFindResult m_transition_matchmaking[4]; //0x1B848
	class NetworkGameFilter m_transition_filters[4]; //0x29A08
	char pad_2A718[20]; //0x2A718
	uint32_t m_transition_quickmatch_group_handle_count; //0x2A72C
	class rage::rlGamerHandle m_transition_quickmatch_group_handles[32]; //0x2A730
	char pad_2A930[8]; //0x2A930
	class rage::rlSessionInfo m_transition_to_activity_session_info; //0x2A938
	char pad_2A9A8[48]; //0x2A9A8
	class MatchmakingSessionResult m_transition_matchmaking_session_results[10]; //0x2A9D8
	char pad_2CFF8[8]; //0x2CFF8
	class InvitedGamers m_transition_invited_gamers; //0x2D000
	char pad_2DC88[16]; //0x2DC88
	class rage::rlGamerHandle m_transition_to_game_handle; //0x2DC98
	class rage::rlSessionInfo m_transition_to_game_session_info; //0x2DCA8
	char pad_2DD18[4]; //0x2DD18
	uint32_t m_transition_to_game_session_participant_count; //0x2DD1C
	class rage::rlGamerHandle m_transition_to_game_session_participants[32]; //0x2DD20
	char pad_2DF20[72]; //0x2DF20
	class rage::rlGamerHandle m_follower_handles[32]; //0x2DF68
	uint32_t m_follower_count; //0x2E168
	char pad_2E16C[628]; //0x2E16C
}; //Size: 0x2E3E0
static_assert(sizeof(Network) == 0x2E450);
#pragma pack(pop)