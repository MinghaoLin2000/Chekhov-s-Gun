-[IPPControlLogging preserveResponseFailure:forSequence:]
void __cdecl -[IPPControlLogging preserveResponseFailure:forSequence:](IPPControlLogging *self, SEL a2, id a3, int a4)
{
  id v6; // x19
  NSDate *v7; // x23
  id v8; // x22
  NSDate *v9; // x21
  _QWORD v10[4]; // [xsp+0h] [xbp-70h] BYREF
  id v11; // [xsp+20h] [xbp-50h]
  IPPControlLogging *v12; // [xsp+28h] [xbp-48h]
  id v13; // [xsp+30h] [xbp-40h]
  int v14; // [xsp+38h] [xbp-38h]

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_100047D00;
  v10[3] = &unk_10009EFE8;
  v14 = a4;
  v8 = objc_retain(v6);
  v11 = v8;
  v12 = self;
  v13 = v7;
  v9 = objc_retain(v7);
  -[IPPControlLogging onQueueAsyncIfPreserving:](self, "onQueueAsyncIfPreserving:", v10);
  objc_release(v13);
  objc_release(v11);
  objc_release(v9);
  objc_release(v8);
}