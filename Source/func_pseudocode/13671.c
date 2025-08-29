_CFDictionaryCreateMutable
CFMutableDictionaryRef __cdecl CFDictionaryCreateMutable(
        CFAllocatorRef allocator,
        CFIndex capacity,
        const CFDictionaryKeyCallBacks *keyCallBacks,
        const CFDictionaryValueCallBacks *valueCallBacks)
{
  return _CFDictionaryCreateMutable(allocator, capacity, keyCallBacks, valueCallBacks);
}