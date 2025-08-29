-[SiriNCService isSiriListening:]
void __cdecl -[SiriNCService isSiriListening:](SiriNCService *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, void *); // x19
  os_log_s *v5; // x21
  SiriNCAlertViewController *v6; // x20
  int v7; // [xsp+0h] [xbp-40h] BYREF
  const char *v8; // [xsp+4h] [xbp-3Ch]

  v4 = (void (__fastcall **)(id, void *))objc_retain(a3);
  v5 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v7 = 136315138;
    v8 = "-[SiriNCService isSiriListening:]";
    _os_log_impl((void *)&_mh_execute_header, v5, OS_LOG_TYPE_DEFAULT, "%s ", (uint8_t *)&v7, 0xCu);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[SiriNCService alertViewController](self, "alertViewController"));
  v4[2](v4, (void *)-[SiriNCAlertViewController isSiriListening](v6, "isSiriListening"));
  objc_release(v6);
  objc_release(v4);
}