#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 1)
class CPlayerExtendedGameStateNode : CSyncDataNodeInfrequent
{
public:
    float waypoint_x;       //0x00C0
    float waypoint_y;       //0x00C4
    bool unk1;              //0x00C5
    bool unk2;              //0x00C6
    bool unk3;              //0x00C7
    bool unk4;              //0x00C8
    bool unk5;              //0x00C9
    bool has_waypoint_data; //0x00CA
    bool is_waypoint_set;   //0x00CB
};
#pragma pack(pop)
