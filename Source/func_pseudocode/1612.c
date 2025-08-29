-[DeviceScrollView backgroundColor]
id __cdecl -[DeviceScrollView backgroundColor](DeviceScrollView *self, SEL a2)
{
  NSColor *v2; // x20
  NSColor *v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(+[NSColor windowBackgroundColor](&OBJC_CLASS___NSColor, "windowBackgroundColor")));
  v3 = objc_retainAutoreleasedReturnValue(+[NSColor colorWithCGColor:](&OBJC_CLASS___NSColor, "colorWithCGColor:", -[NSColor CGColor](v2, "CGColor")));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}