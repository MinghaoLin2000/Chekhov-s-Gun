-[DeviceBlueButton commonSetup]
void __cdecl -[DeviceBlueButton commonSetup](DeviceBlueButton *self, SEL a2)
{
  NSFont *v3; // x20
  void *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceBlueButton setBezelStyle:](self, "setBezelStyle:", 2LL);
  -[DeviceBlueButton setBordered:](self, "setBordered:", 0LL);
  -[DeviceBlueButton setAlignment:](self, "setAlignment:", 1LL);
  -[DeviceBlueButton setImageHugsTitle:](self, "setImageHugsTitle:", 1LL);
  -[DeviceBlueButton setImagePosition:](self, "setImagePosition:", 7LL);
  v3 = objc_retainAutoreleasedReturnValue(+[NSFont boldSystemFontOfSize:](&OBJC_CLASS___NSFont, "boldSystemFontOfSize:", 13.0));
  -[DeviceBlueButton setFont:](self, "setFont:", v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceBlueButton cell](self, "cell"));
  objc_msgSend(v4, "setBackgroundStyle:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}