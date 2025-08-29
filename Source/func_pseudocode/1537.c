-[DeviceFooterViewController setPrimaryButtonAction:]
void __cdecl -[DeviceFooterViewController setPrimaryButtonAction:](DeviceFooterViewController *self, SEL a2, SEL a3)
{
  NSButton *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryButton](self, "primaryButton"));
  -[NSButton setAction:](v4, "setAction:", a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}