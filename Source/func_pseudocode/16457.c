+[AUHelperInstance xpcConnectionToHelper]
id __cdecl +[AUHelperInstance xpcConnectionToHelper](id a1, SEL a2)
{
  void *v2; // x19
  NSXPCInterface *v3; // x20
  __int64 v4; // x22
  __int64 v5; // x23
  __int64 v6; // x24
  __int64 v7; // x25
  __int64 v8; // x26
  __int64 v9; // x27
  NSSet *v10; // x21
  void *v11; // x22
  void *v12; // x22
  id v13; // x0
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v2 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___NSXPCConnection),
         "initWithMachServiceName:options:",
         CFSTR("com.apple.accessoryupdater.launchauhelper"),
         4096LL);
  if ( v2 )
  {
    v3 = objc_retainAutoreleasedReturnValue(
           +[NSXPCInterface interfaceWithProtocol:](
             &OBJC_CLASS___NSXPCInterface,
             "interfaceWithProtocol:",
             &OBJC_PROTOCOL___AUHelperServiceProtocol));
    objc_msgSend(v2, "setRemoteObjectInterface:", v3);
    v4 = objc_opt_class(&OBJC_CLASS___NSDictionary);
    v5 = objc_opt_class(&OBJC_CLASS___NSArray);
    v6 = objc_opt_class(&OBJC_CLASS___NSString);
    v7 = objc_opt_class(&OBJC_CLASS___NSURL);
    v8 = objc_opt_class(&OBJC_CLASS___NSError);
    v9 = objc_opt_class(&OBJC_CLASS___NSData);
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSSet setWithObjects:](
              &OBJC_CLASS___NSSet,
              "setWithObjects:",
              v4,
              v5,
              v6,
              v7,
              v8,
              v9,
              objc_opt_class(&OBJC_CLASS___NSNumber),
              0LL));
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "remoteObjectInterface"));
    objc_msgSend(
      v11,
      "setClasses:forSelector:argumentIndex:ofReply:",
      v10,
      "userPreferenceSetObject:forSuite:withKey:",
      0LL,
      0LL);
    objc_release(v11);
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "remoteObjectInterface"));
    objc_msgSend(
      v12,
      "setClasses:forSelector:argumentIndex:ofReply:",
      v10,
      "userPreferenceObjectForSuite:withKey:withReply:",
      0LL,
      1LL);
    objc_release(v12);
    objc_msgSend(v2, "resume");
    v13 = objc_retain(v2);
    objc_release(v3);
    objc_release(v10);
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    sub_10001B228();
  }
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}