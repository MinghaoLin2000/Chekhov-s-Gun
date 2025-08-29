_AUSandboxPlatformInitWithBundleIdentifier
__int64 __fastcall AUSandboxPlatformInitWithBundleIdentifier(void *a1, const char *a2, __int64 a3)
{
  id v5; // x21
  id v6; // x0
  const char *v7; // x25
  os_log_s *v8; // x19
  NSString *v9; // x20
  NSBundle *v10; // x21
  NSString *v11; // x21
  char *pw_dir; // x0
  char *v13; // x0
  uid_t v14; // w0
  passwd *v15; // x0
  os_log_s *v16; // x23
  char *v17; // x23
  os_log_s *v18; // x0
  os_log_s *v19; // x24
  __int64 v20; // x22
  os_log_s *v21; // x25
  os_log_s *v22; // x25
  os_log_s *v23; // x25
  char *v24; // x25
  NSString *v25; // x21
  uint8_t v27[8]; // [xsp+20h] [xbp-480h] BYREF
  __int64 v28; // [xsp+28h] [xbp-478h] BYREF
  __int128 buf; // [xsp+30h] [xbp-470h] BYREF
  const char *v30; // [xsp+40h] [xbp-460h]
  char *v31; // [xsp+48h] [xbp-458h]
  __int64 v32; // [xsp+50h] [xbp-450h]
  char v33[1024]; // [xsp+58h] [xbp-448h] BYREF

  v5 = objc_retain(a1);
  if ( !v5 )
  {
    v5 = &_os_log_default;
    v6 = objc_retain(&_os_log_default);
  }
  if ( a2 )
    v7 = a2;
  else
    v7 = "com.apple.MobileAccessoryUpdater";
  v8 = (os_log_s *)objc_retain(v5);
  bzero(v33, 0x400uLL);
  v28 = 0LL;
  if ( a3 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", a3));
    if ( !v9 )
      goto LABEL_8;
  }
  else
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v9 = objc_retainAutoreleasedReturnValue(-[NSBundle bundleIdentifier](v10, "bundleIdentifier"));
    objc_release(v10);
    if ( !v9 )
    {
LABEL_8:
      if ( os_log_type_enabled(v8, OS_LOG_TYPE_ERROR) )
        sub_10001B34C(v8);
      goto LABEL_29;
    }
  }
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("%@/%@.%@"),
            CFSTR("/System/Library/Sandbox/Profiles"),
            v9,
            CFSTR("sb")));
  pw_dir = getenv("HOME");
  if ( pw_dir )
    goto LABEL_12;
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_INFO) )
  {
    LOWORD(buf) = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_INFO,
      "$HOME not set, falling back to using getpwuid",
      (uint8_t *)&buf,
      2u);
  }
  v14 = getuid();
  v15 = getpwuid(v14);
  if ( v15 )
  {
    pw_dir = v15->pw_dir;
    if ( pw_dir )
    {
LABEL_12:
      v13 = realpath_DARWIN_EXTSN(pw_dir, 0LL);
      goto LABEL_24;
    }
  }
  else
  {
    v16 = objc_retain(v8);
    if ( os_log_type_enabled(v16, OS_LOG_TYPE_ERROR) )
      sub_10001B660(v16);
    objc_release(v16);
  }
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
  {
    LODWORD(buf) = 136315138;
    *(_QWORD *)((char *)&buf + 4) = "/private/var/db/accessoryupdater/";
    _os_log_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_DEFAULT,
      "Using hardcoded home dir path %s",
      (uint8_t *)&buf,
      0xCu);
  }
  v13 = strdup("/private/var/db/accessoryupdater/");
LABEL_24:
  v17 = v13;
  v18 = objc_retain(v8);
  v19 = v18;
  if ( !v17 )
  {
    if ( os_log_type_enabled(v18, OS_LOG_TYPE_ERROR) )
      sub_10001B3D0(v19);
    objc_release(v19);
    goto LABEL_28;
  }
  if ( (_set_user_dir_suffix(v7) & 1) != 0 )
  {
    if ( confstr(65537, v33, 0x400uLL) )
    {
      objc_release(v19);
      v24 = realpath_DARWIN_EXTSN(v33, 0LL);
      if ( v24 )
        goto LABEL_40;
      goto LABEL_37;
    }
    v21 = objc_retain(v19);
    if ( os_log_type_enabled(v21, OS_LOG_TYPE_ERROR) )
      sub_10001B568(v21);
  }
  else
  {
    v22 = objc_retain(v19);
    if ( os_log_type_enabled(v22, OS_LOG_TYPE_ERROR) )
      sub_10001B5E4(v22);
  }
  objc_release(v19);
  objc_release(v19);
LABEL_37:
  v23 = objc_retain(v19);
  if ( os_log_type_enabled(v23, OS_LOG_TYPE_ERROR) )
    sub_10001B4C8(v23);
  objc_release(v23);
  v24 = strdup("/private/var/folders/zz/zyxvpxvq6csfxvn_n0000000000000/T/com.apple.MobileAccessoryUpdater");
  if ( !v24 )
  {
    free(v17);
LABEL_28:
    objc_release(v11);
LABEL_29:
    v20 = 1LL;
    goto LABEL_48;
  }
LABEL_40:
  *(_QWORD *)&buf = "HOME";
  *((_QWORD *)&buf + 1) = v17;
  v30 = "TMPDIR";
  v31 = v24;
  v32 = 0LL;
  v25 = objc_retainAutorelease(v11);
  if ( (unsigned int)sandbox_init_with_parameters(-[NSString UTF8String](v25, "UTF8String"), 1LL, &buf, &v28) )
  {
    if ( os_log_type_enabled(v19, OS_LOG_TYPE_ERROR) )
      sub_10001B44C(&v28, v19);
    v20 = 1LL;
  }
  else
  {
    if ( os_log_type_enabled(v19, OS_LOG_TYPE_INFO) )
    {
      *(_WORD *)v27 = 0;
      _os_log_impl((void *)&_mh_execute_header, v19, OS_LOG_TYPE_INFO, "Sandboxing should now be active", v27, 2u);
    }
    v20 = 0LL;
  }
  free(v17);
  free(v24);
  objc_release(v25);
LABEL_48:
  objc_release(v9);
  objc_release(v8);
  objc_release(v8);
  return v20;
}