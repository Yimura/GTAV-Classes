#pragma once

#include "../network/netPlayer.hpp"
#include "scriptHandler.hpp"
#include "scrThread.hpp"

#pragma pack(push, 1)
namespace rage
{
    class netLoggingInterface;
	class scriptHandlerMgr {
	public:
		virtual ~scriptHandlerMgr();
		virtual bool initialize();
		virtual void _0x10();
		virtual void shutdown();
		virtual void _0x20();
		virtual void _0x28();
		virtual void _0x30();
		virtual void _0x38(scrThread*);
		virtual scriptHandler* create_script_handler();
		virtual scriptHandler* get_script_handler(scriptId* id);
		virtual void attach_thread(scrThread* thread);
		virtual void detach_thread(scrThread* thread);
		virtual void on_player_join(netPlayer* player);
		virtual void on_player_left(netPlayer* player);
		virtual int32_t _0x70();
		virtual void* _0x78();
	public:
		char pad_0008[40]; //0x0008
		bool m_initialized; //0x0030
		bool m_initialized_2; //0x0031
		char pad_0032[14]; //0x0032
		class netLoggingInterface* m_logger; //0x0040
	}; //Size: 0x0048
	static_assert(sizeof(scriptHandlerMgr) == 0x48);
}
#pragma pack(pop)