#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"
#include "netsync/nodes/vehicle/CVehicleControlDataNode.hpp"

#pragma pack(push, 8)
class CHeliControlDataNode : CVehicleControlDataNode
{
public:
	char m_pad[0x10];                   // 0x130
	float m_yaw_control;                // 0x140
	float m_pitch_control;              // 0x144
	float m_roll_control;               // 0x148
	float m_throttle_control;           // 0x14C
	bool m_engine_off;                  // 0x150
	int m_landing_gear_state;           // 0x154
	bool m_has_landing_gear;            // 0x158
	bool m_has_vehicle_task;            // 0x159
	bool m_is_thruster_model;           // 0x15A
	float m_thruster_side_rcs_throttle; // 0x15C
	float m_thruster_throttle;          // 0x160
	bool m_unk8;                        // 0x164
};
static_assert(sizeof(CHeliControlDataNode) == 0x168);
#pragma pack(pop)