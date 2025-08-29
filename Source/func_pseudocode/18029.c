_NetFSMountURLWithAuthenticationSync
__int64 __fastcall NetFSMountURLWithAuthenticationSync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v11; // x23
  CFTypeRef v13; // [xsp+0h] [xbp-40h] BYREF
  CFTypeRef cf; // [xsp+8h] [xbp-38h]

  v13 = 0LL;
  cf = 0LL;
  if ( a2 | a3 )
  {
    v11 = sub_100008568();
    if ( (_DWORD)v11 )
      return v11;
    v11 = NAConnectToServerSync(cf, a4, a5, a6, &v13);
    CFRelease(cf);
  }
  else
  {
    v11 = NAConnectToServerSync(a1, a4, a5, a6, &v13);
  }
  if ( (_DWORD)v11 == 17 || !(_DWORD)v11 )
  {
    *a7 = sub_1000086C4(v13);
    CFRelease(v13);
    if ( *a7 )
      return 0LL;
    else
      return 12LL;
  }
  return v11;
}