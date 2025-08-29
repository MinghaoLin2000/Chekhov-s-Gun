-[NSDate p_localeUses24HourTimeCycle]
bool __cdecl -[NSDate p_localeUses24HourTimeCycle](NSDate *self, SEL a2)
{
  NSLocale *v2; // x19
  NSString *v3; // x20
  bool v4; // w21

  v2 = objc_retainAutoreleasedReturnValue(+[NSLocale autoupdatingCurrentLocale](&OBJC_CLASS___NSLocale, "autoupdatingCurrentLocale"));
  v3 = objc_retainAutoreleasedReturnValue(
         +[NSDateFormatter dateFormatFromTemplate:options:locale:](
           &OBJC_CLASS___NSDateFormatter,
           "dateFormatFromTemplate:options:locale:",
           CFSTR("j"),
           0LL,
           v2));
  v4 = -[NSString rangeOfString:](v3, "rangeOfString:", CFSTR("a")) == (void *)0x7FFFFFFFFFFFFFFFLL;
  objc_release(v3);
  objc_release(v2);
  return v4;
}