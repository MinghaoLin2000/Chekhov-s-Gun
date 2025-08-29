_parse_utf16_str
_BYTE *__fastcall parse_utf16_str(__int64 a1, size_t size, size_t *a3)
{
  _BYTE *v6; // x0
  _BYTE *v7; // x19
  size_t v8; // x8
  _BYTE *i; // x9
  int v10; // w10

  *a3 = 0LL;
  v6 = malloc_type_malloc(size, 0x1E154BD8uLL);
  v7 = v6;
  if ( v6 )
  {
    bzero(v6, size);
    if ( size )
    {
      v8 = 0LL;
      for ( i = v7; ; ++i )
      {
        v10 = *(unsigned __int8 *)(a1 + v8);
        *i = v10;
        v8 += 2LL;
        if ( !v10 )
          break;
        if ( v8 >= size )
          return v7;
      }
      *a3 = v8;
    }
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    sub_1000104D4();
  }
  return v7;
}