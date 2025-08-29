__processIdentifierWithProcessName
__int64 __fastcall _processIdentifierWithProcessName(void *a1)
{
  id v1; // x19
  unsigned int v2; // w0
  int v3; // w21
  size_t v4; // x22
  void *v5; // x0
  void *v6; // x20
  int v7; // w21
  os_log_s *v8; // x22
  unsigned __int64 v9; // x26
  int *v10; // x28
  __int64 v11; // x21
  int v12; // t1
  NSString *v13; // x24
  os_log_s *v14; // x25
  unsigned __int8 v15; // w25
  os_log_s *v16; // x20
  int v17; // w8
  const char *v18; // x3
  os_log_s *v19; // x1
  uint32_t v20; // w5
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  _BYTE v23[14]; // [xsp+14h] [xbp-6Ch]

  v1 = objc_retain(a1);
  *__error() = 0;
  v2 = proc_listpids(1u, 0, 0LL, 0);
  if ( (v2 & 0x80000000) != 0 )
  {
    v16 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
    if ( os_log_type_enabled(v16, OS_LOG_TYPE_DEBUG) )
    {
      v17 = *__error();
      *(_DWORD *)buf = 67109120;
      *(_DWORD *)v23 = v17;
      v18 = "Failed to read pids: %d";
      v19 = v16;
      v20 = 8;
LABEL_22:
      _os_log_impl((void *)&_mh_execute_header, v19, OS_LOG_TYPE_DEBUG, v18, buf, v20);
    }
LABEL_23:
    v11 = 0xFFFFFFFFLL;
    goto LABEL_24;
  }
  v3 = v2;
  v4 = v2;
  v5 = malloc_type_malloc(v2, 0x80D4F8AuLL);
  if ( !v5 )
  {
    v16 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
    if ( os_log_type_enabled(v16, OS_LOG_TYPE_DEBUG) )
    {
      *(_WORD *)buf = 0;
      v18 = "Failed to allocate buffer";
      v19 = v16;
      v20 = 2;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  v6 = v5;
  memset(v5, 255, v4);
  v7 = proc_listpids(1u, 0, v6, v3);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG) )
  {
    *(_DWORD *)buf = 138412290;
    *(_QWORD *)v23 = v1;
    _os_log_impl((void *)&_mh_execute_header, v8, OS_LOG_TYPE_DEBUG, "Searching for procName: %@", buf, 0xCu);
  }
  objc_release(v8);
  if ( (unsigned int)v7 < 4 )
  {
LABEL_15:
    v11 = 0xFFFFFFFFLL;
  }
  else
  {
    if ( (unsigned __int64)v7 >> 2 <= 1 )
      v9 = 1LL;
    else
      v9 = (unsigned __int64)v7 >> 2;
    v10 = (int *)v6;
    while ( 1 )
    {
      v12 = *v10++;
      v11 = (unsigned int)v12;
      if ( v12 >= 1 )
      {
        v13 = objc_retainAutoreleasedReturnValue(_fullProcessNameForPid());
        v14 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
        if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEBUG) )
        {
          *(_DWORD *)buf = 138412546;
          *(_QWORD *)v23 = v13;
          *(_WORD *)&v23[8] = 1024;
          *(_DWORD *)&v23[10] = v11;
          _os_log_impl((void *)&_mh_execute_header, v14, OS_LOG_TYPE_DEBUG, "Checking %@ (%d)", buf, 0x12u);
        }
        objc_release(v14);
        v15 = -[NSString isEqualToString:](v13, "isEqualToString:", v1);
        objc_release(v13);
        if ( (v15 & 1) != 0 )
          break;
      }
      if ( !--v9 )
        goto LABEL_15;
    }
  }
  free(v6);
  v16 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
  if ( os_log_type_enabled(v16, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 67109378;
    *(_DWORD *)v23 = v11;
    *(_WORD *)&v23[4] = 2112;
    *(_QWORD *)&v23[6] = v1;
    _os_log_impl((void *)&_mh_execute_header, v16, OS_LOG_TYPE_INFO, "Found pid (%d) for process name: %@", buf, 0x12u);
  }
LABEL_24:
  objc_release(v16);
  objc_release(v1);
  return v11;
}