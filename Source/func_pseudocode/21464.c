-[LSRSpeechAssets installedGeoLMRegionSpecificAssetForLanguage:clientID:regionId:mainAssetConfig:]
id __cdecl -[LSRSpeechAssets installedGeoLMRegionSpecificAssetForLanguage:clientID:regionId:mainAssetConfig:](
        LSRSpeechAssets *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x21
  id v13; // x25
  void *v14; // x22
  SFEntitledAssetManager *v15; // x26
  void *v16; // x23
  void *v17; // x26
  void *v18; // x25
  id v19; // x24
  os_log_s *v20; // x24
  os_log_s *v21; // x24
  int v23; // [xsp+0h] [xbp-80h] BYREF
  const char *v24; // [xsp+4h] [xbp-7Ch]
  __int16 v25; // [xsp+Ch] [xbp-74h]
  id v26; // [xsp+Eh] [xbp-72h]
  __int16 v27; // [xsp+16h] [xbp-6Ah]
  id v28; // [xsp+18h] [xbp-68h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a5);
  v12 = objc_retain(a6);
  v13 = objc_retain(a4);
  v14 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___SFEntitledAssetConfig), "initWithLanguage:assetType:", v10, 5LL);
  v15 = objc_retainAutoreleasedReturnValue(+[SFEntitledAssetManager sharedInstance](&OBJC_CLASS___SFEntitledAssetManager, "sharedInstance"));
  v16 = objc_retainAutoreleasedReturnValue(
          -[SFEntitledAssetManager installedAssetWithConfig:regionId:shouldSubscribe:subscriberId:expiration:](
            v15,
            "installedAssetWithConfig:regionId:shouldSubscribe:subscriberId:expiration:",
            v14,
            v11,
            1LL,
            v13,
            0LL));
  objc_release(v13);
  objc_release(v15);
  if ( objc_msgSend(v16, "length") )
  {
    v17 = objc_retainAutoreleasedReturnValue(
            +[SFEntitledAssetManager jsonFilenameForAssetType:](
              &OBJC_CLASS___SFEntitledAssetManager,
              "jsonFilenameForAssetType:",
              5LL));
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "stringByAppendingPathComponent:", v17));
    objc_release(v17);
    if ( -[LSRSpeechAssets _geoLMCompatibleWithMainAsset:geoAssetConfig:](
           self,
           "_geoLMCompatibleWithMainAsset:geoAssetConfig:",
           v12,
           v18) )
    {
      v19 = objc_retain(v18);
    }
    else
    {
      v21 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_FAULT) )
      {
        v23 = 136315395;
        v24 = "-[LSRSpeechAssets installedGeoLMRegionSpecificAssetForLanguage:clientID:regionId:mainAssetConfig:]";
        v25 = 2113;
        v26 = v11;
        _os_log_fault_impl(
          (void *)&_mh_execute_header,
          v21,
          OS_LOG_TYPE_FAULT,
          "%s GeoLM: Region specific asset for %{private}@ is incompatible with the main asset.",
          (uint8_t *)&v23,
          0x16u);
      }
      v19 = 0LL;
    }
    objc_release(v18);
  }
  else
  {
    v20 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      v23 = 136315651;
      v24 = "-[LSRSpeechAssets installedGeoLMRegionSpecificAssetForLanguage:clientID:regionId:mainAssetConfig:]";
      v25 = 2112;
      v26 = v10;
      v27 = 2113;
      v28 = v11;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v20,
        OS_LOG_TYPE_INFO,
        "%s GeoLM: No region specific asset found for language: %@, regionId: %{private}@",
        (uint8_t *)&v23,
        0x20u);
    }
    v19 = 0LL;
  }
  objc_release(v16);
  objc_release(v14);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v19);
}