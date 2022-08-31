#pragma once

namespace rage
{
    template<typename T>
    union vector2
    {
        T data[2];
        struct { T x, y; };
    };
    
    template<typename T>
    union vector3
    {
        T data[3];
        struct { T x, y, z; };
    };

    template<typename T>
    union vector4
    {
        T data[4];
        struct { T x, y, z, w; };
    };

    typedef vector2<float> fvector2;
    typedef vector3<float> fvector3;
    typedef vector4<float> fvector4;
}
