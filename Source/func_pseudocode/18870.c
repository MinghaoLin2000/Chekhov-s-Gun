-[SiriNCService updateBridgeOSInterstitialsWithCompletion:]
void __cdecl -[SiriNCService updateBridgeOSInterstitialsWithCompletion:](SiriNCService *self, SEL a2, id a3)
{
  id v3; // x19
  os_log_s *v4; // x20
  int v5; // [xsp+0h] [xbp-30h] BYREF
  const char *v6; // [xsp+4h] [xbp-2Ch]

  v3 = objc_retain(a3);
  v4 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v5 = 136315138;
    v6 = "-[SiriNCService updateBridgeOSInterstitialsWithCompletion:]";
    _os_log_impl((void *)&_mh_execute_header, v4, OS_LOG_TYPE_DEFAULT, "%s ", (uint8_t *)&v5, 0xCu);
  }
  +[SiriUIInterstitials updateBridgeOSInterstitialsWithCompletion:](
    &OBJC_CLASS___SiriUIInterstitials,
    "updateBridgeOSInterstitialsWithCompletion:",
    v3);
  objc_release(v3);
}