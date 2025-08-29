_CFArrayCreate
CFArrayRef __cdecl CFArrayCreate(
        CFAllocatorRef allocator,
        const void **values,
        CFIndex numValues,
        const CFArrayCallBacks *callBacks)
{
  return _CFArrayCreate(allocator, values, numValues, callBacks);
}