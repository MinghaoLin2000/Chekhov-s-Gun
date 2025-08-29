-[DeviceBackUpSettingsViewController restoreDeviceFromBackup:withPassword:setPasswordInKeychain:eraseDevice:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceBackUpSettingsViewController restoreDeviceFromBackup:withPassword:setPasswordInKeychain:eraseDevice:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        bool a6)
{
  _BOOL8 v6; // x19
  _BOOL8 v7; // x20
  id v10; // x23
  id v11; // x21
  AMPDevicesClient *v12; // x24
  AMPDevice *v13; // x25
  id v14; // x0
  _QWORD v15[5]; // [xsp+8h] [xbp-68h] BYREF

  v6 = a6;
  v7 = a5;
  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3254779904LL;
  v15[2] = sub_10005BD44;
  v15[3] = &unk_1000B9180;
  v15[4] = self;
  v14 = objc_unsafeClaimAutoreleasedReturnValue(
          -[AMPDevicesClient restoreDevice:fromBackup:withPassword:setPasswordInKeychain:eraseDevice:withReply:](
            v12,
            "restoreDevice:fromBackup:withPassword:setPasswordInKeychain:eraseDevice:withReply:",
            v13,
            v10,
            v11,
            v7,
            v6,
            v15));
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}