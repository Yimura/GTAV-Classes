#pragma once

class CAdvancedData
{
public:
    virtual ~CAdvancedData() = 0;

    int m_slot;
    int m_index;
    float m_value;
};