-[NSDate p_rule1To23HoursAgo:withDateFormatter:lowercase:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[NSDate p_rule1To23HoursAgo:withDateFormatter:lowercase:](
        NSDate *self,
        SEL a2,
        signed __int64 a3,
        id a4,
        bool a5)
{
  _BOOL8 v5; // x19
  id v8; // x23
  id v9; // x24
  void *v10; // x25
  NSString *v11; // x20
  id v12; // x19
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = a5;
  v8 = objc_retain(a4);
  v9 = objc_retainAutoreleasedReturnValue(SFUMainBundle());
  v10 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v9,
            "localizedStringForKey:value:table:",
            CFSTR("%ld hour(s) ago"),
            &stru_1001DFAA0,
            CFSTR("TSUtility")));
  v11 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v10, a3));
  objc_release(v10);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(
          -[NSDate p_stringWithString:lowercase:dateFormatter:](
            self,
            "p_stringWithString:lowercase:dateFormatter:",
            v11,
            v5,
            v8));
  objc_release(v8);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}