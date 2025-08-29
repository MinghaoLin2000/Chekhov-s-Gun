_netfs_CancelAsyncMount
__int64 __fastcall netfs_CancelAsyncMount(_QWORD *a1)
{
  __int64 v2; // x20

  v2 = NACancelConnectToServerAsync(*a1);
  if ( !(_DWORD)v2 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, __int64))a1[1])(a1[2], 0LL, 89LL);
    free(a1);
  }
  return v2;
}