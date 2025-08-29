-[InternationalCloudMediator liveText]
id __cdecl -[InternationalCloudMediator liveText](InternationalCloudMediator *self, SEL a2)
{
  NSUserDefaults *v2; // x21
  void *v3; // x20
  unsigned __int64 v4; // x22
  _UNKNOWN **v5; // x21
  void *v6; // x23
  NSArray *v7; // x24
  void *v8; // x25
  NSNumber *v9; // x0
  void *v11; // [xsp+0h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    LOWORD(v11) = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE LiveText",
      (uint8_t *)&v11,
      2u);
  }
  v2 = objc_retainAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
  v3 = objc_retainAutoreleasedReturnValue(
         -[NSUserDefaults objectForKey:inDomain:](
           v2,
           "objectForKey:inDomain:",
           CFSTR("AppleLiveTextEnabled"),
           NSGlobalDomain));
  objc_release(v2);
  if ( v3 )
  {
    v4 = (unsigned __int64)objc_msgSend(v3, "boolValue");
  }
  else
  {
    if ( (unsigned int)_os_feature_enabled_impl("TextRecognition", "extended_latin") )
      v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(&off_1000048B0, "arrayByAddingObjectsFromArray:", &off_1000048C8));
    else
      v5 = &off_1000048B0;
    v6 = objc_retainAutoreleasedReturnValue(+[NSLocale _deviceLanguage](&OBJC_CLASS___NSLocale, "_deviceLanguage"));
    v11 = v6;
    v7 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v11, 1LL));
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSLocale matchedLanguagesFromAvailableLanguages:forPreferredLanguages:](
             &OBJC_CLASS___NSLocale,
             "matchedLanguagesFromAvailableLanguages:forPreferredLanguages:",
             v5,
             v7));
    objc_release(v7);
    objc_release(v6);
    v4 = objc_msgSend(v8, "count") != 0LL;
    objc_release(v8);
    objc_release(v5);
  }
  objc_release(v3);
  v9 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v4));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}