-[lite_printer_t initWithBrowseInfo:description:]
lite_printer_t *__cdecl -[lite_printer_t initWithBrowseInfo:description:](lite_printer_t *self, SEL a2, id a3, id a4)
{
  id v7; // x19
  id v8; // x20
  lite_printer_t *v9; // x0
  lite_printer_t *v10; // x21
  NSDate *v11; // x0
  NSDate *printerDescriptionTime; // x8
  NSOperationQueue *v13; // x0
  NSOperationQueue *printerOperationQueue; // x8
  objc_super v16; // [xsp+0h] [xbp-40h] BYREF

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___lite_printer_t;
  v9 = -[lite_printer_t init](&v16, "init");
  v10 = v9;
  if ( v9 )
  {
    objc_storeStrong((id *)&v9->_browseInfo, a3);
    objc_storeStrong((id *)&v10->_printerDescription, a4);
    v11 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
    printerDescriptionTime = v10->_printerDescriptionTime;
    v10->_printerDescriptionTime = v11;
    objc_release(printerDescriptionTime);
    v13 = objc_opt_new(&OBJC_CLASS___NSOperationQueue);
    printerOperationQueue = v10->_printerOperationQueue;
    v10->_printerOperationQueue = v13;
    objc_release(printerOperationQueue);
    if ( qword_1000C3EC8 != -1 )
      dispatch_once(&qword_1000C3EC8, &stru_100091860);
    -[NSOperationQueue setUnderlyingQueue:](v10->_printerOperationQueue, "setUnderlyingQueue:", qword_1000C3EC0);
    -[NSOperationQueue setMaxConcurrentOperationCount:](
      v10->_printerOperationQueue,
      "setMaxConcurrentOperationCount:",
      4LL);
    -[lite_printer_t _logInitialization](v10, "_logInitialization");
  }
  objc_release(v8);
  objc_release(v7);
  return v10;
}