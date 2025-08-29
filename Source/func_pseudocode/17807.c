+[CoreMLModelSecurity teamIdentifierFromXPCConnection]
id __cdecl +[CoreMLModelSecurity teamIdentifierFromXPCConnection](id a1, SEL a2)
{
  void *v4; // x20
  NSXPCConnection *v5; // x0
  NSXPCConnection *v6; // x19
  void *v7; // x23
  const char *v8; // x1
  __int64 v9; // x1
  void *v10; // x0
  void *v11; // x22
  os_log_s *v12; // x24
  NSString *v13; // x21
  os_log_s *v14; // x22
  NSString *v15; // x0
  _OWORD v17[2]; // [xsp+0h] [xbp-A0h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-80h] BYREF
  NSString *v19; // [xsp+24h] [xbp-7Ch]
  __int16 v20; // [xsp+2Ch] [xbp-74h]
  int v21; // [xsp+2Eh] [xbp-72h]
  uint8_t v22[16]; // [xsp+40h] [xbp-60h] BYREF
  __int128 v23; // [xsp+50h] [xbp-50h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v4 = objc_autoreleasePoolPush();
  v5 = objc_retainAutoreleasedReturnValue(+[NSXPCConnection currentConnection](&OBJC_CLASS___NSXPCConnection, "currentConnection"));
  v6 = v5;
  if ( v5 )
  {
    v7 = (void *)-[NSXPCConnection processIdentifier](v5, "processIdentifier");
    *(_OWORD *)v22 = 0u;
    v23 = 0u;
    objc_msgSend_auditToken(v22, v6, v8);
    v10 = (void *)objc_opt_class(a1, v9);
    v17[0] = *(_OWORD *)v22;
    v17[1] = v23;
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "teamIdentifierFor:processIdentifier:", v17, v7));
    if ( !v11 )
    {
      v12 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
      if ( os_log_type_enabled(v12, OS_LOG_TYPE_INFO) )
      {
        v13 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
        *(_DWORD *)buf = 138412546;
        v19 = v13;
        v20 = 1024;
        v21 = (int)v7;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v12,
          OS_LOG_TYPE_INFO,
          "%@: client(%d) : missing teamIdentifier",
          buf,
          0x12u);
        objc_release(v13);
      }
      objc_release(v12);
    }
  }
  else
  {
    v14 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
    if ( os_log_type_enabled(v14, OS_LOG_TYPE_ERROR) )
    {
      v15 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
      sub_10000B2D4((int)v15, v22, v14);
    }
    objc_release(v14);
    v11 = 0LL;
  }
  objc_release(v6);
  objc_autoreleasePoolPop(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}