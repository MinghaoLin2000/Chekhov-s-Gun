_netfs_CloseSession
__int64 __fastcall netfs_CloseSession(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 result; // x0

  v2 = sub_100007BE8(*a1);
  if ( !v2 )
    return 45LL;
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 96LL))(a1[1]);
  if ( !(_DWORD)result )
  {
    free(a1);
    return 0LL;
  }
  return result;
}