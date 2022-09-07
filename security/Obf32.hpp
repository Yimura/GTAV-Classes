#pragma once
#include <cstdint>

#pragma pack(push, 1)
class Obf32
{
	std::uint32_t a;
	std::uint32_t b;
	std::uint32_t c;
	std::uint32_t d;

public:
	inline void operator=(std::uint32_t val)
	{
		a = val & d;
		b = val & ~d;
	}

	inline operator std::uint32_t()
	{
		return (a & d) | (b & ~d);
	}
};
static_assert(sizeof(Obf32) == 0x10);
#pragma pack(pop)