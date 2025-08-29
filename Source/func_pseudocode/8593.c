-[MetricMeasurementHelper _stopPerformanceTraceHelper:]
void __cdecl -[MetricMeasurementHelper _stopPerformanceTraceHelper:](MetricMeasurementHelper *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, NSURL *, NSString *, NSError *, NSError *, __int64, __int64); // x19
  PTTraceSession *traceSession; // x0
  OS_dispatch_semaphore *stop_trace_sem; // x21
  dispatch_time_t v7; // x0
  NSError *v8; // x21
  OS_dispatch_semaphore *completed_trace_sem; // x22
  dispatch_time_t v10; // x0
  NSError *v11; // x22
  NSDictionary *v12; // x23
  NSDictionary *v13; // x23
  NSErrorUserInfoKey v14; // [xsp+8h] [xbp-78h] BYREF
  const __CFString *v15; // [xsp+10h] [xbp-70h] BYREF
  NSErrorUserInfoKey v16; // [xsp+18h] [xbp-68h] BYREF
  const __CFString *v17; // [xsp+20h] [xbp-60h] BYREF
  NSErrorUserInfoKey v18; // [xsp+28h] [xbp-58h] BYREF
  const __CFString *v19; // [xsp+30h] [xbp-50h] BYREF

  v4 = (void (__fastcall **)(id, NSURL *, NSString *, NSError *, NSError *, __int64, __int64))objc_retain(a3);
  traceSession = self->_traceSession;
  if ( !traceSession )
  {
    v14 = NSLocalizedDescriptionKey;
    v15 = CFSTR("No performance trace session to stop.");
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v15,
              &v14,
              1LL));
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSError errorWithDomain:code:userInfo:](
             &OBJC_CLASS___NSError,
             "errorWithDomain:code:userInfo:",
             CFSTR("InstrumentErrorDomain"),
             0LL,
             v13));
    v11 = 0LL;
    goto LABEL_7;
  }
  -[PTTraceSession stopPerformanceTrace](traceSession, "stopPerformanceTrace");
  stop_trace_sem = self->_stop_trace_sem;
  v7 = dispatch_time(0LL, 20000000000LL);
  v8 = (NSError *)dispatch_semaphore_wait((dispatch_semaphore_t)stop_trace_sem, v7);
  completed_trace_sem = self->_completed_trace_sem;
  v10 = dispatch_time(0LL, 300000000000LL);
  v11 = (NSError *)dispatch_semaphore_wait((dispatch_semaphore_t)completed_trace_sem, v10);
  if ( v8 )
  {
    v18 = NSLocalizedDescriptionKey;
    v19 = CFSTR("Stopping performance trace timed out.");
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v19,
              &v18,
              1LL));
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSError errorWithDomain:code:userInfo:](
             &OBJC_CLASS___NSError,
             "errorWithDomain:code:userInfo:",
             CFSTR("InstrumentErrorDomain"),
             0LL,
             v12));
    objc_release(v12);
  }
  if ( v11 )
  {
    v16 = NSLocalizedDescriptionKey;
    v17 = CFSTR("Did not receive performance trace completed signal.");
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v17,
              &v16,
              1LL));
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("InstrumentErrorDomain"),
              0LL,
              v13));
LABEL_7:
    objc_release(v13);
  }
  v4[2](
    v4,
    self->_performanceTraceURL,
    self->_sandboxExtensionToken,
    v8,
    v11,
    performanceTraceDidStopError,
    performanceTraceDidCompleteError);
  objc_release(v11);
  objc_release(v8);
  objc_release(v4);
}