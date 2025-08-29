-[platform_http_t startStreamedIPPRequest:]
id __cdecl -[platform_http_t startStreamedIPPRequest:](platform_http_t *self, SEL a2, const Real_IPP_Message *a3)
{
  IPPSessionTransaction *v5; // x0
  IPPSessionTransaction *streamedTask; // x8
  id v7; // x19
  dispatch_semaphore_s *v8; // x19
  OS_dispatch_semaphore *v9; // x0
  OS_dispatch_semaphore *streamedTaskFinishedSemaphore; // x8
  OS_dispatch_semaphore *v11; // x21
  OS_dispatch_semaphore *v12; // x21
  NSError *v13; // x23
  http_ipp_response_t *v14; // x0
  http_ipp_response_t *v15; // x20
  void **v17; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v18; // [xsp+8h] [xbp-98h]
  __int64 (__fastcall *v19)(int, int, int, id); // [xsp+10h] [xbp-90h]
  void *v20; // [xsp+18h] [xbp-88h]
  id v21; // [xsp+20h] [xbp-80h]
  id v22; // [xsp+28h] [xbp-78h] BYREF
  id location; // [xsp+30h] [xbp-70h] BYREF
  _QWORD v24[4]; // [xsp+38h] [xbp-68h] BYREF
  id v25; // [xsp+58h] [xbp-48h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v5 = (IPPSessionTransaction *)objc_retainAutoreleasedReturnValue(
                                  -[platform_http_t makeTask:forRequest:](
                                    self,
                                    "makeTask:forRequest:",
                                    CFSTR("streamed"),
                                    a3));
  streamedTask = self->_streamedTask;
  self->_streamedTask = v5;
  objc_release(streamedTask);
  if ( self->_documentCompression )
  {
    v7 = objc_retainAutoreleasedReturnValue(
           +[DocumentCompressor documentCompresorForName:](
             &OBJC_CLASS___DocumentCompressor,
             "documentCompresorForName:"));
    -[IPPSessionTransaction setDocumentCompressor:](self->_streamedTask, "setDocumentCompressor:", v7);
    objc_release(v7);
  }
  v24[0] = _NSConcreteStackBlock;
  v24[1] = 3254779904LL;
  v24[2] = sub_10000C220;
  v24[3] = &unk_100091078;
  v8 = objc_retain(dispatch_semaphore_create(0LL));
  v25 = v8;
  -[IPPSessionTransaction setInitialPayloadSentCallback:](self->_streamedTask, "setInitialPayloadSentCallback:", v24);
  v9 = (OS_dispatch_semaphore *)dispatch_semaphore_create(0LL);
  streamedTaskFinishedSemaphore = self->_streamedTaskFinishedSemaphore;
  self->_streamedTaskFinishedSemaphore = v9;
  objc_release(streamedTaskFinishedSemaphore);
  v11 = objc_retain(self->_streamedTaskFinishedSemaphore);
  objc_initWeak(&location, self);
  v17 = _NSConcreteStackBlock;
  v18 = 3254779904LL;
  v19 = sub_10000C228;
  v20 = &unk_1000912B8;
  objc_copyWeak(&v22, &location);
  v12 = objc_retain(v11);
  v21 = v12;
  -[IPPSessionTransaction setTransactionCompletedCallback:](
    self->_streamedTask,
    "setTransactionCompletedCallback:",
    &v17);
  -[platform_http_t debugLogIPP:ipp:](self, "debugLogIPP:ipp:", "SEND_IPP", a3->var1, v17, v18, v19, v20);
  -[IPPSessionTransaction start](self->_streamedTask, "start");
  dispatch_semaphore_wait(v8, 0xFFFFFFFFFFFFFFFFLL);
  v13 = objc_retainAutoreleasedReturnValue(-[IPPSessionTransaction transportError](self->_streamedTask, "transportError"));
  if ( v13 )
  {
    -[platform_http_t _teardownTask](self, "_teardownTask");
    v14 = (http_ipp_response_t *)objc_retainAutoreleasedReturnValue(-[platform_http_t httpResponseForError:](self, "httpResponseForError:", v13));
  }
  else
  {
    v14 = -[http_ipp_response_t initWithTransportStatus:](
            objc_alloc(&OBJC_CLASS___http_ipp_response_t),
            "initWithTransportStatus:",
            2LL);
  }
  v15 = v14;
  objc_release(v13);
  objc_release(v21);
  objc_destroyWeak(&v22);
  objc_destroyWeak(&location);
  objc_release(v12);
  objc_release(v25);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}