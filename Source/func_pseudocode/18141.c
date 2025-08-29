_CFURLCreateWithBytes
CFURLRef __cdecl CFURLCreateWithBytes(
        CFAllocatorRef allocator,
        const UInt8 *URLBytes,
        CFIndex length,
        CFStringEncoding encoding,
        CFURLRef baseURL)
{
  return _CFURLCreateWithBytes(allocator, URLBytes, length, encoding, baseURL);
}