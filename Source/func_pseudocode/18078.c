_piston_set_share
__int64 __fastcall piston_set_share(__int64 a1, char *__s1)
{
  void *v4; // x0
  size_t v5; // x21
  void *v6; // x0
  __int64 result; // x0

  v4 = *(void **)(a1 + 408);
  if ( v4 )
  {
    free(v4);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  if ( !__s1 )
    return 0LL;
  v5 = strnlen(__s1, 0x400uLL);
  v6 = malloc_type_malloc(v5 + 1, 0xC406263CuLL);
  *(_QWORD *)(a1 + 408) = v6;
  if ( v6 )
  {
    memcpy(v6, __s1, v5);
    result = 0LL;
    *(_BYTE *)(*(_QWORD *)(a1 + 408) + v5) = 0;
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000F4CC(v5);
    return 12LL;
  }
  return result;
}