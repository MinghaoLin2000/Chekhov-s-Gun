_IORegistryEntryCreateCFProperties
kern_return_t __cdecl IORegistryEntryCreateCFProperties(
        io_registry_entry_t entry,
        CFMutableDictionaryRef *properties,
        CFAllocatorRef allocator,
        IOOptionBits options)
{
  return _IORegistryEntryCreateCFProperties(entry, properties, allocator, options);
}