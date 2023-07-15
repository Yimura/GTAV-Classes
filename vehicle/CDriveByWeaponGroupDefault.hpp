#include "../rage/atArray.hpp"
#include "script/types.hpp"

class CDriveByWeaponGroupDefault
{
public:
	Hash m_driveby_default_unarmed; //0x0000
private:
	char pad_0004[4]; //0x0004
public:
	rage::atArray<Hash> m_driveby_default_unarmed_weapon_group_names; //0x0008
	rage::atArray<Hash> m_driveby_default_unarmed_weapon_type_names; //0x0018
private:
	char pad_0028[8]; //0x0028
public:
	Hash m_driveby_default_one_handed; //0x0030
private:
	char pad_0034[4]; //0x0034
public:
	rage::atArray<Hash> m_driveby_default_one_handed_weapon_group_names; //0x0038
	rage::atArray<Hash> m_driveby_default_one_handed_weapon_type_names; //0x0048
private:
	char pad_0058[8]; //0x0058
public:
	Hash m_driveby_default_two_handed; //0x0060
private:
	char pad_0064[4]; //0x0064
public:
	rage::atArray<Hash> m_driveby_default_two_handed_weapon_group_names; //0x0068
	rage::atArray<Hash> m_driveby_default_two_handed_weapon_type_names; //0x0078
private:
	char pad_0088[8]; //0x0088
public:
	Hash m_driveby_heli_two_handed; //0x0090
private:
	char pad_0094[4]; //0x0094
public:
	rage::atArray<Hash> m_driveby_heli_two_handed_weapon_group_names; //0x0098
	rage::atArray<Hash> m_driveby_heli_two_handed_weapon_type_names; //0x00A8
private:
	char pad_00B8[56]; //0x00B8
public:
	Hash m_driveby_heli_rpg; //0x00F0
private:
	char pad_00F4[4]; //0x00F4
public:
	rage::atArray<Hash> m_driveby_heli_rpg_weapon_group_names; //0x00F8
	rage::atArray<Hash> m_driveby_heli_rpg_weapon_type_names; //0x0108
private:
	char pad_0118[8]; //0x0118
public:
	Hash m_driveby_default_rear_one_handed; //0x0120
private:
	char pad_0124[4]; //0x0124
public:
	rage::atArray<Hash> m_driveby_default_rear_one_handed_weapon_group_names; //0x0128
	rage::atArray<Hash> m_driveby_default_rear_one_handed_weapon_type_names; //0x0138
private:
	char pad_0148[8]; //0x0148
public:
	Hash m_driveby_bike_one_handed; //0x0150
private:
	char pad_0154[4]; //0x0154
public:
	rage::atArray<Hash> m_driveby_bike_one_handed_weapon_group_names; //0x0158
	rage::atArray<Hash> m_driveby_bike_one_handed_weapon_type_names; //0x0168
private:
	char pad_0178[56]; //0x0178
public:
	Hash m_driveby_bike_melee; //0x01B0
private:
	char pad_01B4[4]; //0x01B4
public:
	rage::atArray<Hash> m_driveby_bike_melee_weapon_group_names; //0x01B8
	rage::atArray<Hash> m_driveby_bike_melee_weapon_type_names; //0x01C8
private:
	char pad_01D8[56]; //0x01D8
public:
	Hash m_driveby_mounted_throw; //0x0210
private:
	char pad_0214[4]; //0x0214
public:
	rage::atArray<Hash> m_driveby_mounted_throw_weapon_group_names; //0x0218
	rage::atArray<Hash> m_driveby_mounted_throw_weapon_type_names; //0x0228
private:
	char pad_0238[8]; //0x0238
public:
	Hash m_driveby_throw; //0x0240
private:
	char pad_0244[4]; //0x0244
public:
	rage::atArray<Hash> m_driveby_throw_weapon_group_names; //0x0248
	rage::atArray<Hash> m_driveby_throw_weapon_type_names; //0x0258
private:
	char pad_0268[8]; //0x0268
public:
	Hash m_driveby_vehicle_weapon_group; //0x0270
private:
	char pad_0274[4]; //0x0274
public:
	rage::atArray<Hash> m_driveby_vehicle_weapon_group_weapon_group_names; //0x0278
	rage::atArray<Hash> m_driveby_vehicle_weapon_group_weapon_type_names; //0x0288
private:
	char pad_0298[8]; //0x0298
}; //Size: 0x02A0