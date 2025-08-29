_piston_write_v
__int64 __fastcall piston_write_v(int *a1, iovec *a2, __int64 a3)
{
  __int64 v3; // x19
  __int64 v6; // x26
  __int64 v7; // x8
  int v8; // w9
  size_t v9; // x22
  __int64 v10; // x23
  const iovec *v11; // x24
  ssize_t v12; // x0
  ssize_t v13; // x25
  bool v14; // zf
  __int64 v15; // x9
  size_t v16; // x10
  iovec *v17; // x8
  size_t iov_len; // x11

  v3 = a3;
  if ( (_DWORD)a3 )
  {
    v6 = 0LL;
    v7 = 8LL;
    v8 = a3;
    do
    {
      v6 += *(__int64 *)((char *)&a2->iov_base + v7);
      v7 += 16LL;
      --v8;
    }
    while ( v8 );
    if ( v6 )
    {
      v9 = 0LL;
      v10 = a3;
      v11 = a2;
      while ( 1 )
      {
        v12 = writev(*a1, v11, v10);
        v13 = v12;
        if ( v12 < 0 )
          break;
        v6 -= v12;
        v9 += v12;
        if ( v6 )
          v14 = (_DWORD)v3 == 0;
        else
          v14 = 1;
        if ( v14 )
        {
LABEL_14:
          v17 = (iovec *)v11;
          v15 = v10;
        }
        else
        {
          v15 = v3;
          v16 = v9;
          v17 = a2;
          while ( 1 )
          {
            iov_len = v17->iov_len;
            if ( iov_len > v16 )
              break;
            v16 -= iov_len;
            ++v17;
            v15 = (unsigned int)(v15 - 1);
            if ( !(_DWORD)v15 )
              goto LABEL_14;
          }
          v17->iov_base = (char *)v17->iov_base + v16;
          v17->iov_len = iov_len - v16;
        }
        v10 = v15;
        v11 = v17;
        if ( !v6 )
          return 0LL;
      }
      v3 = (unsigned int)*__error();
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        sub_10001028C(v13, v9);
    }
    else
    {
      return 0LL;
    }
  }
  return v3;
}