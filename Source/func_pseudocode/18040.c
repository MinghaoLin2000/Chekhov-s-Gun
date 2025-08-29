_netfs_MountURLWithAuthenticationAsync
__int64 __fastcall netfs_MountURLWithAuthenticationAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10)
{
  __int64 v18; // x0
  const void *v19; // x19
  __int64 v20; // x0
  const void *v21; // x20
  void *v22; // x0
  void *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x25
  CFTypeRef cf; // [xsp+8h] [xbp-58h] BYREF

  v18 = sub_100008340(a5, &unk_100018DE8, 2LL);
  if ( !v18 )
    return 12LL;
  v19 = (const void *)v18;
  v20 = sub_100008340(a5, &unk_100018E08, 7LL);
  if ( !v20 )
  {
LABEL_8:
    CFRelease(v19);
    return 12LL;
  }
  v21 = (const void *)v20;
  v22 = malloc_type_malloc(0x18uLL, 0x80040D6874129uLL);
  if ( !v22 )
  {
    CFRelease(v21);
    goto LABEL_8;
  }
  v23 = v22;
  cf = 0LL;
  *((_QWORD *)v22 + 1) = a8;
  *((_QWORD *)v22 + 2) = a9;
  if ( a2 | a3 )
  {
    v24 = sub_100008568(a1, a2, a3, &cf);
    if ( (_DWORD)v24 )
    {
      v25 = v24;
      free(v23);
      CFRelease(v21);
      CFRelease(v19);
      return v25;
    }
    v25 = NAConnectToServerAsync(a6, a7, cf, a4, v19, v21, sub_100008630, v23, v23);
    CFRelease(cf);
  }
  else
  {
    v25 = NAConnectToServerAsync(a6, a7, a1, a4, v19, v21, sub_100008630, v22, v22);
  }
  CFRelease(v21);
  CFRelease(v19);
  if ( (_DWORD)v25 )
    free(v23);
  else
    *a10 = v23;
  return v25;
}