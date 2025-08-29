-[platform_http_t writeIPPDocumentPayload:length:]
signed __int64 __cdecl -[platform_http_t writeIPPDocumentPayload:length:](
        platform_http_t *self,
        SEL a2,
        const char *a3,
        unsigned __int64 a4)
{
  IPPSessionTransaction *streamedTask; // x0
  unsigned __int64 v6; // x19
  id v7; // x21

  streamedTask = self->_streamedTask;
  if ( !streamedTask
    || (v6 = a4,
        v7 = objc_retainAutoreleasedReturnValue(
               -[IPPSessionTransaction writeDocumentDataBlocking:length:](
                 streamedTask,
                 "writeDocumentDataBlocking:length:",
                 a3)),
        objc_release(v7),
        v7) )
  {
    -[platform_http_t _teardownTask](self, "_teardownTask", a3, a4);
    return -1LL;
  }
  return v6;
}