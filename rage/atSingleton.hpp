#pragma once

namespace rage
{
    template <typename T>
    struct atSingleton
    {
    private:
        T* m_basePtr{};

    public:
        bool isValid() const
        {
            return m_basePtr != nullptr;
        }

        T* getInstance()
        {
            return m_basePtr;
        }
    };
}
