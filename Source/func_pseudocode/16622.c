-[FirmwareBundle initWithBundleName:]
FirmwareBundle *__cdecl -[FirmwareBundle initWithBundleName:](FirmwareBundle *self, SEL a2, id a3)
{
  void *v4; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_msgSend(
         +[FirmwareBundle defaultBundlePath](&OBJC_CLASS___FirmwareBundle, "defaultBundlePath"),
         "stringByAppendingString:",
         a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[FirmwareBundle initWithBundlePath:](self, "initWithBundlePath:", v4);
}