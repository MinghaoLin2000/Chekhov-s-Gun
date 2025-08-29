_getpwuid_r
int __cdecl getpwuid_r(uid_t a1, passwd *a2, char *a3, size_t a4, passwd **a5)
{
  return _getpwuid_r(a1, a2, a3, a4, a5);
}