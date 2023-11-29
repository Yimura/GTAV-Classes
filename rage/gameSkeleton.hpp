#pragma once

#include <cstdint>
#include "atArray.hpp"

namespace rage
{

#pragma pack(push, 8)

struct skeleton_data
{
    uint64_t m_init_func;     //0x0
    uint64_t m_shutdown_func; //0x8
    uint32_t m_unk1;     // 0x10
    uint32_t m_unk2;     // 0x14
    uint32_t m_unk3;     // 0x18
    uint32_t m_unk4;     // 0x1C
    uint32_t m_hash;     // 0x20
};
static_assert(sizeof(skeleton_data) == 0x28);

struct game_skeleton_update_base
{
    virtual ~game_skeleton_update_base() = default;
    virtual void run() = 0;
    uint64_t m_pad; // 0x08
    uint32_t m_hash; // 0x10
    game_skeleton_update_base* m_next; // 0x18	
};
static_assert(sizeof(game_skeleton_update_base) == 0x20);

struct game_skeleton_update_group : game_skeleton_update_base
{
    game_skeleton_update_base* m_head; // 0x20
};
static_assert(sizeof(game_skeleton_update_group) == 0x28);

struct game_skeleton_update_element : game_skeleton_update_base
{
    void(*m_function)(); // 0x20
};
static_assert(sizeof(game_skeleton_update_element) == 0x28);

struct game_skeleton_update_mode
{
    int m_type;                           // 0x00
    game_skeleton_update_base* m_head; // 0x08
    game_skeleton_update_mode* m_next;    // 0x10
};
static_assert(sizeof(game_skeleton_update_mode) == 0x18);

struct game_skeleton_init_dependency
{
    int m_level; // 0x00
    atArray<uint32_t> m_data; // 0x08
    game_skeleton_init_dependency* m_next;    // 0x10
};

struct game_skeleton_mode
{
    int m_type;                           // 0x00
    game_skeleton_init_dependency* m_head; // 0x08
    game_skeleton_mode* m_next;    // 0x10
};
static_assert(sizeof(game_skeleton_mode) == 0x18);

struct game_skeleton
{
    virtual ~game_skeleton() = 0;
    uint32_t m_unk1; //0x08
    uint32_t m_unk2; //0x0C
    uint32_t m_unk3; // 0x10
    uint32_t m_unk4; // 0x14
    atArray<skeleton_data> m_sys_data; // 0x18
    uint32_t m_unk5; // 0x28
    void* m_unk6[32]; // 0x30
    game_skeleton_mode* m_init_modes; // 0x130
    game_skeleton_mode* m_shutdown_modes; // 0x138
    game_skeleton_update_mode* m_update_modes; // 0x140
};
static_assert(sizeof(game_skeleton) == 0x148);

#pragma pack(pop)
}