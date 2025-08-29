_AUSandboxPlatformInit
__int64 __fastcall AUSandboxPlatformInit(void *a1)
{
  id v1; // x19
  id v2; // x0
  os_log_s *v3; // x19
  char *pw_dir; // x0
  char *v5; // x0
  uid_t v6; // w0
  passwd *v7; // x0
  os_log_s *v8; // x21
  char *v9; // x21
  os_log_s *v10; // x0
  os_log_s *v11; // x19
  os_log_s *v12; // x22
  os_log_s *v13; // x22
  char *v14; // x0
  char *v15; // x22
  os_log_s *v16; // x20
  __int64 v17; // x20
  uint8_t v19[8]; // [xsp+0h] [xbp-470h] BYREF
  __int64 v20; // [xsp+8h] [xbp-468h] BYREF
  __int128 buf; // [xsp+10h] [xbp-460h] BYREF
  const char *v22; // [xsp+20h] [xbp-450h]
  char *v23; // [xsp+28h] [xbp-448h]
  __int64 v24; // [xsp+30h] [xbp-440h]
  char v25[1024]; // [xsp+38h] [xbp-438h] BYREF

  v1 = objc_retain(a1);
  if ( !v1 )
  {
    v1 = &_os_log_default;
    v2 = objc_retain(&_os_log_default);
  }
  v3 = (os_log_s *)objc_retain(v1);
  bzero(v25, 0x400uLL);
  v20 = 0LL;
  pw_dir = getenv("HOME");
  if ( pw_dir )
    goto LABEL_4;
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    LOWORD(buf) = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_DEFAULT,
      "$HOME not set, falling back to using getpwuid",
      (uint8_t *)&buf,
      2u);
  }
  v6 = getuid();
  v7 = getpwuid(v6);
  if ( v7 )
  {
    pw_dir = v7->pw_dir;
    if ( pw_dir )
    {
LABEL_4:
      v5 = realpath_DARWIN_EXTSN(pw_dir, 0LL);
      goto LABEL_16;
    }
  }
  else
  {
    v8 = objc_retain(v3);
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_ERROR) )
      sub_100013578(v8);
    objc_release(v8);
  }
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    LODWORD(buf) = 136315138;
    *(_QWORD *)((char *)&buf + 4) = "/private/var/root/";
    _os_log_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_DEFAULT,
      "Using hardcoded home dir path %s",
      (uint8_t *)&buf,
      0xCu);
  }
  v5 = strdup("/private/var/root/");
LABEL_16:
  v9 = v5;
  v10 = objc_retain(v3);
  v11 = v10;
  if ( !v9 )
  {
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
      sub_10001330C(v11);
    objc_release(v11);
    goto LABEL_34;
  }
  if ( (_set_user_dir_suffix("com.apple.uarpupdaterservice.display") & 1) != 0 )
  {
    if ( confstr(65537, v25, 0x400uLL) )
    {
      objc_release(v11);
      v14 = realpath_DARWIN_EXTSN(v25, 0LL);
      goto LABEL_30;
    }
    v12 = objc_retain(v11);
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
      sub_100013480(v12);
  }
  else
  {
    v13 = objc_retain(v11);
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
      sub_1000134FC(v13);
  }
  objc_release(v11);
  objc_release(v11);
  if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEFAULT) )
  {
    LODWORD(buf) = 136315138;
    *(_QWORD *)((char *)&buf + 4) = "/private/var/folders/zz/zyxvpxvq6csfxvn_n0000000000000/T/com.apple.uarpupdaterservice.display";
    _os_log_impl(
      (void *)&_mh_execute_header,
      v11,
      OS_LOG_TYPE_DEFAULT,
      "Using hardcoded tempdir path %s",
      (uint8_t *)&buf,
      0xCu);
  }
  v14 = strdup("/private/var/folders/zz/zyxvpxvq6csfxvn_n0000000000000/T/com.apple.uarpupdaterservice.display");
LABEL_30:
  v15 = v14;
  if ( !v14 )
  {
    v16 = objc_retain(v11);
    if ( os_log_type_enabled(v16, OS_LOG_TYPE_ERROR) )
      sub_100013388(v16);
    objc_release(v16);
    free(v9);
LABEL_34:
    v17 = 1LL;
    goto LABEL_42;
  }
  *(_QWORD *)&buf = "HOME";
  *((_QWORD *)&buf + 1) = v9;
  v22 = "TMPDIR";
  v23 = v14;
  v24 = 0LL;
  if ( (unsigned int)sandbox_init_with_parameters("com.apple.uarpupdaterservice.display", 1LL, &buf, &v20) )
  {
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_ERROR) )
      sub_100013404(&v20, v11);
    v17 = 1LL;
  }
  else
  {
    v17 = 0LL;
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEFAULT) )
    {
      *(_WORD *)v19 = 0;
      _os_log_impl((void *)&_mh_execute_header, v11, OS_LOG_TYPE_DEFAULT, "Sandboxing should now be active", v19, 2u);
      v17 = 0LL;
    }
  }
  free(v9);
  free(v15);
LABEL_42:
  objc_release(v11);
  objc_release(v11);
  return v17;
}