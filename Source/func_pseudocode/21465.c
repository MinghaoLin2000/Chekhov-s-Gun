-[LSRSpeechAssets installedHammerConfigFileForLanguage:assetType:clientID:]
id __cdecl -[LSRSpeechAssets installedHammerConfigFileForLanguage:assetType:clientID:](
        LSRSpeechAssets *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5)
{
  id v7; // x19
  id v8; // x24
  id v9; // x22
  void *v10; // x20
  SFEntitledAssetManager *v11; // x23
  void *v12; // x21
  void *v13; // x23
  void *v14; // x22
  void *v15; // x23
  os_log_s *v16; // x22
  os_log_s *v17; // x24
  int v19; // [xsp+0h] [xbp-50h] BYREF
  const char *v20; // [xsp+4h] [xbp-4Ch]
  __int16 v21; // [xsp+Ch] [xbp-44h]
  id v22; // [xsp+Eh] [xbp-42h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v7 = objc_retain(a3);
  if ( a4 == 7 )
  {
    v8 = 0LL;
  }
  else
  {
    v9 = objc_retain(a5);
    v10 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___SFEntitledAssetConfig), "initWithLanguage:assetType:", v7, 1LL);
    v11 = objc_retainAutoreleasedReturnValue(+[SFEntitledAssetManager sharedInstance](&OBJC_CLASS___SFEntitledAssetManager, "sharedInstance"));
    v12 = objc_retainAutoreleasedReturnValue(
            -[SFEntitledAssetManager installedAssetWithConfig:regionId:shouldSubscribe:subscriberId:expiration:](
              v11,
              "installedAssetWithConfig:regionId:shouldSubscribe:subscriberId:expiration:",
              v10,
              0LL,
              1LL,
              v9,
              0LL));
    objc_release(v9);
    objc_release(v11);
    if ( objc_msgSend(v12, "length") )
    {
      v13 = objc_retainAutoreleasedReturnValue(
              +[SFEntitledAssetManager jsonFilenameForAssetType:](
                &OBJC_CLASS___SFEntitledAssetManager,
                "jsonFilenameForAssetType:",
                1LL));
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "stringByAppendingPathComponent:", v13));
      objc_release(v13);
      v15 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS____EARSpeechModelInfo), "initWithConfig:", v14);
      if ( v15 )
      {
        v8 = objc_retain(v14);
      }
      else
      {
        v17 = (os_log_s *)SFLogConnection;
        if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_FAULT) )
        {
          v19 = 136315394;
          v20 = "-[LSRSpeechAssets installedHammerConfigFileForLanguage:assetType:clientID:]";
          v21 = 2112;
          v22 = v14;
          _os_log_fault_impl(
            (void *)&_mh_execute_header,
            v17,
            OS_LOG_TYPE_FAULT,
            "%s Failed to read Hammer config file at path: %@",
            (uint8_t *)&v19,
            0x16u);
        }
        v8 = 0LL;
      }
      objc_release(v15);
      objc_release(v14);
    }
    else
    {
      v16 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
      {
        v19 = 136315394;
        v20 = "-[LSRSpeechAssets installedHammerConfigFileForLanguage:assetType:clientID:]";
        v21 = 2112;
        v22 = v7;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v16,
          OS_LOG_TYPE_INFO,
          "%s No Hammer asset found for language: %@",
          (uint8_t *)&v19,
          0x16u);
      }
      v8 = 0LL;
    }
    objc_release(v12);
    objc_release(v10);
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}