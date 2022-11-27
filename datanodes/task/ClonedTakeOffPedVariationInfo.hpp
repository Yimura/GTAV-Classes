#pragma once
#include <cstdint>

#pragma pack(push, 1)
class ClonedTakeOffPedVariationInfo
{
public:
	char pad_0000[112]; //0x0000
	uint32_t m_parachute_override_model_hash; //0x0070
	char pad_0074[20]; //0x0074
}; //Size: 0x0088
static_assert(sizeof(ClonedTakeOffPedVariationInfo) == 0x88);
#pragma pack(pop)
