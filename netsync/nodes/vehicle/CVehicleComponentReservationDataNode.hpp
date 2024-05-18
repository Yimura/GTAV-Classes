#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CVehicleComponentReservationDataNode : CSyncDataNodeInfrequent
{
public:
	bool m_has_component_reservations;   //0x00C0
	uint32_t m_num_peds_using_component; //0x00C4
	uint16_t m_peds_using_component[32]; //0x00C8
}; //Size: 0x00C8
#pragma pack(pop)

static_assert(sizeof(CVehicleComponentReservationDataNode) == 0x108);
