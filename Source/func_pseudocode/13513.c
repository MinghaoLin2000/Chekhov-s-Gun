-[NSString tsu_stringByMakingFirstCharacterUppercase]
id __cdecl -[NSString tsu_stringByMakingFirstCharacterUppercase](NSString *self, SEL a2)
{
  void *v3; // x19
  NSString *v4; // x20
  NSString *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = -[NSString mutableCopy](self, "mutableCopy");
  if ( objc_msgSend(v3, "length") )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[NSString substringToIndex:](self, "substringToIndex:", 1LL));
    v5 = objc_retainAutoreleasedReturnValue(-[NSString uppercaseString](v4, "uppercaseString"));
    objc_msgSend(v3, "replaceCharactersInRange:withString:", 0LL, 1LL, v5);
    objc_release(v5);
    objc_release(v4);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}