-[platform_http_t _teardownTask]
void __cdecl -[platform_http_t _teardownTask](platform_http_t *self, SEL a2)
{
  IPPSessionTransaction *streamedTask; // x0
  OS_dispatch_semaphore *streamedTaskFinishedSemaphore; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  streamedTask = self->_streamedTask;
  self->_streamedTask = 0LL;
  objc_release(streamedTask);
  -[IPPSessionTransaction setTransactionCompletedCallback:](
    self->_streamedTask,
    "setTransactionCompletedCallback:",
    0LL);
  streamedTaskFinishedSemaphore = self->_streamedTaskFinishedSemaphore;
  self->_streamedTaskFinishedSemaphore = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(streamedTaskFinishedSemaphore);
}