#pragma once
#include <cstdint>
#include "rage/vector.hpp"
#include "netsync/CProjectBaseSyncDataNode.hpp"
#include "ped/CPed.hpp"

#pragma pack(push, 8)
class CGroup;
class CGroupMember
{
public:
	int16_t m_net_id;
	CPed* m_ped; // this isn't serialized
};
static_assert(sizeof(CGroupMember) == 0x10);

class CPlayerPedGroupDataNode : CSyncDataNodeInfrequent
{
public:
	char m_unused[0x10];		   // 0xC0
	CGroup* m_group;			   // 0xD0 (not serialized)
	CGroupMember m_members[7];	   // 0xD8
	CGroupMember m_leader;         // 0x148
	char m_unused2[8];             // 0x158
	float m_max_separation;        // 0x160
	char m_unused3[0xC];           // 0x164
	int m_pop_type;                // 0x170
	bool m_needs_group_event_scan; // 0x175
	char m_unused4[6];             // 0x176
	int m_formation_type;          // 0x17C
	float m_formation_distance;    // 0x180
	char m_unused5[0xC];           // 0x184
};
static_assert(sizeof(CPlayerPedGroupDataNode) == 0x190);
#pragma pack(pop)
