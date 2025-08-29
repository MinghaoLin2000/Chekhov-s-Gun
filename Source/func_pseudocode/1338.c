-[DeviceModeMediaViewController didCompleteSyncForDeviceWithIdentifier:withError:]
void __cdecl -[DeviceModeMediaViewController didCompleteSyncForDeviceWithIdentifier:withError:](
        DeviceModeMediaViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x20
  AMPDevice *v6; // x21
  void *v7; // x22
  unsigned int v8; // w23
  NSBundle *v9; // x20
  NSString *v10; // x21
  DeviceFooterViewController *v11; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v7 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v6, "deviceIdentifier"));
  v8 = (unsigned int)objc_msgSend(v5, "isEqualToString:", v7);
  objc_release(v5);
  objc_release(v7);
  objc_release(v6);
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v10 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v9,
              "localizedStringForKey:value:table:",
              CFSTR("Sync"),
              &stru_1000BA220,
              0LL));
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewController](self, "footerViewController"));
    -[DeviceFooterViewController setPrimaryButtonTitle:](v11, "setPrimaryButtonTitle:", v10);
    objc_release(v11);
    objc_release(v10);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v9);
  }
}