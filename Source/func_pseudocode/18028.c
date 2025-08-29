_NetFSMountHomeDirectoryWithAuthentication
__int64 __fastcall NetFSMountHomeDirectoryWithAuthentication(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        size_t a5,
        char *a6,
        const char *a7,
        const char *a8,
        char a9,
        int *a10)
{
  uid_t v17; // w26
  char *v18; // x0
  size_t v19; // x22
  void *v20; // x19
  int v21; // w0
  __int64 v22; // x27
  int v23; // w0
  int *v25; // x28
  unsigned int v26; // w0
  char *v27; // x0
  int v28; // w0
  int v29; // w0
  int v30; // w0
  int v31; // w27
  int v32; // w0
  int v33; // w0
  int v34; // w27
  int v35; // w0
  __int64 v36; // x0
  int v37; // w11
  int v38; // w22
  uid_t st_uid; // w27
  int v40; // w0
  group *v41; // x0
  gid_t v42; // w2
  size_t v43; // x0
  CFURLRef v44; // x0
  CFURLRef v45; // x22
  CFURLRef v46; // x23
  __CFDictionary *Mutable; // x0
  __CFDictionary *v48; // x22
  CFNumberRef v49; // x27
  CFMutableDictionaryRef v50; // x0
  __CFDictionary *v51; // x28
  int v52; // w0
  int v53; // w0
  int v54; // w8
  CFURLRef v55; // x0
  const __CFArray *v56; // x22
  const __CFString *ValueAtIndex; // x0
  char *v58; // x23
  const char *v59; // [xsp+30h] [xbp-DF0h]
  int v60; // [xsp+3Ch] [xbp-DE4h]
  const __CFURL *v61; // [xsp+48h] [xbp-DD8h]
  int v62; // [xsp+50h] [xbp-DD0h]
  CFStringRef v63; // [xsp+68h] [xbp-DB8h]
  CFStringRef v64; // [xsp+70h] [xbp-DB0h]
  CFStringRef cf; // [xsp+78h] [xbp-DA8h]
  CFStringRef v66; // [xsp+80h] [xbp-DA0h]
  CFArrayRef theArray; // [xsp+90h] [xbp-D90h] BYREF
  int valuePtr; // [xsp+9Ch] [xbp-D84h] BYREF
  stat v70; // [xsp+A0h] [xbp-D80h] BYREF
  __int16 v71; // [xsp+13Ah] [xbp-CE6h] BYREF
  int __errnum; // [xsp+13Ch] [xbp-CE4h] BYREF
  statfs v73; // [xsp+140h] [xbp-CE0h] BYREF
  char __src[1025]; // [xsp+9BFh] [xbp-461h] BYREF

  v71 = 0;
  memset(&v73, 0, 512);
  memset(&v70, 0, sizeof(v70));
  valuePtr = 0;
  theArray = 0LL;
  v17 = geteuid();
  v18 = strchr(a1, 58);
  if ( v18 )
  {
    v19 = v18 - a1;
    v20 = malloc_type_malloc(v18 - a1 + 1, 0x6969F2FuLL);
    memcpy(v20, a1, v19);
    *((_BYTE *)v20 + v19) = 0;
  }
  else
  {
    v20 = strdup("unknown scheme");
    if ( !v20 )
      return 12LL;
  }
  v21 = seteuid(a4);
  if ( v21 )
    syslog_DARWIN_EXTSN(4, "seteuid failed with '%d'\n", v21);
  v22 = sub_1000063A4(a2, a3, __src, (char *)&v71 + 1, &v71);
  v23 = seteuid(v17);
  if ( v23 )
    syslog_DARWIN_EXTSN(4, "seteuid failed with '%d'\n", v23);
  if ( (_DWORD)v22 )
    goto LABEL_9;
  v25 = a10;
  if ( a6 )
  {
    strncpy(a6, __src, a5 - 1);
    a6[a5 - 1] = 0;
  }
  if ( (_BYTE)v71 )
  {
    free(v20);
    if ( a10 )
    {
      v22 = 0LL;
      *a10 = 0;
      return v22;
    }
    return 0LL;
  }
  __errnum = 0;
  v26 = sub_100006AD0(__src, a4, &__errnum);
  if ( v26 < 2 )
    goto LABEL_71;
  if ( v26 == 2 )
  {
    v28 = sub_100006DC0(__src, a4);
    if ( (a9 & 2) == 0 || v28 )
    {
      free(v20);
      v22 = 16LL;
      goto LABEL_97;
    }
LABEL_24:
    v29 = open("/dev/autofs_homedirmounter", 0);
    if ( v29 == -1 )
    {
      v22 = (unsigned int)*__error();
    }
    else
    {
      v60 = v29;
      v30 = seteuid(a4);
      if ( v30 )
        syslog_DARWIN_EXTSN(4, "seteuid failed with '%d'\n", v30);
      v31 = unmount(__src, 0x80000);
      v32 = seteuid(v17);
      if ( v32 )
        syslog_DARWIN_EXTSN(4, "seteuid failed with '%d'\n", v32);
      if ( v31 && (unmount(__src, 0x80000) & 0xFFFFFFFD) != 0 )
      {
        v33 = seteuid(a4);
        if ( v33 )
          syslog_DARWIN_EXTSN(4, "seteuid failed with '%d'\n", v33);
        v34 = statfs(__src, &v73);
        v35 = seteuid(v17);
        if ( v35 )
          syslog_DARWIN_EXTSN(4, "seteuid failed with '%d'\n", v35);
        if ( !v34 && *(unsigned __int16 *)v73.f_mntonname != 47 && v73.f_owner == (_DWORD)a4 )
        {
LABEL_71:
          if ( a10 )
          {
            v54 = 0;
LABEL_73:
            *v25 = v54;
          }
          goto LABEL_74;
        }
      }
      v36 = sub_100006F6C(__src, 493LL);
      if ( !(_DWORD)v36 )
      {
        fsctl(__src, 0x2000639AuLL, 0LL, 0);
        v37 = 3;
        v59 = a7;
        while ( 1 )
        {
          v62 = v37;
          seteuid(a4);
          v38 = lstat(__src, &v70);
          st_uid = v70.st_uid;
          v40 = seteuid(v17);
          if ( !v38 && st_uid != (_DWORD)a4 )
          {
            if ( v40 )
              syslog_DARWIN_EXTSN(4, "seteuid failed with '%d'\n", v40);
            v41 = getgrnam("nobody");
            v42 = v41 ? v41->gr_gid : 0;
            if ( chown(__src, a4, v42) )
            {
              if ( *__error() )
              {
                v22 = (unsigned int)*__error();
                close(v60);
                if ( !(_DWORD)v22 )
                  goto LABEL_74;
              }
              else
              {
                close(v60);
                v22 = 22LL;
              }
              free(v20);
              goto LABEL_97;
            }
          }
          v43 = strlen(a1);
          v44 = CFURLCreateWithBytes(kCFAllocatorDefault, (const UInt8 *)a1, v43, 0x8000100u, 0LL);
          if ( !v44 )
          {
            close(v60);
            goto LABEL_85;
          }
          v45 = v44;
          v66 = CFStringCreateWithCString(kCFAllocatorDefault, __src, 0x8000100u);
          if ( !v66 )
          {
            close(v60);
LABEL_83:
            v55 = v45;
            goto LABEL_84;
          }
          cf = CFStringCreateWithCString(kCFAllocatorDefault, a7, 0x8000100u);
          if ( !cf )
          {
            close(v60);
LABEL_82:
            CFRelease(v66);
            goto LABEL_83;
          }
          v64 = CFStringCreateWithCString(kCFAllocatorDefault, a8, 0x8000100u);
          if ( !v64 )
          {
            close(v60);
LABEL_81:
            CFRelease(cf);
            goto LABEL_82;
          }
          v63 = CFStringCreateWithCString(kCFAllocatorDefault, (const char *)v20, 0x8000100u);
          if ( !v63 )
          {
            close(v60);
            CFRelease(v64);
            goto LABEL_81;
          }
          v46 = v45;
          Mutable = CFDictionaryCreateMutable(
                      kCFAllocatorDefault,
                      0LL,
                      &kCFTypeDictionaryKeyCallBacks,
                      &kCFTypeDictionaryValueCallBacks);
          if ( !Mutable )
          {
            close(v60);
            CFRelease(v63);
            CFRelease(v64);
            CFRelease(cf);
            CFRelease(v66);
            v55 = v45;
            goto LABEL_84;
          }
          v48 = Mutable;
          v61 = v46;
          CFDictionarySetValue(Mutable, CFSTR("ForceNewSession"), kCFBooleanTrue);
          CFDictionarySetValue(v48, CFSTR("NoUserPreferences"), kCFBooleanTrue);
          if ( (a9 & 1) == 0 )
            CFDictionarySetValue(v48, CFSTR("Kerberos"), kCFBooleanFalse);
          CFDictionarySetValue(v48, CFSTR("TraceMessageSchemeKey"), v63);
          valuePtr = 5242880;
          v49 = CFNumberCreate(kCFAllocatorDefault, kCFNumberSInt32Type, &valuePtr);
          v50 = CFDictionaryCreateMutable(
                  kCFAllocatorDefault,
                  0LL,
                  &kCFTypeDictionaryKeyCallBacks,
                  &kCFTypeDictionaryValueCallBacks);
          v51 = v50;
          a7 = v59;
          if ( !v50 || !v49 )
          {
            if ( v50 )
              CFRelease(v50);
            if ( v49 )
              CFRelease(v49);
            close(v60);
            CFRelease(v48);
            CFRelease(v63);
            CFRelease(v64);
            CFRelease(cf);
            CFRelease(v66);
            v55 = v61;
LABEL_84:
            CFRelease(v55);
LABEL_85:
            free(v20);
            v22 = 12LL;
            goto LABEL_97;
          }
          CFDictionarySetValue(v50, CFSTR("MountAtMountDir"), kCFBooleanTrue);
          CFDictionarySetValue(v51, CFSTR("ForceNewSession"), kCFBooleanTrue);
          CFDictionarySetValue(v51, CFSTR("NoUserPreferences"), kCFBooleanTrue);
          CFDictionarySetValue(v51, CFSTR("AllowSubMounts"), kCFBooleanTrue);
          CFDictionarySetValue(v51, CFSTR("MountFlags"), v49);
          CFRelease(v49);
          CFDictionarySetValue(v51, CFSTR("TraceMessageSchemeKey"), v63);
          CFRelease(v63);
          v52 = seteuid(a4);
          if ( v52 )
            syslog_DARWIN_EXTSN(4, "seteuid failed with '%d'\n", v52);
          v22 = NetFSMountURLWithAuthenticationSync(v61, cf, v64, v66, v48, v51, &theArray);
          v53 = seteuid(v17);
          if ( v53 )
            syslog_DARWIN_EXTSN(4, "seteuid failed with '%d'\n", v53);
          CFRelease(v61);
          CFRelease(cf);
          CFRelease(v64);
          CFRelease(v66);
          CFRelease(v48);
          CFRelease(v51);
          if ( !(_DWORD)v22 )
            break;
          if ( (_DWORD)v22 == 17 && theArray )
          {
            CFRelease(theArray);
LABEL_96:
            free(v20);
            close(v60);
            goto LABEL_97;
          }
          if ( (_DWORD)v22 != 1 )
            goto LABEL_96;
          v37 = v62 - 1;
          if ( v62 == 1 )
          {
            syslog_DARWIN_EXTSN(
              3,
              "%s: Mount on '%s' unsuccessful after %u attempts.\n",
              "NetFSMountHomeDirectoryWithAuthentication",
              __src,
              3);
            goto LABEL_96;
          }
        }
        close(v60);
        v25 = a10;
        if ( a6 )
        {
          v56 = theArray;
          if ( CFArrayGetCount(theArray) < 1 )
          {
            if ( a5 )
              *a6 = 0;
          }
          else
          {
            ValueAtIndex = (const __CFString *)CFArrayGetValueAtIndex(v56, 0LL);
            v58 = NetFSCFStringtoCString(ValueAtIndex);
            strncpy(a6, v58, a5);
            a6[a5 - 1] = 0;
            free(v58);
          }
          CFRelease(v56);
        }
        if ( a10 )
        {
          v54 = 1;
          goto LABEL_73;
        }
        goto LABEL_74;
      }
      v22 = v36;
    }
LABEL_9:
    free(v20);
    return v22;
  }
  if ( v26 != 5 )
    goto LABEL_24;
  v22 = (unsigned int)__errnum;
  v27 = strerror(__errnum);
  syslog_DARWIN_EXTSN(
    3,
    "NetFSMountHomeDirectoryWithAuthentication: Checking accessiblility of '%s' failed: %s.",
    __src,
    v27);
  free(v20);
  if ( !(_DWORD)v22 )
  {
LABEL_74:
    free(v20);
    return 0LL;
  }
LABEL_97:
  if ( HIBYTE(v71) )
    rmdir(__src);
  return v22;
}