-[LegacyAudioAccessory log:format:]
void __cdecl -[LegacyAudioAccessory log:format:](LegacyAudioAccessory *self, SEL a2, int a3, id a4)
{
  id v5; // x21
  void *v6; // x19
  OS_os_log *log; // x20
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  void *v9; // [xsp+14h] [xbp-3Ch]
  __int64 v10; // [xsp+60h] [xbp+10h] BYREF

  v5 = objc_retain(a4);
  v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:arguments:", v5, &v10);
  objc_release(v5);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138412290;
    v9 = v6;
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%@", buf, 0xCu);
  }
  objc_release(v6);
}