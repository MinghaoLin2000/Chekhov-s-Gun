-[MetricMeasurementHelper traceSession]
PTTraceSession *__cdecl -[MetricMeasurementHelper traceSession](MetricMeasurementHelper *self, SEL a2)
{
  return (PTTraceSession *)objc_getProperty(self, a2, 32LL, 1);
}