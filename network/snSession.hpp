#pragma once

#include "../rage/rlGamerInfo.hpp"
#include "../rage/rlSessionInfo.hpp"

#pragma pack(push, 1)
namespace rage
{
    class netConnectionManager;
    class sysMemAllocator;

    class snPlayer
    {
    public:
        uint64_t m_msg_id; //0x0000
        class rage::rlGamerInfo m_player_data; //0x0008
    }; //Size: 0x00A0
    static_assert(sizeof(rage::snPlayer) == 0xA0);

    class snPeer
    {
    public:
        class rage::rlGamerInfo m_peer_data; //0x0000
        char pad_0098[40]; //0x0098
    }; //Size: 0x00C0
    static_assert(sizeof(rage::snPeer) == 0xC0);

    class rlRemoteGamer
    {
    public:
        rage::rlGamerHandle m_handle;
        char pad_0010[4]; //0x0010
        uint32_t m_timeout_time; //0x0014
        uint32_t m_time_unk; //0x0018
        char pad_001C[4]; //0x001C
    }; //Size: 0x0020
    static_assert(sizeof(rage::rlRemoteGamer) == 0x20);


    class rlSession
    {
    public:
        char pad_0008[168]; //0x0008
        class rage::rlSessionInfo m_session_info; //0x00B0
        char pad_0120[288]; //0x0120
        uint64_t m_session_id; //0x0240
        char pad_0248[1648]; //0x0248

        virtual ~rlSession() = default;
    }; //Size: 0x08B8
    static_assert(sizeof(rage::rlSession) == 0x8B8);

    class rlSessionDetail
    {
    public:
        class rage::rlGamerInfoBase m_base_gamer_info;
        char pad_0060[8]; //0x0060
        class rage::rlSessionInfo m_session_info; //0x0068
        char pad_00D8[14]; //0x00D8
        uint16_t m_session_type; //0x00E6
        char pad_00E8[324]; //0x00E8
        uint32_t m_player_count; //0x022C
        uint32_t m_unk_player_count; //0x0230
        char pad_0234[2]; //0x0234
        int16_t m_unk_pos_x; //0x0236
        int16_t m_unk_pos_y; //0x0238
        int16_t m_unk_pos_z; //0x023A
        uint8_t m_matchmaking_property_ids[32]; //0x023C
        char pad_025C[2]; //0x025C
        uint16_t m_rank; //0x025E
        char pad_0260[1]; //0x0260
        uint8_t m_mental_state; //0x0261
        char pad_0262[21]; //0x0262
        uint8_t m_population_density; //0x0277
        char pad_0278[320]; //0x0278
    }; //Size: 0x03CA
    static_assert(sizeof(rlSessionDetail) == 0x3B8);


    class rlMatchmakingFindResult
    {
    public:
        class rage::rlSessionDetail m_result_session_details[15]; //0x0000
        char pad_37C8[168]; //0x37C8
    }; //Size: 0x3870
    static_assert(sizeof(rage::rlMatchmakingFindResult) == 0x3870);

    class netGamePlayerData
    {
    public:
        class rlGamerHandle m_handle;
        bool m_is_activity_spectator; //0x0010
        char pad_0011[7]; //0x0011
        uint64_t m_crew_id; //0x0018
        uint16_t m_rank; //0x0020
        uint16_t m_debug_unk; //0x0022
        char pad_0024[4]; //0x0024
        uint32_t m_nat_type; //0x0028
        bool m_is_rockstar_dev; //0x002C
        char pad_002D[3]; //0x002D
    }; //Size: 0x0030
    static_assert(sizeof(rage::netGamePlayerData) == 0x30);


    class snSession
    {
    public:
        rage::sysMemAllocator* m_memory_allocator; //0x0000
        char pad_0008[64]; //0x0008
        rage::netConnectionManager* m_net_connection_mgr; //0x0048
        char pad_0050[48]; //0x0050
        class rage::rlSession m_rline_session; //0x0080
        class rage::snPlayer m_local_player; //0x0938
        uint64_t m_host_token; //0x09D8
        char pad_09E0[144]; //0x09E0
        class rage::snPeer m_peer_storage[32]; //0x0A70
        char pad_2270[24]; //0x2270
        class rage::snPeer* m_peers[32]; //0x2288
        uint32_t m_peer_count; //0x2388
        char pad_238C[4]; //0x238C
        class rage::snPlayer m_player_storage[32]; //0x2390
        char pad_3790[24]; //0x3790
        class rage::snPlayer* m_players[32]; //0x37A8
        uint32_t m_player_count; //0x38A8
        char pad_38AC[4]; //0x38AC
        class rage::rlRemoteGamer m_remote_gamers[32]; //0x38B0
        uint32_t m_num_remote_gamers; //0x3CB0
        bool m_player_joining; //0x3CB4
        char pad_3CB5[107]; //0x3CB5
        uint32_t m_connection_identifier; //0x3D20
        char pad_3D24[8]; //0x3D24
        char m_token_key[64]; //0x3D2C
        char m_id_key[64]; //0x3D6C
        char m_info_key[64]; //0x3DAC
        char m_host_key[64]; //0x3DEC
        char m_join_key[64]; //0x3E2C
        char pad_3E6C[4]; //0x3E6C

        inline bool is_host()
        {
            return m_local_player.m_player_data.m_host_token == m_host_token;
        }

        inline snPlayer* get_player_by_token(uint64_t token)
        {
            for (std::uint32_t i = 0; i < m_player_count; i++)
            {
                if (m_players[i]->m_player_data.m_host_token == token)
                {
                    return m_players[i];
                }
            }

            return nullptr;
        }

        inline snPeer* get_peer_by_rockstar_id(uint64_t rid)
        {
            for (uint32_t i = 0; i < m_peer_count; i++)
            {
                if (m_peers[i]->m_peer_data.m_gamer_handle_2.m_rockstar_id == rid)
                {
                    return m_peers[i];
                }
            }

            return nullptr;
        }

    }; //Size: 0x3E70
    static_assert(sizeof(rage::snSession) == 0x3E70);

    class snMsgRemoveGamersFromSessionCmd
    {
    public:
        uint64_t m_session_id; //0x0000
        uint64_t m_peer_ids[32]; //0x0008
        int32_t m_unk = -1; //0x0108
        uint32_t m_num_peers; //0x010C
    }; //Size: 0x0110
    static_assert(sizeof(rage::snMsgRemoveGamersFromSessionCmd) == 0x110);
}

class SessionSortEntry
{
public:
    class rage::rlSessionDetail* m_session_detail; //0x0000
    char pad_0008[4]; //0x0008
    float m_score; //0x000C
    char pad_0010[8]; //0x0010
}; //Size: 0x0018
static_assert(sizeof(SessionSortEntry) == 0x18);
#pragma pack(pop)
