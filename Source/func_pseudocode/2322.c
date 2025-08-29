-[DeviceModeFinderViewController loadFooterViewController]
void __cdecl -[DeviceModeFinderViewController loadFooterViewController](DeviceModeFinderViewController *self, SEL a2)
{
  void *v3; // x20
  AMPDevice *v4; // x20
  DeviceFooterViewController *v5; // x21
  id v6; // x20
  DeviceFooterViewController *v7; // x21
  DeviceFooterViewController *v8; // x20
  void *v9; // x21
  NSView *v10; // x22
  DeviceFooterViewController *v11; // x20
  DeviceFooterViewController *v12; // x20
  NSBundle *v13; // x21
  NSString *v14; // x22
  DeviceFooterViewController *v15; // x23
  DeviceFooterViewController *v16; // x21
  DeviceFooterViewController *v17; // x22
  DeviceFooterViewController *v18; // x21
  NSBundle *v19; // x21
  NSString *v20; // x20
  DeviceFooterViewController *v21; // x22
  DeviceFooterViewController *v22; // x20
  DeviceFooterViewController *v23; // x20
  DeviceFooterViewController *v24; // x21
  DeviceFooterViewController *v25; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = (void *)objc_opt_new(&OBJC_CLASS___DeviceFooterViewController, a2);
  -[DeviceModeFinderViewController setFooterViewController:](self, "setFooterViewController:", v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setDevice:](v5, "setDevice:", v4);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setDevicesClient:](v7, "setDevicesClient:", v6);
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController view](v8, "view"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewContainer](self, "footerViewContainer"));
  sub_10002ABA4((int)v9, v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setHiddenSecondaryButton:](v11, "setHiddenSecondaryButton:", 1LL);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setEnabledSecondaryButton:](v12, "setEnabledSecondaryButton:", 1LL);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v14 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v13,
            "localizedStringForKey:value:table:",
            CFSTR("Revert"),
            &stru_1000BA220,
            0LL));
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setSecondaryButtonTitle:](v15, "setSecondaryButtonTitle:", v14);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setSecondaryButtonTarget:](v16, "setSecondaryButtonTarget:", self);
  objc_release(v16);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setSecondaryButtonAction:](v17, "setSecondaryButtonAction:", "clickRevertButton:");
  objc_release(v17);
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setHiddenPrimaryButton:](v18, "setHiddenPrimaryButton:", 1LL);
  objc_release(v18);
  v19 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v20 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v19,
            "localizedStringForKey:value:table:",
            CFSTR("Sync"),
            &stru_1000BA220,
            0LL));
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setPrimaryButtonTitle:](v21, "setPrimaryButtonTitle:", v20);
  objc_release(v21);
  objc_release(v20);
  objc_release(v19);
  v22 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setEnabledPrimaryButton:](v22, "setEnabledPrimaryButton:", 0LL);
  objc_release(v22);
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setPrimaryButtonTarget:](v23, "setPrimaryButtonTarget:", self);
  objc_release(v23);
  v24 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setPrimaryButtonAction:](v24, "setPrimaryButtonAction:", "clickSyncButton:");
  objc_release(v24);
  v25 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setHiddenCapacityBar:](v25, "setHiddenCapacityBar:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v25);
}