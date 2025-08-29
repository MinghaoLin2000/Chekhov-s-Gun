-[LSRConnection unsubscribeFromAssetWithConfig:clientID:completion:]
void __cdecl -[LSRConnection unsubscribeFromAssetWithConfig:clientID:completion:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  void (__fastcall **v9)(id, NSError *); // x21
  os_log_s *v10; // x22
  NSError *v11; // x22
  int v12; // [xsp+0h] [xbp-40h] BYREF
  const char *v13; // [xsp+4h] [xbp-3Ch]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = (void (__fastcall **)(id, NSError *))objc_retain(a5);
  if ( (sub_100035FE0() & 1) == 0 )
  {
    v10 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      v12 = 136315138;
      v13 = "-[LSRConnection unsubscribeFromAssetWithConfig:clientID:completion:]";
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v10,
        OS_LOG_TYPE_ERROR,
        "%s Request not authorized",
        (uint8_t *)&v12,
        0xCu);
      if ( !v9 )
        goto LABEL_7;
    }
    else if ( !v9 )
    {
      goto LABEL_7;
    }
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              kAFAssistantErrorDomain,
              1700LL,
              0LL));
    v9[2](v9, v11);
    objc_release(v11);
    goto LABEL_7;
  }
  +[SFEntitledAssetManager unsubscribeFromAssetWithConfig:regionId:subscriberId:](
    &OBJC_CLASS___SFEntitledAssetManager,
    "unsubscribeFromAssetWithConfig:regionId:subscriberId:",
    v7,
    0LL,
    v8);
  if ( v9 )
    v9[2](v9, 0LL);
LABEL_7:
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
}