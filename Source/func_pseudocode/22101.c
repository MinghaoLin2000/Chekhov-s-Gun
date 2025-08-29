_CFStringCreateExternalRepresentation
CFDataRef __cdecl CFStringCreateExternalRepresentation(
        CFAllocatorRef alloc,
        CFStringRef theString,
        CFStringEncoding encoding,
        UInt8 lossByte)
{
  return _CFStringCreateExternalRepresentation(alloc, theString, encoding, lossByte);
}