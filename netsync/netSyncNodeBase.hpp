#pragma once

#include <cstdint>

namespace rage
{
	class datBitBuffer;

#pragma pack(push, 8)
	class netSyncNodeBase
	{
	public:
		virtual ~netSyncNodeBase() = default;                                                                                                            // 0x00
		virtual bool IsDataNode() { return false; };                                                                                                     // 0x08
		virtual bool IsParentNode() { return false; };                                                                                                   // 0x10
		virtual void MoveCommonDataOpsVFT() {};                                                                                                          // 0x18
		virtual void ClearChildren() {};                                                                                                                 // 0x20
		virtual void _0x28(void*, void*, void*, int* out_count) {};                                                                                      // 0x28
		virtual bool Serialize(int flags, int flags2, void*, rage::datBitBuffer* buffer, int, void*, bool, int*, int* num_serialized) { return false; }  // 0x30
		virtual bool Deserialize(int flags, int flags2, rage::datBitBuffer* buffer, void*) { return false; }                                             // 0x38
		virtual int CalculateSize(int flags, int flags2, void*) { return 0; }                                                                            // 0x40
		virtual int CalculateSize2(int flags, int flags2, bool) { return 0; }                                                                            // 0x48

		netSyncNodeBase* m_next_sibling; //0x0008
		netSyncNodeBase* m_prev_sibling; //0x0010
		netSyncNodeBase* m_root; //0x0018
		netSyncNodeBase* m_parent; //0x0020

		uint32_t m_flags1; //0x0028
		uint32_t m_flags2; //0x002C
		uint32_t m_flags3; //0x0030

		uint32_t m_pad2; //0x0034

		netSyncNodeBase* m_first_child; //0x0038
	}; //Size: 0x0040
	static_assert(sizeof(netSyncNodeBase) == 0x40);
#pragma pack(pop)
}