-[DeviceBackUpSettingsViewController clickManageBackupsButton:]
void __cdecl -[DeviceBackUpSettingsViewController clickManageBackupsButton:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  AMPDevicesClient *v5; // x20
  _QWORD v6[4]; // [xsp+0h] [xbp-50h] BYREF
  id v7; // [xsp+20h] [xbp-30h] BYREF
  id location; // [xsp+28h] [xbp-28h] BYREF

  v4 = objc_retain(a3);
  objc_initWeak(&location, self);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_10005C040;
  v6[3] = &unk_1000B8DC8;
  objc_copyWeak(&v7, &location);
  -[AMPDevicesClient fetchAllBackupsWithReply:](v5, "fetchAllBackupsWithReply:", v6);
  objc_release(v5);
  objc_destroyWeak(&v7);
  objc_destroyWeak(&location);
  objc_release(v4);
}