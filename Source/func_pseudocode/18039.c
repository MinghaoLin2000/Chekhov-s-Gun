_netfs_ConnectToServerAsync
__int64 __fastcall netfs_ConnectToServerAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  return netfs_MountURLWithAuthenticationAsync(a1, 0LL, 0LL, a2, a3, a4, a5, a6, a7, a8);
}