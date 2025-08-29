_NetFSCFStringtoCString
char *__cdecl NetFSCFStringtoCString(CFStringRef a1)
{
  CFIndex Length; // x0
  CFIndex v3; // x21
  void *v4; // x20

  Length = CFStringGetLength(a1);
  v3 = CFStringGetMaximumSizeForEncoding(Length, 0x8000100u) + 1;
  v4 = malloc_type_malloc(v3, 0x995BB0ABuLL);
  if ( v4 && !CFStringGetCString(a1, (char *)v4, v3, 0x8000100u) )
  {
    free(v4);
    return 0LL;
  }
  return (char *)v4;
}