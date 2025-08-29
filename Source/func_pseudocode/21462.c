-[LSRSpeechAssets installedLanguageDetectorAssetWithClientID:]
id __cdecl -[LSRSpeechAssets installedLanguageDetectorAssetWithClientID:](LSRSpeechAssets *self, SEL a2, id a3)
{
  id v3; // x19
  NSUserDefaults *v4; // x21
  NSString *v5; // x20
  os_log_s *v6; // x21
  NSString *v7; // x21
  void *v8; // x22
  SFEntitledAssetManager *v9; // x23
  os_log_s *v10; // x23
  int v12; // [xsp+0h] [xbp-50h] BYREF
  const char *v13; // [xsp+4h] [xbp-4Ch]
  __int16 v14; // [xsp+Ch] [xbp-44h]
  NSString *v15; // [xsp+Eh] [xbp-42h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSUserDefaults stringForKey:](v4, "stringForKey:", kSFSpeechRecognizerCustomLIDAssetPathKey));
  objc_release(v4);
  if ( v5 && -[NSString length](v5, "length") && (unsigned int)SFIsInternalInstall() )
  {
    v6 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      v12 = 136315394;
      v13 = "-[LSRSpeechAssets installedLanguageDetectorAssetWithClientID:]";
      v14 = 2112;
      v15 = v5;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v6,
        OS_LOG_TYPE_INFO,
        "%s Custom Language Detection asset path: %@",
        (uint8_t *)&v12,
        0x16u);
    }
    v7 = objc_retain(v5);
  }
  else
  {
    v8 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___SFEntitledAssetConfig),
           "initWithLanguage:assetType:",
           CFSTR("en-US"),
           6LL);
    v9 = objc_retainAutoreleasedReturnValue(+[SFEntitledAssetManager sharedInstance](&OBJC_CLASS___SFEntitledAssetManager, "sharedInstance"));
    v7 = objc_retainAutoreleasedReturnValue(
           -[SFEntitledAssetManager installedAssetWithConfig:regionId:shouldSubscribe:subscriberId:expiration:](
             v9,
             "installedAssetWithConfig:regionId:shouldSubscribe:subscriberId:expiration:",
             v8,
             0LL,
             1LL,
             v3,
             0LL));
    objc_release(v9);
    v10 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      v12 = 136315394;
      v13 = "-[LSRSpeechAssets installedLanguageDetectorAssetWithClientID:]";
      v14 = 2112;
      v15 = v7;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v10,
        OS_LOG_TYPE_INFO,
        "%s Language Detection asset path: %@",
        (uint8_t *)&v12,
        0x16u);
    }
    objc_release(v8);
  }
  objc_release(v5);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}