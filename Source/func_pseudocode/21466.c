-[LSRSpeechAssets installedLanguagesForAssetType:completion:]
void __cdecl -[LSRSpeechAssets installedLanguagesForAssetType:completion:](
        LSRSpeechAssets *self,
        SEL a2,
        unsigned __int64 a3,
        id a4)
{
  void (__fastcall **v5)(id, void *); // x19
  SFEntitledAssetManager *v6; // x22
  void *v7; // x20
  void *v8; // x22
  os_log_s *v9; // x22
  id v10; // x21
  int v11; // [xsp+0h] [xbp-50h] BYREF
  const char *v12; // [xsp+4h] [xbp-4Ch]
  __int16 v13; // [xsp+Ch] [xbp-44h]
  id v14; // [xsp+Eh] [xbp-42h]
  __int16 v15; // [xsp+16h] [xbp-3Ah]
  void *v16; // [xsp+18h] [xbp-38h]

  if ( a4 )
  {
    v5 = (void (__fastcall **)(id, void *))objc_retain(a4);
    v6 = objc_retainAutoreleasedReturnValue(+[SFEntitledAssetManager sharedInstance](&OBJC_CLASS___SFEntitledAssetManager, "sharedInstance"));
    v7 = objc_retainAutoreleasedReturnValue(-[SFEntitledAssetManager installedLanguagesForAssetType:](v6, "installedLanguagesForAssetType:", a3));
    objc_release(v6);
    v8 = (void *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      v9 = objc_retain(v8);
      v10 = objc_retainAutoreleasedReturnValue((id)SFEntitledAssetTypeToString(a3));
      v11 = 136315650;
      v12 = "-[LSRSpeechAssets installedLanguagesForAssetType:completion:]";
      v13 = 2112;
      v14 = v10;
      v15 = 2112;
      v16 = v7;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v9,
        OS_LOG_TYPE_INFO,
        "%s Installed languages for %@: %@",
        (uint8_t *)&v11,
        0x20u);
      objc_release(v10);
      objc_release(v9);
    }
    v5[2](v5, v7);
    objc_release(v5);
    objc_release(v7);
  }
}