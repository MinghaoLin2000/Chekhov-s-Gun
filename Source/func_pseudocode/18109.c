_piston_utf8_to_utf16
_BYTE *__fastcall piston_utf8_to_utf16(__int64 a1, unsigned __int64 a2, size_t *a3)
{
  size_t v5; // x0
  _BYTE *v6; // x0
  _BYTE *v7; // x19
  __int64 v8; // x9
  unsigned int v9; // w8

  v5 = 2 * a2 + 2;
  *a3 = v5;
  v6 = malloc_type_malloc(v5, 0x313F31B4uLL);
  v7 = v6;
  if ( v6 )
  {
    if ( a2 )
    {
      v8 = 0LL;
      v9 = 0;
      do
      {
        v6[v9] = *(_BYTE *)(a1 + v8);
        v6[v9 + 1] = 0;
        v9 += 2;
        ++v8;
      }
      while ( a2 > (unsigned int)v8 );
    }
    else
    {
      v9 = 0;
    }
    v6[v9 | 1LL] = 0;
    v6[v9] = 0;
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    sub_100010458();
  }
  return v7;
}