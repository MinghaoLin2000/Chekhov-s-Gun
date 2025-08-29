_netfs_MountURLWithAuthenticationSync
__int64 __fastcall netfs_MountURLWithAuthenticationSync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v12; // x0
  const void *v13; // x19
  __int64 v14; // x0
  const void *v15; // x25
  __int64 v16; // x20

  v12 = sub_100008340(a5, &unk_100018DE8, 2LL);
  if ( !v12 )
    return 12LL;
  v13 = (const void *)v12;
  v14 = sub_100008340(a5, &unk_100018E08, 7LL);
  if ( v14 )
  {
    v15 = (const void *)v14;
    v16 = NetFSMountURLWithAuthenticationSync(a1, a2, a3, a4, v13, v14, a6);
    CFRelease(v15);
  }
  else
  {
    v16 = 12LL;
  }
  CFRelease(v13);
  return v16;
}