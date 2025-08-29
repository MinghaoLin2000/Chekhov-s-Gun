-[LSRConnection setPurgeabilityForAssetWithConfig:purgeable:clientID:completion:]
void __cdecl -[LSRConnection setPurgeabilityForAssetWithConfig:purgeable:clientID:completion:](
        LSRConnection *self,
        SEL a2,
        id a3,
        bool a4,
        id a5,
        id a6)
{
  id v8; // x19
  id v9; // x20
  dispatch_queue_s *v10; // x22
  NSError *v11; // x21
  os_log_s *v12; // x21
  _QWORD block[4]; // [xsp+8h] [xbp-78h] BYREF
  id v14; // [xsp+28h] [xbp-58h]
  id v15; // [xsp+30h] [xbp-50h]
  bool v16; // [xsp+38h] [xbp-48h]
  uint8_t buf[4]; // [xsp+40h] [xbp-40h] BYREF
  const char *v18; // [xsp+44h] [xbp-3Ch]

  v8 = objc_retain(a3);
  v9 = objc_retain(a6);
  if ( (sub_100035FE0() & 1) != 0 )
  {
    v10 = (dispatch_queue_s *)qword_100065418;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_1000387B4;
    block[3] = &unk_10005A0D8;
    v14 = objc_retain(v8);
    v16 = a4;
    v15 = objc_retain(v9);
    dispatch_async(v10, block);
    objc_release(v15);
    v11 = (NSError *)v14;
LABEL_6:
    objc_release(v11);
    goto LABEL_7;
  }
  v12 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 136315138;
    v18 = "-[LSRConnection setPurgeabilityForAssetWithConfig:purgeable:clientID:completion:]";
    _os_log_error_impl((void *)&_mh_execute_header, v12, OS_LOG_TYPE_ERROR, "%s Request not authorized", buf, 0xCu);
    if ( !v9 )
      goto LABEL_7;
    goto LABEL_5;
  }
  if ( v9 )
  {
LABEL_5:
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              kAFAssistantErrorDomain,
              1700LL,
              0LL));
    (*((void (__fastcall **)(id, NSError *))v9 + 2))(v9, v11);
    goto LABEL_6;
  }
LABEL_7:
  objc_release(v9);
  objc_release(v8);
}