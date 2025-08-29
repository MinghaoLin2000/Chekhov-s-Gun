+[LSRSpeechAssets assetConfigParameters:]
id __cdecl +[LSRSpeechAssets assetConfigParameters:](id a1, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  id v5; // x21
  id v6; // x0
  void *v7; // x22
  bool v8; // zf
  os_log_s *v9; // x23
  id v10; // x23
  os_log_s *v11; // x21
  id v13; // [xsp+8h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  const char *v15; // [xsp+14h] [xbp-4Ch]
  __int16 v16; // [xsp+1Ch] [xbp-44h]
  id v17; // [xsp+1Eh] [xbp-42h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSData), "initWithContentsOfFile:", v3);
  if ( v4 )
  {
    v13 = 0LL;
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSJSONSerialization JSONObjectWithData:options:error:](
             &OBJC_CLASS___NSJSONSerialization,
             "JSONObjectWithData:options:error:",
             v4,
             0LL,
             &v13));
    v6 = objc_retain(v13);
    v7 = v6;
    if ( v5 )
      v8 = v6 == 0LL;
    else
      v8 = 0;
    if ( v8 )
    {
      v10 = objc_retain(v5);
    }
    else
    {
      v9 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 136315394;
        v15 = "+[LSRSpeechAssets assetConfigParameters:]";
        v16 = 2112;
        v17 = v3;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v9,
          OS_LOG_TYPE_ERROR,
          "%s Failed to parse json config file:%@",
          buf,
          0x16u);
      }
      v10 = 0LL;
    }
    objc_release(v5);
    objc_release(v7);
  }
  else
  {
    v11 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315394;
      v15 = "+[LSRSpeechAssets assetConfigParameters:]";
      v16 = 2112;
      v17 = v3;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v11,
        OS_LOG_TYPE_ERROR,
        "%s Failed to read json file: %@",
        buf,
        0x16u);
    }
    v10 = 0LL;
  }
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}