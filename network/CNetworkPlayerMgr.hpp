#pragma once

#include "netPlayerMgrBase.hpp"
#include "CNetGamePlayer.hpp"
#include "../player/CNonPhysicalPlayerData.hpp"

#include <cstdint>

#pragma pack(push, 2)
class CNetworkPlayerMgr : public rage::netPlayerMgrBase
{
public:
    CNetGamePlayer m_net_players[32]; //0x08E0
    uint64_t unk_60E0; //0x60E0
    uint64_t unk_60E8; //0x60E8
    uint64_t unk_60F0; //0x60F0
    uint64_t unk_60F8; //0x60F8
    CNetGamePlayer m_net_players_2[32]; //0x6100
    uint64_t unk_B900; //0xB900
    uint64_t unk_B908; //0xB908
    uint64_t unk_B910; //0xB910
    uint64_t unk_B918; //0xB918
    uint64_t unk_B920; //0xB920
    uint64_t unk_B928; //0xB928
    uint64_t unk_B930; //0xB930
    uint32_t unk_B938; //0xB938
    char pad_B93C[3]; //0xB93C
    bool unk_B93F; //0xB93F
    uint32_t unk_B940; //0xB940
    uint32_t unk_B944; //0xB944
    uint16_t unk_B948; //0xB948
}; //Size: 0xB94A
static_assert(sizeof(CNetworkPlayerMgr) == 0xB94A);
#pragma pack(pop)
