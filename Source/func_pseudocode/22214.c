-[QLSatellite handleRequestMessage:]
void __cdecl -[QLSatellite handleRequestMessage:](QLSatellite *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x22
  xpc_object_t reply; // x20
  void *v7; // x0
  __int64 v8; // x1
  void *v9; // x22
  os_log_s *v10; // x23
  void *v11; // x0
  __int64 v12; // x1
  void *v13; // x23
  void *v14; // x24
  void *v15; // x24
  NSString *v16; // x25
  NSDictionary *v17; // x26
  void *v18; // x24
  NSProcessInfo *v19; // x24
  os_log_s *v20; // x23
  _QWORD v21[5]; // [xsp+0h] [xbp-A0h] BYREF
  id v22; // [xsp+28h] [xbp-78h]
  id v23; // [xsp+30h] [xbp-70h]
  __int64 v24; // [xsp+38h] [xbp-68h] BYREF
  NSString *v25; // [xsp+40h] [xbp-60h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "xpcMessage"));
  reply = xpc_dictionary_create_reply(v5);
  objc_release(v5);
  v7 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___QLSatelliteMessage), "initWithXPCMessage:", reply);
  v9 = v7;
  v10 = (os_log_s *)qlLogHandles[9];
  if ( !v10 )
  {
    QLInitLogging(v7, v8);
    v10 = (os_log_s *)qlLogHandles[9];
  }
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEBUG) )
    sub_100005F04(v4, v10);
  v11 = objc_msgSend(v4, "copyRequest");
  if ( v11 )
  {
    v13 = v11;
    v14 = objc_retainAutoreleasedReturnValue(+[QLDebugSatelliteController sharedController](&OBJC_CLASS___QLDebugSatelliteController, "sharedController"));
    objc_msgSend(v14, "addRequest:", v13);
    objc_release(v14);
    v15 = objc_retainAutoreleasedReturnValue(+[QLDebugSatelliteController sharedController](&OBJC_CLASS___QLDebugSatelliteController, "sharedController"));
    v24 = kQLDebugSatelliteNameKey;
    v16 = objc_retainAutoreleasedReturnValue(-[QLSatellite processSpecifier](self, "processSpecifier"));
    v25 = v16;
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v25,
              &v24,
              1LL));
    objc_msgSend(v15, "sendUpdate:forRequest:", v17, v13);
    objc_release(v17);
    objc_release(v16);
    objc_release(v15);
    v18 = objc_retainAutoreleasedReturnValue(+[QLDebugSatelliteController sharedController](&OBJC_CLASS___QLDebugSatelliteController, "sharedController"));
    objc_msgSend(v18, "setStatus:forRequest:", 1LL, v13);
    objc_release(v18);
    v19 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
    -[NSProcessInfo disableSuddenTermination](v19, "disableSuddenTermination");
    objc_release(v19);
    v21[0] = _NSConcreteStackBlock;
    v21[1] = 3254779904LL;
    v21[2] = sub_1000043D0;
    v21[3] = &unk_100008480;
    v21[4] = self;
    v22 = objc_retain(v4);
    v23 = objc_retain(v9);
    -[QLSatellite _handleRequest:withCompletion:](self, "_handleRequest:withCompletion:", v13, v21);
    objc_release(v23);
    objc_release(v22);
  }
  else
  {
    v20 = (os_log_s *)qlLogHandles[9];
    if ( !v20 )
    {
      QLInitLogging(0LL, v12);
      v20 = (os_log_s *)qlLogHandles[9];
    }
    if ( os_log_type_enabled(v20, OS_LOG_TYPE_ERROR) )
      sub_100005EC0(v20);
    xpc_dictionary_set_int64(reply, "SatelliteError", 112LL);
    -[QLSatellite doneWithMessage:reply:](self, "doneWithMessage:reply:", v4, v9);
  }
  objc_release(v9);
  objc_release(reply);
  objc_release(v4);
}