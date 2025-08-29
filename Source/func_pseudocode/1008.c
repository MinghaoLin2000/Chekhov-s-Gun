-[DeviceManageBackupsViewController deleteBackups:]
void __cdecl -[DeviceManageBackupsViewController deleteBackups:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  _QWORD v5[4]; // [xsp+0h] [xbp-40h] BYREF
  id v6; // [xsp+20h] [xbp-20h]
  DeviceManageBackupsViewController *v7; // [xsp+28h] [xbp-18h]

  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10001DB30;
  v5[3] = &unk_1000B8E48;
  v6 = objc_retain(a3);
  v7 = self;
  v4 = objc_retain(v6);
  -[DeviceManageBackupsViewController promptForDeleteOfBackups:withCompletionHandler:](
    self,
    "promptForDeleteOfBackups:withCompletionHandler:",
    v4,
    v5);
  objc_release(v6);
  objc_release(v4);
}