-[IPPSessionTransaction _send0_initialPayload:]
void __cdecl -[IPPSessionTransaction _send0_initialPayload:](IPPSessionTransaction *self, SEL a2, id a3)
{
  id v4; // x19
  NSOutputStream *outputStream; // x0
  NSOutputStream *v6; // x21
  id v7; // x22
  char v8; // w23
  OS_dispatch_queue *v9; // x21
  bool tlsRetry; // w23
  dispatch_time_t v11; // x20
  os_log_s *v12; // x20
  NSOutputStream *v13; // x0
  os_log_s *v14; // x21
  NSInputStream *inputStream; // x0
  _QWORD v16[4]; // [xsp+0h] [xbp-70h] BYREF
  id v17; // [xsp+20h] [xbp-50h] BYREF
  bool v18; // [xsp+28h] [xbp-48h]
  id location[2]; // [xsp+30h] [xbp-40h] BYREF

  v4 = objc_retain(a3);
  dispatch_assert_queue_V2((dispatch_queue_t)self->_taskQueue);
  outputStream = self->_outputStream;
  if ( !outputStream )
  {
    v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
    {
      LOWORD(location[0]) = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v12,
        OS_LOG_TYPE_DEFAULT,
        "no stream to write to",
        (uint8_t *)location,
        2u);
    }
    v13 = (NSOutputStream *)v12;
    goto LABEL_10;
  }
  v6 = objc_retain(outputStream);
  v7 = objc_retainAutorelease(objc_retain(v4));
  v8 = sub_1000087E4(v6, objc_msgSend(v7, "bytes"), objc_msgSend(v7, "length"));
  objc_release(v7);
  objc_release(v6);
  if ( (v8 & 1) == 0 )
  {
    v14 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
    {
      LOWORD(location[0]) = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v14,
        OS_LOG_TYPE_DEFAULT,
        "Couldn't send initial payload to output stream",
        (uint8_t *)location,
        2u);
    }
    objc_release(v14);
    -[NSOutputStream close](self->_outputStream, "close");
    inputStream = self->_inputStream;
    self->_inputStream = 0LL;
    objc_release(inputStream);
    v13 = self->_outputStream;
    self->_outputStream = 0LL;
LABEL_10:
    objc_release(v13);
    goto LABEL_11;
  }
  objc_initWeak(location, self);
  v9 = objc_retainAutoreleasedReturnValue(-[IPPSession workQueue](self->_session, "workQueue"));
  tlsRetry = self->_tlsRetry;
  v11 = dispatch_time(0LL, 3000000000LL);
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_10000A058;
  v16[3] = &unk_100091168;
  objc_copyWeak(&v17, location);
  v18 = tlsRetry;
  dispatch_after(v11, (dispatch_queue_t)v9, v16);
  objc_destroyWeak(&v17);
  objc_release(v9);
  objc_destroyWeak(location);
LABEL_11:
  objc_release(v4);
}