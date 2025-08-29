-[MetricMeasurementHelper init]
MetricMeasurementHelper *__cdecl -[MetricMeasurementHelper init](MetricMeasurementHelper *self, SEL a2)
{
  MetricMeasurementHelper *v2; // x19
  dispatch_semaphore_t v3; // x0
  OS_dispatch_semaphore *start_trace_sem; // x8
  dispatch_semaphore_t v5; // x0
  OS_dispatch_semaphore *completed_trace_sem; // x8
  dispatch_semaphore_t v7; // x0
  OS_dispatch_semaphore *stop_trace_sem; // x8
  objc_super v10; // [xsp+0h] [xbp-20h] BYREF

  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___MetricMeasurementHelper;
  v2 = -[MetricMeasurementHelper init](&v10, "init");
  if ( v2 )
  {
    v3 = dispatch_semaphore_create(0LL);
    start_trace_sem = v2->_start_trace_sem;
    v2->_start_trace_sem = (OS_dispatch_semaphore *)v3;
    objc_release(start_trace_sem);
    v5 = dispatch_semaphore_create(0LL);
    completed_trace_sem = v2->_completed_trace_sem;
    v2->_completed_trace_sem = (OS_dispatch_semaphore *)v5;
    objc_release(completed_trace_sem);
    v7 = dispatch_semaphore_create(0LL);
    stop_trace_sem = v2->_stop_trace_sem;
    v2->_stop_trace_sem = (OS_dispatch_semaphore *)v7;
    objc_release(stop_trace_sem);
  }
  return v2;
}