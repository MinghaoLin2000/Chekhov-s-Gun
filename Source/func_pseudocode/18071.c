_NetFSCopyHostAndPort
__int64 __fastcall NetFSCopyHostAndPort(CFURLRef anURL, CFMutableStringRef *a2, const __CFString **a3)
{
  const __CFString *v6; // x0
  const __CFString *v7; // x23
  CFMutableStringRef MutableCopy; // x19
  char *v9; // x0
  char *v10; // x23
  int v11; // w0
  int v12; // w24
  __int64 v13; // x0
  int v14; // w22
  CFStringRef v15; // x0
  const __CFString *v16; // x23
  __int64 v17; // x21
  int *v18; // x0
  char *v19; // x0
  _QWORD v21[2]; // [xsp+18h] [xbp-48h] BYREF
  int v22; // [xsp+28h] [xbp-38h]

  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  v6 = CFURLCopyHostName(anURL);
  if ( !v6 )
    return 22LL;
  v7 = v6;
  MutableCopy = CFStringCreateMutableCopy(0LL, 0LL, v6);
  CFRelease(v7);
  if ( !MutableCopy )
    return 12LL;
  v21[0] = 0LL;
  v22 = 0;
  v21[1] = 0LL;
  v9 = NetFSCFStringtoCString(MutableCopy);
  if ( !v9 )
  {
    syslog_DARWIN_EXTSN(3, "IsIPv6Address: Can't convert host string to C string");
LABEL_19:
    v17 = 22LL;
LABEL_20:
    CFRelease(MutableCopy);
    return v17;
  }
  v10 = v9;
  v11 = inet_pton(30, v9, v21);
  if ( v11 == -1 )
  {
    v18 = __error();
    v19 = strerror(*v18);
    syslog_DARWIN_EXTSN(3, "IsIPv6Address: inet_pton fails on %s: %s", v10, v19);
    free(v10);
    goto LABEL_19;
  }
  v12 = v11;
  free(v10);
  if ( v12 == 1 )
  {
    CFStringInsert(MutableCopy, 0LL, CFSTR("["));
    CFStringAppend(MutableCopy, CFSTR("]"));
  }
  v13 = CFURLGetPortNumber(anURL);
  v14 = v13;
  if ( (_DWORD)v13 == -1 )
  {
    v16 = 0LL;
    goto LABEL_23;
  }
  v15 = CFStringCreateWithFormat(0LL, 0LL, CFSTR("%d"), v13);
  if ( !v15 )
  {
    v17 = 12LL;
    goto LABEL_20;
  }
  v16 = v15;
  if ( !a3 )
  {
    CFStringAppend(MutableCopy, CFSTR(":"));
    CFStringAppend(MutableCopy, v16);
  }
LABEL_23:
  if ( a2 )
  {
    *a2 = MutableCopy;
    if ( !a3 )
      goto LABEL_29;
LABEL_27:
    if ( v14 != -1 )
    {
      v17 = 0LL;
      *a3 = v16;
      return v17;
    }
    goto LABEL_29;
  }
  CFRelease(MutableCopy);
  if ( a3 )
    goto LABEL_27;
LABEL_29:
  if ( v14 != -1 )
    CFRelease(v16);
  return 0LL;
}