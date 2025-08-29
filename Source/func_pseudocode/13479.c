-[NSString tsu_stringQuotedIfContainsCharacterSet:]
id __cdecl -[NSString tsu_stringQuotedIfContainsCharacterSet:](NSString *self, SEL a2, id a3)
{
  NSString *v4; // x19
  void *v5; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(self);
  if ( -[NSString rangeOfCharacterFromSet:](v4, "rangeOfCharacterFromSet:", a3) != (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v5 = -[NSString mutableCopy](v4, "mutableCopy");
    objc_msgSend(
      v5,
      "replaceOccurrencesOfString:withString:options:range:",
      CFSTR("\""),
      CFSTR("\"\""),
      0LL,
      0LL,
      -[NSString length](v4, "length"));
    objc_msgSend(v5, "appendString:", CFSTR("\""));
    objc_msgSend(v5, "insertString:atIndex:", CFSTR("\""), 0LL);
    objc_release(v4);
    v4 = (NSString *)v5;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}