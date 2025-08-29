_IORegistryEntrySetCFProperty
kern_return_t __cdecl IORegistryEntrySetCFProperty(
        io_registry_entry_t entry,
        CFStringRef propertyName,
        CFTypeRef property)
{
  return _IORegistryEntrySetCFProperty(entry, propertyName, property);
}