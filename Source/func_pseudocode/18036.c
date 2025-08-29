_GetURLRemountInfoSize
__int64 __fastcall GetURLRemountInfoSize(const char *a1, _QWORD *a2, __int64 a3)
{
  char *v6; // x0
  char *v7; // x19
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x21
  CFStringRef v14; // x0
  CFStringRef v15; // x22
  const __CFString *Value; // x0
  char *v17; // x21
  CFDictionaryRef theDict; // [xsp+8h] [xbp-8B8h] BYREF
  _BYTE v20[72]; // [xsp+10h] [xbp-8B0h] BYREF
  __int64 v21; // [xsp+58h] [xbp-868h] BYREF
  __int64 v22; // [xsp+468h] [xbp-458h] BYREF

  bzero(v20, 0x878uLL);
  v6 = realpath_DARWIN_EXTSN(a1, 0LL);
  if ( v6 )
  {
    v7 = v6;
    theDict = 0LL;
    if ( (unsigned int)sub_10000786C(v6, v20) )
    {
      v8 = (unsigned int)*__error();
LABEL_19:
      free(v7);
      return v8;
    }
    v9 = sub_100007958(&v21, &v22);
    if ( v9 )
    {
      v10 = v9;
      v11 = sub_1000079B8();
      if ( v11 )
      {
        v8 = (*(__int64 (__fastcall **)(char *, _QWORD *, __int64))(*(_QWORD *)v11 + 32LL))(v7, a2, a3);
        goto LABEL_19;
      }
      v12 = sub_100007BE8(v10);
      if ( v12 )
      {
        v13 = v12;
        v14 = CFStringCreateWithCString(kCFAllocatorDefault, v7, 0x8000100u);
        if ( !v14 )
          goto LABEL_15;
        v15 = v14;
        v8 = (*(__int64 (__fastcall **)(CFStringRef, CFDictionaryRef *))(*(_QWORD *)v13 + 104LL))(v14, &theDict);
        CFRelease(v15);
        if ( (_DWORD)v8 )
          goto LABEL_19;
        if ( !theDict )
        {
          v8 = 22LL;
          goto LABEL_19;
        }
        Value = (const __CFString *)CFDictionaryGetValue(theDict, CFSTR("MountedURL"));
        if ( Value )
        {
          v17 = NetFSCFStringtoCString(Value);
          CFRelease(theDict);
          if ( v17 )
          {
            *a2 = strlen(v17) + 13;
            free(v17);
            v8 = 0LL;
            goto LABEL_19;
          }
LABEL_15:
          v8 = 12LL;
          goto LABEL_19;
        }
        CFRelease(theDict);
      }
    }
    v8 = 45LL;
    goto LABEL_19;
  }
  return 22LL;
}