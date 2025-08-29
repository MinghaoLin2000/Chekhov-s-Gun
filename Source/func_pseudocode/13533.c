-[NSString tsu_stringWithoutBidiControls]
id __cdecl -[NSString tsu_stringWithoutBidiControls](NSString *self, SEL a2)
{
  NSCharacterSet *v3; // x20
  id v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSCharacterSet characterSetWithCharactersInString:](
           &OBJC_CLASS___NSCharacterSet,
           "characterSetWithCharactersInString:",
           CFSTR("\u200E\u200F\u202A\u202B\u202C\u202D\u202E⁦⁧⁨⁩")));
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSString tsu_stringByReplacingInstancesOfCharactersInSet:withString:](
           self,
           "tsu_stringByReplacingInstancesOfCharactersInSet:withString:",
           v3,
           &stru_1001DFAA0));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}