#pragma once

#include <cstdint>
#include "../rage/netSyncTree.hpp"

class CObject;
namespace rage
{
    class netObject
    {
    public:
        int16_t m_object_type; //0x0008
        int16_t m_object_id; //0x000A
        char pad_000C[61]; //0x000C
        int8_t m_owner_id; //0x0049
        int8_t m_control_id; //0x004A
        int8_t m_next_owner_id; //0x004B
        bool m_is_remote; //0x004C
        bool m_wants_to_delete; //0x004D
        char pad_004E[1]; //0x004E
        bool m_should_not_be_delete; //0x004F

        virtual ~netObject() = 0;
        virtual void mov1() = 0;
        virtual void mov2() = 0;
        virtual void m_8() = 0;
        virtual void m_10() = 0;
        virtual void m_18() = 0;
        virtual void* m_20() = 0;
        virtual void m_28() = 0;
        virtual netSyncTree* GetSyncTree() = 0;
        virtual void m_38() = 0;
        virtual void m_40() = 0;
        virtual void m_48() = 0;
        virtual void m_50() = 0;
        virtual void m_58() = 0;
        virtual void m_60() = 0;
        virtual void m_68() = 0;
        virtual void m_70() = 0;
        virtual void m_78() = 0;
        virtual CObject* GetGameObject() = 0;
        virtual void m_88() = 0;
        virtual void m_90() = 0;
        virtual void m_98() = 0;
        virtual int GetObjectFlags() = 0;
        virtual void m_A8() = 0;
        virtual void m_B0() = 0;
        virtual void m_B8() = 0;
        virtual void m_C0() = 0;
        virtual void m_C8() = 0;
        virtual int GetSyncFrequency() = 0;
        virtual void m_D8() = 0;
        virtual void m_E0() = 0;
        virtual void m_E8() = 0;
        virtual void m_F0() = 0;
        virtual void m_F8() = 0;
        virtual void Update() = 0;
        virtual bool m_108_1604() = 0; // added in 1604
        virtual void m_108() = 0;
        virtual void m_110() = 0;
        virtual void m_118() = 0;
        virtual void m_120() = 0;
        virtual void m_128() = 0;
        virtual void m_130() = 0;
        virtual void m_138() = 0;
        virtual void m_140() = 0;
        virtual void m_148() = 0;
        virtual void m_150() = 0;
        virtual bool m_158(void* player, int type, int* outReason) = 0;
        virtual void m_160() = 0;
        virtual bool m_168(int* outReason) = 0;
        virtual void m_170() = 0;
        virtual void m_178() = 0;
        virtual void m_180() = 0;
        virtual void m_188() = 0;
        virtual void m_190() = 0;
        virtual void m_198() = 0;
        virtual void m_1A0() = 0;
        virtual void m_1A8() = 0;
        virtual void m_1B0() = 0;
        virtual void m_1B8() = 0;
        virtual void m_1C0() = 0;
        virtual void m_1C8() = 0;
        virtual void m_1D0() = 0;
        virtual void m_1D8() = 0;
        virtual void m_1E0() = 0;
        virtual void m_1E8() = 0;
        virtual void m_1F0() = 0;
        virtual void m_1F8() = 0;
        virtual void m_200() = 0;
        virtual void m_208() = 0;
        virtual void m_210() = 0;
        virtual void m_218() = 0;
        virtual void m_220() = 0;
        virtual void m_228() = 0;
        virtual void m_230() = 0;
        virtual void m_238() = 0;
        virtual void m_240() = 0;
        virtual void m_248() = 0;
        virtual void m_250() = 0;
        virtual void m_258() = 0;
        virtual void m_260() = 0;
        virtual void m_268() = 0;
        virtual void m_270() = 0;
        virtual void m_278() = 0;
        virtual void m_280() = 0;
        virtual void m_288() = 0;
        virtual void m_290() = 0;
        virtual void m_298() = 0;
        virtual void m_2A0() = 0;
        virtual void m_2A8() = 0;
        virtual void m_2B0() = 0;
        virtual void m_2B8() = 0;
        virtual void m_2C0() = 0;
        virtual void m_2C8() = 0;
        virtual void m_2D0() = 0;
        virtual void m_2D8() = 0;
        virtual void m_2E0() = 0;
        virtual void m_2E8() = 0;
        virtual void m_2F0() = 0;
        virtual void m_2F8() = 0;
        virtual void m_300() = 0;
        virtual void m_308() = 0;
        virtual void m_310() = 0;
        virtual void m_318() = 0;
        virtual void m_320() = 0;
        virtual void UpdatePendingVisibilityChanges() = 0;
    }; //Size: 0x0050
    static_assert(sizeof(netObject) == 0x50);
}
