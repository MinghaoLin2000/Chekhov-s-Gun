_CFDataCreateWithBytesNoCopy
CFDataRef __cdecl CFDataCreateWithBytesNoCopy(
        CFAllocatorRef allocator,
        const UInt8 *bytes,
        CFIndex length,
        CFAllocatorRef bytesDeallocator)
{
  return _CFDataCreateWithBytesNoCopy(allocator, bytes, length, bytesDeallocator);
}