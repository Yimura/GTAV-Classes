#pragma once
#include <cstddef>
#include "../base/atRTTI.hpp"

namespace rage
{
	class sysMemAllocator : public atRTTI<sysMemAllocator> {
	public:
		virtual ~sysMemAllocator() = 0;
		virtual void SetQuitOnFail(bool) = 0;
		virtual void* Allocate(size_t size, size_t align, int subAllocator) = 0;
		virtual void* TryAllocate(size_t size, size_t align, int subAllocator) = 0;
		virtual void Free(void* pointer) = 0;
		virtual void TryFree(void* pointer) = 0;
		virtual void Resize(void* pointer, size_t size) = 0;
		virtual sysMemAllocator* GetAllocator(int allocator) const = 0;
		virtual sysMemAllocator* GetAllocator(int allocator) = 0;
		virtual sysMemAllocator* GetPointerOwner(void* pointer) = 0;
		virtual size_t GetSize(void* pointer) const = 0;
		virtual size_t GetMemoryUsed(int memoryBucket) = 0;
		virtual size_t GetMemoryAvailable() = 0;
	public:
		static sysMemAllocator* UpdateAllocatorValue() {
			tlsContext* tls{ tlsContext::get() };
			sysMemAllocator* allocator{ *reinterpret_cast<sysMemAllocator**>(uintptr_t(tls) + offsetof(tlsContext, m_allocator)) };
			if (!allocator)
				tls->m_allocator = allocator;
			tls->m_tls_entry = allocator;
			return gtaTlsEntry;
		}
		static sysMemAllocator* get() {
			sysMemAllocator* allocValue{ tlsContext::get()->m_allocator };
			if (!allocValue)
				allocValue = UpdateAllocatorValue();
			return allocValue;
		}
	};
}