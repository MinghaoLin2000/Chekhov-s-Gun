_uncache_filename
__int64 __fastcall uncache_filename(const char *a1, size_t a2)
{
  int v4; // w0
  int v5; // w20
  int v6; // w8
  DIR *v7; // x0
  DIR *v8; // x22
  int v9; // w21
  __int64 v10; // x0
  os_log_s *v11; // x19
  const char *v12; // x3
  size_t st_size; // x1
  __int64 v14; // x0
  os_log_s *v15; // x20
  os_log_s *v17; // x21
  const char *v18; // x3
  os_log_s *v19; // x1
  os_log_type_t v20; // w2
  uint32_t v21; // w5
  os_log_s *v22; // x21
  stat v23; // [xsp+0h] [xbp-E0h] BYREF
  uint8_t buf[4]; // [xsp+90h] [xbp-50h] BYREF
  const char *v25; // [xsp+94h] [xbp-4Ch]

  memset(&v23.st_size, 0, 48);
  v4 = open(a1, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( v4 == -1 )
  {
    v11 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)((__int64 (*)(void))_MXMGetLog)());
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)buf = 0;
      v12 = "Error while trying to uncache: open";
LABEL_12:
      _os_log_impl((void *)&_mh_execute_header, v11, OS_LOG_TYPE_ERROR, v12, buf, 2u);
    }
LABEL_13:
    objc_release(v11);
    return 1LL;
  }
  v5 = v4;
  if ( fstat(v4, &v23) == -1 )
  {
    v11 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)((__int64 (*)(void))_MXMGetLog)());
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)buf = 0;
      v12 = "Error while trying to uncache: fstat";
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  v6 = v23.st_mode & 0xF000;
  if ( v6 == 0x8000 )
  {
    if ( a2 )
      st_size = a2;
    else
      st_size = v23.st_size;
    v10 = uncache_regular_file(v5, st_size);
    if ( !(_DWORD)v10 )
      goto LABEL_18;
    goto LABEL_27;
  }
  if ( v6 != 0x4000 )
  {
    v17 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)((__int64 (*)(void))_MXMGetLog)());
    if ( os_log_type_enabled(v17, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 67109120;
      LODWORD(v25) = v23.st_mode;
      v18 = "Cannot uncache file of mode 0%o";
      v19 = v17;
      v20 = OS_LOG_TYPE_INFO;
      v21 = 8;
LABEL_25:
      _os_log_impl((void *)&_mh_execute_header, v19, v20, v18, buf, v21);
    }
LABEL_26:
    objc_release(v17);
    goto LABEL_27;
  }
  v7 = opendir(a1);
  if ( !v7 )
  {
    v17 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)((__int64 (*)(void))_MXMGetLog)());
    if ( os_log_type_enabled(v17, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)buf = 0;
      v18 = "Error while trying to uncache: opendir";
      v19 = v17;
      v20 = OS_LOG_TYPE_ERROR;
      v21 = 2;
      goto LABEL_25;
    }
    goto LABEL_26;
  }
  v8 = v7;
  v9 = uncache_dir2(v7);
  v10 = closedir(v8);
  if ( v9 )
  {
LABEL_27:
    v22 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog(v10));
    if ( os_log_type_enabled(v22, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315138;
      v25 = a1;
      _os_log_impl((void *)&_mh_execute_header, v22, OS_LOG_TYPE_INFO, "Uncache failed with filepath: %s", buf, 0xCu);
    }
    objc_release(v22);
    close(v5);
    return 1LL;
  }
LABEL_18:
  v14 = close(v5);
  v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog(v14));
  if ( os_log_type_enabled(v15, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315138;
    v25 = a1;
    _os_log_impl((void *)&_mh_execute_header, v15, OS_LOG_TYPE_INFO, "Uncached filename: %s", buf, 0xCu);
  }
  objc_release(v15);
  return 0LL;
}