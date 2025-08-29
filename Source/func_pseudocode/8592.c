-[MetricMeasurementHelper _startPerformanceTraceHelper:response:]
void __cdecl -[MetricMeasurementHelper _startPerformanceTraceHelper:response:](
        MetricMeasurementHelper *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  void (__fastcall **v7)(id, NSError *, __int64, _QWORD); // x20
  os_log_s *v8; // x21
  PTTraceConfig *v9; // x0
  PTTraceConfig *v10; // x21
  NSXPCConnection *v11; // x23
  PTTraceSession *v12; // x0
  PTTraceSession *traceSession; // x8
  OS_dispatch_semaphore *start_trace_sem; // x22
  dispatch_time_t v15; // x0
  NSDictionary *v16; // x23
  NSError *v17; // x22
  NSErrorUserInfoKey v18; // [xsp+0h] [xbp-70h] BYREF
  const __CFString *v19; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-50h] BYREF
  id v21; // [xsp+24h] [xbp-4Ch]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, NSError *, __int64, _QWORD))objc_retain(a4);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG) )
  {
    *(_DWORD *)buf = 138412290;
    v21 = v6;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_DEBUG,
      "Setting the following configurations for performance trace: %@",
      buf,
      0xCu);
  }
  objc_release(v8);
  if ( v6 )
    v9 = objc_retainAutoreleasedReturnValue(+[PTTraceConfig configWithDictionary:](&OBJC_CLASS___PTTraceConfig, "configWithDictionary:", v6));
  else
    v9 = objc_retainAutoreleasedReturnValue(+[PTTraceConfig configWithTemplate:](&OBJC_CLASS___PTTraceConfig, "configWithTemplate:", 1LL));
  v10 = v9;
  -[PTTraceConfig setSkipNotification:](v9, "setSkipNotification:", 1LL);
  v11 = objc_retainAutoreleasedReturnValue(+[NSXPCConnection currentConnection](&OBJC_CLASS___NSXPCConnection, "currentConnection"));
  -[PTTraceConfig setOwnerPID:](v10, "setOwnerPID:", -[NSXPCConnection processIdentifier](v11, "processIdentifier"));
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(+[PTTraceSession initWithConfig:](&OBJC_CLASS___PTTraceSession, "initWithConfig:", v10));
  traceSession = self->_traceSession;
  self->_traceSession = v12;
  objc_release(traceSession);
  -[PTTraceSession setDelegate:](self->_traceSession, "setDelegate:", self);
  -[PTTraceSession startPerformanceTrace](self->_traceSession, "startPerformanceTrace");
  start_trace_sem = self->_start_trace_sem;
  v15 = dispatch_time(0LL, 20000000000LL);
  if ( dispatch_semaphore_wait((dispatch_semaphore_t)start_trace_sem, v15) )
  {
    v18 = NSLocalizedDescriptionKey;
    v19 = CFSTR("Timed out while trying to start the performance trace.");
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v19,
              &v18,
              1LL));
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("InstrumentErrorDomain"),
              0LL,
              v16));
    objc_release(v16);
  }
  else
  {
    v17 = 0LL;
  }
  v7[2](v7, v17, performanceTraceDidStartError, 0LL);
  objc_release(v17);
  objc_release(v10);
  objc_release(v7);
  objc_release(v6);
}