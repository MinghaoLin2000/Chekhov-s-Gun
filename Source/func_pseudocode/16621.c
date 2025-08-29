-[FirmwareBundle initWithBundlePath:]
FirmwareBundle *__cdecl -[FirmwareBundle initWithBundlePath:](FirmwareBundle *self, SEL a2, id a3)
{
  NSBundle *v4; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = +[NSBundle bundleWithPath:](&OBJC_CLASS___NSBundle, "bundleWithPath:", a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[FirmwareBundle initWithBundle:](self, "initWithBundle:", v4);
}