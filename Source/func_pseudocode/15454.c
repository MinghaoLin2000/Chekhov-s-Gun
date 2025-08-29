_IOServiceGetMatchingServices
kern_return_t __cdecl IOServiceGetMatchingServices(
        mach_port_t mainPort,
        CFDictionaryRef matching,
        io_iterator_t *existing)
{
  return _IOServiceGetMatchingServices(mainPort, matching, existing);
}