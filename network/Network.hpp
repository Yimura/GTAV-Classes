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
    class rage::rlSessionInfo m_session_info; //0x0000
    class Obf32 m_num_dinput8_instances; //0x0070
    class Obf32 m_last_time_dinput8_checked; //0x0080
    class rage::snSession* m_game_session_ptr; //0x0090
    class rage::snSession* m_transition_session_ptr; //0x0098
    char pad_00A0[24]; //0x00A0
    class rage::snSession m_game_session; //0x00B8
    class rage::snSession m_transition_session; //0x3F28
    char pad_7D98[16]; //0x7D98
    class NetworkGameConfig m_network_game_config; //0x7DA8
    class NetworkGameConfig m_network_transition_config; //0x7EF0
    bool m_session_attributes_dirty; //0x8038
    char pad_8039[19]; //0x8039
    uint32_t m_session_visibility_flags; //0x804C
    uint32_t m_transition_visibility_flags; //0x8050
    char pad_8054[36]; //0x8054
    class MetricSessionMigrated m_metric_session_migrated; //0x8078
    bool m_migrated_metric_enabled; //0x83A8
    char pad_83A9[3]; //0x83A9
    uint32_t m_game_session_state; //0x83AC
    class NetworkGameFilter m_network_game_filter; //0x83B0
    char pad_86F4[33]; //0x86F4
    bool m_was_invited; //0x8715
    char pad_8716[757]; //0x8716
    bool m_need_host_change; //0x8A0B
    char pad_8A0C[2620]; //0x8A0C
    class rage::rlSessionDetail m_joining_session_detail; //0x9448
    class SessionInfoBackup m_last_joined_session; //0x9800
    char pad_987C[40]; //0x987C
    uint32_t m_current_matchmaking_group; //0x98A4
    uint32_t m_matchmaking_group_max_players[5]; //0x98A8
    uint32_t m_num_active_matchmaking_groups; //0x98Bc
    char pad_98C0[8]; //0x98C0
    uint8_t m_matchmaking_property_id; //0x98C8
    uint8_t m_matchmaking_mental_state; //0x98C9
    char pad_98CA[374]; //0x98CA
    class rage::rlMatchmakingFindResult m_game_session_matchmaking[3]; //0x9A40
    char pad_14390[40]; //0x14390
    class MatchmakingSessionResult m_game_matchmaking_session_results[10]; //0x143B8
    char pad_169D8[320]; //0x169D8
    class rage::rlGamerHandle m_transition_creator_handle; //0x16B18
    char pad_16B28[24]; //0x16B28
    bool m_local_player_info_dirty; //0x16B40
    char pad_16B41[495]; //0x16B41
    class rage::rlGamerHandle m_inviter_handle; //0x16D30
    class CNetComplaintMgr m_game_complaint_mgr; //0x16D40
    class CNetComplaintMgr m_transition_complaint_mgr; //0x179D8
    char pad_18670[32]; //0x18670
    class JoiningPlayerNameMap m_unused_joining_player_name_map; //0x18690
    char pad_19FB8[8]; //0x19FB8
    class CNetBlacklist m_blacklist; //0x19FC0
    char pad_1A278[8]; //0x1A278
    class InvitedGamers m_game_invited_gamers; //0x1A280
    char pad_1AF08[56]; //0x1AF08
    class SessionInfoBackup m_last_joined_transition; //0x1AF40
    char pad_1AFBC[4]; //0x1AFBC
    uint32_t m_activity_spectator_max_players; //0x1AFC0
    char pad_1AFC4[56]; //0x1AFC4
    bool m_is_activity_session; //0x1AFFC
    char pad_1AFFD[35]; //0x1AFFD
    class RemotePlayerData m_remote_player_data; //0x1B020
    char pad_1B628[8]; //0x1B628
    class rage::netGamePlayerData m_local_net_game_player_data; //0x1B630
    char pad_1B660[600]; //0x1B660
    class rage::rlMatchmakingFindResult m_transition_matchmaking[4]; //0x1B8B8
    class NetworkGameFilter m_transition_filters[4]; //0x29A78
    char pad_2A788[20]; //0x2A788
    uint32_t m_transition_quickmatch_group_handle_count; //0x2A79C
    class rage::rlGamerHandle m_transition_quickmatch_group_handles[32]; //0x2A7A0
    char pad_2A9A0[8]; //0x2A9A0
    class rage::rlSessionInfo m_transition_to_activity_session_info; //0x2A9A8
    char pad_2AA18[48]; //0x2AA18
    class MatchmakingSessionResult m_transition_matchmaking_session_results[10]; //0x2AA48
    char pad_2D068[8]; //0x2D068
    class InvitedGamers m_transition_invited_gamers; //0x2D070
    char pad_2DCF8[16]; //0x2DCF8
    class rage::rlGamerHandle m_transition_to_game_handle; //0x2DD08
    class rage::rlSessionInfo m_transition_to_game_session_info; //0x2DD18
    char pad_2DD88[4]; //0x2DD88
    uint32_t m_transition_to_game_session_participant_count; //0x2DD8C
    class rage::rlGamerHandle m_transition_to_game_session_participants[32]; //0x2DD90
    char pad_2DF90[72]; //0x2DF90
    class rage::rlGamerHandle m_follower_handles[32]; //0x2DFD8
    uint32_t m_follower_count; //0x2E1D8
    char pad_2E1DC[628]; //0x2E1DC
}; //Size: 0x2E450
static_assert(sizeof(Network) == 0x2E450);
#pragma pack(pop)
