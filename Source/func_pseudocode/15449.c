_IORegistryEntryCreateCFProperty
CFTypeRef __cdecl IORegistryEntryCreateCFProperty(
        io_registry_entry_t entry,
        CFStringRef key,
        CFAllocatorRef allocator,
        IOOptionBits options)
{
  return _IORegistryEntryCreateCFProperty(entry, key, allocator, options);
}