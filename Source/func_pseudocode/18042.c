_netfs_CreateSessionRefForEntry
__int64 __fastcall netfs_CreateSessionRefForEntry(__int64 a1, _QWORD *a2)
{
  __int64 v2; // x20
  __int64 v5; // x0
  __int64 v6; // x20
  _QWORD *v7; // x0
  void *v8; // x22

  v2 = 22LL;
  if ( a1 && a2 )
  {
    v5 = sub_100007BE8(a1);
    if ( v5 )
    {
      v6 = v5;
      v7 = malloc_type_malloc(0x10uLL, 0xA0040AFF93C70uLL);
      if ( v7 )
      {
        v8 = v7;
        *v7 = a1;
        v2 = (*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)v6 + 32LL))(v7 + 1);
        if ( (_DWORD)v2 )
          free(v8);
        else
          *a2 = v8;
      }
      else
      {
        return 12LL;
      }
    }
    else
    {
      return 45LL;
    }
  }
  return v2;
}