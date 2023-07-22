#pragma once
#include <cstdint>
#include "rage/vector.hpp"
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push,4)
class CPlayerAmbientModelStreamingNode : CSyncDataNodeInfrequent
{
public:
	int m_allowed_ped_model_start_offset;           // 0xC0
	int m_allowed_vehicle_model_start_offset;       // 0xC4
	int m_vehicle_anim_streaming_target_entrypoint; // 0xC8
	int16_t m_vehicle_anim_streaming_target;        // 0xCC
};
static_assert(sizeof(CPlayerAmbientModelStreamingNode) == 0xD0);
#pragma pack(pop)
