#pragma once

#include "../rage/vector.hpp"
#include "phArchetype.hpp"

#pragma pack(push, 1)
class CNavigation
{
public:
    char pad_0000[16]; //0x0000
    class rage::phArchetypeDamp* m_damp; //0x0010
    char pad_0018[8]; //0x0018
    rage::fmatrix44 m_transformation_matrix;

    rage::fvector3* get_position()
    {
        return reinterpret_cast<rage::fvector3*>(&m_transformation_matrix.rows[3]);
    }

    void model_to_world(const rage::fvector3& model_coords, rage::fvector3& world_coords)
    {
        world_coords.x = model_coords.x * m_transformation_matrix.data[0][0] + model_coords.y * m_transformation_matrix.data[1][0] + model_coords.z * m_transformation_matrix.data[2][0] + m_transformation_matrix.data[3][0];
        world_coords.y = model_coords.x * m_transformation_matrix.data[0][1] + model_coords.y * m_transformation_matrix.data[1][1] + model_coords.z * m_transformation_matrix.data[2][1] + m_transformation_matrix.data[3][1];
        world_coords.z = model_coords.x * m_transformation_matrix.data[0][2] + model_coords.y * m_transformation_matrix.data[1][2] + model_coords.z * m_transformation_matrix.data[2][2] + m_transformation_matrix.data[3][2];
    }
}; //Size: 0x0060
static_assert(sizeof(CNavigation) == 0x60);
#pragma pack(pop)
