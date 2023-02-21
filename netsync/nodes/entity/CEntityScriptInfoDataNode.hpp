#pragma once
#include "netsync/CProjectBaseSyncDataNode.hpp"
#include "script/CGameScriptObjInfo.hpp"

#pragma pack(push, 4)
struct CEntityScriptInfoDataNode : CSyncDataNodeInfrequent
{
public:
	alignas(8) bool m_has_script_info;
	CGameScriptObjInfo m_script_info;
};
static_assert(sizeof(CEntityScriptInfoDataNode) == 0x118);
#pragma pack(pop)