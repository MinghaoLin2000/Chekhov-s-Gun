-[NSString tsu_keyPathByRemovingLastKey]
id __cdecl -[NSString tsu_keyPathByRemovingLastKey](NSString *self, SEL a2)
{
  void *v3; // x0
  __CFString *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = -[NSString rangeOfString:options:](self, "rangeOfString:options:", CFSTR("."), 6LL);
  if ( v3 == (void *)0x7FFFFFFFFFFFFFFFLL )
    v4 = &stru_1001DFAA0;
  else
    v4 = objc_retainAutoreleasedReturnValue(-[NSString substringToIndex:](self, "substringToIndex:", v3));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}