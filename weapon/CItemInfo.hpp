#pragma once

#include <cstdint>

class parStructure;

// https://github.com/Parik27/V.Rainbomizer/blob/0c70868626411a1d30483339003b9985b0ff1c98/lib/CItemInfo.hh
class CItemInfo
{
public:
	char pad_0000[8]; //0x0000
	uint32_t m_name;  //0x0010
	uint32_t m_model; //0x0014
	uint32_t m_audio; //0x0018
	uint32_t m_slot;  //0x001C

private:
	virtual void destructor();
	virtual bool GetIsClassId(uint32_t hash);

	// virtual uint32_t* GetClassId(); (older versions)
	virtual uint32_t* _GetClassId(uint32_t* out);

	// Not present in older versions of GTA V
	virtual uint32_t* GetBaseClassId(uint32_t& out);

	// as a result, these functions are shifted by 1 function in the vftable.
	virtual uint32_t GetModel();

	virtual parStructure* parser_GetStructure();

public:
	uint32_t GetClassId()
	{
		return static_cast<uint32_t>(uintptr_t(_GetClassId(nullptr)));
	}
};
static_assert(sizeof(CItemInfo) == 0x20);
