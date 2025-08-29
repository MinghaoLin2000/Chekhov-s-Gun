-[IPPSessionTransaction initWithURL:ippRequest:session:]
IPPSessionTransaction *__cdecl -[IPPSessionTransaction initWithURL:ippRequest:session:](
        IPPSessionTransaction *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v9; // x19
  id v10; // x20
  id v11; // x21
  IPPSessionTransaction *v12; // x0
  IPPSessionTransaction *v13; // x22
  ipp_request_t *v14; // x0
  ipp_request_t *initialRequest; // x8
  NSURLSession *v16; // x0
  OS_dispatch_queue *v17; // x0
  OS_dispatch_queue *taskQueue; // x8
  objc_super v20; // [xsp+0h] [xbp-50h] BYREF

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_retain(a5);
  v20.receiver = self;
  v20.super_class = (Class)&OBJC_CLASS___IPPSessionTransaction;
  v12 = -[IPPSessionTransaction init](&v20, "init");
  v13 = v12;
  if ( v12 )
  {
    objc_storeStrong((id *)&v12->_url, a3);
    v14 = (ipp_request_t *)objc_msgSend(v10, "copy");
    initialRequest = v13->_initialRequest;
    v13->_initialRequest = v14;
    objc_release(initialRequest);
    v13->_canResendInitialRequest = 0;
    objc_storeStrong((id *)&v13->_session, a5);
    v16 = objc_retainAutoreleasedReturnValue(-[IPPSession URLSession](v13->_session, "URLSession"));
    if ( !v16 )
      __assert_rtn(
        "-[IPPSessionTransaction initWithURL:ippRequest:session:]",
        "platform_http.mm",
        404,
        "_session.URLSession");
    objc_release(v16);
    v17 = objc_retainAutoreleasedReturnValue(-[IPPSession workQueue](v13->_session, "workQueue"));
    taskQueue = v13->_taskQueue;
    v13->_taskQueue = v17;
    objc_release(taskQueue);
  }
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  return v13;
}