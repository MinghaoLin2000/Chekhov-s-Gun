_piston_set_server
__int64 __fastcall piston_set_server(__int64 a1, char *__s1)
{
  size_t v4; // x0
  size_t v5; // x20
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x20

  v4 = strnlen(__s1, 0x400uLL);
  v5 = v4;
  if ( (v4 & 0xFFFFFFFFFFFFFBFFLL) != 0 )
  {
    v6 = malloc_type_malloc(v4 + 1, 0x63241237uLL);
    if ( v6 )
    {
      v7 = v6;
      bzero(v6, v5 + 1);
      memcpy(v7, __s1, v5);
      v8 = 0LL;
      *(_QWORD *)(a1 + 16) = v7;
    }
    else
    {
      v8 = (unsigned int)*__error();
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        sub_10000F2C8(__s1, v8);
    }
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000F238(__s1, v5);
    return 22LL;
  }
  return v8;
}