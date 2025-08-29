-[NSDate p_ruleForOverAYearAgoForDate:withDateFormatter:]
id __cdecl -[NSDate p_ruleForOverAYearAgoForDate:withDateFormatter:](NSDate *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x0
  void *v7; // x20
  id v8; // x0
  void *v9; // x21
  void *v10; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = v6;
  if ( v6 )
    v8 = objc_retain(v6);
  else
    v8 = objc_alloc_init((Class)&OBJC_CLASS___NSDateFormatter);
  v9 = v8;
  objc_msgSend(v8, "setLocalizedDateFormatFromTemplate:", CFSTR("Mdy"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "stringFromDate:", v5));
  objc_release(v9);
  objc_release(v7);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}