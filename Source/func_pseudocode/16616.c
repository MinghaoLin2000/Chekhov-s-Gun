+[FirmwareBundle defaultBundlePath]
id __cdecl +[FirmwareBundle defaultBundlePath](id a1, SEL a2)
{
  NSString *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v2 = -[NSBundle resourcePath](+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"), "resourcePath");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[NSString stringByAppendingFormat:](v2, "stringByAppendingFormat:", CFSTR("/FirmwareBundles/"));
}