-[DeviceSetupViewController showWarrantyInfoUI]
void __cdecl -[DeviceSetupViewController showWarrantyInfoUI](DeviceSetupViewController *self, SEL a2)
{
  AMPDeviceSetupInfo *v3; // x20
  void *v4; // x21
  DeviceWarrantyViewController *v5; // x22
  DeviceWarrantyViewController *v6; // x20
  void *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController deviceSetupInfo](self, "deviceSetupInfo"));
  v4 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSetupInfo warrantyInfoText](v3, "warrantyInfoText"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController deviceWarrantyViewController](self, "deviceWarrantyViewController"));
  -[DeviceWarrantyViewController setWarrantyInfoText:](v5, "setWarrantyInfoText:", v4);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController deviceWarrantyViewController](self, "deviceWarrantyViewController"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController view](v6, "view"));
  -[DeviceSetupViewController setContentView:](self, "setContentView:", v7);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}