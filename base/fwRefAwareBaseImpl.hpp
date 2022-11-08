#pragma once

namespace rage
{

    template <typename T>
    class fwRefAwareBaseImpl : public T
    {
    private:
        void *m_ref; // 0x08
    };

}