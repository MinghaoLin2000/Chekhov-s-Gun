-[NSString tsu_stringByMakingFirstCharacterLowercase]
id __cdecl -[NSString tsu_stringByMakingFirstCharacterLowercase](NSString *self, SEL a2)
{
  NSString *v2; // x19
  NSString *v3; // x20
  NSString *v4; // x21
  NSString *v5; // x22
  NSString *v6; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v2 = objc_retain(self);
  if ( -[NSString length](v2, "length") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[NSString substringToIndex:](v2, "substringToIndex:", 1LL));
    v4 = objc_retainAutoreleasedReturnValue(-[NSString lowercaseString](v3, "lowercaseString"));
    if ( !-[NSString isEqualToString:](v3, "isEqualToString:", v4) )
    {
      v5 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](v2, "substringFromIndex:", 1LL));
      v6 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingString:](v4, "stringByAppendingString:", v5));
      objc_release(v2);
      objc_release(v5);
      v2 = v6;
    }
    objc_release(v4);
    objc_release(v3);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}