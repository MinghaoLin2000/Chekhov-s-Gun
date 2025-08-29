-[VideoConversionService listener:shouldAcceptNewConnection:]
bool __cdecl -[VideoConversionService listener:shouldAcceptNewConnection:](
        VideoConversionService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x19
  NSUUID *v5; // x20
  _xpc_connection_s *v6; // x23
  pid_t pid; // w22
  NSDictionary *v8; // x22
  NSXPCInterface *v9; // x22
  __int64 v10; // x24
  __int64 v11; // x25
  __int64 v12; // x26
  __int64 v13; // x27
  __int64 v14; // x28
  __int64 v15; // x21
  __int64 v16; // x20
  NSSet *v17; // x23
  NSXPCInterface *v18; // x20
  id v19; // x20
  id v20; // x20
  NSUUID *v22; // [xsp+40h] [xbp-90h]
  const __CFString *v24; // [xsp+50h] [xbp-80h] BYREF
  NSUUID *v25; // [xsp+58h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+60h] [xbp-70h] BYREF
  NSUUID *v27; // [xsp+64h] [xbp-6Ch]
  __int16 v28; // [xsp+6Ch] [xbp-64h]
  pid_t v29; // [xsp+6Eh] [xbp-62h]

  v4 = objc_retain(a4);
  v5 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "_xpcConnection"));
  pid = xpc_connection_get_pid(v6);
  objc_release(v6);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138543618;
    v27 = v5;
    v28 = 1024;
    v29 = pid;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Connection %{public}@ [%d] accepted",
      buf,
      0x12u);
  }
  v24 = CFSTR("PAMCS_CONNECTION_USER_INFO_CONNECTION_IDENTIFIER_KEY");
  v25 = v5;
  v22 = v5;
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v25,
           &v24,
           1LL));
  objc_msgSend(v4, "setUserInfo:", v8);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___VideoConversionService));
  v10 = objc_opt_class(&OBJC_CLASS___PAMediaConversionServiceDefaultImageMetadataPolicy);
  v11 = objc_opt_class(&OBJC_CLASS___CLLocation);
  v12 = objc_opt_class(&OBJC_CLASS___NSArray);
  v13 = objc_opt_class(&OBJC_CLASS___NSString);
  v14 = objc_opt_class(&OBJC_CLASS___NSDictionary);
  v15 = objc_opt_class(&OBJC_CLASS___NSDate);
  v16 = objc_opt_class(&OBJC_CLASS___NSData);
  v17 = objc_retainAutoreleasedReturnValue(
          +[NSSet setWithObjects:](
            &OBJC_CLASS___NSSet,
            "setWithObjects:",
            v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16,
            objc_opt_class(&OBJC_CLASS___NSNumber),
            0LL));
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v9,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v17,
    "convertVideoAtSourceBookmarkDictionary:toDestinationBookmarkDictionary:options:replyHandler:",
    2LL,
    0LL);
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v9,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v17,
    "extractStillImageFromVideoAtSourceBookmarkDictionary:toDestinationBookmarkDictionary:options:replyHandler:",
    2LL,
    0LL);
  objc_msgSend(v4, "setExportedInterface:", v9);
  objc_msgSend(v4, "setExportedObject:", self);
  v18 = objc_retainAutoreleasedReturnValue(
          +[NSXPCInterface interfaceWithProtocol:](
            &OBJC_CLASS___NSXPCInterface,
            "interfaceWithProtocol:",
            &OBJC_PROTOCOL___VideoConversionServiceClient));
  objc_msgSend(v4, "setRemoteObjectInterface:", v18);
  objc_release(v18);
  v19 = objc_retainAutoreleasedReturnValue(
          -[VideoConversionService connectionTerminationEventHandlerForConnectionIdentifier:eventDescription:](
            self,
            "connectionTerminationEventHandlerForConnectionIdentifier:eventDescription:",
            v22,
            CFSTR("interruption")));
  objc_msgSend(v4, "setInterruptionHandler:", v19);
  objc_release(v19);
  v20 = objc_retainAutoreleasedReturnValue(
          -[VideoConversionService connectionTerminationEventHandlerForConnectionIdentifier:eventDescription:](
            self,
            "connectionTerminationEventHandlerForConnectionIdentifier:eventDescription:",
            v22,
            CFSTR("invalidation")));
  objc_msgSend(v4, "setInvalidationHandler:", v20);
  objc_release(v20);
  objc_msgSend(v4, "resume");
  objc_release(v17);
  objc_release(v9);
  objc_release(v22);
  objc_release(v4);
  return 1;
}