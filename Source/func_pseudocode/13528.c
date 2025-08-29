-[NSString tsu_middleTruncateToLength:]
id __cdecl -[NSString tsu_middleTruncateToLength:](NSString *self, SEL a2, unsigned __int64 a3)
{
  NSString *v4; // x19
  unsigned __int64 v5; // x21
  void *v6; // x0
  __int64 v7; // x1
  NSString *v8; // x20
  void *v9; // x0
  __int64 v10; // x1
  NSString *v11; // x21
  id v12; // x22
  void *v13; // x23
  NSString *v14; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(self);
  if ( -[NSString length](v4, "length") > a3 )
  {
    v5 = (a3 >> 1) - 1;
    v6 = -[NSString rangeOfComposedCharacterSequencesForRange:](
           v4,
           "rangeOfComposedCharacterSequencesForRange:",
           0LL,
           v5);
    v8 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](v4, "substringWithRange:", v6, v7));
    v9 = -[NSString rangeOfComposedCharacterSequencesForRange:](
           v4,
           "rangeOfComposedCharacterSequencesForRange:",
           (char *)-[NSString length](v4, "length") - v5,
           v5);
    v11 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](v4, "substringWithRange:", v9, v10));
    v12 = objc_retainAutoreleasedReturnValue(SFUMainBundle());
    v13 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v12,
              "localizedStringForKey:value:table:",
              CFSTR("%1$@…%2$@"),
              &stru_1001DFAA0,
              CFSTR("TSUtility")));
    objc_release(v12);
    v14 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v13, v8, v11));
    objc_release(v4);
    objc_release(v13);
    objc_release(v11);
    objc_release(v8);
    v4 = v14;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}