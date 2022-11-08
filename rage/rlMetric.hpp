#pragma once
#include "joaat.hpp"

namespace rage
{
    class rlMetric
    {
    public:
        virtual ~rlMetric() = default;

        virtual int _0x08() { return 0; }; // returns a constant integer

        virtual int _0x10() { return 0; }; // returns a constant integer

        virtual const char* get_name() { return ""; };

        virtual bool serialize(void* serializer) { return false; };

        virtual int get_size() { return 0; };

        virtual joaat_t get_name_hash() { return 0; };
    };
};