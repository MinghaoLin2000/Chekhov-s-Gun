_CFStringCreateWithBytes
CFStringRef __cdecl CFStringCreateWithBytes(
        CFAllocatorRef alloc,
        const UInt8 *bytes,
        CFIndex numBytes,
        CFStringEncoding encoding,
        Boolean isExternalRepresentation)
{
  return _CFStringCreateWithBytes(alloc, bytes, numBytes, encoding, isExternalRepresentation);
}