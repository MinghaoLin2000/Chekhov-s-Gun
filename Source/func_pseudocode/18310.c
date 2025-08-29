-[AUCrashHandlerService initWithConnection:]
AUCrashHandlerService *__cdecl -[AUCrashHandlerService initWithConnection:](AUCrashHandlerService *self, SEL a2, id a3)
{
  id v5; // x19
  AUCrashHandlerService *v6; // x0
  AUCrashHandlerService *v7; // x20
  __int64 v8; // x0
  int v9; // w22
  os_log_s *v10; // x23
  objc_super v12; // [xsp+0h] [xbp-60h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  const char *v14; // [xsp+14h] [xbp-4Ch]
  __int16 v15; // [xsp+1Ch] [xbp-44h]
  int v16; // [xsp+1Eh] [xbp-42h]
  __int16 v17; // [xsp+22h] [xbp-3Eh]
  int v18; // [xsp+24h] [xbp-3Ch]

  v5 = objc_retain(a3);
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___AUCrashHandlerService;
  v6 = -[AUCrashHandlerService init](&v12, "init");
  v7 = v6;
  if ( v6 )
  {
    objc_storeStrong((id *)&v6->mConnection, a3);
    v8 = SecRequirementCreateWithString(CFSTR("anchor apple"), 0, &v7->_appleSignedReq);
    v9 = v8;
    if ( (_DWORD)v8 )
    {
      sub_100003198(v8);
      v10 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
      if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 136315650;
        v14 = "AUCrashHandlerService.mm";
        v15 = 1024;
        v16 = 114;
        v17 = 1024;
        v18 = v9;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v10,
          OS_LOG_TYPE_ERROR,
          "%25s:%-5d Could not create the Apple Signed Requirement: %d",
          buf,
          0x18u);
      }
      v7->_appleSignedReq = 0LL;
    }
  }
  objc_release(v5);
  return v7;
}