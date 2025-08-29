-[DeviceModeFinderViewController showRawDeviceModeProgressFooter]
void __cdecl -[DeviceModeFinderViewController showRawDeviceModeProgressFooter](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  DeviceFooterViewController *v3; // x20
  DeviceFooterViewController *v4; // x20
  NSView *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setHiddenPrimaryButton:](v3, "setHiddenPrimaryButton:", 1LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setHiddenSecondaryButton:](v4, "setHiddenSecondaryButton:", 1LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewContainer](self, "footerViewContainer"));
  -[NSView setHidden:](v5, "setHidden:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}