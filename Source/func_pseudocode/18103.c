_piston_write_n
__int64 __fastcall piston_write_n(int *a1, char *__buf, size_t __nbyte)
{
  size_t v3; // x19
  size_t v6; // x20
  ssize_t v7; // x0
  ssize_t v8; // x23
  __int64 v9; // x21

  if ( !__nbyte )
    return 0LL;
  v3 = __nbyte;
  v6 = __nbyte;
  while ( 1 )
  {
    v7 = write(*a1, __buf, v3);
    v8 = v7;
    if ( v7 <= 0 )
      break;
    __buf += v7;
    v6 -= v7;
    v3 -= v7;
    if ( !v3 )
      return 0LL;
  }
  v9 = (unsigned int)*__error();
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    sub_1000101BC(v8, v3, v6);
  return v9;
}