_removexattr
int __cdecl removexattr(const char *path, const char *name, int options)
{
  return _removexattr(path, name, options);
}