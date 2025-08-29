-[NSCalendar atx_timestampWithHour:minute:atDayOfTimestamp:]
double __cdecl -[NSCalendar atx_timestampWithHour:minute:atDayOfTimestamp:](
        NSCalendar *self,
        SEL a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        id a5)
{
  NSDateComponents *v8; // x22
  NSDate *v9; // x19
  double v10; // d0
  double v11; // d8

  v8 = objc_retainAutoreleasedReturnValue(-[NSCalendar components:fromDate:](self, "components:fromDate:", 28LL, a5));
  -[NSDateComponents setHour:](v8, "setHour:", a3);
  -[NSDateComponents setMinute:](v8, "setMinute:", a4);
  v9 = objc_retainAutoreleasedReturnValue(-[NSCalendar dateFromComponents:](self, "dateFromComponents:", v8));
  -[NSDate timeIntervalSinceReferenceDate](v9, "timeIntervalSinceReferenceDate");
  v11 = v10;
  objc_release(v9);
  objc_release(v8);
  return v11;
}