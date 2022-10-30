#pragma once

#include "CNetGamePlayer.hpp"
#include "CNetGamePlayerDataMsg.hpp"
#include "../player/CNonPhysicalPlayerData.hpp"

#include <cstdint>

namespace rage
{
#pragma pack(push, 8)
    class netPlayerMgrBase
    {
    public:
        virtual ~netPlayerMgrBase() = default;
        virtual void Initialize() = 0;
        virtual void Shutdown() = 0;
        virtual void unk_0x18() = 0;
        virtual CNetGamePlayer* AddPlayer_raw(rage::rlGamerInfo* gamer_info, uint32_t a2, CNetGamePlayerDataMsg* player_data, CNonPhysicalPlayerData* non_physical_player_data) = 0;
        virtual void RemovePlayer(CNetGamePlayer* net_game_player) = 0;
        virtual void UpdatePlayerListsForPlayer(CNetGamePlayer* net_game_player) = 0;
        virtual CNetGamePlayer* AddPlayer(rage::rlGamerInfo* gamer_info, uint32_t a3, CNetGamePlayerDataMsg* player_data, CNonPhysicalPlayerData* non_physical_player_data) = 0;

        char pad_0008[8]; //0x0008
        uint64_t *m_network_bandwidth_manager; //0x0010
        char pad_0018[208]; //0x0018
        CNetGamePlayer *m_local_net_player; //0x00E8
        char pad_00F0[144]; //0x00F0
        CNetGamePlayer *m_player_list[32]; //0x0180
        uint16_t m_player_limit; //0x0280
        char pad_0282[10]; //0x0282
        uint16_t m_player_count; //0x028C
        char pad_0290[1618]; //0x0290
    }; //Size: 0x08E0
    static_assert(sizeof(netPlayerMgrBase) == 0x8E0);
#pragma pack(pop)
}
