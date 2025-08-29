-[SiriNCService remoteViewBridgeServiceRegistered:]
void __cdecl -[SiriNCService remoteViewBridgeServiceRegistered:](SiriNCService *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x21
  os_log_s *v6; // x21
  void *v7; // x22
  NSMutableDictionary *v8; // x20
  void *v9; // x21
  int v10; // [xsp+0h] [xbp-40h] BYREF
  const char *v11; // [xsp+4h] [xbp-3Ch]
  __int16 v12; // [xsp+Ch] [xbp-34h]
  void *v13; // [xsp+Eh] [xbp-32h]

  v4 = objc_retain(a3);
  v5 = (void *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = objc_retain(v5);
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "remoteViewIdentifier"));
    v10 = 136315394;
    v11 = "-[SiriNCService remoteViewBridgeServiceRegistered:]";
    v12 = 2112;
    v13 = v7;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v6,
      OS_LOG_TYPE_DEFAULT,
      "%s #SiriWindow: remote ViewBridge service registered with identifier: %@",
      (uint8_t *)&v10,
      0x16u);
    objc_release(v7);
    objc_release(v6);
  }
  v8 = objc_retainAutoreleasedReturnValue(-[SiriNCService viewServices](self, "viewServices"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "remoteViewIdentifier"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v4, v9);
  objc_release(v9);
  objc_release(v8);
  objc_release(v4);
}