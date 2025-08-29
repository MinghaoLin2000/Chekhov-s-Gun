_GetCompleteMountURL
__int64 __fastcall GetCompleteMountURL(const char *a1, CFIndex a2, char *a3)
{
  char *v5; // x0
  char *v6; // x19
  const __CFString *v7; // x0
  const __CFString *v8; // x20
  __int64 v9; // x23
  const __CFString *Value; // x0
  CFDictionaryRef theDict; // [xsp+8h] [xbp-38h] BYREF

  theDict = 0LL;
  v5 = realpath_DARWIN_EXTSN(a1, 0LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = CFStringCreateWithCString(kCFAllocatorDefault, v5, 0x8000100u);
    v8 = v7;
    if ( v7 )
    {
      v9 = NetFSGetMountInfo(v7, (__int64)&theDict);
      if ( !(_DWORD)v9 )
      {
        if ( !theDict )
        {
          v9 = 22LL;
LABEL_14:
          CFRelease(v8);
LABEL_15:
          free(v6);
          return v9;
        }
        Value = (const __CFString *)CFDictionaryGetValue(theDict, CFSTR("MountedURL"));
        if ( Value )
        {
          if ( CFStringGetCString(Value, a3, a2, 0x8000100u) )
            v9 = 0LL;
          else
            v9 = 22LL;
        }
        else
        {
          v9 = 45LL;
        }
      }
    }
    else
    {
      v9 = 12LL;
    }
    if ( theDict )
      CFRelease(theDict);
    if ( !v8 )
      goto LABEL_15;
    goto LABEL_14;
  }
  return 22LL;
}