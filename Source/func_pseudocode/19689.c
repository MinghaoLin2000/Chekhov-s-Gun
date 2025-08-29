-[IPPSessionTransaction writeDocumentData0:length:]
id __cdecl -[IPPSessionTransaction writeDocumentData0:length:](
        IPPSessionTransaction *self,
        SEL a2,
        const char *a3,
        unsigned __int64 a4)
{
  NSOutputStream *outputStream; // x0
  NSOutputStream *v8; // x0
  DocumentCompressor *documentCompressor; // x23
  NSOutputStream *v10; // x22
  unsigned int v11; // w21
  os_log_s *v12; // x20
  unsigned __int64 ctWritten; // x8
  NSError *v14; // x0
  NSError *transportError; // x8
  NSOutputStream *v16; // x0
  NSInputStream *inputStream; // x0
  NSError *v18; // x0
  _QWORD v20[4]; // [xsp+8h] [xbp-78h] BYREF
  id v21; // [xsp+28h] [xbp-58h]
  uint8_t buf[4]; // [xsp+30h] [xbp-50h] BYREF
  unsigned __int64 v23; // [xsp+34h] [xbp-4Ch]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  dispatch_assert_queue_V2((dispatch_queue_t)self->_taskQueue);
  outputStream = self->_outputStream;
  if ( self->_documentCompressor )
  {
    v8 = objc_retain(outputStream);
    documentCompressor = self->_documentCompressor;
    v20[0] = _NSConcreteStackBlock;
    v20[1] = 3254779904LL;
    v20[2] = sub_10000893C;
    v20[3] = &unk_100090F38;
    v21 = v8;
    v10 = objc_retain(v8);
    v11 = -[DocumentCompressor compressChunk:length:completionHandler:](
            documentCompressor,
            "compressChunk:length:completionHandler:",
            a3,
            a4,
            v20);
    objc_release(v21);
    objc_release(v10);
    if ( v11 )
    {
LABEL_3:
      self->_ctWritten += a4;
      goto LABEL_8;
    }
  }
  else if ( (sub_1000087E4(outputStream, a3, a4) & 1) != 0 )
  {
    goto LABEL_3;
  }
  v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
  {
    ctWritten = self->_ctWritten;
    *(_DWORD *)buf = 134217984;
    v23 = ctWritten;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v12,
      OS_LOG_TYPE_DEFAULT,
      "writeDocumentData0: failed after writing %ld uncompressed",
      buf,
      0xCu);
  }
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSError errorWithDomain:code:userInfo:](
            &OBJC_CLASS___NSError,
            "errorWithDomain:code:userInfo:",
            NSURLErrorDomain,
            -3003LL,
            0LL));
  transportError = self->_transportError;
  self->_transportError = v14;
  objc_release(transportError);
  -[NSOutputStream close](self->_outputStream, "close");
  v16 = self->_outputStream;
  self->_outputStream = 0LL;
  objc_release(v16);
  inputStream = self->_inputStream;
  self->_inputStream = 0LL;
  objc_release(inputStream);
LABEL_8:
  v18 = self->_transportError;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v18);
}