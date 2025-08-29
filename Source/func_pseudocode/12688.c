-[NSDate dateFormatterFromTemplate12Hour:template24Hour:withDateFormatter:]
id __cdecl -[NSDate dateFormatterFromTemplate12Hour:template24Hour:withDateFormatter:](
        NSDate *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x0
  void *v11; // x22
  id v12; // x0
  void *v13; // x23
  id v14; // x2
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = v10;
  if ( v10 )
    v12 = objc_retain(v10);
  else
    v12 = objc_alloc_init((Class)&OBJC_CLASS___NSDateFormatter);
  v13 = v12;
  if ( -[NSDate p_localeUses24HourTimeCycle](self, "p_localeUses24HourTimeCycle") )
    v14 = v9;
  else
    v14 = v8;
  objc_msgSend(v13, "setLocalizedDateFormatFromTemplate:", v14);
  objc_release(v11);
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}