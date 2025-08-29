-[DeviceSoftwareUpdatesViewController fetchDeviceSoftwareInfo]
void __cdecl -[DeviceSoftwareUpdatesViewController fetchDeviceSoftwareInfo](
        DeviceSoftwareUpdatesViewController *self,
        SEL a2)
{
  AMPDevice *v3; // x19
  AMPDevicesClient *v4; // x19
  AMPDevicesClient *v5; // x19
  AMPDevice *v6; // x20
  _QWORD v7[4]; // [xsp+0h] [xbp-50h] BYREF
  id v8; // [xsp+20h] [xbp-30h] BYREF
  id location; // [xsp+28h] [xbp-28h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  objc_release(v3);
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
    objc_release(v4);
    if ( v4 )
    {
      objc_initWeak(&location, self);
      v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
      v7[0] = _NSConcreteStackBlock;
      v7[1] = 3254779904LL;
      v7[2] = sub_100058658;
      v7[3] = &unk_1000B9A78;
      objc_copyWeak(&v8, &location);
      -[AMPDevicesClient fetchSoftwareInfoForDevice:withReply:](v5, "fetchSoftwareInfoForDevice:withReply:", v6, v7);
      objc_release(v6);
      objc_release(v5);
      objc_destroyWeak(&v8);
      objc_destroyWeak(&location);
    }
  }
}