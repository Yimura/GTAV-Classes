#pragma once
#include "scriptId.hpp"
#include "types.hpp"

#pragma pack(push, 4)
class CGameScriptObjInfo
{
public:
	virtual ~CGameScriptObjInfo() = default;

	ScrHandle m_local_handle;  // 0x8
	uint16_t m_network_handle; // 0xC
	CGameScriptId m_script_id; // 0x10
};
static_assert(sizeof(CGameScriptObjInfo) == 0x50);
#pragma pack(pop)