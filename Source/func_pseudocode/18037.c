_GetURLRemountInfo
__int64 __fastcall GetURLRemountInfo(const char *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char *v8; // x0
  char *v9; // x19
  __int64 v10; // x23
  __int64 v11; // x0
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x23
  CFStringRef v16; // x0
  CFStringRef v17; // x24
  const __CFString *Value; // x0
  char *v19; // x23
  size_t v20; // x0
  size_t v22; // x0
  CFDictionaryRef theDict; // [xsp+8h] [xbp-8C8h] BYREF
  _BYTE v24[72]; // [xsp+10h] [xbp-8C0h] BYREF
  __int64 v25; // [xsp+58h] [xbp-878h] BYREF
  __int64 v26; // [xsp+468h] [xbp-468h] BYREF

  bzero(v24, 0x878uLL);
  v8 = realpath_DARWIN_EXTSN(a1, 0LL);
  if ( v8 )
  {
    v9 = v8;
    theDict = 0LL;
    if ( (unsigned int)sub_10000786C(v8, v24) )
    {
      v10 = (unsigned int)*__error();
LABEL_20:
      free(v9);
      return v10;
    }
    v11 = sub_100007958(&v25, &v26);
    if ( v11 )
    {
      v12 = v11;
      v13 = sub_1000079B8();
      if ( v13 )
      {
        v10 = (*(__int64 (__fastcall **)(char *, unsigned __int64, __int64, __int64))(*(_QWORD *)v13 + 40LL))(
                v9,
                a2,
                a3,
                a4);
        goto LABEL_20;
      }
      v14 = sub_100007BE8(v12);
      if ( v14 )
      {
        v15 = v14;
        v16 = CFStringCreateWithCString(kCFAllocatorDefault, v9, 0x8000100u);
        if ( !v16 )
        {
LABEL_16:
          v10 = 12LL;
          goto LABEL_20;
        }
        v17 = v16;
        v10 = (*(__int64 (__fastcall **)(CFStringRef, CFDictionaryRef *))(*(_QWORD *)v15 + 104LL))(v16, &theDict);
        CFRelease(v17);
        if ( (_DWORD)v10 )
          goto LABEL_20;
        if ( !theDict )
        {
          v10 = 22LL;
          goto LABEL_20;
        }
        Value = (const __CFString *)CFDictionaryGetValue(theDict, CFSTR("MountedURL"));
        if ( Value )
        {
          v19 = NetFSCFStringtoCString(Value);
          CFRelease(theDict);
          if ( v19 )
          {
            v20 = strlen(v19);
            if ( v20 + 13 <= a2 )
            {
              *(_WORD *)a3 = v20 + 13;
              *(_DWORD *)(a3 + 2) = *(_DWORD *)(v12 + 128);
              *(_WORD *)(a3 + 6) = 0;
              *(_DWORD *)(a3 + 8) = 1;
              v22 = strlen(v19);
              memcpy((void *)(a3 + 12), v19, v22 + 1);
              free(v19);
              v10 = 0LL;
            }
            else
            {
              free(v19);
              v10 = 84LL;
            }
            goto LABEL_20;
          }
          goto LABEL_16;
        }
        CFRelease(theDict);
      }
    }
    v10 = 45LL;
    goto LABEL_20;
  }
  return 22LL;
}