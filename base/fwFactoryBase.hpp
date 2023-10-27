#pragma once

#include <cstdint>

namespace rage
{
    template<typename T>
    class fwFactoryBase
    {
        virtual ~fwFactoryBase() = default;
        virtual T* Create(uint32_t hash) = 0;
        virtual void GetCreateHash(uint32_t hash, uint32_t num) = 0;
        virtual void Remove(uint32_t hash) = 0;
        virtual void Destroy(T* factory) = 0;
        virtual void _0x0005(uint32_t hash) = 0;
    };
}