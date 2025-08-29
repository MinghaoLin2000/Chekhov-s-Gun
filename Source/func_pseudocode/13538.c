-[NSString tsu_stringWithNormalizedSpaces]
id __cdecl -[NSString tsu_stringWithNormalizedSpaces](NSString *self, SEL a2)
{
  NSCharacterSet *v3; // x20
  id v4; // x19
  void *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet whitespaceCharacterSet](&OBJC_CLASS___NSCharacterSet, "whitespaceCharacterSet"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSString tsu_stringWithoutNonbreakingSpaces](self, "tsu_stringWithoutNonbreakingSpaces"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "tsu_stringByReplacingInstancesOfCharactersInSet:withString:", v3, CFSTR(" ")));
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}