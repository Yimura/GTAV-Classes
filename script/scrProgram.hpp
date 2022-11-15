#pragma once
#include <cstdint>

#include "../base/pgBase.hpp"

#pragma pack(push, 1)
namespace rage
{
    class scrProgram : public pgBase
    {
    public:
        std::uint8_t** m_code_blocks;  // 0x10
        std::uint32_t m_hash;          // 0x18
        std::uint32_t m_code_size;     // 0x1C
        std::uint32_t m_arg_count;     // 0x20
        std::uint32_t m_local_count;   // 0x24
        std::uint32_t m_global_count;  // 0x28
        std::uint32_t m_native_count;  // 0x2C
        void *m_local_data;            // 0x30
        std::int64_t **m_global_data;  // 0x38
        void **m_native_entrypoints;   // 0x40
        std::uint32_t m_proc_count;    // 0x48
        char pad_004C[4];              // 0x4C
        const char** m_proc_names;     // 0x50
        std::uint32_t m_name_hash;     // 0x58
        std::uint32_t m_ref_count;     // 0x5C
        const char* m_name;            // 0x60
        const char** m_strings_data;   // 0x68
        std::uint32_t m_strings_count; // 0x70
        char m_breakpoints[0x0C];      // 0x74 This is an atMap, which we don't have the class for ATM.

        bool is_valid() const
        {
            return m_code_size != 0;
        }

        std::uint32_t get_num_code_pages() const
        {
            return (m_code_size + 0x3FFF) >> 14;
        }

        std::uint32_t get_code_page_size(std::uint32_t page) const
        {
            auto num = get_num_code_pages();
            if (page < num)
            {
                if (page == num - 1)
                    return m_code_size & 0x3FFF;
                return 0x4000;
            }

            return 0;
        }

        std::uint32_t get_full_code_size() const
        {
            auto numPages = get_num_code_pages();
            if (!numPages)
                return 0;
            if (numPages == 1)
                --numPages;

            return (numPages * 0x4000) + (m_code_size & 0x3FFF);
        }

        std::uint8_t* get_code_page(std::uint32_t page) const
        {
            return m_code_blocks[page];
        }

        std::uint8_t* get_code_address(std::uint32_t index) const
        {
            if (index < m_code_size)
                return &m_code_blocks[index >> 14][index & 0x3FFF];

            return nullptr;
        }

        const char* get_string(std::uint32_t index) const
        {
            if (index < m_strings_count)
                return &m_strings_data[index >> 14][index & 0x3FFF];

            return nullptr;
        }

        void** get_address_of_native_entrypoint(void* entrypoint)
        {
            for (std::uint32_t i = 0; i < m_native_count; ++i)
            {
                if (m_native_entrypoints[i] == entrypoint)
                {
                    return m_native_entrypoints + i;
                }
            }

            return nullptr;
        }
    };
    static_assert(sizeof(scrProgram) == 0x80);
}
#pragma pack(pop)