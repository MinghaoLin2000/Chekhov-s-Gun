-[LSRConnection stopSpeech]
void __cdecl -[LSRConnection stopSpeech](LSRConnection *self, SEL a2)
{
  os_log_s *v3; // x20
  _QWORD block[5]; // [xsp+8h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-30h] BYREF
  const char *v6; // [xsp+34h] [xbp-2Ch]
  __int16 v7; // [xsp+3Ch] [xbp-24h]
  LSRConnection *v8; // [xsp+3Eh] [xbp-22h]

  v3 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315394;
    v6 = "-[LSRConnection stopSpeech]";
    v7 = 2048;
    v8 = self;
    _os_log_impl((void *)&_mh_execute_header, v3, OS_LOG_TYPE_INFO, "%s stopSpeech - %p", buf, 0x16u);
  }
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10003B3D0;
  block[3] = &unk_100059D18;
  block[4] = self;
  dispatch_async((dispatch_queue_t)qword_100065418, block);
}