#pragma once

class CHandlingObject
{
public:
    virtual ~CHandlingObject() = 0;
    virtual void* parser_GetStructure() = 0; //ret rage::parStructure
};