-[ATXHeuristicJSEnv _isEventAtOneWithTimeIntervelOrDate:usesTwelveHourClock:]
bool __cdecl -[ATXHeuristicJSEnv _isEventAtOneWithTimeIntervelOrDate:usesTwelveHourClock:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        id a3,
        bool a4)
{
  _BOOL4 v4; // w20
  id v5; // x19
  NSCalendar *v6; // x21
  NSDateComponents *v7; // x22
  void *v8; // x0
  bool v10; // w9
  bool v11; // w20

  v4 = a4;
  v5 = objc_retainAutoreleasedReturnValue(-[ATXHeuristicJSEnv _dateFromTimeIntervalOrDate:](self, "_dateFromTimeIntervalOrDate:", a3));
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSCalendar currentCalendar](&OBJC_CLASS___NSCalendar, "currentCalendar"));
    v7 = objc_retainAutoreleasedReturnValue(-[NSCalendar components:fromDate:](v6, "components:fromDate:", 32LL, v5));
    objc_release(v6);
    v8 = -[NSDateComponents hour](v7, "hour");
    v10 = v8 == (void *)13 || v8 == (void *)1;
    if ( v4 )
      v11 = v10;
    else
      v11 = v8 == (void *)1;
    objc_release(v7);
  }
  else
  {
    v11 = 0;
  }
  objc_release(v5);
  return v11;
}