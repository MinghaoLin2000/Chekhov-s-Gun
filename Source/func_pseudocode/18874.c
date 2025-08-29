-[SiriNCService keyWindowChanged:]
void __cdecl -[SiriNCService keyWindowChanged:](SiriNCService *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x21
  os_log_s *v6; // x21
  void *v7; // x22
  NSNotificationName v8; // x21
  NSNotificationName v9; // x22
  NSNotificationName v10; // x21
  NSNotificationName v11; // x22
  __CFMachPort *eventTap; // x0
  int v13; // [xsp+0h] [xbp-40h] BYREF
  const char *v14; // [xsp+4h] [xbp-3Ch]
  __int16 v15; // [xsp+Ch] [xbp-34h]
  void *v16; // [xsp+Eh] [xbp-32h]

  v4 = objc_retain(a3);
  v5 = (void *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = objc_retain(v5);
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
    v13 = 136315394;
    v14 = "-[SiriNCService keyWindowChanged:]";
    v15 = 2112;
    v16 = v7;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v6,
      OS_LOG_TYPE_DEFAULT,
      "%s key window changed %@",
      (uint8_t *)&v13,
      0x16u);
    objc_release(v7);
    objc_release(v6);
  }
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  v9 = NSWindowDidBecomeKeyNotification;
  objc_release(v8);
  if ( v8 == v9 )
  {
    eventTap = self->_eventTap;
    if ( eventTap )
    {
      CGEventTapEnable(eventTap, 0);
      -[SiriNCService _releaseEventTap](self, "_releaseEventTap");
    }
  }
  else
  {
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
    v11 = NSWindowDidResignKeyNotification;
    objc_release(v10);
    if ( v10 == v11 )
      -[SiriNCService _createEventTap](self, "_createEventTap");
  }
  objc_release(v4);
}