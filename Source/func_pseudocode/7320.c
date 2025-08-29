-[ImageConversionService listener:shouldAcceptNewConnection:]
bool __cdecl -[ImageConversionService listener:shouldAcceptNewConnection:](
        ImageConversionService *self,
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
  __int64 v10; // x25
  __int64 v11; // x26
  __int64 v12; // x27
  __int64 v13; // x28
  __int64 v14; // x21
  __int64 v15; // x20
  __int64 v16; // x23
  __int64 v17; // x24
  NSSet *v18; // x20
  __int64 v20; // [xsp+50h] [xbp-B0h]
  NSUUID *v21; // [xsp+60h] [xbp-A0h]
  const __CFString *v23; // [xsp+70h] [xbp-90h] BYREF
  NSUUID *v24; // [xsp+78h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+80h] [xbp-80h] BYREF
  NSUUID *v26; // [xsp+84h] [xbp-7Ch]
  __int16 v27; // [xsp+8Ch] [xbp-74h]
  pid_t v28; // [xsp+8Eh] [xbp-72h]

  v4 = objc_retain(a4);
  v5 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "_xpcConnection"));
  pid = xpc_connection_get_pid(v6);
  objc_release(v6);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138543618;
    v26 = v5;
    v27 = 1024;
    v28 = pid;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Connection %{public}@ [%d] accepted",
      buf,
      0x12u);
  }
  v23 = CFSTR("PAMCS_CONNECTION_USER_INFO_CONNECTION_IDENTIFIER_KEY");
  v24 = v5;
  v21 = v5;
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v24,
           &v23,
           1LL));
  objc_msgSend(v4, "setUserInfo:", v8);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___ImageConversionService));
  v20 = objc_opt_class(&OBJC_CLASS___PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy);
  v10 = objc_opt_class(&OBJC_CLASS___PAMediaConversionServiceImageMetadataPolicy);
  v11 = objc_opt_class(&OBJC_CLASS___NSArray);
  v12 = objc_opt_class(&OBJC_CLASS___NSString);
  v13 = objc_opt_class(&OBJC_CLASS___NSDictionary);
  v14 = objc_opt_class(&OBJC_CLASS___NSDate);
  v15 = objc_opt_class(&OBJC_CLASS___NSData);
  v16 = objc_opt_class(&OBJC_CLASS___NSNumber);
  v17 = objc_opt_class(&OBJC_CLASS___NSNull);
  v18 = objc_retainAutoreleasedReturnValue(
          +[NSSet setWithObjects:](
            &OBJC_CLASS___NSSet,
            "setWithObjects:",
            v20,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17,
            objc_opt_class(&OBJC_CLASS___NSValue),
            0LL));
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v9,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v18,
    "convertImageWithOptions:reply:",
    0LL,
    0LL);
  objc_msgSend(v4, "setExportedInterface:", v9);
  objc_msgSend(v4, "setExportedObject:", self);
  objc_msgSend(v4, "resume");
  objc_release(v18);
  objc_release(v9);
  objc_release(v21);
  objc_release(v4);
  return 1;
}