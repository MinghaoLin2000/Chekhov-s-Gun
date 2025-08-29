_netfs_Mount
__int64 __fastcall netfs_Mount(
        _QWORD *a1,
        const __CFURL *a2,
        const __CFString *a3,
        const __CFDictionary *a4,
        _QWORD *a5)
{
  __int64 v10; // x25
  __int64 v12; // x0
  __int64 v13; // x23
  char *v14; // x0
  char *v15; // x24
  const __CFDictionary *v16; // x0
  const __CFDictionary *v17; // x22
  const __CFBoolean *Value; // x0
  bool v19; // w28
  const __CFBoolean *v20; // x0
  int v21; // w0
  _BOOL4 v22; // w27
  bool v23; // w26
  const __CFBoolean *v24; // x0
  const __CFBoolean *v25; // x0
  _BOOL4 v26; // w25
  int v27; // w0
  const __CFNumber *v28; // x0
  int v29; // w8
  CFNumberRef v30; // x0
  CFNumberRef v31; // x25
  char *v32; // x1
  CFStringRef v33; // x24
  char v34; // w8
  CFStringRef v35; // x0
  const __CFString *v36; // x25
  const __CFString *v37; // x0
  const __CFString *v38; // x25
  char *v39; // x26
  __int64 v40; // x0
  char v41; // w8
  char *v42; // x26
  const __CFString *v43; // x0
  const __CFString *v44; // x25
  const __CFString *v45; // x0
  const __CFString *v46; // x27
  const __CFString *v47; // x25
  const char *v48; // x9
  Boolean isAbsolute; // [xsp+1Fh] [xbp-971h] BYREF
  char *v50; // [xsp+20h] [xbp-970h] BYREF
  _DWORD valuePtr[256]; // [xsp+2Ch] [xbp-964h] BYREF
  char cStr[1025]; // [xsp+42Fh] [xbp-561h] BYREF
  _BYTE v53[256]; // [xsp+830h] [xbp-160h] BYREF

  v10 = sub_100008A3C(*a1, a2);
  if ( !(_DWORD)v10 )
  {
    v12 = sub_100007BE8(*a1);
    if ( !v12 )
      return 45LL;
    v13 = v12;
    if ( a3 )
    {
      v14 = NetFSCFStringtoCString(a3);
    }
    else
    {
      v10 = sub_100006F6C(aVolumes, 511LL);
      if ( (_DWORD)v10 )
        return v10;
      v14 = strdup(aVolumes_0);
    }
    v15 = v14;
    if ( !v14 )
      return 12LL;
    if ( !realpath_DARWIN_EXTSN(v14, cStr) )
    {
      v10 = (unsigned int)*__error();
      free(v15);
      return v10;
    }
    free(v15);
    v16 = a4
        ? CFDictionaryCreateMutableCopy(kCFAllocatorDefault, 0LL, a4)
        : CFDictionaryCreateMutable(
            kCFAllocatorDefault,
            0LL,
            &kCFTypeDictionaryKeyCallBacks,
            &kCFTypeDictionaryValueCallBacks);
    v17 = v16;
    if ( !v16 )
      return 12LL;
    Value = (const __CFBoolean *)CFDictionaryGetValue(v16, CFSTR("MountAtMountDir"));
    if ( Value )
      v19 = CFBooleanGetValue(Value) != 0;
    else
      v19 = 0;
    v20 = (const __CFBoolean *)CFDictionaryGetValue(v17, CFSTR("AllowSubMounts"));
    if ( v20 )
    {
      v21 = CFBooleanGetValue(v20);
      v22 = v21 == 0;
      v23 = v21 != 0;
    }
    else
    {
      v22 = 0;
      v23 = 1;
    }
    if ( !CFDictionaryGetValue(v17, CFSTR("SoftMount")) )
      CFDictionarySetValue(v17, CFSTR("SoftMount"), kCFBooleanTrue);
    v24 = (const __CFBoolean *)CFDictionaryGetValue(v17, CFSTR("NoUserPreferences"));
    if ( !v24 || !CFBooleanGetValue(v24) )
    {
      v25 = (const __CFBoolean *)CFDictionaryGetValue(v17, CFSTR("OpenURLMount"));
      v26 = v25 && CFBooleanGetValue(v25) != 0;
      v27 = NetFSGetURLApprovalState(a2);
      if ( v27 != 1 && (v27 == 2 || v26) )
      {
        v28 = (const __CFNumber *)CFDictionaryGetValue(v17, CFSTR("MountFlags"));
        valuePtr[0] = 0;
        if ( v28 )
        {
          CFNumberGetValue(v28, kCFNumberSInt32Type, valuePtr);
          v29 = valuePtr[0];
        }
        else
        {
          v29 = 0;
        }
        valuePtr[0] = v29 | 0x400;
        v30 = CFNumberCreate(kCFAllocatorDefault, kCFNumberSInt32Type, valuePtr);
        if ( !v30 )
          goto LABEL_70;
        v31 = v30;
        CFDictionarySetValue(v17, CFSTR("MountFlags"), v30);
        CFRelease(v31);
      }
    }
    if ( v19 )
    {
      v32 = cStr;
      goto LABEL_40;
    }
    v50 = 0LL;
    isAbsolute = 0;
    v35 = CFURLCopyFileSystemPath(a2, kCFURLPOSIXPathStyle);
    if ( !v35 )
      goto LABEL_63;
    v36 = v35;
    if ( (unsigned int)sub_100009198(*a1, CFSTR("afp")) )
    {
      if ( v22 )
        goto LABEL_52;
    }
    else
    {
      if ( (unsigned int)sub_100009198(*a1, CFSTR("smb")) )
        v41 = v23;
      else
        v41 = 1;
      if ( (v41 & 1) == 0 )
      {
LABEL_52:
        CFRelease(v36);
        v37 = CFURLCopyStrictPath(a2, &isAbsolute);
        if ( !v37 )
          goto LABEL_63;
        v38 = v37;
        v39 = NetFSCFStringtoCString(v37);
        CFRelease(v38);
        if ( v39 )
        {
          v40 = sub_10000920C(v39, &v50);
          goto LABEL_61;
        }
        goto LABEL_70;
      }
    }
    v39 = NetFSCFStringtoCString(v36);
    CFRelease(v36);
    if ( v39 )
    {
      v40 = sub_1000092A0(v39, &v50);
LABEL_61:
      v10 = v40;
      free(v39);
      if ( (_DWORD)v10 )
      {
LABEL_75:
        CFRelease(v17);
        return v10;
      }
      v42 = v50;
      if ( v50 )
      {
LABEL_65:
        v45 = CFStringCreateWithCString(0LL, v42, 0x8000100u);
        if ( v45 )
        {
          v46 = v45;
          v47 = CFURLCreateStringByReplacingPercentEscapes(kCFAllocatorDefault, v45, CFSTR("/"));
          CFRelease(v46);
          if ( v47 )
          {
            free(v42);
            v42 = NetFSCFStringtoCString(v47);
            v50 = v42;
            CFRelease(v47);
          }
        }
        v10 = sub_10000934C(cStr, v42, v53, valuePtr);
        free(v42);
        if ( (_DWORD)v10 )
          goto LABEL_75;
        v32 = (char *)valuePtr;
LABEL_40:
        v33 = CFStringCreateWithCString(kCFAllocatorDefault, v32, 0x8000100u);
        if ( v33 )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD, const __CFURL *, CFStringRef, const __CFDictionary *, _QWORD *))(*(_QWORD *)v13 + 80LL))(
                  a1[1],
                  a2,
                  v33,
                  v17,
                  a5);
          CFRelease(v33);
          if ( (_DWORD)v10 != 17 && (_DWORD)v10 || *a5 )
          {
            if ( (_DWORD)v10 )
              v34 = v19;
            else
              v34 = 1;
            if ( (v34 & 1) == 0 )
              sub_1000095B4(valuePtr);
            goto LABEL_75;
          }
          v48 = "EEXIST";
          if ( !(_DWORD)v10 )
            v48 = "0";
          syslog_DARWIN_EXTSN(
            3,
            "Mount routine for plugin at %s returned %s but didn't return a mount info dictionary",
            *(const char **)(*a1 + 8LL),
            v48);
          goto LABEL_74;
        }
        goto LABEL_70;
      }
LABEL_63:
      v43 = CFURLCopyHostName(a2);
      if ( !v43 )
      {
LABEL_74:
        v10 = 22LL;
        goto LABEL_75;
      }
      v44 = v43;
      v42 = NetFSCFStringtoCString(v43);
      v50 = v42;
      CFRelease(v44);
      if ( !v42 )
        goto LABEL_70;
      goto LABEL_65;
    }
LABEL_70:
    v10 = 12LL;
    goto LABEL_75;
  }
  return v10;
}