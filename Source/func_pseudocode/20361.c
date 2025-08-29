-[IPPControlLogging initWithIdentifier:]
IPPControlLogging *__cdecl -[IPPControlLogging initWithIdentifier:](IPPControlLogging *self, SEL a2, id a3)
{
  id v4; // x19
  IPPControlLogging *v5; // x20
  NSString *v6; // x22
  NSURL *v7; // x21
  NSString *v8; // x22
  NSURL *v9; // x0
  NSURL *controlFilePath; // x8
  NSDateFormatter *v11; // x0
  NSDateFormatter *dateFormatter; // x8
  objc_super v14; // [xsp+10h] [xbp-40h] BYREF

  v4 = objc_retain(a3);
  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___IPPControlLogging;
  v5 = -[IPPControlLogging init](&v14, "init");
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(NSTemporaryDirectory());
    v7 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:isDirectory:](&OBJC_CLASS___NSURL, "fileURLWithPath:isDirectory:", v6, 1LL));
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("control-%d-%@.txt"),
             getpid(),
             v4));
    v9 = objc_retainAutoreleasedReturnValue(-[NSURL URLByAppendingPathComponent:](v7, "URLByAppendingPathComponent:", v8));
    controlFilePath = v5->_controlFilePath;
    v5->_controlFilePath = v9;
    objc_release(controlFilePath);
    v11 = (NSDateFormatter *)objc_alloc_init((Class)&OBJC_CLASS___NSDateFormatter);
    dateFormatter = v5->_dateFormatter;
    v5->_dateFormatter = v11;
    objc_release(dateFormatter);
    -[NSDateFormatter setDateFormat:](v5->_dateFormatter, "setDateFormat:", CFSTR("yyyy-MM-dd'T'HH:mm:ss.SSSSSSz"));
    objc_release(v8);
    objc_release(v7);
  }
  objc_release(v4);
  return v5;
}