_EnterSandbox
void EnterSandbox()
{
  char *pw_dir; // x0
  uid_t v1; // w0
  passwd *v2; // x0
  char *v3; // x0
  char *v4; // x20
  char *v5; // x0
  char *v6; // x21
  char *v7; // x0
  char *v8; // x22
  __int64 v9; // [xsp+8h] [xbp-478h] BYREF
  _QWORD v10[7]; // [xsp+10h] [xbp-470h] BYREF
  char v11[1024]; // [xsp+48h] [xbp-438h] BYREF

  bzero(v11, 0x400uLL);
  pw_dir = getenv("HOME");
  if ( !pw_dir )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_10000869C();
    v1 = getuid();
    v2 = getpwuid(v1);
    if ( !v2 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        sub_100008348();
LABEL_28:
      exit(1);
    }
    pw_dir = v2->pw_dir;
  }
  v3 = realpath_DARWIN_EXTSN(pw_dir, 0LL);
  if ( !v3 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_1000083C0();
    goto LABEL_28;
  }
  v4 = v3;
  if ( !(unsigned int)_set_user_dir_suffix("${MetricMeasurementHelper}") || !confstr(65537, v11, 0x400uLL) )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_100008438();
    goto LABEL_28;
  }
  v5 = realpath_DARWIN_EXTSN(v11, 0LL);
  if ( !v5 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_1000084B0();
    goto LABEL_28;
  }
  v6 = v5;
  if ( !confstr(65538, v11, 0x400uLL) )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_100008528();
    goto LABEL_28;
  }
  v7 = realpath_DARWIN_EXTSN(v11, 0LL);
  if ( !v7 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_1000085A0();
    goto LABEL_28;
  }
  v8 = v7;
  v10[0] = "HOME";
  v10[1] = v4;
  v10[2] = "TMPDIR";
  v10[3] = v6;
  v10[4] = "DARWIN_CACHE_DIR";
  v10[5] = v7;
  v10[6] = 0LL;
  v9 = 0LL;
  if ( (unsigned int)sandbox_init_with_parameters("com.apple.MetricMeasurementHelper", 3LL, v10, &v9) )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_100008618(&v9);
    goto LABEL_28;
  }
  free(v4);
  free(v6);
  free(v8);
}