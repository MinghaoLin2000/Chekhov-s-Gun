-[SiriNCService customAlertDismissed:]
void __cdecl -[SiriNCService customAlertDismissed:](SiriNCService *self, SEL a2, id a3)
{
  id v4; // x20
  os_log_s *v5; // x21
  __int64 v6; // x1
  _QWORD v7[5]; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-40h] BYREF
  const char *v9; // [xsp+34h] [xbp-3Ch]
  __int16 v10; // [xsp+3Ch] [xbp-34h]
  id v11; // [xsp+3Eh] [xbp-32h]

  v4 = objc_retain(a3);
  v5 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315394;
    v9 = "-[SiriNCService customAlertDismissed:]";
    v10 = 2112;
    v11 = v4;
    _os_log_impl((void *)&_mh_execute_header, v5, OS_LOG_TYPE_DEFAULT, "%s siri alert dismissed %@", buf, 0x16u);
  }
  self->_alertWasDismissed = 1;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_100008AE8;
  v7[3] = &unk_100020670;
  v7[4] = self;
  SiriUIInvokeOnMainQueue(v7, v6);
  objc_release(v4);
}