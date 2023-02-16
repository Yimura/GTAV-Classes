#pragma once
#include <cstdint>

#include "dataList.hpp"
#include "scriptHandlerNetComponent.hpp"
#include "scriptId.hpp"
#include "scriptResource.hpp"
#include "scrThread.hpp"

#pragma pack(push, 1)
namespace rage
{
    class scriptHandlerObject;
	class scriptHandler {
	public:
		class atDScriptObjectNode : public atDNode<scriptHandlerObject*> {};
	public:
		virtual ~scriptHandler();
		virtual bool _0x08();
		virtual void _0x10();
		virtual void cleanup_objects();
		virtual scriptId* _0x20();
		virtual scriptId* get_id();
		virtual bool is_networked();
		virtual void init_net_component();
		virtual void reset_net_component();
		virtual bool destroy();
		virtual void add_object(scriptHandlerObject*, bool is_network, bool is_network_and_scriptcheck);
		virtual void _0x58(void*);
		virtual void register_resource(scriptResource*, void*);
		virtual void _0x68();
		virtual void _0x70();
		virtual void _0x78();
		virtual void _0x80();
		virtual void _0x88();
		virtual void _0x90();
		virtual void _0x98();
	public:
		void* unk_0008; //0x0008
		void* unk_0010; //0x0010
		scrThread* m_script_thread; //0x0018
		atDList<atDScriptObjectNode> m_objects; //0x0020
		scriptResource* m_resource_list_head; //0x0030
		scriptResource* m_resource_list_tail; //0x0038
		void* unk_0040; //0x0040
		scriptHandlerNetComponent* m_net_component; //0x0048
		uint32_t unk_0050; //0x0050
		uint32_t unk_0054; //0x0054
		uint32_t unk_0058; //0x0058
		uint32_t unk_005C; //0x005C
	}; //Size: 0x0060
	static_assert(sizeof(scriptHandler) == 0x60);
}
#pragma pack(pop)