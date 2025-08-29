-[DeviceSetupViewController startConfigure]
void __cdecl -[DeviceSetupViewController startConfigure](DeviceSetupViewController *self, SEL a2)
{
  AMPDevicesClient *v3; // x19
  AMPDevice *v4; // x20
  _BOOL8 v5; // x21
  _BOOL8 v6; // x22
  _QWORD v7[4]; // [xsp+0h] [xbp-60h] BYREF
  id v8; // [xsp+20h] [xbp-40h] BYREF
  id location; // [xsp+28h] [xbp-38h] BYREF

  objc_initWeak(&location, self);
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5 = -[DeviceSetupViewController didAcceptLicenseAgreement](self, "didAcceptLicenseAgreement");
  v6 = -[DeviceSetupViewController didAcceptWarrantyInfo](self, "didAcceptWarrantyInfo");
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_1000709D8;
  v7[3] = &unk_1000B8ED8;
  objc_copyWeak(&v8, &location);
  -[AMPDevicesClient completeSetupForDevice:didAcceptLicenseAgreement:didAcceptWarrantyInfo:withReply:](
    v3,
    "completeSetupForDevice:didAcceptLicenseAgreement:didAcceptWarrantyInfo:withReply:",
    v4,
    v5,
    v6,
    v7);
  objc_release(v4);
  objc_release(v3);
  objc_destroyWeak(&v8);
  objc_destroyWeak(&location);
}