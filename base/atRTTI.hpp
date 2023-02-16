#pragma once
#define DEFINE_RAGE_RTTI(T) \
	virtual T* GetIdentifier() { return nullptr; }; \
	virtual T* GetIdentifier_2() { return nullptr; }; \
	virtual uint32_t GetTypeHash() { return NULL; }; \
	virtual T* GetIfIsOfType(T* vft) { return vft; }; \
	virtual void IsOfType(T* vft) {}; \
	virtual void IsOfTypeObject(T* object) {};

namespace rage {
	template <typename T>
	class atRTTI {
	public:
		DEFINE_AT_RTTI(T)
	}; //Size: 0x0008
	static_assert(sizeof(atRTTI<void*>) == 0x8);
}