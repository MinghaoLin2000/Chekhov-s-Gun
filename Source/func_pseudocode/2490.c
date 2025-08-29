-[DeviceBackUpSettingsViewController presentSheetToChangePasswordWithReply:]
void __cdecl -[DeviceBackUpSettingsViewController presentSheetToChangePasswordWithReply:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  AMPDevicesClient *v5; // x21
  AMPDevice *v6; // x22
  id v7; // x19
  _QWORD v8[5]; // [xsp+0h] [xbp-50h] BYREF
  id v9; // [xsp+28h] [xbp-28h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_10005D038;
  v8[3] = &unk_1000B9D28;
  v8[4] = self;
  v9 = v4;
  v7 = objc_retain(v4);
  -[AMPDevicesClient fetchBackupPasswordFromKeychainForDevice:withReply:](
    v5,
    "fetchBackupPasswordFromKeychainForDevice:withReply:",
    v6,
    v8);
  objc_release(v6);
  objc_release(v5);
  objc_release(v9);
  objc_release(v7);
}