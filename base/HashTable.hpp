#pragma once
#include <cstdint>

#pragma pack(push, 1)
class HashNode
{
public:
    int32_t m_hash; //0x0000
    uint16_t m_idx; //0x0004
    char pad_0006[2]; //0x0006
    HashNode* m_next; //0x0008
}; //Size: 0x0010
static_assert(sizeof(HashNode) == 0x10);

template<typename T>
class HashTable
{
public:
    T* m_data; //0x0000
    uint16_t m_size; //0x0008
    char pad_000A[14]; //0x000A
    uint64_t m_item_size; //0x0018
    char pad_0020[64]; //0x0020
    HashNode** m_lookup_table; //0x0060
    uint16_t m_lookup_key; //0x0068
}; //Size: 0x006A
// static_assert(sizeof(HashTable<void*>) == 0x6A); // compiler gives assert error without telling me what the problem is, the class is correct though.
#pragma pack(pop)
