_copyPlistDeviceEntryFromDeviceClass
void *__fastcall copyPlistDeviceEntryFromDeviceClass(void *a1)
{
  NSBundle *v2; // x0
  NSBundle *v3; // x20
  const void *v4; // x0
  const __CFString *v5; // x21
  id v6; // x22
  void *v7; // x0
  void *v8; // x20
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  const __CFString *v11; // [xsp+14h] [xbp-3Ch]

  v2 = +[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle");
  if ( v2 )
  {
    v3 = v2;
    v4 = (const void *)MGCopyAnswer(CFSTR("InternalBuild"), 0LL);
    if ( !(unsigned int)objc_msgSend((id)objc_autorelease((id)CFMakeCollectable(v4)), "boolValue") )
      goto LABEL_11;
    if ( (unsigned int)objc_msgSend(a1, "containsString:", CFSTR("com.apple.UARP.")) )
      v5 = CFSTR("/AppleInternal/usr/local/misc/SupportedAccessories-iAUPLegacyAudio.plist");
    else
      v5 = CFSTR("/AppleInternal/usr/local/misc/SupportedAccessories-iAUP.plist");
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 138412290;
      v11 = v5;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "Use Alternate Accessory List from %@",
        buf,
        0xCu);
    }
    v6 = -[NSDictionary objectForKeyedSubscript:](
           +[NSDictionary dictionaryWithContentsOfURL:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithContentsOfURL:",
             +[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v5)),
           "objectForKeyedSubscript:",
           CFSTR("MobileAccessoryUpdaterProperties"));
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 138412290;
      v11 = v5;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "Loaded Alternate Accessory List from %@",
        buf,
        0xCu);
    }
    if ( !v6 )
    {
LABEL_11:
      v6 = -[NSBundle objectForInfoDictionaryKey:](
             v3,
             "objectForInfoDictionaryKey:",
             CFSTR("MobileAccessoryUpdaterProperties"));
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
      {
        *(_WORD *)buf = 0;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_DEFAULT,
          "Loaded Native iAUP Accessory List",
          buf,
          2u);
      }
    }
    v2 = (NSBundle *)objc_msgSend(v6, "objectForKey:", CFSTR("MatchingDevices"));
    if ( v2 )
    {
      v7 = -[NSBundle filteredArrayUsingPredicate:](
             v2,
             "filteredArrayUsingPredicate:",
             +[NSPredicate predicateWithFormat:](
               &OBJC_CLASS___NSPredicate,
               "predicateWithFormat:",
               CFSTR("DeviceClass = %@"),
               a1));
      if ( v7 && (v8 = v7, objc_msgSend(v7, "count")) )
      {
        v2 = (NSBundle *)objc_msgSend(v8, "objectAtIndexedSubscript:", 0LL);
      }
      else
      {
        NSLog(&CFSTR("huh? deviceClass %@ not found").isa, a1);
        v2 = 0LL;
      }
    }
  }
  return -[NSBundle copy](v2, "copy");
}