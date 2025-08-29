_CFStringCreateWithCStringNoCopy
CFStringRef __cdecl CFStringCreateWithCStringNoCopy(
        CFAllocatorRef alloc,
        const char *cStr,
        CFStringEncoding encoding,
        CFAllocatorRef contentsDeallocator)
{
  return _CFStringCreateWithCStringNoCopy(alloc, cStr, encoding, contentsDeallocator);
}