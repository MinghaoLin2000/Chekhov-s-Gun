-[DeviceBackUpSettingsViewController backUpDevice]
void __cdecl -[DeviceBackUpSettingsViewController backUpDevice](DeviceBackUpSettingsViewController *self, SEL a2)
{
  AMPDevicesClient *v3; // x20
  AMPDevice *v4; // x21
  id v5; // x0
  _QWORD v6[5]; // [xsp+8h] [xbp-48h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_10005B86C;
  v6[3] = &unk_1000B9180;
  v6[4] = self;
  v5 = objc_unsafeClaimAutoreleasedReturnValue(-[AMPDevicesClient backupDevice:withReply:](v3, "backupDevice:withReply:", v4, v6));
  objc_release(v4);
  objc_release(v3);
}