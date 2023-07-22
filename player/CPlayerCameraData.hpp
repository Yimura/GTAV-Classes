#pragma once

class CPlayerCameraData
{
public:
	char m_unk_0x0[0x30];
	float m_fov;
	char m_unk_0x34[0x24];
	uint32_t m_zoom_state;
};
static_assert(sizeof(CPlayerCameraData) == 0x5C);
