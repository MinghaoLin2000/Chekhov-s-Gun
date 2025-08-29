-[LSRSpeechAssets _geoLMCompatibleWithMainAsset:geoAssetConfig:]
bool __cdecl -[LSRSpeechAssets _geoLMCompatibleWithMainAsset:geoAssetConfig:](
        LSRSpeechAssets *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  id v6; // x20
  void *v7; // x21
  void *v8; // x22
  void *v9; // x23
  void *v10; // x24
  unsigned __int8 v11; // w25
  bool v12; // w21
  os_log_s *v13; // x23
  void *v15; // x24
  void *v16; // x25
  int v17; // [xsp+0h] [xbp-80h] BYREF
  const char *v18; // [xsp+4h] [xbp-7Ch]
  __int16 v19; // [xsp+Ch] [xbp-74h]
  void *v20; // [xsp+Eh] [xbp-72h]
  __int16 v21; // [xsp+16h] [xbp-6Ah]
  void *v22; // [xsp+18h] [xbp-68h]
  __int16 v23; // [xsp+20h] [xbp-60h]
  id v24; // [xsp+22h] [xbp-5Eh]
  __int16 v25; // [xsp+2Ah] [xbp-56h]
  id v26; // [xsp+2Ch] [xbp-54h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS____EARSpeechModelInfo), "initWithConfig:", v5);
  v8 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS____EARSpeechModelInfo), "initWithConfig:", v6);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "version"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "version"));
  v11 = (unsigned __int8)objc_msgSend(v9, "isEqualToString:", v10);
  objc_release(v10);
  objc_release(v9);
  if ( (v11 & 1) != 0 )
  {
    objc_release(v8);
    objc_release(v7);
    v12 = 1;
  }
  else
  {
    v13 = (os_log_s *)objc_retain(SFLogConnection);
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
    {
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "version"));
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "version"));
      v17 = 136316162;
      v18 = "-[LSRSpeechAssets _geoLMCompatibleWithMainAsset:geoAssetConfig:]";
      v19 = 2112;
      v20 = v15;
      v21 = 2112;
      v22 = v16;
      v23 = 2112;
      v24 = v5;
      v25 = 2112;
      v26 = v6;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v13,
        OS_LOG_TYPE_ERROR,
        "%s GeoLM: model-info.version doesn't match. mainASRModelInfo.version=%@ geoLMModelInfo.version=%@ mainAssetConfi"
        "g=%@ geoAssetConfig=%@",
        (uint8_t *)&v17,
        0x34u);
      objc_release(v16);
      objc_release(v15);
    }
    objc_release(v13);
    objc_release(v8);
    objc_release(v7);
    v12 = 0;
  }
  objc_release(v6);
  objc_release(v5);
  return v12;
}