-[DeviceFooterViewController stopAllProgressDisplays]
void __cdecl -[DeviceFooterViewController stopAllProgressDisplays](DeviceFooterViewController *self, SEL a2)
{
  unsigned __int64 v3; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( -[DeviceFooterViewController primaryProgressDisplayType](self, "primaryProgressDisplayType") )
    -[DeviceFooterViewController stopProgressDisplayWithProgressDisplayType:](
      self,
      "stopProgressDisplayWithProgressDisplayType:",
      -[DeviceFooterViewController primaryProgressDisplayType](self, "primaryProgressDisplayType"));
  if ( -[DeviceFooterViewController secondaryProgressDisplayType](self, "secondaryProgressDisplayType") )
  {
    v3 = -[DeviceFooterViewController secondaryProgressDisplayType](self, "secondaryProgressDisplayType");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceFooterViewController stopProgressDisplayWithProgressDisplayType:](
      self,
      "stopProgressDisplayWithProgressDisplayType:",
      v3);
  }
}