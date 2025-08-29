-[LegacyAudioAccessory didApply:info:error:]
void __cdecl -[LegacyAudioAccessory didApply:info:error:](LegacyAudioAccessory *self, SEL a2, bool a3, id a4, id a5)
{
  _BOOL4 v6; // w20
  id v8; // x22
  id v9; // x19
  OS_os_log *log; // x23
  NSString *activeDeviceClass; // x8
  dispatch_queue_s *queue; // x23
  id v13; // x20
  _QWORD block[5]; // [xsp+8h] [xbp-A8h] BYREF
  id v15; // [xsp+30h] [xbp-80h]
  bool v16; // [xsp+38h] [xbp-78h]
  uint8_t buf[4]; // [xsp+40h] [xbp-70h] BYREF
  const char *v18; // [xsp+44h] [xbp-6Ch]
  __int16 v19; // [xsp+4Ch] [xbp-64h]
  NSString *v20; // [xsp+4Eh] [xbp-62h]
  __int16 v21; // [xsp+56h] [xbp-5Ah]
  _BOOL4 v22; // [xsp+58h] [xbp-58h]
  __int16 v23; // [xsp+5Ch] [xbp-54h]
  id v24; // [xsp+5Eh] [xbp-52h]
  __int16 v25; // [xsp+66h] [xbp-4Ah]
  id v26; // [xsp+68h] [xbp-48h]

  v6 = a3;
  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    activeDeviceClass = self->_activeDeviceClass;
    *(_DWORD *)buf = 136316162;
    v18 = "-[LegacyAudioAccessory didApply:info:error:]";
    v19 = 2112;
    v20 = activeDeviceClass;
    v21 = 1024;
    v22 = v6;
    v23 = 2112;
    v24 = v8;
    v25 = 2112;
    v26 = v9;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_DEFAULT,
      "%s: deviceClass=%@, successful=%d, info=%@, error=%@",
      buf,
      0x30u);
  }
  queue = (dispatch_queue_s *)self->_queue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10000709C;
  block[3] = &unk_1000314E0;
  block[4] = self;
  v15 = v8;
  v16 = v6;
  v13 = objc_retain(v8);
  dispatch_async(queue, block);
  objc_release(v15);
  objc_release(v13);
  objc_release(v9);
}