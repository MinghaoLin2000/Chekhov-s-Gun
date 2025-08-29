-[FMMFileLogger logString:]
void __cdecl -[FMMFileLogger logString:](FMMFileLogger *self, SEL a2, id a3)
{
  _QWORD block[5]; // [xsp+38h] [xbp-78h] BYREF

  -[NSDate timeIntervalSinceReferenceDate](
    +[NSDate date](&OBJC_CLASS___NSDate, "date"),
    "timeIntervalSinceReferenceDate");
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_1000047D4;
  block[3] = &unk_100008310;
  block[4] = +[NSString stringWithFormat:](
               &OBJC_CLASS___NSString,
               "stringWithFormat:",
               CFSTR("%@ - %@ - [%@] - [%@(%@)] %@\n"),
               +[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:"),
               +[NSDate date](&OBJC_CLASS___NSDate, "date"),
               +[NSThread currentThread](&OBJC_CLASS___NSThread, "currentThread"),
               -[NSProcessInfo processName](
                 +[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"),
                 "processName"),
               +[NSNumber numberWithInt:](
                 &OBJC_CLASS___NSNumber,
                 "numberWithInt:",
                 -[NSProcessInfo processIdentifier](
                   +[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"),
                   "processIdentifier")),
               a3);
  dispatch_async((dispatch_queue_t)-[FMMFileLogger serialQueue](self, "serialQueue"), block);
}