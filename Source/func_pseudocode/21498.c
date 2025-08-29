-[LSRConnection subscriptionsForClientId:completion:]
void __cdecl -[LSRConnection subscriptionsForClientId:completion:](LSRConnection *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  void (__fastcall **v6)(id, void *); // x20
  void *v7; // x21
  os_log_s *v8; // x21
  int v9; // [xsp+0h] [xbp-40h] BYREF
  const char *v10; // [xsp+4h] [xbp-3Ch]

  v5 = objc_retain(a3);
  v6 = (void (__fastcall **)(id, void *))objc_retain(a4);
  if ( (sub_100035FE0() & 1) == 0 )
  {
    v8 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      v9 = 136315138;
      v10 = "-[LSRConnection subscriptionsForClientId:completion:]";
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v8,
        OS_LOG_TYPE_ERROR,
        "%s Request not authorized",
        (uint8_t *)&v9,
        0xCu);
      if ( !v6 )
        goto LABEL_7;
    }
    else if ( !v6 )
    {
      goto LABEL_7;
    }
    v6[2](v6, &__NSArray0__struct);
    goto LABEL_7;
  }
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(
           +[SFEntitledAssetManager subscriptionsForSubscriberId:](
             &OBJC_CLASS___SFEntitledAssetManager,
             "subscriptionsForSubscriberId:",
             v5));
    v6[2](v6, v7);
    objc_release(v7);
  }
LABEL_7:
  objc_release(v6);
  objc_release(v5);
}