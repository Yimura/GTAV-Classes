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

    template<typename T>
    union matrix34
    {
        T data[3][4];
        struct { struct {T x, y, z, w; } rows[3];};
    };

    template<typename T>
    union matrix44
    {
        T data[4][4];
        struct { struct {T x, y, z, w; } rows[4];};
    };

    typedef vector2<float> fvector2;
    typedef vector3<float> fvector3;
    typedef vector4<float> fvector4;
    typedef matrix34<float> fmatrix34;
    typedef matrix44<float> fmatrix44;
}
