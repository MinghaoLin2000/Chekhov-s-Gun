-[InternationalCloudMediator setLocale:]
void __cdecl -[InternationalCloudMediator setLocale:](InternationalCloudMediator *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  id v5; // x21
  void *v6; // x22
  id v7; // x21
  NSDistributedNotificationCenter *v8; // x22
  _QWORD v9[4]; // [xsp+8h] [xbp-58h] BYREF
  id v10; // [xsp+28h] [xbp-38h]
  uint8_t buf[16]; // [xsp+30h] [xbp-30h] BYREF

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN XPCSERVICE - Update locale",
      buf,
      2u);
  }
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "firstObject"));
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
    sub_1000024B4(v4);
  v5 = objc_retainAutoreleasedReturnValue(+[IPLocaleCoder localePreferenceKeysAndClasses](&OBJC_CLASS___IPLocaleCoder, "localePreferenceKeysAndClasses"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "allKeys"));
  objc_release(v5);
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_100001BB0;
  v9[3] = &unk_100004198;
  v10 = v6;
  v7 = objc_retain(v6);
  objc_msgSend(v4, "enumerateKeysAndObjectsUsingBlock:", v9);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSDistributedNotificationCenter defaultCenter](
           &OBJC_CLASS___NSDistributedNotificationCenter,
           "defaultCenter"));
  -[NSDistributedNotificationCenter postNotificationName:object:](
    v8,
    "postNotificationName:object:",
    CFSTR("AppleDatePreferencesChangedNotification"),
    0LL);
  -[NSDistributedNotificationCenter postNotificationName:object:](
    v8,
    "postNotificationName:object:",
    CFSTR("AppleTimePreferencesChangedNotification"),
    0LL);
  -[NSDistributedNotificationCenter postNotificationName:object:](
    v8,
    "postNotificationName:object:",
    CFSTR("AppleNumberPreferencesChangedNotification"),
    0LL);
  -[NSDistributedNotificationCenter postNotificationName:object:](
    v8,
    "postNotificationName:object:",
    CFSTR("AppleTemperatureUnitPreferencesChangedNotification"),
    0LL);
  objc_release(v8);
  objc_release(v10);
  objc_release(v7);
  objc_release(v4);
  objc_release(v3);
}