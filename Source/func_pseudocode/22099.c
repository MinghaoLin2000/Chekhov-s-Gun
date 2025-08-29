_CFPropertyListCreateData
CFDataRef __cdecl CFPropertyListCreateData(
        CFAllocatorRef allocator,
        CFPropertyListRef propertyList,
        CFPropertyListFormat format,
        CFOptionFlags options,
        CFErrorRef *error)
{
  return _CFPropertyListCreateData(allocator, propertyList, format, options, error);
}