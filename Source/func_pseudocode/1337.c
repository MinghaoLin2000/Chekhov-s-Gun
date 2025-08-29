-[DeviceModeMediaViewController didStartSyncForDeviceWithIdentifier:]
void __cdecl -[DeviceModeMediaViewController didStartSyncForDeviceWithIdentifier:](
        DeviceModeMediaViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  AMPDevice *v5; // x21
  void *v6; // x22
  unsigned int v7; // w23
  NSBundle *v8; // x20
  NSString *v9; // x21
  DeviceFooterViewController *v10; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v6 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v5, "deviceIdentifier"));
  v7 = (unsigned int)objc_msgSend(v4, "isEqualToString:", v6);
  objc_release(v4);
  objc_release(v6);
  objc_release(v5);
  if ( v7 )
  {
    v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v9 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v8,
             "localizedStringForKey:value:table:",
             CFSTR("Stop Sync"),
             &stru_1000BA220,
             0LL));
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewController](self, "footerViewController"));
    -[DeviceFooterViewController setPrimaryButtonTitle:](v10, "setPrimaryButtonTitle:", v9);
    objc_release(v10);
    objc_release(v9);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v8);
  }
}