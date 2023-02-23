#pragma once
#include "netsync/CProjectBaseSyncDataNode.hpp"
#include "script/CGameScriptObjInfo.hpp"

#pragma pack(push, 4)
struct CEntityScriptInfoDataNode : CSyncDataNodeInfrequent
{
public:
	bool m_has_script_info;
	int m_pad;
	CGameScriptObjInfo m_script_info;
};
static_assert(sizeof(CEntityScriptInfoDataNode) == 0x118);
#pragma pack(pop)