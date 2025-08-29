_piston_read_n
__int64 __fastcall piston_read_n(int *a1, __int64 a2, size_t a3)
{
  size_t v3; // x19
  int v5; // w25
  ssize_t v6; // x28
  void *v7; // x27
  ssize_t v8; // x26
  __int64 v9; // x26
  bool v10; // cc
  __int64 v12; // [xsp+8h] [xbp-A8h]
  uint8_t buf[4]; // [xsp+30h] [xbp-80h] BYREF
  const char *v14; // [xsp+34h] [xbp-7Ch]
  __int16 v15; // [xsp+3Ch] [xbp-74h]
  ssize_t v16; // [xsp+3Eh] [xbp-72h]
  __int16 v17; // [xsp+46h] [xbp-6Ah]
  size_t v18; // [xsp+48h] [xbp-68h]

  v3 = a3;
  if ( a3 )
  {
    v5 = 0;
    v6 = 0LL;
    v12 = a2;
    while ( 1 )
    {
      v7 = (void *)(a2 + v6);
      while ( 1 )
      {
        v8 = read(*a1, v7, v3);
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
        {
          *(_DWORD *)buf = 136315650;
          v14 = "piston_read_n";
          v15 = 2048;
          v16 = v8;
          v17 = 2048;
          v18 = v3;
          _os_log_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_INFO,
            "%s: read[%zd] remain[%zu]\n",
            buf,
            0x20u);
        }
        if ( (v8 & 0x8000000000000000LL) == 0 )
          break;
        v9 = (unsigned int)*__error();
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 136315394;
          v14 = "piston_read_n";
          v15 = 1024;
          LODWORD(v16) = v9;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "%s: read returned error: %d\n",
            buf,
            0x12u);
        }
        if ( (_DWORD)v9 != 35 )
          return v9;
        sleep(1u);
        v10 = v5++ < 5;
        if ( !v10 )
        {
          v9 = 35LL;
          goto LABEL_20;
        }
      }
      if ( !v8 )
        break;
      v6 += v8;
      v3 -= v8;
      if ( v3 )
        v10 = v5 < 6;
      else
        v10 = 0;
      a2 = v12;
      if ( !v10 )
        goto LABEL_19;
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_100010348(v3);
    return 5LL;
  }
  else
  {
    v6 = 0LL;
LABEL_19:
    v9 = 0LL;
LABEL_20:
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315650;
      v14 = "piston_read_n";
      v15 = 2048;
      v16 = v6;
      v17 = 2048;
      v18 = v3;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "%s: totread[%zu] remain[%zu]\n",
        buf,
        0x20u);
    }
  }
  return v9;
}