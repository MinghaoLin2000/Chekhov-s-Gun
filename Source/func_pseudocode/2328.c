-[DeviceModeFinderViewController hideRawDeviceModeProgressFooter]
void __cdecl -[DeviceModeFinderViewController hideRawDeviceModeProgressFooter](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  NSView *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewContainer](self, "footerViewContainer"));
  -[NSView setHidden:](v2, "setHidden:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}