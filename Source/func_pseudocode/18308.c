-[AUCrashHandlerService addCrashObserverForXPCEndpoint:withReply:]
void __cdecl -[AUCrashHandlerService addCrashObserverForXPCEndpoint:withReply:](
        AUCrashHandlerService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  void (__fastcall **v7)(id, _QWORD); // x20
  const char *v8; // x1
  void *AuditTokenFromEndpoint; // x0
  __int128 v10; // q1
  os_log_s *v11; // x22
  __int128 v12; // q1
  pid_t v13; // w0
  void *v14; // x22
  NSArray *v15; // x23
  NSError *v16; // x22
  audit_token_t v17; // [xsp+0h] [xbp-A0h] BYREF
  _OWORD v18[2]; // [xsp+24h] [xbp-7Ch] BYREF
  char v19; // [xsp+44h] [xbp-5Ch]
  const __CFString *v20; // [xsp+48h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+50h] [xbp-50h] BYREF
  const char *v22; // [xsp+54h] [xbp-4Ch]
  __int16 v23; // [xsp+5Ch] [xbp-44h]
  int v24; // [xsp+5Eh] [xbp-42h]
  __int16 v25; // [xsp+62h] [xbp-3Eh]
  pid_t v26; // [xsp+64h] [xbp-3Ch]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, _QWORD))objc_retain(a4);
  AuditTokenFromEndpoint = objc_msgSend__getAuditTokenFromEndpoint_(v18, self, v8, v6);
  if ( v19 )
  {
    v10 = v18[1];
    *(_OWORD *)self->_watchedAuditToken.val = v18[0];
    *(_OWORD *)&self->_watchedAuditToken.val[4] = v10;
    sub_100003198(AuditTokenFromEndpoint);
    v11 = (os_log_s *)objc_retainAutoreleasedReturnValue(objc_retainAutorelease((id)qword_10000D080));
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEBUG) )
    {
      v12 = *(_OWORD *)&self->_watchedAuditToken.val[4];
      *(_OWORD *)v17.val = *(_OWORD *)self->_watchedAuditToken.val;
      *(_OWORD *)&v17.val[4] = v12;
      v13 = audit_token_to_pid(&v17);
      *(_DWORD *)buf = 136315650;
      v22 = "AUCrashHandlerService.mm";
      v23 = 1024;
      v24 = 144;
      v25 = 1024;
      v26 = v13;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v11,
        OS_LOG_TYPE_DEBUG,
        "%25s:%-5d Monitoring process with pid %d for crashes",
        buf,
        0x18u);
    }
    objc_release(v11);
    v14 = objc_retainAutoreleasedReturnValue(+[OSADiagnosticMonitor sharedMonitor](&OBJC_CLASS___OSADiagnosticMonitor, "sharedMonitor"));
    v20 = CFSTR("309");
    v15 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v20, 1LL));
    objc_msgSend(v14, "addEventObserver:forTypes:", self, v15);
    objc_release(v15);
    objc_release(v14);
    v7[2](v7, 0LL);
  }
  else
  {
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              NSOSStatusErrorDomain,
              560295524LL,
              0LL));
    ((void (__fastcall **)(id, NSError *))v7)[2](v7, v16);
    objc_release(v16);
  }
  objc_release(v7);
  objc_release(v6);
}