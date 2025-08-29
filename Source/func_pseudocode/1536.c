-[DeviceFooterViewController setSecondaryButtonTarget:]
void __cdecl -[DeviceFooterViewController setSecondaryButtonTarget:](DeviceFooterViewController *self, SEL a2, id a3)
{
  id v4; // x19
  NSButton *v5; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryButton](self, "secondaryButton"));
  -[NSButton setTarget:](v5, "setTarget:", v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}