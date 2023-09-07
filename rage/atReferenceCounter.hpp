#pragma once

#include "../base/datBase.hpp"

namespace rage
{
    class atReferenceCounter : public datBase
    {
    public:
        atReferenceCounter() : m_ref_count(0) {}
        
        void AddReference() {
            m_ref_count++;
        }

        void ReleaseReference() {
            m_ref_count--;
            if(m_ref_count == 0) {
                delete this;
            }
        }

        int GetReferenceCount() const {
            return m_ref_count; 
        }

    private:
        int m_ref_count;  // 0x0000
    };
}