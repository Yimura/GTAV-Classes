#pragma once

namespace rage
{
    template<typename T>
    class atSingleton
    {
    public:
        static T& getInstance() {
            static T m_instance;
            return m_instance;
        }

        atSingleton(const atSingleton&) = delete;
        atSingleton& operator=(const atSingleton&) = delete;
    private:
        atSingleton() = default;
        ~atSingleton() = default;
    };
}
