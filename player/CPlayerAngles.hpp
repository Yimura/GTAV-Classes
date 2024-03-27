#pragma once

#include "../rage/vector.hpp"
#include "CPlayerCameraData.hpp"

#pragma pack(push, 4)
class CPlayerAngles
{
private:
	char pad_0000[16]; //0x0000
public:
	CPlayerCameraData* m_cam_data; //0x0010
private:
	char pad_0018[24]; //0x0018
public:
	rage::fvector3 m_theta_angles; //0x0030
private:
	char pad_003C[4]; //0x003C
public:
	rage::fvector3 m_camera_rotation_first_person; //0x0040
private:
	char pad_004C[4]; //0x004C
public:
	rage::fvector3 m_omega_angles; //0x0050
private:
	char pad_005C[4]; //0x005C
public:
	rage::fvector3 m_location; //0x0060
private:
	char pad_006C[36]; //0x006C
public:
	float m_fov; //0x0090
private:
	char pad_0094[828]; //0x0094
public:
	rage::fvector3 m_camera_rotation; //0x03D0

	void set_camera(rage::fvector3 new_angles)
	{
		m_camera_rotation = new_angles;
	}
	void set_fps_camera(rage::fvector3 new_angles)
	{
		m_camera_rotation_first_person = new_angles;
	}
}; //Size: 0x03DC
#pragma pack(pop)
static_assert(sizeof(CPlayerAngles) == 0x3DC, "CPlayerAngles is not properly sized!");