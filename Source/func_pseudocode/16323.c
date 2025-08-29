-[LegacyAudioAccessory showPersonalizationRequiredDialogAndGetResponse]
bool __cdecl -[LegacyAudioAccessory showPersonalizationRequiredDialogAndGetResponse](
        LegacyAudioAccessory *self,
        SEL a2)
{
  id v3; // x19
  __CFString *v4; // x20
  const __CFString *v5; // x8
  NSString *v6; // x21
  void *v7; // x22
  __CFUserNotification *v8; // x0
  __CFUserNotification *v9; // x24
  bool v10; // w23
  CFOptionFlags responseFlags; // [xsp+10h] [xbp-40h] BYREF
  SInt32 error; // [xsp+1Ch] [xbp-34h] BYREF

  if ( !(unsigned int)MGGetBoolAnswer(CFSTR("InternalBuild"), a2) )
    return 0;
  v3 = objc_retainAutoreleasedReturnValue(
         -[LegacyAudioAccessory getMatchingEntryForEAIdentifier:](
           self,
           "getMatchingEntryForEAIdentifier:",
           self->_activeDeviceClass));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", CFSTR("DeviceClassName")));
  v5 = CFSTR("your accessory");
  if ( v4 )
    v5 = v4;
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithValidatedFormat:validFormatSpecifiers:error:](
           &OBJC_CLASS___NSString,
           "stringWithValidatedFormat:validFormatSpecifiers:error:",
           CFSTR("New Firmware available for %@. This requires Personalization, you will be prompted for your credentials."),
           CFSTR("%@"),
           0LL,
           v5));
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  objc_msgSend(v7, "setObject:forKey:", CFSTR("*** INTERNAL ONLY ***"), kCFUserNotificationAlertHeaderKey);
  objc_msgSend(v7, "setObject:forKey:", v6, kCFUserNotificationAlertMessageKey);
  objc_msgSend(v7, "setObject:forKey:", CFSTR("OK"), kCFUserNotificationDefaultButtonTitleKey);
  objc_msgSend(v7, "setObject:forKey:", CFSTR("Cancel"), kCFUserNotificationAlternateButtonTitleKey);
  error = 0;
  v8 = CFUserNotificationCreate(kCFAllocatorDefault, 0.0, 0x21uLL, &error, (CFDictionaryRef)v7);
  if ( v8 )
  {
    v9 = v8;
    responseFlags = 0LL;
    CFUserNotificationReceiveResponse(v8, 0.0, &responseFlags);
    v10 = responseFlags == 0;
    CFRelease(v9);
  }
  else
  {
    v10 = 0;
  }
  objc_release(v7);
  objc_release(v6);
  objc_release(v4);
  objc_release(v3);
  return v10;
}