-[NSDate p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:withDateFormatter:]
id __cdecl -[NSDate p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:withDateFormatter:](
        NSDate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x19
  void *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(
         -[NSDate dateFormatterFromTemplate12Hour:template24Hour:withDateFormatter:](
           self,
           "dateFormatterFromTemplate12Hour:template24Hour:withDateFormatter:",
           CFSTR("eeehhmma"),
           CFSTR("eeeHHmm"),
           a4));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "stringFromDate:", v6));
  objc_release(v6);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}