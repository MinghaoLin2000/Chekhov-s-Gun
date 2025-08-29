_CFURLGetFileSystemRepresentation
Boolean __cdecl CFURLGetFileSystemRepresentation(
        CFURLRef url,
        Boolean resolveAgainstBase,
        UInt8 *buffer,
        CFIndex maxBufLen)
{
  return _CFURLGetFileSystemRepresentation(url, resolveAgainstBase, buffer, maxBufLen);
}