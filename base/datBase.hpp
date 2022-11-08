#pragma once

namespace rage
{

    class datBase
    {
    public:
        virtual ~datBase() = default;
    }; //Size: 0x0008
    static_assert(sizeof(datBase) == 0x8);

}