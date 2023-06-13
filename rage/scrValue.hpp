#pragma once
#include <cstdint>
using LPCSTR = const char*; //For Linux support, but I didn't want to make the class inaccurate

namespace rage
{
	union scrValue
	{
		int Int;
		unsigned int Uns;
		float Float;
		LPCSTR String;
		scrValue* Reference;
		uint64_t Any;
		bool operator==(const scrValue& val) {
			return Int == val.Int;
		}
	};
}
