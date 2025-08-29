-[DeviceSetupViewController showLicenseAgreementUI]
void __cdecl -[DeviceSetupViewController showLicenseAgreementUI](DeviceSetupViewController *self, SEL a2)
{
  AMPDeviceSetupInfo *v3; // x20
  void *v4; // x21
  DeviceEULAViewController *v5; // x22
  DeviceEULAViewController *v6; // x20
  void *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController deviceSetupInfo](self, "deviceSetupInfo"));
  v4 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSetupInfo licenseAgreementText](v3, "licenseAgreementText"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController deviceEULAViewController](self, "deviceEULAViewController"));
  -[DeviceEULAViewController setLicenseAgreementText:](v5, "setLicenseAgreementText:", v4);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController deviceEULAViewController](self, "deviceEULAViewController"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceEULAViewController view](v6, "view"));
  -[DeviceSetupViewController setContentView:](self, "setContentView:", v7);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}