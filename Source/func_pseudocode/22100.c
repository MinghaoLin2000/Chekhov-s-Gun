_CFPropertyListCreateWithData
CFPropertyListRef __cdecl CFPropertyListCreateWithData(
        CFAllocatorRef allocator,
        CFDataRef data,
        CFOptionFlags options,
        CFPropertyListFormat *format,
        CFErrorRef *error)
{
  return _CFPropertyListCreateWithData(allocator, data, options, format, error);
}