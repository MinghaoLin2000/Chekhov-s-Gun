-[NSString tsu_keyPathByRemovingFirstKey]
id __cdecl -[NSString tsu_keyPathByRemovingFirstKey](NSString *self, SEL a2)
{
  char *v3; // x0
  __CFString *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = (char *)-[NSString rangeOfString:options:](self, "rangeOfString:options:", CFSTR("."), 2LL);
  if ( v3 == (char *)0x7FFFFFFFFFFFFFFFLL )
    v4 = &stru_1001DFAA0;
  else
    v4 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](self, "substringFromIndex:", v3 + 1));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}