-[platform_http_t _streamedTaskCompleted:response:data:]
void __cdecl -[platform_http_t _streamedTaskCompleted:response:data:](
        platform_http_t *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x22
  http_ipp_response_t *v11; // x0
  http_ipp_response_t *streamedTaskResponse; // x8
  IPPSessionTransaction *streamedTask; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = (http_ipp_response_t *)objc_retainAutoreleasedReturnValue(
                                 -[platform_http_t createTransactionResult:response:data:](
                                   self,
                                   "createTransactionResult:response:data:",
                                   v8,
                                   v9,
                                   v10));
  streamedTaskResponse = self->_streamedTaskResponse;
  self->_streamedTaskResponse = v11;
  objc_release(streamedTaskResponse);
  streamedTask = self->_streamedTask;
  self->_streamedTask = 0LL;
  objc_release(streamedTask);
  objc_release(v10);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}