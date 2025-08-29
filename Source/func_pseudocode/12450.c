-[NSString tsu_UTTypeCopyPreferredTagWithClass:]
id __cdecl -[NSString tsu_UTTypeCopyPreferredTagWithClass:](NSString *self, SEL a2, id a3)
{
  __CFString *v3; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v3 = (__CFString *)UTTypeCopyPreferredTagWithClass((CFStringRef)self, (CFStringRef)a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}