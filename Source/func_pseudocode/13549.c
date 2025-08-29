-[NSString tsu_firstKey]
id __cdecl -[NSString tsu_firstKey](NSString *self, SEL a2)
{
  NSString *v2; // x19
  void *v3; // x0
  NSString *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  v3 = -[NSString rangeOfString:options:](v2, "rangeOfString:options:", CFSTR("."), 2LL);
  if ( v3 != (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[NSString substringToIndex:](v2, "substringToIndex:", v3));
    objc_release(v2);
    v2 = v4;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}