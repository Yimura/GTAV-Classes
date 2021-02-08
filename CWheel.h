class WheelArray
{
public:
	class CWheel* m_wheel1; //0x0000
	class CWheel* m_wheel2; //0x0008
	class CWheel* m_wheel3; //0x0010
	class CWheel* m_wheel4; //0x0018
	char pad_0020[88]; //0x0020
}; //Size: 0x0078
static_assert(sizeof(WheelArray) == 0x78);

class CWheel
{
public:
	char pad_0000[8]; //0x0000
	float m_camber; //0x0008
	float m_camber_inverted; //0x000C
	char pad_0010[552]; //0x0010
}; //Size: 0x0238
static_assert(sizeof(CWheel) == 0x238);