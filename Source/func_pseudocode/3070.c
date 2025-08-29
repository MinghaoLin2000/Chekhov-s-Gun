-[DeviceSetupViewController deviceWarrantyViewController]
DeviceWarrantyViewController *__cdecl -[DeviceSetupViewController deviceWarrantyViewController](
        DeviceSetupViewController *self,
        SEL a2)
{
  DeviceWarrantyViewController *deviceWarrantyViewController; // x0
  DeviceWarrantyViewController *v4; // x0
  DeviceWarrantyViewController *v5; // x8
  AMPDevice *v6; // x20
  AMPDeviceInfo *v7; // x20
  AMPDevice *v8; // x20
  _QWORD v10[4]; // [xsp+8h] [xbp-88h] BYREF
  id v11; // [xsp+28h] [xbp-68h] BYREF
  _QWORD v12[4]; // [xsp+30h] [xbp-60h] BYREF
  id v13; // [xsp+50h] [xbp-40h] BYREF
  id location; // [xsp+58h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+98h] [xbp+8h]

  deviceWarrantyViewController = self->_deviceWarrantyViewController;
  if ( !deviceWarrantyViewController )
  {
    v4 = (DeviceWarrantyViewController *)objc_opt_new(&OBJC_CLASS___DeviceWarrantyViewController, a2);
    v5 = self->_deviceWarrantyViewController;
    self->_deviceWarrantyViewController = v4;
    objc_release(v5);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    -[DeviceViewController setDevice:](self->_deviceWarrantyViewController, "setDevice:", v6);
    objc_release(v6);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    -[DeviceViewController setDeviceInfo:](self->_deviceWarrantyViewController, "setDeviceInfo:", v7);
    objc_release(v7);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    -[DeviceWarrantyViewController setDeviceType:](
      self->_deviceWarrantyViewController,
      "setDeviceType:",
      -[AMPDevice deviceType](v8, "deviceType"));
    objc_release(v8);
    objc_initWeak(&location, self);
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3254779904LL;
    v12[2] = sub_10007115C;
    v12[3] = &unk_1000B9040;
    objc_copyWeak(&v13, &location);
    -[DeviceWarrantyViewController setCancelButtonAction:](
      self->_deviceWarrantyViewController,
      "setCancelButtonAction:",
      v12);
    v10[0] = _NSConcreteStackBlock;
    v10[1] = 3254779904LL;
    v10[2] = sub_1000711A0;
    v10[3] = &unk_1000B9040;
    objc_copyWeak(&v11, &location);
    -[DeviceWarrantyViewController setContinueButtonAction:](
      self->_deviceWarrantyViewController,
      "setContinueButtonAction:",
      v10);
    objc_destroyWeak(&v11);
    objc_destroyWeak(&v13);
    objc_destroyWeak(&location);
    deviceWarrantyViewController = self->_deviceWarrantyViewController;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(deviceWarrantyViewController);
}