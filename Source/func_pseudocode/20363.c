-[IPPControlLogging _now:appendString:]
void __cdecl -[IPPControlLogging _now:appendString:](IPPControlLogging *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  NSDateFormatter *dateFormatter; // x23
  NSDate *v7; // x21
  NSString *v8; // x23
  NSString *v9; // x22
  id v10; // x23
  NSString *v11; // x21
  _QWORD v12[4]; // [xsp+10h] [xbp-60h] BYREF
  id v13; // [xsp+30h] [xbp-40h]
  id v14; // [xsp+38h] [xbp-38h]

  v5 = objc_retain(a4);
  dateFormatter = self->_dateFormatter;
  v7 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
  v8 = objc_retainAutoreleasedReturnValue(-[NSDateFormatter stringFromDate:](dateFormatter, "stringFromDate:", v7));
  v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("[%@]\n"), v8));
  objc_release(v8);
  objc_release(v7);
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_1000475E8;
  v12[3] = &unk_10009EF98;
  v13 = v9;
  v10 = objc_retain(v5);
  v14 = v10;
  v11 = objc_retain(v9);
  -[IPPControlLogging _withFile:](self, "_withFile:", v12);
  objc_release(v14);
  objc_release(v13);
  objc_release(v11);
  objc_release(v10);
}