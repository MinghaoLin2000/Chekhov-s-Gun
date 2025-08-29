-[LegacyAudioAccessory didBootstrap:info:error:]
void __cdecl -[LegacyAudioAccessory didBootstrap:info:error:](
        LegacyAudioAccessory *self,
        SEL a2,
        bool a3,
        id a4,
        id a5)
{
  _BOOL4 v6; // w20
  id v8; // x19
  id v9; // x22
  OS_os_log *log; // x23
  NSString *activeDeviceClass; // x8
  dispatch_queue_s *queue; // x0
  _QWORD v13[5]; // [xsp+0h] [xbp-A0h] BYREF
  bool v14; // [xsp+28h] [xbp-78h]
  uint8_t buf[4]; // [xsp+30h] [xbp-70h] BYREF
  const char *v16; // [xsp+34h] [xbp-6Ch]
  __int16 v17; // [xsp+3Ch] [xbp-64h]
  NSString *v18; // [xsp+3Eh] [xbp-62h]
  __int16 v19; // [xsp+46h] [xbp-5Ah]
  _BOOL4 v20; // [xsp+48h] [xbp-58h]
  __int16 v21; // [xsp+4Ch] [xbp-54h]
  id v22; // [xsp+4Eh] [xbp-52h]
  __int16 v23; // [xsp+56h] [xbp-4Ah]
  id v24; // [xsp+58h] [xbp-48h]

  v6 = a3;
  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    activeDeviceClass = self->_activeDeviceClass;
    *(_DWORD *)buf = 136316162;
    v16 = "-[LegacyAudioAccessory didBootstrap:info:error:]";
    v17 = 2112;
    v18 = activeDeviceClass;
    v19 = 1024;
    v20 = v6;
    v21 = 2112;
    v22 = v8;
    v23 = 2112;
    v24 = v9;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_DEFAULT,
      "%s: deviceClass=%@, successful=%d, info=%@, error=%@",
      buf,
      0x30u);
  }
  queue = (dispatch_queue_s *)self->_queue;
  v13[0] = _NSConcreteStackBlock;
  v13[1] = 3254779904LL;
  v13[2] = sub_100006674;
  v13[3] = &unk_100031480;
  v14 = v6;
  v13[4] = self;
  dispatch_async(queue, v13);
  objc_release(v9);
  objc_release(v8);
}