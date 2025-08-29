-[InternationalCloudMediator setLiveText:]
void __cdecl -[InternationalCloudMediator setLiveText:](InternationalCloudMediator *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  NSUserDefaults *v5; // x21
  NSNumber *v6; // x20
  uint8_t v7[16]; // [xsp+0h] [xbp-30h] BYREF

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v7 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN XPCSERVICE - Update live text",
      v7,
      2u);
  }
  if ( v3 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100002594(v3);
    v4 = objc_msgSend(v3, "boolValue");
    v5 = objc_retainAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
    v6 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v4));
    -[NSUserDefaults setObject:forKey:inDomain:](
      v5,
      "setObject:forKey:inDomain:",
      v6,
      CFSTR("AppleLiveTextEnabled"),
      NSGlobalDomain);
    objc_release(v6);
    objc_release(v5);
  }
  objc_release(v3);
}