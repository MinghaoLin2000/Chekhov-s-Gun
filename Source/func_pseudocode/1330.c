-[DeviceModeMediaViewController loadFooterViewController]
void __cdecl -[DeviceModeMediaViewController loadFooterViewController](DeviceModeMediaViewController *self, SEL a2)
{
  void *v3; // x20
  AMPDevice *v4; // x20
  DeviceFooterViewController *v5; // x21
  id v6; // x20
  DeviceFooterViewController *v7; // x21
  DeviceFooterViewController *v8; // x20
  void *v9; // x21
  NSView *v10; // x22
  NSBundle *v11; // x21
  NSString *v12; // x22
  DeviceFooterViewController *v13; // x23
  DeviceFooterViewController *v14; // x21
  DeviceFooterViewController *v15; // x21
  DeviceFooterViewController *v16; // x22
  DeviceFooterViewController *v17; // x21
  DeviceFooterViewController *v18; // x20
  NSView *v19; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = (void *)objc_opt_new(&OBJC_CLASS___DeviceFooterViewController, a2);
  -[DeviceModeMediaViewController setFooterViewController:](self, "setFooterViewController:", v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setDevice:](v5, "setDevice:", v4);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController devicesClient](self, "devicesClient"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setDevicesClient:](v7, "setDevicesClient:", v6);
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewController](self, "footerViewController"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController view](v8, "view"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewContainer](self, "footerViewContainer"));
  sub_10002ABA4((int)v9, v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v12 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v11,
            "localizedStringForKey:value:table:",
            CFSTR("Sync"),
            &stru_1000BA220,
            0LL));
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setPrimaryButtonTitle:](v13, "setPrimaryButtonTitle:", v12);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setEnabledPrimaryButton:](v14, "setEnabledPrimaryButton:", 1LL);
  objc_release(v14);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setPrimaryButtonTarget:](v15, "setPrimaryButtonTarget:", self);
  objc_release(v15);
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setPrimaryButtonAction:](v16, "setPrimaryButtonAction:", "clickSyncButton:");
  objc_release(v16);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setSecondaryButtonTitle:](v17, "setSecondaryButtonTitle:", &stru_1000BA220);
  objc_release(v17);
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setHiddenSecondaryButton:](v18, "setHiddenSecondaryButton:", 1LL);
  objc_release(v18);
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewContainer](self, "footerViewContainer"));
  -[NSView setHidden:](v19, "setHidden:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v19);
}