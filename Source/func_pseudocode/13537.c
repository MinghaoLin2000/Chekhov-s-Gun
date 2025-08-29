-[NSString tsu_stringWithoutNonbreakingSpaces]
id __cdecl -[NSString tsu_stringWithoutNonbreakingSpaces](NSString *self, SEL a2)
{
  NSCharacterSet *v3; // x20
  id v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSCharacterSet characterSetWithCharactersInString:](
           &OBJC_CLASS___NSCharacterSet,
           "characterSetWithCharactersInString:",
           CFSTR(" ")));
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSString tsu_stringByReplacingInstancesOfCharactersInSet:withString:](
           self,
           "tsu_stringByReplacingInstancesOfCharactersInSet:withString:",
           v3,
           CFSTR(" ")));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}