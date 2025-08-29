-[PrintdRPCService initWithXPCConnection:]
PrintdRPCService *__cdecl -[PrintdRPCService initWithXPCConnection:](PrintdRPCService *self, SEL a2, id a3)
{
  id v5; // x19
  __int64 v6; // x1
  PrintdRPCService *v7; // x20
  id v8; // x22
  int v9; // w9
  __int64 clientID; // x26
  void *v11; // x25
  void *v12; // x0
  NSString *v13; // x0
  NSString *logLeader; // x8
  os_log_s *v15; // x24
  NSXPCConnection *connection; // x8
  void **v18; // [xsp+18h] [xbp-E8h] BYREF
  __int64 v19; // [xsp+20h] [xbp-E0h]
  __int64 (__fastcall *v20)(); // [xsp+28h] [xbp-D8h]
  void *v21; // [xsp+30h] [xbp-D0h]
  id v22; // [xsp+38h] [xbp-C8h] BYREF
  _QWORD v23[4]; // [xsp+40h] [xbp-C0h] BYREF
  id v24; // [xsp+60h] [xbp-A0h] BYREF
  id location; // [xsp+68h] [xbp-98h] BYREF
  objc_super v26; // [xsp+70h] [xbp-90h] BYREF
  uint8_t buf[4]; // [xsp+80h] [xbp-80h] BYREF
  NSXPCConnection *v28; // [xsp+84h] [xbp-7Ch]

  v5 = objc_retain(a3);
  v26.receiver = self;
  v26.super_class = (Class)&OBJC_CLASS___PrintdRPCService;
  v7 = -[PrintdRPCService init](&v26, "init");
  if ( v7 )
  {
    v8 = objc_retainAutoreleasedReturnValue((id)objc_opt_class(&OBJC_CLASS___PrintdRPCService, v6));
    objc_sync_enter(v8);
    v9 = dword_1000C3D68++;
    v7->_clientID = v9;
    objc_sync_exit(v8);
    objc_release(v8);
    objc_storeStrong((id *)&v7->_connection, a3);
    objc_initWeak(&location, v7);
    v23[0] = _NSConcreteStackBlock;
    v23[1] = 3254779904LL;
    v23[2] = sub_10004B944;
    v23[3] = &unk_10009E0B8;
    objc_copyWeak(&v24, &location);
    -[NSXPCConnection setInterruptionHandler:](v7->_connection, "setInterruptionHandler:", v23);
    v18 = _NSConcreteStackBlock;
    v19 = 3254779904LL;
    v20 = sub_10004B9A8;
    v21 = &unk_10009E0B8;
    objc_copyWeak(&v22, &location);
    -[NSXPCConnection setInvalidationHandler:](v7->_connection, "setInvalidationHandler:", &v18);
    clientID = (unsigned int)v7->_clientID;
    v11 = (void *)-[NSXPCConnection processIdentifier](v7->_connection, "processIdentifier");
    v12 = (void *)-[NSXPCConnection effectiveUserIdentifier](v7->_connection, "effectiveUserIdentifier");
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("<xpc %d from %d/%d>"),
              clientID,
              v11,
              v12,
              v18,
              v19,
              v20,
              v21));
    logLeader = v7->_logLeader;
    v7->_logLeader = v13;
    objc_release(logLeader);
    v15 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEFAULT) )
    {
      connection = v7->_connection;
      *(_DWORD *)buf = 138543362;
      v28 = connection;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v15,
        OS_LOG_TYPE_DEFAULT,
        "Accepted incoming connection from %{public}@",
        buf,
        0xCu);
    }
    objc_release(v15);
    objc_destroyWeak(&v22);
    objc_destroyWeak(&v24);
    objc_destroyWeak(&location);
  }
  objc_release(v5);
  return v7;
}