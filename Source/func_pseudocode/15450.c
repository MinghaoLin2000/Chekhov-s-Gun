_IORegistryEntryCreateIterator
kern_return_t __cdecl IORegistryEntryCreateIterator(
        io_registry_entry_t entry,
        const io_name_t plane,
        IOOptionBits options,
        io_iterator_t *iterator)
{
  return _IORegistryEntryCreateIterator(entry, plane, options, iterator);
}