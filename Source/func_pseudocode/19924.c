-[lite_job_t createDataConsumer]
CGDataConsumer *__cdecl -[lite_job_t createDataConsumer](lite_job_t *self, SEL a2)
{
  return CGDataConsumerCreate(self->job_stream_http, (const CGDataConsumerCallbacks *)off_10009C358);
}