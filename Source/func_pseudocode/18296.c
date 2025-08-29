-[AudioInfoHelperService getConfigurationInfo:reply:]
void __cdecl -[AudioInfoHelperService getConfigurationInfo:reply:](AudioInfoHelperService *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  os_log_s *v7; // x21
  id v8; // x0
  __int64 v9; // x22
  id v10; // x21
  _QWORD v11[4]; // [xsp+0h] [xbp-70h] BYREF
  id v12; // [xsp+20h] [xbp-50h]
  unsigned int v13; // [xsp+2Ch] [xbp-44h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-40h] BYREF
  const char *v15; // [xsp+34h] [xbp-3Ch]
  __int16 v16; // [xsp+3Ch] [xbp-34h]
  int v17; // [xsp+3Eh] [xbp-32h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  if ( qword_100008700 )
  {
    v7 = (os_log_s *)objc_retain(*(id *)qword_100008700);
    if ( !v7 )
      goto LABEL_8;
  }
  else
  {
    v7 = (os_log_s *)&_os_log_default;
    v8 = objc_retain(&_os_log_default);
  }
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315394;
    v15 = "InfoHelper.mm";
    v16 = 1024;
    v17 = 103;
    _os_log_impl((void *)&_mh_execute_header, v7, OS_LOG_TYPE_INFO, "%25s:%-5d getConfigurationInfo", buf, 0x12u);
  }
  objc_release(v7);
LABEL_8:
  dispatch_assert_queue_V2(&_dispatch_main_q);
  v13 = 0;
  sub_100002980(v5, buf, &v13);
  v9 = v13;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_100002CC4;
  v11[3] = &unk_100004160;
  v10 = objc_retain(v6);
  v12 = v10;
  getConfigurationInfo(buf, v9, v11);
  objc_release(v12);
  objc_release(v10);
  objc_release(v5);
}