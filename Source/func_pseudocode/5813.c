-[InternationalCloudMediator locale]
id __cdecl -[InternationalCloudMediator locale](InternationalCloudMediator *self, SEL a2)
{
  void *v2; // x19
  id v3; // x20
  id v4; // x19
  NSArray *v5; // x20
  _QWORD v7[4]; // [xsp+8h] [xbp-58h] BYREF
  id v8; // [xsp+28h] [xbp-38h]
  uint8_t buf[16]; // [xsp+30h] [xbp-30h] BYREF
  id v10; // [xsp+40h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE Locale",
      buf,
      2u);
  }
  v2 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v3 = objc_retainAutoreleasedReturnValue(+[IPLocaleCoder localePreferenceKeysAndClasses](&OBJC_CLASS___IPLocaleCoder, "localePreferenceKeysAndClasses"));
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_100002130;
  v7[3] = &unk_100004198;
  v4 = objc_retain(v2);
  v8 = v4;
  objc_msgSend(v3, "enumerateKeysAndObjectsUsingBlock:", v7);
  objc_release(v3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
    sub_100002680(v4);
  v10 = v4;
  v5 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v10, 1LL));
  objc_release(v8);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}