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
    rage::rlSessionInfo m_steam_unk_session; //0x0000
    rage::Obf32 m_num_dinput8_instances; //0x0070
    rage::Obf32 m_last_time_dinput8_checked; //0x0080
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
    char pad_8054[60]; //0x8054
    class MetricSessionMigrated m_metric_session_migrated; //0x8090
    bool m_migrated_metric_enabled; //0x83D8
    char pad_83D9[3]; //0x83D9
    uint32_t m_game_session_state; //0x83DC
    class NetworkGameFilter m_network_game_filter; //0x83E0
    char pad_8724[33]; //0x8724
    bool m_was_invited; //0x8745
    char pad_8746[10]; //0x8746
    class rage::rlSessionInfo m_unk_session_info; //0x8750
    char pad_87C0[635]; //0x87C0
    bool m_need_host_change; //0x8A3B
    char pad_8A3C[2612]; //0x8A3C
    class rage::rlSessionDetail m_joining_session_detail; //0x9470
    class SessionInfoBackup m_last_joined_session; //0x9828
    char pad_98A4[40]; //0x98A4
    uint32_t m_current_matchmaking_group; //0x98CC
    uint32_t m_matchmaking_group_max_players[5]; //0x98D0
    uint32_t m_num_active_matchmaking_groups; //0x98E4
    char pad_98E8[8]; //0x98E8
    uint8_t m_matchmaking_property_id; //0x98F0
    uint8_t m_matchmaking_mental_state; //0x98F1
    char pad_98F2[366]; //0x98F2
    class rage::rlMatchmakingFindResult m_game_session_matchmaking[3]; //0x9A60
    char pad_143B0[40]; //0x143B0
    class MatchmakingSessionResult m_game_matchmaking_session_results[10]; //0x143D8
    char pad_169F8[308]; //0x169F8
    uint32_t m_num_bosses; //0x16B2C
    bool m_num_bosses_set; //0x16B30
    char pad_16B31[7]; //0x16B31
    class rage::rlGamerHandle m_transition_creator_handle; //0x16B38
    char pad_16B48[12]; //0x16B48
    bool m_is_waiting_async; //0x16B54
    bool m_is_preferred_activity; //0x16B55
    char pad_16B56[2]; //0x16B56
    uint32_t m_in_progress_finish_time; //0x16B58
    char pad_16B5C[4]; //0x16B5C
    bool m_local_player_info_dirty; //0x16B60
    char pad_16B61[495]; //0x16B61
    class rage::rlGamerHandle m_inviter_handle; //0x16D50
    class CNetComplaintMgr m_game_complaint_mgr; //0x16D60
    class CNetComplaintMgr m_transition_complaint_mgr; //0x179F8
    char pad_18690[32]; //0x18690
    class JoiningPlayerNameMap m_unused_joining_player_name_map; //0x186B0
    char pad_19FD8[8]; //0x19FD8
    class CNetBlacklist m_blacklist; //0x19FE0
    char pad_1A298[8]; //0x1A298
    class InvitedGamers m_game_invited_gamers; //0x1A2A0
    char pad_1AF28[56]; //0x1AF28
    class SessionInfoBackup m_last_joined_transition; //0x1AF60
    uint32_t m_activity_max_players; //0x1AFDC
    uint32_t m_activity_max_spectators; //0x1AFE0
    char pad_1AFE4[48]; //0x1AFE4
    bool m_do_not_launch_from_join_as_migrated_host; //0x1B014
    char pad_1B015[7]; //0x1B015
    bool m_is_activity_session; //0x1B01C
    char pad_1B01D[35]; //0x1B01D
    class RemotePlayerData m_remote_player_data; //0x1B040
    char pad_1B648[8]; //0x1B648
    class rage::netGamePlayerData m_local_net_game_player_data; //0x1B650
    char pad_1B680[600]; //0x1B680
    class rage::rlMatchmakingFindResult m_transition_matchmaking[4]; //0x1B8D8
    class NetworkGameFilter m_transition_filters[4]; //0x29A98
    char pad_2A7A8[20]; //0x2A7A8
    uint32_t m_transition_quickmatch_group_handle_count; //0x2A7BC
    class rage::rlGamerHandle m_transition_quickmatch_group_handles[32]; //0x2A7C0
    bool m_retain_activity_group; //0x2A9C0
    char pad_2A9C1[7]; //0x2A9C1
    class rage::rlSessionInfo m_transition_to_activity_session_info; //0x2A9C8
    char pad_2AA38[48]; //0x2AA38
    class MatchmakingSessionResult m_transition_matchmaking_session_results[10]; //0x2AA68
    char pad_2D088[8]; //0x2D088
    class InvitedGamers m_transition_invited_gamers; //0x2D090
    char pad_2DD18[16]; //0x2DD18
    class rage::rlGamerHandle m_transition_to_game_handle; //0x2DD28
    class rage::rlSessionInfo m_transition_to_game_session_info; //0x2DD38
    char pad_2DDA8[4]; //0x2DDA8
    uint32_t m_transition_to_game_session_participant_count; //0x2DDAC
    class rage::rlGamerHandle m_transition_to_game_session_participants[32]; //0x2DDB0
    char pad_2DFB0[72]; //0x2DFB0
    class rage::rlGamerHandle m_follower_handles[32]; //0x2DFF8
    uint32_t m_follower_count; //0x2E1F8
    char pad_2E1FC[628]; //0x2E1FC
}; //Size: 0x2E470
static_assert(sizeof(Network) == 0x2E470);
#pragma pack(pop)