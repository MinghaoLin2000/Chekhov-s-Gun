-[LegacyAudioAccessory didFind:info:updateAvailable:needsDownload:error:]
void __cdecl -[LegacyAudioAccessory didFind:info:updateAvailable:needsDownload:error:](
        LegacyAudioAccessory *self,
        SEL a2,
        bool a3,
        id a4,
        bool a5,
        bool a6,
        id a7)
{
  _BOOL4 v8; // w20
  _BOOL4 v9; // w21
  _BOOL4 v10; // w22
  id v12; // x24
  id v13; // x19
  OS_os_log *log; // x25
  NSString *activeDeviceClass; // x8
  dispatch_queue_s *queue; // x25
  id v17; // x20
  _QWORD block[5]; // [xsp+8h] [xbp-C8h] BYREF
  id v19; // [xsp+30h] [xbp-A0h]
  bool v20; // [xsp+38h] [xbp-98h]
  bool v21; // [xsp+39h] [xbp-97h]
  bool v22; // [xsp+3Ah] [xbp-96h]
  uint8_t buf[4]; // [xsp+40h] [xbp-90h] BYREF
  const char *v24; // [xsp+44h] [xbp-8Ch]
  __int16 v25; // [xsp+4Ch] [xbp-84h]
  NSString *v26; // [xsp+4Eh] [xbp-82h]
  __int16 v27; // [xsp+56h] [xbp-7Ah]
  _BOOL4 v28; // [xsp+58h] [xbp-78h]
  __int16 v29; // [xsp+5Ch] [xbp-74h]
  id v30; // [xsp+5Eh] [xbp-72h]
  __int16 v31; // [xsp+66h] [xbp-6Ah]
  _BOOL4 v32; // [xsp+68h] [xbp-68h]
  __int16 v33; // [xsp+6Ch] [xbp-64h]
  _BOOL4 v34; // [xsp+6Eh] [xbp-62h]
  __int16 v35; // [xsp+72h] [xbp-5Eh]
  id v36; // [xsp+74h] [xbp-5Ch]

  v8 = a6;
  v9 = a5;
  v10 = a3;
  v12 = objc_retain(a4);
  v13 = objc_retain(a7);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    activeDeviceClass = self->_activeDeviceClass;
    *(_DWORD *)buf = 136316674;
    v24 = "-[LegacyAudioAccessory didFind:info:updateAvailable:needsDownload:error:]";
    v25 = 2112;
    v26 = activeDeviceClass;
    v27 = 1024;
    v28 = v10;
    v29 = 2112;
    v30 = v12;
    v31 = 1024;
    v32 = v9;
    v33 = 1024;
    v34 = v8;
    v35 = 2112;
    v36 = v13;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_DEFAULT,
      "%s: deviceClass=%@, successful=%d, info=%@, updateAvailable=%d, needsDownload=%d, error=%@",
      buf,
      0x3Cu);
  }
  queue = (dispatch_queue_s *)self->_queue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100006880;
  block[3] = &unk_1000314B0;
  block[4] = self;
  v19 = v12;
  v20 = v10;
  v21 = v9;
  v22 = v8;
  v17 = objc_retain(v12);
  dispatch_async(queue, block);
  objc_release(v19);
  objc_release(v17);
  objc_release(v13);
}