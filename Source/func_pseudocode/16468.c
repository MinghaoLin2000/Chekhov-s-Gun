-[LegacyAudioController loadMatchingAccessoriesList]
id __cdecl -[LegacyAudioController loadMatchingAccessoriesList](LegacyAudioController *self, SEL a2)
{
  void *v2; // x19
  NSURL *v3; // x23
  NSDictionary *v4; // x24
  id v5; // x20
  NSBundle *v6; // x21
  void *v7; // x21
  int v9; // [xsp+0h] [xbp-60h] BYREF
  const __CFString *v10; // [xsp+4h] [xbp-5Ch]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v2 = (void *)MGCopyAnswer(CFSTR("InternalBuild"), 0LL);
  if ( ((unsigned int)objc_msgSend(v2, "boolValue") & 1) == 0 )
    goto LABEL_7;
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    v9 = 138412290;
    v10 = CFSTR("/AppleInternal/usr/local/misc/SupportedAccessories-iAUPLegacyAudio.plist");
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Use Alternate Accessory List from %@",
      (uint8_t *)&v9,
      0xCu);
  }
  v3 = objc_retainAutoreleasedReturnValue(
         +[NSURL fileURLWithPath:](
           &OBJC_CLASS___NSURL,
           "fileURLWithPath:",
           CFSTR("/AppleInternal/usr/local/misc/SupportedAccessories-iAUPLegacyAudio.plist")));
  v4 = objc_retainAutoreleasedReturnValue(+[NSDictionary dictionaryWithContentsOfURL:](&OBJC_CLASS___NSDictionary, "dictionaryWithContentsOfURL:", v3));
  v5 = objc_retainAutoreleasedReturnValue(
         -[NSDictionary objectForKeyedSubscript:](
           v4,
           "objectForKeyedSubscript:",
           CFSTR("MobileAccessoryUpdaterProperties")));
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    v9 = 138412290;
    v10 = CFSTR("/AppleInternal/usr/local/misc/SupportedAccessories-iAUPLegacyAudio.plist");
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Loaded Alternate Accessory List from %@",
      (uint8_t *)&v9,
      0xCu);
  }
  objc_release(v4);
  objc_release(v3);
  if ( !v5 )
  {
LABEL_7:
    v6 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v5 = objc_retainAutoreleasedReturnValue(
           -[NSBundle objectForInfoDictionaryKey:](
             v6,
             "objectForInfoDictionaryKey:",
             CFSTR("MobileAccessoryUpdaterProperties")));
    objc_release(v6);
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
    {
      LOWORD(v9) = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "Loaded Native iAUP Accessory List",
        (uint8_t *)&v9,
        2u);
    }
  }
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKey:", CFSTR("MatchingDevices")));
  objc_release(v2);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}