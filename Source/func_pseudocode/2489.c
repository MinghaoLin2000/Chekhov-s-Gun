-[DeviceBackUpSettingsViewController presentSheetToAllowUserToChooseBackUpToUse:bestBackupIndex:promptToEraseDevice:completionHandler:]
void __cdecl -[DeviceBackUpSettingsViewController presentSheetToAllowUserToChooseBackUpToUse:bestBackupIndex:promptToEraseDevice:completionHandler:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        bool a5,
        id a6)
{
  id v10; // x23
  id v11; // x19
  AMPDevicesClient *v12; // x24
  AMPDevice *v13; // x25
  id v14; // x19
  id v15; // x20
  _QWORD v16[5]; // [xsp+8h] [xbp-88h] BYREF
  id v17; // [xsp+30h] [xbp-60h]
  id v18; // [xsp+38h] [xbp-58h]
  signed __int64 v19; // [xsp+40h] [xbp-50h]
  bool v20; // [xsp+48h] [xbp-48h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a6);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_10005C7FC;
  v16[3] = &unk_1000B9CF8;
  v16[4] = self;
  v17 = v10;
  v20 = a5;
  v18 = v11;
  v19 = a4;
  v14 = objc_retain(v11);
  v15 = objc_retain(v10);
  -[AMPDevicesClient fetchBackupPasswordFromKeychainForDevice:withReply:](
    v12,
    "fetchBackupPasswordFromKeychainForDevice:withReply:",
    v13,
    v16);
  objc_release(v13);
  objc_release(v12);
  objc_release(v18);
  objc_release(v17);
  objc_release(v14);
  objc_release(v15);
}