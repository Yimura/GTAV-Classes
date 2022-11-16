#pragma once
#include "CHandlingObject.hpp"
#include "../enums/eHandlingType.hpp"

class CBaseSubHandlingData : public CHandlingObject
{
public:
    virtual eHandlingType GetHandlingType() = 0;
    virtual void OnPostLoad() = 0;
    
};