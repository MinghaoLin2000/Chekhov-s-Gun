_MountServerURL
__int64 __fastcall MountServerURL(const char *a1, const char *a2, size_t a3, char *a4, __int64 a5)
{
  size_t v10; // x0
  CFURLRef v11; // x0
  CFURLRef v12; // x22
  CFStringRef v13; // x0
  CFStringRef v14; // x23
  __int64 v15; // x21
  const __CFArray *v16; // x21
  const __CFString *ValueAtIndex; // x0
  char *v18; // x22
  CFArrayRef theArray; // [xsp+8h] [xbp-38h] BYREF

  v10 = strlen(a1);
  v11 = CFURLCreateWithBytes(kCFAllocatorDefault, (const UInt8 *)a1, v10, 0x8000100u, 0LL);
  if ( !v11 )
    return 12LL;
  v12 = v11;
  theArray = 0LL;
  if ( a2 )
  {
    v13 = CFStringCreateWithCString(kCFAllocatorDefault, a2, 0x8000100u);
    if ( v13 )
    {
      v14 = v13;
      v15 = netfs_MountURLWithAuthenticationSync(v12, 0LL, 0LL, v13, a5, &theArray);
      CFRelease(v14);
      goto LABEL_6;
    }
    CFRelease(v12);
    return 12LL;
  }
  v15 = netfs_MountURLWithAuthenticationSync(v11, 0LL, 0LL, 0LL, a5, &theArray);
LABEL_6:
  CFRelease(v12);
  if ( !(_DWORD)v15 )
  {
    v16 = theArray;
    if ( CFArrayGetCount(theArray) < 1 )
    {
      if ( a3 )
        *a4 = 0;
    }
    else
    {
      ValueAtIndex = (const __CFString *)CFArrayGetValueAtIndex(v16, 0LL);
      v18 = NetFSCFStringtoCString(ValueAtIndex);
      strncpy(a4, v18, a3);
      a4[a3 - 1] = 0;
      free(v18);
    }
    CFRelease(v16);
    return 0LL;
  }
  return v15;
}