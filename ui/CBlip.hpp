#pragma once
#include "rage/vector.hpp"

namespace rage
{
#pragma pack(push, 1)
	class CBlip
	{
	public:
		int32_t m_id; //0x0000
		int16_t m_blip_array_index; //0x0004
		int16_t m_some_reference_number_one; //0x0006
		int8_t m_some_reference_number_two; //0x0008
		char pad_0009[1]; //0x0009
		bool m_has_other_values; //0x000A
		char pad_000B[1]; //0x000B
		int32_t m_entity_pool_index; //0x000C
		rage::fvector3 m_position; //0x0010
		char pad_001C[4]; //0x001C
		uint32_t m_display_bits; //0x0020
		uint32_t m_trigger_bits; //0x0024
		char* m_message; //0x0028
		char pad_0030[16]; //0x0030
		int32_t m_icon; //0x0040
		uint16_t m_flash_interval; //0x0044
		uint16_t m_flash_duration; //0x0046
		uint32_t m_color; //0x0048
		uint32_t m_secondary_color; //0x004C
		rage::fvector2 m_scale; //0x0050
		float m_rotation; //0x0058
		char pad_005C[5]; //0x005C
		uint8_t m_priority; //0x0061
		char pad_0062[1]; //0x0062
		uint8_t m_alpha; //0x0063
		uint8_t m_category; //0x0064
		int8_t m_number_to_show; //0x0065
	}; //Size: 0x0066
#pragma pack(pop)
	static_assert(sizeof(CBlip) == 0x66, "CBlip is not sized properly.");
}