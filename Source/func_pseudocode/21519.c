-[LSRConnection fetchAssetsForLanguage:clientID:completion:]
void __cdecl -[LSRConnection fetchAssetsForLanguage:clientID:completion:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  id v9; // x21
  dispatch_queue_s *v10; // x22
  NSError *v11; // x22
  os_log_s *v12; // x22
  _QWORD block[4]; // [xsp+8h] [xbp-78h] BYREF
  id v14; // [xsp+28h] [xbp-58h]
  id v15; // [xsp+30h] [xbp-50h]
  id v16; // [xsp+38h] [xbp-48h]
  uint8_t buf[4]; // [xsp+40h] [xbp-40h] BYREF
  const char *v18; // [xsp+44h] [xbp-3Ch]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  if ( (sub_100035FE0() & 1) != 0 )
  {
    v10 = (dispatch_queue_s *)qword_100065418;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100038F80;
    block[3] = &unk_10005A048;
    v14 = objc_retain(v7);
    v15 = objc_retain(v8);
    v16 = objc_retain(v9);
    dispatch_async(v10, block);
    objc_release(v16);
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
    v18 = "-[LSRConnection fetchAssetsForLanguage:clientID:completion:]";
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
    (*((void (__fastcall **)(id, _QWORD, NSError *))v9 + 2))(v9, 0LL, v11);
    goto LABEL_6;
  }
LABEL_7:
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
}