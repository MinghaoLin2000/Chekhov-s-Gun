_listxattr
ssize_t __cdecl listxattr(const char *path, char *namebuff, size_t size, int options)
{
  return _listxattr(path, namebuff, size, options);
}