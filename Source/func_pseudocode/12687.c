-[NSDate tsu_shortFormattedDate]
id __cdecl -[NSDate tsu_shortFormattedDate](NSDate *self, SEL a2)
{
  id v3; // x20
  void *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         -[NSDate dateFormatterFromTemplate12Hour:template24Hour:withDateFormatter:](
           self,
           "dateFormatterFromTemplate12Hour:template24Hour:withDateFormatter:",
           CFSTR("MMMdyhhmma"),
           CFSTR("MMMdyHHmm"),
           0LL));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "stringFromDate:", self));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}