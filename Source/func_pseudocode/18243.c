-[INHService storeUserContext:forBundleIdentifier:]
void __cdecl -[INHService storeUserContext:forBundleIdentifier:](INHService *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  os_log_s *v7; // x21
  void *v8; // x21
  int v9; // [xsp+0h] [xbp-50h] BYREF
  const char *v10; // [xsp+4h] [xbp-4Ch]
  __int16 v11; // [xsp+Ch] [xbp-44h]
  id v12; // [xsp+Eh] [xbp-42h]
  __int16 v13; // [xsp+16h] [xbp-3Ah]
  id v14; // [xsp+18h] [xbp-38h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = (os_log_s *)INSiriLogContextIntents;
  if ( os_log_type_enabled(INSiriLogContextIntents, OS_LOG_TYPE_INFO) )
  {
    v9 = 136315650;
    v10 = "-[INHService storeUserContext:forBundleIdentifier:]";
    v11 = 2112;
    v12 = v5;
    v13 = 2112;
    v14 = v6;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v7,
      OS_LOG_TYPE_INFO,
      "%s Within intents_helper, entitled-saving UserContext:%@ for bundle: %@",
      (uint8_t *)&v9,
      0x20u);
  }
  v8 = objc_retainAutoreleasedReturnValue(+[INUserContextStore sharedStore](&OBJC_CLASS___INUserContextStore, "sharedStore"));
  objc_msgSend(v8, "storeUserContext:forBundleIdentifier:", v5, v6);
  objc_release(v8);
  objc_release(v6);
  objc_release(v5);
}