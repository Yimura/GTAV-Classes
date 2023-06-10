#pragma once
#include <cstdint>
#include <wtypes.h>

namespace rage
{
	union scrValue
  {
		s32 Int;
		u32 Uns;
		float Float;
		LPCSTR String;
		scrValue* Reference;
		u64 Any;
		bool operator==(const scrValue& val) {
			return Int == val.Int;
		}
	};
}
