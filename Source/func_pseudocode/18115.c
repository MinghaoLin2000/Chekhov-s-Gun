_CFDictionaryCreate
CFDictionaryRef __cdecl CFDictionaryCreate(
        CFAllocatorRef allocator,
        const void **keys,
        const void **values,
        CFIndex numValues,
        const CFDictionaryKeyCallBacks *keyCallBacks,
        const CFDictionaryValueCallBacks *valueCallBacks)
{
  return _CFDictionaryCreate(allocator, keys, values, numValues, keyCallBacks, valueCallBacks);
}