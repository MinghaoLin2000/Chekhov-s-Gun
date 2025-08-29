-[IPPSessionTransaction URLSession:task:needNewBodyStream:]
void __cdecl -[IPPSessionTransaction URLSession:task:needNewBodyStream:](
        IPPSessionTransaction *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  void (__fastcall **v8)(id, id); // x20
  NSOutputStream *outputStream; // x0
  NSOutputStream **p_outputStream; // x24
  NSOutputStream *v11; // x0
  id v12; // x22
  void *v13; // x0
  __int64 v14; // x2
  id v15; // x26
  id v16; // x23
  id v17; // x27
  id v18; // x25
  os_log_s *v19; // x21
  id v20; // [xsp+0h] [xbp-70h] BYREF
  id v21; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[16]; // [xsp+10h] [xbp-60h] BYREF

  v7 = objc_retain(a4);
  v8 = (void (__fastcall **)(id, id))objc_retain(a5);
  dispatch_assert_queue_V2((dispatch_queue_t)self->_taskQueue);
  p_outputStream = &self->_outputStream;
  outputStream = self->_outputStream;
  if ( outputStream )
  {
    -[NSOutputStream close](outputStream, "close");
    v11 = *p_outputStream;
    *p_outputStream = 0LL;
    objc_release(v11);
  }
  if ( self->_initialPayloadSentCallback || self->_canResendInitialRequest )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[ipp_t dataRepresentation](self->_initialRequest, "dataRepresentation"));
    v13 = objc_msgSend(v12, "length");
    if ( (unsigned __int64)v13 <= 0x8000 )
      v14 = 0x8000LL;
    else
      v14 = (__int64)v13;
    v20 = 0LL;
    v21 = 0LL;
    +[NSInputStream getBoundStreamsWithBufferSize:inputStream:outputStream:](
      &OBJC_CLASS___NSInputStream,
      "getBoundStreamsWithBufferSize:inputStream:outputStream:",
      v14,
      &v21,
      &v20);
    v15 = v21;
    v16 = objc_retain(v21);
    v17 = v20;
    v18 = objc_retain(v20);
    objc_msgSend(v18, "open");
    if ( objc_msgSend(v18, "streamStatus") == (void *)2 )
    {
      objc_storeStrong((id *)&self->_inputStream, v15);
      objc_storeStrong((id *)&self->_outputStream, v17);
      v8[2](v8, v16);
      -[IPPSessionTransaction _send0_initialPayload:](self, "_send0_initialPayload:", v12);
      if ( self->_canResendInitialRequest )
        -[IPPSessionTransaction finishedWriting](self, "finishedWriting");
    }
    else
    {
      v8[2](v8, 0LL);
    }
    objc_release(v18);
    objc_release(v16);
    objc_release(v12);
  }
  else
  {
    v19 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v19, OS_LOG_TYPE_DEFAULT) )
    {
      *(_WORD *)buf = 0;
      _os_log_impl((void *)&_mh_execute_header, v19, OS_LOG_TYPE_DEFAULT, "body stream already spent", buf, 2u);
    }
    objc_release(v19);
    v8[2](v8, 0LL);
    objc_msgSend(v7, "cancel");
  }
  objc_release(v8);
  objc_release(v7);
}