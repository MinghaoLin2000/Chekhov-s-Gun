_piston_set_user_creds
__int64 __fastcall piston_set_user_creds(__int64 a1, char *__s1, char *a3)
{
  void *v6; // x0
  size_t v7; // x22
  void *v8; // x0
  void *v9; // x0
  size_t v10; // x21
  void *v11; // x0
  __int64 result; // x0

  if ( __s1 )
  {
    v6 = *(void **)(a1 + 384);
    if ( v6 )
      free(v6);
    *(_QWORD *)(a1 + 384) = 0LL;
    v7 = strnlen(__s1, 0x400uLL);
    v8 = malloc_type_malloc(v7 + 1, 0x7B4564A7uLL);
    *(_QWORD *)(a1 + 384) = v8;
    if ( !v8 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        sub_10000F3D4(v7);
      return 12LL;
    }
    memcpy(v8, __s1, v7);
    *(_BYTE *)(*(_QWORD *)(a1 + 384) + v7) = 0;
  }
  if ( !a3 )
    return 0LL;
  v9 = *(void **)(a1 + 392);
  if ( v9 )
    free(v9);
  *(_QWORD *)(a1 + 392) = 0LL;
  v10 = strnlen(a3, 0x400uLL);
  v11 = malloc_type_malloc(v10 + 1, 0xB95EA183uLL);
  *(_QWORD *)(a1 + 392) = v11;
  if ( v11 )
  {
    memcpy(v11, a3, v10);
    result = 0LL;
    *(_BYTE *)(*(_QWORD *)(a1 + 392) + v10) = 0;
    return result;
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    sub_10000F358(v10);
  return 12LL;
}