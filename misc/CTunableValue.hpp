#pragma once

#include <cstdint>

template <typename T>
class AutoTunable
{
public:
    AutoTunable() : m_value(T()) {}

    T UpdateValue() 
    {
        return m_value;
    }

private:
    T m_value;
};

struct sTunableValue
{
    const char* m_name; // 0x0004
    int m_intValue; // 0x0008
    uint32_t m_uintValue; // 0x000C
    bool m_boolValue; // 0x0010
    float m_floatValue; // 0x0014
    uint64_t m_uint64Value; // 0x0018
};

struct sTunable 
{
    sTunableValue* m_values; // 0x0008
};

struct sTunableTypeValue
{
    union 
    {
        int8_t m_charValue;
        int32_t m_intValue;
        float m_floatValue;
        bool m_boolValue;
	    int16_t m_shortValue;
		uint64_t m_Uns64Value;
    } m_value;

      enum ValueType 
      {
        CHAR,
        INT,
        FLOAT,
        BOOL,
		SHORT,
		UINT64
    } m_type;

    sTunableTypeValue(int8_t charValue) : m_type(CHAR) {
        m_value.m_charValue = charValue;
    }

    sTunableTypeValue(int32_t intValue) : m_type(INT) {
        m_value.m_intValue = intValue;
    }

    sTunableTypeValue(float floatValue) : m_type(FLOAT) {
        m_value.m_floatValue = floatValue;
    }

    sTunableTypeValue(bool boolValue) : m_type(BOOL) {
        m_value.m_boolValue = boolValue;
    }
	
	 sTunableTypeValue(int16_t shortValue) : m_type(SHORT) {
        m_value.m_shortValue = shortValue;
    }
	
	sTunableTypeValue(uint64_t Uns64Value) : m_type(UINT64) {
        m_value.m_Uns64Value = Uns64Value;
    }
};