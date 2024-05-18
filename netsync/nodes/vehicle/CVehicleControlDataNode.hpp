#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CVehicleControlDataNode : CSyncDataNodeFrequent
{
public:
	uint32_t m_num_wheels;
	uint32_t dwordC4;
	uint32_t m_brake_control;
	uint32_t dwordCC;
	uint32_t m_road_node_address;
	bool m_kers_active;
	bool m_bringing_vehicle_to_halt;
	float m_halt_distance;
	bool m_control_vertical_velocity;
	bool m_has_suspension_data;
	bool byteDE;
	float m_suspension_heights[10];
	bool byte108;
	bool byte109;
	bool byte10A;
	bool byte10B;
	bool byte10C;
	bool byte10D;
	bool byte10E;
	float float110;
	uint32_t dword114;
	char byte118;
	bool m_is_submarine_car;
	char gap11A[2];
	float m_rudder_rotation_x;
	float m_rudder_rotation_y;
	float m_rudder_rotation_z;
	char byte128;
	char byte129;
	char pad[5];
};
static_assert(sizeof(CVehicleControlDataNode) == 0x130);
#pragma pack(pop)
