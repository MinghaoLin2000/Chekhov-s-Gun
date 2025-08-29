-[DeviceSetupViewController doRestoreFromBackup:setPasswordInKeychain:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSetupViewController doRestoreFromBackup:setPasswordInKeychain:](
        DeviceSetupViewController *self,
        SEL a2,
        id a3,
        bool a4)
{
  _BOOL8 v4; // x20
  id v6; // x19
  AMPDevicesClient *v7; // x21
  AMPDevice *v8; // x22
  NSDictionary *v9; // x23
  id v10; // x0
  _QWORD v11[4]; // [xsp+0h] [xbp-60h] BYREF
  id v12; // [xsp+20h] [xbp-40h] BYREF
  id location; // [xsp+28h] [xbp-38h] BYREF

  v4 = a4;
  v6 = objc_retain(a3);
  objc_initWeak(&location, self);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController currentBackup](self, "currentBackup"));
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10006FCC8;
  v11[3] = &unk_1000B8ED8;
  objc_copyWeak(&v12, &location);
  v10 = objc_unsafeClaimAutoreleasedReturnValue(
          -[AMPDevicesClient restoreDevice:fromBackup:withPassword:setPasswordInKeychain:eraseDevice:withReply:](
            v7,
            "restoreDevice:fromBackup:withPassword:setPasswordInKeychain:eraseDevice:withReply:",
            v8,
            v9,
            v6,
            v4,
            0LL,
            v11));
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  objc_destroyWeak(&v12);
  objc_destroyWeak(&location);
  objc_release(v6);
}