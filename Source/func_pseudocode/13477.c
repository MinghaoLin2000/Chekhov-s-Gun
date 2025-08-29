-[NSString tsu_pathExceptPrivate]
id __cdecl -[NSString tsu_pathExceptPrivate](NSString *self, SEL a2)
{
  __int64 v3; // x1
  NSString *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( -[NSString rangeOfString:](self, "rangeOfString:", CFSTR("/private")) )
    v4 = objc_retain(self);
  else
    v4 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](self, "substringFromIndex:", v3));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}