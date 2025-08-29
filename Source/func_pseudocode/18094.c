_piston_sndmsgbufs
__int64 __fastcall piston_sndmsgbufs(int a1, __int64 a2)
{
  __int64 v4; // x20
  iovec *v5; // x0
  iovec *v6; // x19
  _QWORD *v7; // x8
  int v8; // w9
  int v9; // w10
  int *v10; // x11
  int v11; // w12
  int v12; // t1
  __int64 v13; // x20
  size_t v14; // x11
  void *v15; // x12
  int v16; // w10
  iovec *v17; // x10
  void *v18; // x11
  size_t v19; // x12

  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) + 2);
  v5 = (iovec *)malloc_type_malloc(16 * v4, 0x1080040FC6463CFuLL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD **)(a2 + 16);
    v8 = *(_DWORD *)(a2 + 24);
    if ( v8 )
    {
      v9 = 0;
      v10 = (int *)(v7 + 1);
      v11 = *(_DWORD *)(a2 + 24);
      do
      {
        v12 = *v10;
        v10 += 4;
        v9 += v12;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      v9 = 0;
    }
    v15 = *(void **)a2;
    v14 = *(_QWORD *)(a2 + 8);
    v16 = v14 + v9;
    *(_BYTE *)(a2 + 29) = BYTE2(v16);
    *(_BYTE *)(a2 + 30) = BYTE1(v16);
    *(_BYTE *)(a2 + 28) = 0;
    *(_BYTE *)(a2 + 31) = v16;
    v5->iov_base = (void *)(a2 + 28);
    v5->iov_len = 4LL;
    v5[1].iov_base = v15;
    v5[1].iov_len = v14;
    if ( v8 )
    {
      v17 = v5 + 2;
      do
      {
        v18 = (void *)*v7;
        v19 = v7[1];
        v7 += 2;
        v17->iov_base = v18;
        v17->iov_len = v19;
        ++v17;
        --v8;
      }
      while ( v8 );
    }
    v13 = piston_write_v(a1 + 8, v5, v4);
    if ( (_DWORD)v13 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000F744(v13);
    free(v6);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000F6BC();
    return 12LL;
  }
  return v13;
}