#pragma once
#include <cstdint>

#include "../base/pgBase.hpp"

#pragma pack(push, 1)
namespace rage
{
    class scrProgram : public pgBase
    {
    public:
        uint8_t** m_code_blocks; //0x0010
        uint32_t m_hash; //0x0018
        uint32_t m_code_size; //0x001C
        uint32_t m_arg_count; //0x0020
        uint32_t m_local_count; //0x0024
        uint32_t m_global_count; //0x0028
        uint32_t m_native_count; //0x002C
        void* m_local_data; //0x0030
        int64_t** m_global_data; //0x0038
        void** m_native_entrypoints; //0x0040
        uint32_t m_proc_count; //0x0048
        uint32_t unk_004C; //0x004C
        const char** m_proc_names; //0x0050
        uint32_t m_name_hash; //0x0058
        uint32_t m_ref_count; //0x005C
        const char* m_name; //0x0060
        const char** m_strings_data; //0x0068
        uint32_t m_strings_count; //0x0070
        char m_breakpoints[12]; //0x0074 - rage::atMap<uint8_t> - We don't currently have this class, so a char array will work

        bool is_valid() const
        {
            return m_code_size != 0;
        }

        uint32_t get_num_code_pages() const
        {
            return (m_code_size + 0x3FFF) >> 14;
        }

        uint32_t get_code_page_size(uint32_t page) const
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

        uint32_t get_full_code_size() const
        {
            auto numPages = get_num_code_pages();
            if (!numPages)
                return 0;
            if (numPages == 1)
                --numPages;

            return (numPages * 0x4000) + (m_code_size & 0x3FFF);
        }

        uint8_t* get_code_page(uint32_t page) const
        {
            return m_code_blocks[page];
        }

        uint8_t* get_code_address(uint32_t index) const
        {
            if (index < m_code_size)
                return &m_code_blocks[index >> 14][index & 0x3FFF];

            return nullptr;
        }

        const char* get_string(uint32_t index) const
        {
            if (index < m_strings_count)
                return &m_strings_data[index >> 14][index & 0x3FFF];

            return nullptr;
        }

        void** get_address_of_native_entrypoint(void* entrypoint)
        {
            for (uint32_t i{}; i != m_native_count; ++i)
            {
                if (m_native_entrypoints[i] == entrypoint)
                {
                    return m_native_entrypoints + i;
                }
            }

            return nullptr;
        }
    }; //Size: 0x0080
    static_assert(sizeof(scrProgram) == 0x80);
}
#pragma pack(pop)