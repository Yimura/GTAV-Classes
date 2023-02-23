#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CPlayerCameraDataNode : CSyncDataNodeFrequent
{
public:
	float m_free_cam_pos_x; //0x00C0
	float m_free_cam_pos_y; //0x00C4
	float m_free_cam_pos_z; //0x00C8
	char pad_00CC[4]; //0x00CC
	float m_lock_on_target_offset_x; //0x00D0
	float m_lock_on_target_offset_y; //0x00D4
	char pad_00D8[40]; //0x00D8
	float m_camera_x; //0x0100
	float m_camera_z; //0x0104
	int16_t m_free_aim_locked_on_target; //0x0108
	bool m_free_cam; //0x010A
	char pad_010B[2]; //0x010B
	bool m_has_position_offset; //0x010D
	char pad_010E[1]; //0x010E
	bool m_is_long_range_target; //0x010F
	char pad_0110[48]; //0x0110
}; //Size: 0x0140
static_assert(sizeof(CPlayerCameraDataNode) == 0x140);
#pragma pack(pop)