#pragma once
#include <cstdint>
#include <initializer_list>
#include <ostream>
#include <vector>

#include "script/tlsContext.hpp"

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

#if _WIN32
        atArray(const atArray& right)
        {
            m_count = right.m_count;
            m_size = right.m_size;

            if (right.m_data == nullptr)
            {
                m_data = nullptr;
                return;
            }

            m_data = (T*)tlsContext::get()->m_allocator->Allocate(m_size * sizeof(T), 16, 0);
            std::uninitialized_copy(right.m_data, right.m_data + right.m_count, m_data);
        }

        atArray(void* data_ptr, std::uint16_t size, std::uint16_t count) :
            m_data(data_ptr),
            m_size(size),
            m_count(count)
        {

        }

        void clear()
        {
            m_count = 0;
            m_size = 0;

            if (m_data)
            {
                tlsContext::get()->m_allocator->Free(m_data);

                m_data = nullptr;
            }
        }

        bool append(atArray<T> value_array)
        {
            auto value_array_size = value_array.size();
            auto old_capacity = m_count;

            if ((value_array_size + m_count) > std::numeric_limits<uint16_t>::max())
                return false;

            auto size = (uint16_t)value_array_size;
            expand(m_count + size);
            m_size += size;

            auto i = old_capacity;
            for (auto iter_value : value_array)
            {
                m_data[i] = iter_value;
                i++;
            }
            return true;
        }

        bool append(std::vector<T> value_array)
        {
            auto value_array_size = value_array.size();
            auto old_capacity = m_count;

            if ((value_array_size + m_count) > std::numeric_limits<uint16_t>::max())
                return false;

            auto size = (uint16_t)value_array_size;
            expand(m_count + size);
            m_size += size;

            auto i = old_capacity;
            for (auto iter_value : value_array)
            {
                m_data[i] = iter_value;
                i++;
            }
            return true;
        }

        bool append(const std::initializer_list<T> value_array)
        {
            auto value_array_size = value_array.size();
            auto old_capacity = m_count;

            if ((value_array_size + m_count) > std::numeric_limits<uint16_t>::max())
                return false;

            auto size = (uint16_t)value_array_size;
            expand(m_count + size);
            m_size += size;

            auto i = old_capacity;
            for (const T* it = value_array.begin(); it != value_array.end(); ++it)
            {
                m_data[i] = *it;
                i++;
            }
            return true;
        }

        void set(uint16_t offset, const T& value)
        {
            if (offset >= m_count)
            {
                expand(offset + 1);
            }

            if (offset >= m_size)
            {
                m_size = offset + 1;
            }

            m_data[offset] = value;
        }

        void expand(uint16_t newSize)
        {
            if (m_count >= newSize)
            {
                return;
            }

            T* newOffset = (T*)tlsContext::get()->m_allocator->Allocate(newSize * sizeof(T), 16, 0);


            // initialize the new entries
            std::uninitialized_fill(newOffset, newOffset + newSize, T());

            // copy the existing entries
            if (m_data)
            {
                std::copy(m_data, m_data + m_size, newOffset);
                tlsContext::get()->m_allocator->Free(m_data);
            }

            m_data = newOffset;
            m_count = newSize;
        }

        void append(T value)
        {
            set(m_count, value);
        }
#endif

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

        bool contains(T comparator)
        {
            for (auto iter_value : this)
            {
                if (iter_value == comparator)
                {
                    return true;
                }
            }
            return false;
        }

        friend std::ostream& operator<<(std::ostream& o, const atArray<T>& j)
        {
            o << "Array Size: " << j.size() << std::endl;
            for (int i = 0; i < j.size(); i++)
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
