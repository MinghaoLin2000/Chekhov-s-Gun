-[AUCrashHandlerService addCrashObserverForToken:withReply:]
void __cdecl -[AUCrashHandlerService addCrashObserverForToken:withReply:](
        AUCrashHandlerService *self,
        SEL a2,
        $115C4C562B26FF47E01F9F4EA65B5887 *a3,
        id a4)
{
  void (__fastcall **v6)(id, _QWORD); // x19
  __int128 v7; // q0
  void *v8; // x21
  NSArray *v9; // x22
  const __CFString *v10; // [xsp+0h] [xbp-30h] BYREF

  v6 = (void (__fastcall **)(id, _QWORD))objc_retain(a4);
  if ( qword_10000D0A0 != -1 )
    dispatch_once(&qword_10000D0A0, &stru_100008260);
  if ( !byte_10000D098 )
    v6[2](v6, 0LL);
  v7 = *(_OWORD *)a3->var0;
  *(_OWORD *)&self->_watchedAuditToken.val[4] = *(_OWORD *)&a3->var0[4];
  *(_OWORD *)self->_watchedAuditToken.val = v7;
  v8 = objc_retainAutoreleasedReturnValue(+[OSADiagnosticMonitor sharedMonitor](&OBJC_CLASS___OSADiagnosticMonitor, "sharedMonitor"));
  v10 = CFSTR("309");
  v9 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v10, 1LL));
  objc_msgSend(v8, "addEventObserver:forTypes:", self, v9);
  objc_release(v9);
  objc_release(v8);
  v6[2](v6, 0LL);
  objc_release(v6);
}