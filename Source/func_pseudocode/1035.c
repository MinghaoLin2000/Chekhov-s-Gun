-[DeviceStorageManagementViewController loadFooterViewController]
void __cdecl -[DeviceStorageManagementViewController loadFooterViewController](
        DeviceStorageManagementViewController *self,
        SEL a2)
{
  AMPDevice *v3; // x20
  DeviceFooterViewController *v4; // x21
  AMPDevicesClient *v5; // x20
  DeviceFooterViewController *v6; // x21
  DeviceFooterViewController *v7; // x20
  DeviceFooterViewController *v8; // x20
  NSBundle *v9; // x21
  NSString *v10; // x22
  DeviceFooterViewController *v11; // x23
  DeviceFooterViewController *v12; // x21
  DeviceFooterViewController *v13; // x21
  DeviceFooterViewController *v14; // x22
  DeviceFooterViewController *v15; // x21
  NSBundle *v16; // x21
  NSString *v17; // x20
  DeviceFooterViewController *v18; // x22
  DeviceFooterViewController *v19; // x20
  DeviceFooterViewController *v20; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setDevice:](v4, "setDevice:", v3);
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setDevicesClient:](v6, "setDevicesClient:", v5);
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setHiddenPrimaryButton:](v7, "setHiddenPrimaryButton:", 0LL);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setEnabledPrimaryButton:](v8, "setEnabledPrimaryButton:", 1LL);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v9,
            "localizedStringForKey:value:table:",
            CFSTR("Done"),
            &stru_1000BA220,
            0LL));
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setPrimaryButtonTitle:](v11, "setPrimaryButtonTitle:", v10);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setPrimaryButtonKeyEquivalent:](v12, "setPrimaryButtonKeyEquivalent:", CFSTR("\x1B"));
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setPrimaryButtonTarget:](v13, "setPrimaryButtonTarget:", self);
  objc_release(v13);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setPrimaryButtonAction:](v14, "setPrimaryButtonAction:", "clickDoneButton:");
  objc_release(v14);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setHiddenSecondaryButton:](v15, "setHiddenSecondaryButton:", 0LL);
  objc_release(v15);
  v16 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v17 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v16,
            "localizedStringForKey:value:table:",
            CFSTR("Delete"),
            &stru_1000BA220,
            0LL));
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setSecondaryButtonTitle:](v18, "setSecondaryButtonTitle:", v17);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setSecondaryButtonTarget:](v19, "setSecondaryButtonTarget:", self);
  objc_release(v19);
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setSecondaryButtonAction:](v20, "setSecondaryButtonAction:", "clickDeleteButton:");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v20);
}