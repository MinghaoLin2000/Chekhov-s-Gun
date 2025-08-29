_CFDataCreate
CFDataRef __cdecl CFDataCreate(CFAllocatorRef allocator, const UInt8 *bytes, CFIndex length)
{
  return _CFDataCreate(allocator, bytes, length);
}