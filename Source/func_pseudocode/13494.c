-[NSString tsu_substringWithComposedCharacterSequencesTruncatedToLength:]
id __cdecl -[NSString tsu_substringWithComposedCharacterSequencesTruncatedToLength:](
        NSString *self,
        SEL a2,
        unsigned __int64 a3)
{
  NSString *v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( -[NSString length](self, "length") <= a3 )
    v5 = objc_retain(self);
  else
    v5 = objc_retainAutoreleasedReturnValue(
           -[NSString substringToIndex:](
             self,
             "substringToIndex:",
             -[NSString rangeOfComposedCharacterSequenceAtIndex:](self, "rangeOfComposedCharacterSequenceAtIndex:", a3)));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}