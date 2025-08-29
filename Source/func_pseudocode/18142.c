_CFURLCreateWithFileSystemPath
CFURLRef __cdecl CFURLCreateWithFileSystemPath(
        CFAllocatorRef allocator,
        CFStringRef filePath,
        CFURLPathStyle pathStyle,
        Boolean isDirectory)
{
  return _CFURLCreateWithFileSystemPath(allocator, filePath, pathStyle, isDirectory);
}