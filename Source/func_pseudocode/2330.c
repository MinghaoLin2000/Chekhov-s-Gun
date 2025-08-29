-[DeviceModeFinderViewController loadingCompleteBootedOSMode]
void __cdecl -[DeviceModeFinderViewController loadingCompleteBootedOSMode](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  DeviceHeaderViewController *v3; // x20
  _BOOL8 v4; // x20
  DeviceHeaderViewController *v5; // x21
  NSButton *v6; // x22
  DeviceFooterViewController *v7; // x20
  DeviceFooterViewController *v8; // x20
  DeviceFooterViewController *v9; // x20
  NSView *v10; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController headerViewController](self, "headerViewController"));
  -[DeviceHeaderViewController setButtonsEnabled:](v3, "setButtonsEnabled:", 1LL);
  objc_release(v3);
  v4 = -[DeviceModeFinderViewController isManageStorageButtonHidden](self, "isManageStorageButtonHidden");
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController headerViewController](self, "headerViewController"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController manageStorageButton](v5, "manageStorageButton"));
  -[NSButton setHidden:](v6, "setHidden:", v4);
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setEnabledPrimaryButton:](v7, "setEnabledPrimaryButton:", 1LL);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setHiddenPrimaryButton:](v8, "setHiddenPrimaryButton:", 0LL);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setHiddenCapacityBar:](v9, "setHiddenCapacityBar:", 0LL);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewContainer](self, "footerViewContainer"));
  -[NSView setHidden:](v10, "setHidden:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}