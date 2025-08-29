-[NSString tsu_lastKey]
id __cdecl -[NSString tsu_lastKey](NSString *self, SEL a2)
{
  NSString *v2; // x19
  char *v3; // x0
  NSString *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  v3 = (char *)-[NSString rangeOfString:options:](v2, "rangeOfString:options:", CFSTR("."), 6LL);
  if ( v3 != (char *)0x7FFFFFFFFFFFFFFFLL )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](v2, "substringFromIndex:", v3 + 1));
    objc_release(v2);
    v2 = v4;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}