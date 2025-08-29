-[platform_http_t finishStreamedIPPRequest]
id __cdecl -[platform_http_t finishStreamedIPPRequest](platform_http_t *self, SEL a2)
{
  IPPSessionTransaction *streamedTask; // x0
  http_ipp_response_t *streamedTaskResponse; // x0
  http_ipp_response_t *v5; // x0
  http_ipp_response_t *v6; // x8
  ipp_response_t *v7; // x20
  http_ipp_response_t *v8; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  streamedTask = self->_streamedTask;
  if ( streamedTask && self->_streamedTaskFinishedSemaphore )
  {
    -[IPPSessionTransaction finishedWriting](streamedTask, "finishedWriting");
    dispatch_semaphore_wait((dispatch_semaphore_t)self->_streamedTaskFinishedSemaphore, 0xFFFFFFFFFFFFFFFFLL);
  }
  streamedTaskResponse = self->_streamedTaskResponse;
  if ( !streamedTaskResponse )
  {
    v5 = -[http_ipp_response_t initWithTransportStatus:](
           objc_alloc(&OBJC_CLASS___http_ipp_response_t),
           "initWithTransportStatus:",
           1LL);
    v6 = self->_streamedTaskResponse;
    self->_streamedTaskResponse = v5;
    objc_release(v6);
    streamedTaskResponse = self->_streamedTaskResponse;
  }
  if ( !-[http_ipp_response_t transportStatus](streamedTaskResponse, "transportStatus") )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[http_ipp_response_t ippResponse](self->_streamedTaskResponse, "ippResponse"));
    -[platform_http_t debugLogIPP:ipp:](self, "debugLogIPP:ipp:", "RECV_IPP", v7);
    objc_release(v7);
  }
  -[IPPSessionTransaction invalidate](self->_streamedTask, "invalidate");
  v8 = self->_streamedTaskResponse;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v8);
}