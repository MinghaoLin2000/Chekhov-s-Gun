-[MetricMeasurementHelper performanceTraceDidStop:]
void __cdecl -[MetricMeasurementHelper performanceTraceDidStop:](MetricMeasurementHelper *self, SEL a2, id a3)
{
  id v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( v5 )
    objc_storeStrong((id *)&performanceTraceDidStopError, a3);
  dispatch_semaphore_signal((dispatch_semaphore_t)self->_stop_trace_sem);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}