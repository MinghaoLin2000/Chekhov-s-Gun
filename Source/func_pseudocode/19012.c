-[SiriNCAlertViewController siriViewController:launchApplicationWithBundleIdentifier:withURL:]
bool __cdecl -[SiriNCAlertViewController siriViewController:launchApplicationWithBundleIdentifier:withURL:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  __CFString *v9; // x20
  unsigned __int64 v10; // x21
  const __CFArray *v11; // x0
  const __CFArray *v12; // x23
  __int64 v13; // x24
  const __CFArray *v14; // x24
  OSStatus v15; // w0
  __int64 v16; // x25
  _BOOL4 v17; // w25
  __int64 v18; // x25
  SiriUIDismissalOptions *v19; // x24
  AFUISiriViewController *v20; // x25
  bool v21; // w23
  void *values; // [xsp+8h] [xbp-78h] BYREF
  LSLaunchURLSpec inLaunchSpec; // [xsp+10h] [xbp-70h] BYREF
  CFErrorRef outError; // [xsp+38h] [xbp-48h] BYREF

  v8 = objc_retain(a3);
  v9 = (__CFString *)objc_retain(a4);
  v10 = (unsigned __int64)objc_retain(a5);
  if ( !((unsigned __int64)v9 | v10) )
  {
LABEL_35:
    v21 = 0;
    goto LABEL_36;
  }
  outError = 0LL;
  memset(&inLaunchSpec, 0, sizeof(inLaunchSpec));
  if ( v9 )
  {
    v11 = LSCopyApplicationURLsForBundleIdentifier(v9, &outError);
    v12 = v11;
    if ( v11 && CFArrayGetCount(v11) >= 1 )
      inLaunchSpec.appURL = (CFURLRef)CFArrayGetValueAtIndex(v12, 0LL);
    if ( outError )
    {
      v13 = AFSiriLogContextConnection;
      if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_ERROR) )
        sub_100012DDC(v9, &outError, v13);
      v14 = 0LL;
LABEL_19:
      v17 = 0;
      goto LABEL_27;
    }
  }
  else
  {
    v12 = 0LL;
  }
  inLaunchSpec.launchFlags = 65537;
  if ( v10 )
  {
    values = (void *)v10;
    v14 = CFArrayCreate(0LL, (const void **)&values, 1LL, &kCFTypeArrayCallBacks);
    inLaunchSpec.itemURLs = v14;
  }
  else
  {
    v14 = 0LL;
  }
  v15 = LSOpenFromURLSpec(&inLaunchSpec, 0LL);
  if ( v15 )
  {
    if ( v15 == -10814 )
    {
      if ( v10 )
      {
        v16 = AFSiriLogContextConnection;
        if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_ERROR) )
          sub_100012D5C(v10, v16);
      }
      goto LABEL_19;
    }
    v17 = 0;
    if ( v9 && v10 && v15 == -10820 )
    {
      v18 = AFSiriLogContextConnection;
      if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_ERROR) )
        sub_100012CE0(v9, v10, v18);
      inLaunchSpec.itemURLs = 0LL;
      v17 = LSOpenFromURLSpec(&inLaunchSpec, 0LL) == 0;
    }
  }
  else
  {
    v17 = 1;
  }
LABEL_27:
  if ( outError )
    CFRelease(outError);
  if ( v12 )
    CFRelease(v12);
  if ( v14 )
    CFRelease(v14);
  if ( !v17 )
    goto LABEL_35;
  v19 = objc_retainAutoreleasedReturnValue(
          +[SiriUIDismissalOptions optionsWithDismissalReason:](
            &OBJC_CLASS___SiriUIDismissalOptions,
            "optionsWithDismissalReason:",
            2LL));
  v20 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  v21 = 1;
  -[SiriNCAlertViewController dismissSiriViewController:dismissalOptions:delayForTTS:](
    self,
    "dismissSiriViewController:dismissalOptions:delayForTTS:",
    v20,
    v19,
    1LL);
  objc_release(v20);
  objc_release(v19);
LABEL_36:
  objc_release((id)v10);
  objc_release(v9);
  objc_release(v8);
  return v21;
}