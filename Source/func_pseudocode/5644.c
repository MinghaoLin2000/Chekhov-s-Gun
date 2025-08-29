-[KeyboardSettingsMediator setDictationLanguage:]
void __cdecl -[KeyboardSettingsMediator setDictationLanguage:](KeyboardSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  NSDistributedNotificationCenter *v5; // x20
  uint8_t v6[16]; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v6 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "XPCSERVICE - Dictation language",
      v6,
      2u);
  }
  if ( v3 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100007800(v3);
    v4 = objc_retainAutoreleasedReturnValue(
           +[SODictationPreferences sharedDictationPreferences](
             &OBJC_CLASS___SODictationPreferences,
             "sharedDictationPreferences"));
    objc_msgSend(v4, "setNetworkBasedLocaleIdentifier:", v3);
    objc_release(v4);
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSDistributedNotificationCenter defaultCenter](
             &OBJC_CLASS___NSDistributedNotificationCenter,
             "defaultCenter"));
    -[NSDistributedNotificationCenter postNotificationName:object:userInfo:deliverImmediately:](
      v5,
      "postNotificationName:object:userInfo:deliverImmediately:",
      CFSTR("DictationIMNotificationLanguageChanged"),
      0LL,
      0LL,
      0LL);
    objc_release(v5);
  }
  objc_release(v3);
}