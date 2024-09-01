#pragma once
#include <cstdint>

#pragma pack(push, 8)
class InputMethodEditor
{
public:
	uint32_t m_count; //0x0000
	uint32_t m_selected_index; //0x0004
	char16_t m_composition_string[31]; //0x0008
	char16_t m_candidate_list[9][31]; //0x0046
	bool m_active; //0x0274
	char pad_0275[3]; //0x0275
}; //Size: 0x0278
static_assert(sizeof(InputMethodEditor) == 0x278);
#pragma pack(pop)