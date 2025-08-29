-[MetricMeasurementHelper .cxx_destruct]
void __cdecl -[MetricMeasurementHelper .cxx_destruct](MetricMeasurementHelper *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_sandboxExtensionToken, 0LL);
  objc_storeStrong((id *)&self->_performanceTraceURL, 0LL);
  objc_storeStrong((id *)&self->_traceSession, 0LL);
  objc_storeStrong((id *)&self->_completed_trace_sem, 0LL);
  objc_storeStrong((id *)&self->_stop_trace_sem, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_start_trace_sem, 0LL);
}