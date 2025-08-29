-[DeviceBackUpSettingsViewController clickRestoreButton:]
void __cdecl -[DeviceBackUpSettingsViewController clickRestoreButton:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x20
  bool v6; // w23
  AMPDevicesClient *v7; // x20
  AMPDevice *v8; // x21
  _QWORD v9[4]; // [xsp+8h] [xbp-68h] BYREF
  id v10; // [xsp+28h] [xbp-48h] BYREF
  bool v11; // [xsp+30h] [xbp-40h]
  id location; // [xsp+38h] [xbp-38h] BYREF

  v4 = objc_retain(a3);
  objc_initWeak(&location, self);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(NSApp, "currentEvent"));
  v6 = ((unsigned __int64)objc_msgSend(v5, "modifierFlags") & 0x80000) == 0;
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_10005BAA0;
  v9[3] = &unk_1000B9C18;
  objc_copyWeak(&v10, &location);
  v11 = v6;
  -[AMPDevicesClient fetchBackupsForDevice:includingIncompatibleBackups:includingAllCompatibleBackups:withReply:](
    v7,
    "fetchBackupsForDevice:includingIncompatibleBackups:includingAllCompatibleBackups:withReply:",
    v8,
    1LL,
    1LL,
    v9);
  objc_release(v8);
  objc_release(v7);
  objc_destroyWeak(&v10);
  objc_destroyWeak(&location);
  objc_release(v4);
}