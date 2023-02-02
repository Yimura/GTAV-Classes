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

        if (m_num_parameters <= index)
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
    rage::rlSessionInfo m_steam_unk_session; //0x0000
    rage::Obf32 m_num_dinput8_instances; //0x0070
    rage::Obf32 m_last_time_dinput8_checked; //0x0080
    class rage::snSession* m_game_session_ptr; //0x0090
    class rage::snSession* m_transition_session_ptr; //0x0098
    char pad_00A0[24]; //0x00A0
    class rage::snSession m_game_session; //0x00B8
    class rage::snSession m_transition_session; //0x3F28
    char pad_7D98[16]; //0x7D98
    class NetworkGameConfig m_network_game_config; //0xAC48
    class NetworkGameConfig m_network_transition_config; //0xAD90
    bool m_session_attributes_dirty; //0xAED8
    char pad_AED9[19]; //0xAED9
    uint32_t m_session_visibility_flags; //0xAEEC
    uint32_t m_transition_visibility_flags; //0xAEF0
    char pad_AEF4[60]; //0xAEF4
    class MetricSessionMigrated m_metric_session_migrated; //0xAF30
    bool m_migrated_metric_enabled; //0xB278
    char pad_B279[3]; //0xB279
    uint32_t m_game_session_state; //0xB27C
    class NetworkGameFilter m_network_game_filter; //0xB280
    char pad_B5C4[33]; //0xB5C4
    bool m_was_invited; //0xB5E5
    char pad_B5E6[10]; //0xB5E6
    class rage::rlSessionInfo m_unk_session_info; //0xB5F0
    char pad_B6C0[635]; //0xB6C0
    bool m_need_host_change; //0xB93B
    char pad_B93C[2628]; //0xB93C
    class rage::rlSessionDetail m_joining_session_detail; //0xC380
    class SessionInfoBackup m_last_joined_session; //0xC7F8
    char pad_C8D4[40]; //0xC8D4
    uint32_t m_current_matchmaking_group; //0xC8FC
    uint32_t m_matchmaking_group_max_players[5]; //0xC900
    uint32_t m_num_active_matchmaking_groups; //0xC914
    char pad_C918[8]; //0xC918
    uint8_t m_matchmaking_property_id; //0xC920
    uint8_t m_matchmaking_mental_state; //0xC921
    char pad_C922[366]; //0xC922
    class rage::rlMatchmakingFindResult m_game_session_matchmaking[3]; //0xCA90
    char pad_195A0[40]; //0x195A0
    class MatchmakingSessionResult m_game_matchmaking_session_results[10]; //0x195C8
    char pad_1C368[308]; //0x1C368
    uint32_t m_num_bosses; //0x1C49C
    bool m_num_bosses_set; //0x1C4A0
    char pad_1C4A1[7]; //0x1C4A1
    class rage::rlGamerHandle m_transition_creator_handle; //0x1C4A8
    char pad_1C4B8[12]; //0x1C4B8
    bool m_is_waiting_async; //0x1C4C4
    bool m_is_preferred_activity; //0x1C4C5
    char pad_1C4C6[2]; //0x1C4C6
    uint32_t m_in_progress_finish_time; //0x1C4C8
    char pad_1C4CC[4]; //0x1C4CC
    bool m_local_player_info_dirty; //0x1C4D0
    char pad_1C4D1[495]; //0x1C4D1
    class rage::rlGamerHandle m_inviter_handle; //0x1C6C0
    class CNetComplaintMgr m_game_complaint_mgr; //0x1C6D0
    class CNetComplaintMgr m_transition_complaint_mgr; //0x1D368
    char pad_1E000[32]; //0x1E000
    class JoiningPlayerNameMap m_unused_joining_player_name_map; //0x1E020
    char pad_1F948[8]; //0x1F948
    class CNetBlacklist m_blacklist; //0x1F950
    char pad_1FC08[8]; //0x1FC08
    class InvitedGamers m_game_invited_gamers; //0x1FC10
    char pad_20898[4864]; //0x20898
    class SessionInfoBackup m_last_joined_transition; //0x21B98
    uint32_t m_activity_max_players; //0x21C74
    uint32_t m_activity_max_spectators; //0x21C78
    char pad_21C7C[48]; //0x21C7C
    bool m_do_not_launch_from_join_as_migrated_host; //0x21CAC
    char pad_21CAD[7]; //0x21CAD
    bool m_is_activity_session; //0x21CB4
    char pad_21CB5[35]; //0x21CB5
    class RemotePlayerData m_remote_player_data; //0x21CD8
    char pad_222E0[8]; //0x222E0
    class rage::netGamePlayerData m_local_net_game_player_data; //0x222E8
    char pad_22318[608]; //0x22318
    class rage::rlMatchmakingFindResult m_transition_matchmaking[4]; //0x22578
    class NetworkGameFilter m_transition_filters[4]; //0x33438
    char pad_34148[20]; //0x34148
    uint32_t m_transition_quickmatch_group_handle_count; //0x3415C
    class rage::rlGamerHandle m_transition_quickmatch_group_handles[32]; //0x34160
    bool m_retain_activity_group; //0x34360
    char pad_34361[7]; //0x34361
    class rage::rlSessionInfo m_transition_to_activity_session_info; //0x34368
    char pad_34438[48]; //0x34438
    class MatchmakingSessionResult m_transition_matchmaking_session_results[10]; //0x34468
    char pad_37208[8]; //0x37208
    class InvitedGamers m_transition_invited_gamers; //0x37210
    char pad_37E98[16]; //0x37E98
    class rage::rlGamerHandle m_transition_to_game_handle; //0x37EA8
    class rage::rlSessionInfo m_transition_to_game_session_info; //0x37EB8
    char pad_37F88[4]; //0x37F88
    uint32_t m_transition_to_game_session_participant_count; //0x37F8C
    class rage::rlGamerHandle m_transition_to_game_session_participants[32]; //0x37F90
    char pad_38190[72]; //0x38190
    class rage::rlGamerHandle m_follower_handles[32]; //0x381D8
    uint32_t m_follower_count; //0x383D8
    char pad_383DC[628]; //0x383DC
}; //Size: 0x38650
static_assert(sizeof(Network) == 0x38650);
#pragma pack(pop)