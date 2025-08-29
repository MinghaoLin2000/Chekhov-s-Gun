-[RemoteViewController activateWithCompletion:]
void __cdecl -[RemoteViewController activateWithCompletion:](RemoteViewController *self, SEL a2, id a3)
{
  id v4; // x20
  id v5; // x0
  os_log_s *v6; // x21
  id v7; // x21
  NSString *v8; // x22
  id v9; // x19
  _QWORD v10[5]; // [xsp+0h] [xbp-70h] BYREF
  id v11; // [xsp+28h] [xbp-48h]
  uint8_t buf[4]; // [xsp+30h] [xbp-40h] BYREF
  const char *v13; // [xsp+34h] [xbp-3Ch]

  v4 = objc_retain(a3);
  v5 = objc_unsafeClaimAutoreleasedReturnValue(-[RemoteViewController view](self, "view"));
  v6 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315138;
    v13 = "-[RemoteViewController activateWithCompletion:]";
    _os_log_impl((void *)&_mh_execute_header, v6, OS_LOG_TYPE_DEFAULT, "%s requesting remoteViewController", buf, 0xCu);
  }
  v7 = objc_alloc_init((Class)&OBJC_CLASS___NSRemoteViewControllerParameters);
  objc_msgSend(v7, "setServiceViewControllerClassName:", CFSTR("RemoteViewBridgeServiceViewService"));
  v8 = objc_retainAutoreleasedReturnValue(-[RemoteViewController serviceIdentifier](self, "serviceIdentifier"));
  objc_msgSend(v7, "setServiceBundleIdentifier:", v8);
  objc_release(v8);
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_100003EE4;
  v10[3] = &unk_1000206A0;
  v10[4] = self;
  v11 = v4;
  v9 = objc_retain(v4);
  +[RemoteViewBridgeViewController requestViewController:connectionHandler:](
    &OBJC_CLASS___RemoteViewBridgeViewController,
    "requestViewController:connectionHandler:",
    v7,
    v10);
  objc_release(v11);
  objc_release(v9);
  objc_release(v7);
}