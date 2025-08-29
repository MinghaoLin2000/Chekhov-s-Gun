-[DeviceHeaderViewController fetchBatteryInfo]
void __cdecl -[DeviceHeaderViewController fetchBatteryInfo](DeviceHeaderViewController *self, SEL a2)
{
  AMPDevicesClient *v3; // x19
  AMPDevice *v4; // x20
  _QWORD v5[4]; // [xsp+0h] [xbp-50h] BYREF
  id v6; // [xsp+20h] [xbp-30h] BYREF
  id location; // [xsp+28h] [xbp-28h] BYREF

  objc_initWeak(&location, self);
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10003E2F4;
  v5[3] = &unk_1000B9598;
  objc_copyWeak(&v6, &location);
  -[AMPDevicesClient fetchBatteryInfoForDevice:withReply:](v3, "fetchBatteryInfoForDevice:withReply:", v4, v5);
  objc_release(v4);
  objc_release(v3);
  objc_destroyWeak(&v6);
  objc_destroyWeak(&location);
}