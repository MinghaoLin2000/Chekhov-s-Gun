+[TSUSystemInfo systemVersion]
id __cdecl +[TSUSystemInfo systemVersion](id a1, SEL a2)
{
  NSProcessInfo *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v2 = +[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[NSProcessInfo operatingSystemVersionString](v2, "operatingSystemVersionString");
}