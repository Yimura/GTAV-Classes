class CAmmoInfo
{
public:
	char pad_0000[40]; //0x0000
	uint32_t m_max_ammo; //0x0028
}; //Size: 0x002C
static_assert(sizeof(CAmmoInfo) == 0x2C);