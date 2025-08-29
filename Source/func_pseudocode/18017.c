_MountURLWithAuthentication
__int64 __fastcall MountURLWithAuthentication(
        char *__s,
        const char *a2,
        size_t a3,
        char *a4,
        int a5,
        const char *a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // x23
  size_t v17; // x0
  CFURLRef v18; // x0
  CFURLRef v19; // x21
  CFStringRef v20; // x0
  CFStringRef v21; // x25
  const __CFArray *v22; // x21
  const __CFString *ValueAtIndex; // x0
  char *v24; // x22
  CFArrayRef theArray; // [xsp+8h] [xbp-48h] BYREF

  if ( a7 )
    return 45LL;
  if ( a8 && strlen(a8) != a9 )
    return 22LL;
  v17 = strlen(__s);
  v18 = CFURLCreateWithBytes(kCFAllocatorDefault, (const UInt8 *)__s, v17, 0x8000100u, 0LL);
  if ( !v18 )
    return 12LL;
  v19 = v18;
  if ( a2 )
  {
    a2 = (const char *)CFStringCreateWithCString(kCFAllocatorDefault, a2, 0x8000100u);
    if ( !a2 )
    {
LABEL_26:
      CFRelease(v19);
      return 12LL;
    }
  }
  if ( a6 )
  {
    a6 = (const char *)CFStringCreateWithCString(kCFAllocatorDefault, a6, 0x8000100u);
    if ( !a6 )
    {
LABEL_24:
      if ( a2 )
        CFRelease(a2);
      goto LABEL_26;
    }
  }
  theArray = 0LL;
  if ( !a8 )
  {
    v10 = netfs_MountURLWithAuthenticationSync(v19, a6, 0LL, a2, a10, &theArray);
    goto LABEL_15;
  }
  v20 = CFStringCreateWithCString(kCFAllocatorDefault, a8, 0x8000100u);
  if ( !v20 )
  {
    if ( a6 )
      CFRelease(a6);
    goto LABEL_24;
  }
  v21 = v20;
  v10 = netfs_MountURLWithAuthenticationSync(v19, a6, v20, a2, a10, &theArray);
  CFRelease(v21);
LABEL_15:
  if ( a6 )
    CFRelease(a6);
  if ( a2 )
    CFRelease(a2);
  CFRelease(v19);
  if ( !(_DWORD)v10 )
  {
    v22 = theArray;
    if ( CFArrayGetCount(theArray) < 1 )
    {
      if ( a3 )
        *a4 = 0;
    }
    else
    {
      ValueAtIndex = (const __CFString *)CFArrayGetValueAtIndex(v22, 0LL);
      v24 = NetFSCFStringtoCString(ValueAtIndex);
      strncpy(a4, v24, a3);
      a4[a3 - 1] = 0;
      free(v24);
    }
    CFRelease(v22);
    return 0LL;
  }
  return v10;
}