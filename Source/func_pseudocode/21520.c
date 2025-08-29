-[LSRConnection downloadAssetsForConfig:clientID:detailedProgress:]
void __cdecl -[LSRConnection downloadAssetsForConfig:clientID:detailedProgress:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        bool a5)
{
  id v8; // x21
  id v9; // x22
  os_log_s *v10; // x23
  void *v11; // x23
  os_log_s *v12; // x23
  NSError *v13; // x0
  dispatch_queue_s *v14; // x23
  NSError *v15; // x24
  dispatch_queue_s *v16; // x23
  id v17; // x19
  id v18; // x20
  _QWORD v19[4]; // [xsp+8h] [xbp-108h] BYREF
  id v20; // [xsp+28h] [xbp-E8h]
  LSRConnection *v21; // [xsp+30h] [xbp-E0h]
  id v22; // [xsp+38h] [xbp-D8h]
  bool v23; // [xsp+40h] [xbp-D0h]
  _QWORD v24[5]; // [xsp+48h] [xbp-C8h] BYREF
  id v25; // [xsp+70h] [xbp-A0h]
  _QWORD block[5]; // [xsp+78h] [xbp-98h] BYREF
  uint8_t buf[4]; // [xsp+A0h] [xbp-70h] BYREF
  const char *v28; // [xsp+A4h] [xbp-6Ch]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  if ( (sub_100035FE0() & 1) == 0 )
  {
    v10 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315138;
      v28 = "-[LSRConnection downloadAssetsForConfig:clientID:detailedProgress:]";
      _os_log_error_impl((void *)&_mh_execute_header, v10, OS_LOG_TYPE_ERROR, "%s Request not authorized", buf, 0xCu);
    }
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100039334;
    block[3] = &unk_100059D18;
    block[4] = self;
    dispatch_async((dispatch_queue_t)qword_100065418, block);
  }
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "language"));
  objc_release(v11);
  if ( !v11 )
  {
    v12 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315138;
      v28 = "-[LSRConnection downloadAssetsForConfig:clientID:detailedProgress:]";
      _os_log_error_impl((void *)&_mh_execute_header, v12, OS_LOG_TYPE_ERROR, "%s Language cannot be nil.", buf, 0xCu);
    }
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              kAFAssistantErrorDomain,
              31LL,
              0LL));
    v14 = (dispatch_queue_s *)qword_100065418;
    v24[0] = _NSConcreteStackBlock;
    v24[1] = 3254779904LL;
    v24[2] = sub_1000393BC;
    v24[3] = &unk_100059CE8;
    v24[4] = self;
    v25 = v13;
    v15 = objc_retain(v13);
    dispatch_async(v14, v24);
    objc_release(v25);
    objc_release(v15);
  }
  v16 = (dispatch_queue_s *)qword_100065418;
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 3254779904LL;
  v19[2] = sub_100039410;
  v19[3] = &unk_10005A018;
  v20 = v8;
  v21 = self;
  v22 = v9;
  v23 = a5;
  v17 = objc_retain(v9);
  v18 = objc_retain(v8);
  dispatch_async(v16, v19);
  objc_release(v22);
  objc_release(v20);
  objc_release(v17);
  objc_release(v18);
}