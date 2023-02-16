#pragma once
#include <cstdint>

#include "../rage/joaat.hpp"

#pragma pack(push, 1)
namespace rage
{
    class datBitBuffer;
    class netLoggingInterface;
    class scrThread;
	class scriptIdBase {
	public:
		virtual ~scriptIdBase();
		virtual void assume_thread_identity(scrThread* thread);
		virtual bool is_valid();
		virtual uint32_t* get_hash(uint32_t* out);
		virtual uint32_t* get_hash2(uint32_t* out);
		virtual const char* get_name();
		virtual void deserialize(datBitBuffer* buffer);
		virtual void serialize(datBitBuffer* buffer);
		virtual uint32_t _0x40();
		virtual uint32_t _0x48();
		virtual void log_information(void* logger);
		virtual void copy_data(scriptIdBase* other);
		virtual bool operator==(scriptIdBase*);
		virtual bool _0x68(void*);
	}; //Size: 0x0008
	static_assert(sizeof(scriptIdBase) == 0x8);
}
#pragma pack(pop)