_CFURLCreateFromFileSystemRepresentation
CFURLRef __cdecl CFURLCreateFromFileSystemRepresentation(
        CFAllocatorRef allocator,
        const UInt8 *buffer,
        CFIndex bufLen,
        Boolean isDirectory)
{
  return _CFURLCreateFromFileSystemRepresentation(allocator, buffer, bufLen, isDirectory);
}