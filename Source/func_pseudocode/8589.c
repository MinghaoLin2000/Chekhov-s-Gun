-[MetricMeasurementHelper performanceTraceDidComplete:withToken:withError:]
void __cdecl -[MetricMeasurementHelper performanceTraceDidComplete:withToken:withError:](
        MetricMeasurementHelper *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v9; // x19
  id v10; // x21
  id v11; // x22
  os_log_s *v12; // x23
  NSURL *performanceTraceURL; // x8
  int v14; // [xsp+0h] [xbp-60h] BYREF
  NSURL *v15; // [xsp+4h] [xbp-5Ch]

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_retain(a5);
  if ( v11 )
    objc_storeStrong((id *)&performanceTraceDidCompleteError, a5);
  objc_storeStrong((id *)&self->_sandboxExtensionToken, a4);
  objc_storeStrong((id *)&self->_performanceTraceURL, a3);
  v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
  if ( os_log_type_enabled(v12, OS_LOG_TYPE_INFO) )
  {
    performanceTraceURL = self->_performanceTraceURL;
    v14 = 138412290;
    v15 = performanceTraceURL;
    _os_log_impl((void *)&_mh_execute_header, v12, OS_LOG_TYPE_INFO, "Peformance trace URL: %@", (uint8_t *)&v14, 0xCu);
  }
  objc_release(v12);
  dispatch_semaphore_signal((dispatch_semaphore_t)self->_completed_trace_sem);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
}