_uncache_dir2
__int64 __fastcall uncache_dir2(DIR *a1)
{
  int v2; // w0
  int v3; // w19
  int v4; // w0
  dirent *v5; // x20
  int v6; // w0
  bool v7; // w8
  ssize_t v8; // x0
  ssize_t v9; // x27
  int v10; // w0
  os_log_s *v12; // x19
  id v13; // x20
  const char *v14; // x3
  os_log_s *v15; // x21
  dirent *v16; // [xsp+8h] [xbp-468h] BYREF
  uint8_t __str[1032]; // [xsp+10h] [xbp-460h] BYREF

  v16 = 0LL;
  v2 = open(".", 0);
  if ( v2 == -1 )
  {
    v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)__str = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v12,
        OS_LOG_TYPE_ERROR,
        "Error while trying to uncache: open(\".\", ...)",
        __str,
        2u);
    }
    objc_release(v12);
    return 1LL;
  }
  v3 = v2;
  v4 = dirfd(a1);
  if ( fchdir(v4) == -1 )
  {
    v13 = objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
    if ( !os_log_type_enabled((os_log_t)v13, OS_LOG_TYPE_ERROR) )
    {
LABEL_27:
      objc_release(v13);
      goto LABEL_28;
    }
    *(_WORD *)__str = 0;
    v14 = "Error while trying to uncache: fchdir(dirfd(dirp))";
LABEL_26:
    _os_log_impl((void *)&_mh_execute_header, (os_log_t)v13, OS_LOG_TYPE_ERROR, v14, __str, 2u);
    goto LABEL_27;
  }
  v5 = (dirent *)malloc_type_malloc(0x418uLL, 0x1000040D92F83E5uLL);
  v6 = readdir_r(a1, v5, &v16);
  v7 = v6 == 0;
  if ( !v6 && v16 == v5 )
  {
    do
    {
      if ( strcmp(".", v5->d_name) )
      {
        if ( strcmp("..", v5->d_name) )
        {
          if ( (unsigned int)uncache_filename(v5->d_name, 0LL) )
            goto LABEL_23;
          v8 = getxattr(v5->d_name, "com.apple.ResourceFork", 0LL, 0LL, 0, 32);
          if ( v8 != -1 )
          {
            v9 = v8;
            snprintf((char *)__str, 0x400uLL, "%s/..namedfork/rsrc", v5->d_name);
            if ( (unsigned int)uncache_filename(__str, v9) )
              goto LABEL_23;
          }
        }
      }
      v10 = readdir_r(a1, v5, &v16);
      v7 = v10 == 0;
    }
    while ( !v10 && v16 == v5 );
  }
  if ( v7 )
  {
    free(v5);
    if ( fchdir(v3) != -1 )
    {
      close(v3);
      return 0LL;
    }
    v13 = objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
    if ( !os_log_type_enabled((os_log_t)v13, OS_LOG_TYPE_ERROR) )
      goto LABEL_27;
    *(_WORD *)__str = 0;
    v14 = "Error while trying to uncache: fchdir(oldcwdfd)";
    goto LABEL_26;
  }
  v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
  if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
  {
    *(_WORD *)__str = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v15,
      OS_LOG_TYPE_ERROR,
      "Error while trying to uncache: readdir_r",
      __str,
      2u);
  }
  objc_release(v15);
LABEL_23:
  free(v5);
  fchdir(v3);
LABEL_28:
  close(v3);
  return 1LL;
}