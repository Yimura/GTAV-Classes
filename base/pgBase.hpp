#pragma once

namespace rage
{

    class pgBase
    {
    public:
        virtual ~pgBase() = default;
        virtual int return_zero() = 0;
        virtual void error() = 0;

        void *unk_0000; // 0x0000
    }; //Size: 0x0008
    static_assert(sizeof(pgBase) == 0x10);

    class pgBaseMetaDataType
    {
    public:
        virtual ~pgBaseMetaDataType() = default;
        virtual void Lookup(uint32_t hash) = 0;
    }; //Size: 0x0008

    class pgBaseMetaDataDebugNameType : public pgBaseMetaDataType
    {
    public:
        virtual ~pgBaseMetaDataDebugNameType() = default;
        char pad_0000[64];
    }; //Size: 0x0072

    class pgBaseRefCounted : public pgBase
    {
    public:
        virtual ~pgBaseRefCounted() = default;
    }; //Size: 0x0008
}