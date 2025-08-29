_setxattr
int __cdecl setxattr(
        const char *path,
        const char *name,
        const void *value,
        size_t size,
        u_int32_t position,
        int options)
{
  return _setxattr(path, name, value, size, position, options);
}