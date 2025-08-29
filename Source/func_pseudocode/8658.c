_getxattr
ssize_t __cdecl getxattr(const char *path, const char *name, void *value, size_t size, u_int32_t position, int options)
{
  return _getxattr(path, name, value, size, position, options);
}