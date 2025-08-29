_netfs_ConnectToServerSync
__int64 __fastcall netfs_ConnectToServerSync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return netfs_MountURLWithAuthenticationSync(a1, 0LL, 0LL, a2, a3, a4);
}