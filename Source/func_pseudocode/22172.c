_CFArrayCreateMutable
CFMutableArrayRef __cdecl CFArrayCreateMutable(
        CFAllocatorRef allocator,
        CFIndex capacity,
        const CFArrayCallBacks *callBacks)
{
  return _CFArrayCreateMutable(allocator, capacity, callBacks);
}