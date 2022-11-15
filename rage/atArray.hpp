#pragma once
#include <cstdint>
#include <initializer_list>
#include <ostream>
#include <vector>

#include "sysMemAllocator.hpp"



namespace rage
{
#pragma pack(push, 8)
    template <typename T>
    class atArray
    {
    public:
        atArray() :
            m_data(nullptr),
            m_size(0),
            m_count(0)
        {
            
        }

        atArray(void* data_ptr, std::uint16_t size, std::uint16_t count) :
            m_data(data_ptr),
            m_size(size),
            m_count(count)
        {

        }

        T* begin() const
        {
            return &m_data[0];
        }

        T* end() const
        {
            return &m_data[m_size];
        }

        T* data() const
        {
            return m_data;
        }

        std::uint16_t size() const
        {
            return m_size;
        }

        std::uint16_t count() const
        {
            return m_count;
        }

        T& operator[](std::uint16_t index) const
        {
            return m_data[index];
        }

        friend std::ostream& operator<<(std::ostream& o, const atArray<T>& j)
        {
            o << "Array Size: " << j.size() << std::endl;
            for(int i = 0; i < j.size(); i++)
            {
                T item = j[i];
                if (std::is_pointer<T>())
                    o << "\tArray Pointer: " << std::hex << std::uppercase << item << std::nouppercase << std::dec << " Item: [" << std::hex << std::uppercase << (*(T*)item) << std::nouppercase << std::dec << "]";
                else
                    o << "\tArray Item: " << item;
                if (i != j.size() - 1)
                    o << std::endl;
            }
            return o;
        }

    private:
        T* m_data;
        std::uint16_t m_size;
        std::uint16_t m_count;
    };
    static_assert(sizeof(rage::atArray<std::uint32_t>) == 0x10, "rage::atArray is not properly sized");
#pragma pack(pop)
}