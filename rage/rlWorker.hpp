#pragma once

namespace rage
{
    class rlWorker
    {
    public:
        virtual ~rlWorker() = default;
        virtual bool is_performing() { return false; }
        virtual bool is_running() { return false; }
        virtual void wakeup() = 0;
        virtual void process(void* ptr) = 0;
        virtual bool start(const char* name, unsigned int size, int affinity, bool quickStart) { return false; }
    };
}