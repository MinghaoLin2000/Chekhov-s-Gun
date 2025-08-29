-[NSString tsu_stringWithTrimmedWhitespace]
id __cdecl -[NSString tsu_stringWithTrimmedWhitespace](NSString *self, SEL a2)
{
  NSCharacterSet *v3; // x20
  NSArray *v4; // x19
  NSString *v5; // x21
  NSString *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSCharacterSet whitespaceAndNewlineCharacterSet](
           &OBJC_CLASS___NSCharacterSet,
           "whitespaceAndNewlineCharacterSet"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSString componentsSeparatedByCharactersInSet:](self, "componentsSeparatedByCharactersInSet:", v3));
  v5 = objc_retainAutoreleasedReturnValue(-[NSArray componentsJoinedByString:](v4, "componentsJoinedByString:", CFSTR(" ")));
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[NSString stringByTrimmingCharactersInSet:](v5, "stringByTrimmingCharactersInSet:", v3));
  objc_release(v5);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}