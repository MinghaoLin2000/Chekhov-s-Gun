-[NSDate p_ruleForYesterday:withDateFormatter:lowercase:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[NSDate p_ruleForYesterday:withDateFormatter:lowercase:](NSDate *self, SEL a2, id a3, id a4, bool a5)
{
  _BOOL8 v5; // x20
  id v8; // x22
  id v9; // x23
  id v10; // x19
  id v11; // x24
  void *v12; // x25
  id v13; // x20
  void *v14; // x22
  NSString *v15; // x21
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = a5;
  v8 = objc_retain(a4);
  v9 = objc_retain(a3);
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSDate dateFormatterFromTemplate12Hour:template24Hour:withDateFormatter:](
            self,
            "dateFormatterFromTemplate12Hour:template24Hour:withDateFormatter:",
            CFSTR("hhmma"),
            CFSTR("HHmm"),
            v8));
  v11 = objc_retainAutoreleasedReturnValue(SFUMainBundle());
  v12 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v11,
            "localizedStringForKey:value:table:",
            CFSTR("Yesterday, %@"),
            &stru_1001DFAA0,
            CFSTR("TSUtility")));
  objc_release(v11);
  v13 = objc_retainAutoreleasedReturnValue(
          -[NSDate p_stringWithString:lowercase:dateFormatter:](
            self,
            "p_stringWithString:lowercase:dateFormatter:",
            v12,
            v5,
            v8));
  objc_release(v8);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "stringFromDate:", v9));
  objc_release(v9);
  v15 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v13, v14));
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}