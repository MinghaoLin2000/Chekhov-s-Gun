-[DeviceModeFinderViewController loadingCompleteRawDeviceMode]
void __cdecl -[DeviceModeFinderViewController loadingCompleteRawDeviceMode](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  DeviceHeaderViewController *v3; // x20
  NSButton *v4; // x21
  NSView *v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController headerViewController](self, "headerViewController"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController manageStorageButton](v3, "manageStorageButton"));
  -[NSButton setHidden:](v4, "setHidden:", 1LL);
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewContainer](self, "footerViewContainer"));
  -[NSView setHidden:](v5, "setHidden:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}