#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 1)
class CPlayerExtendedGameStateNode : CSyncDataNodeInfrequent
{
public:
    float waypoint_x;         //0x00C0
    float waypoint_y;         //0x00C4
    uint16_t waypoint_entity; //0x00C5
    bool has_active_waypoint; //0x00C6
    bool owns_waypoint;       //0x00C7
};
#pragma pack(pop)
