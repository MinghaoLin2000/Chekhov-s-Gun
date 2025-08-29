-[DeviceManageBackupsViewController deleteBackup:]
void __cdecl -[DeviceManageBackupsViewController deleteBackup:](DeviceManageBackupsViewController *self, SEL a2, id a3)
{
  id v4; // x19
  AMPDevicesClient *v5; // x21
  _QWORD v6[5]; // [xsp+0h] [xbp-50h] BYREF
  id v7; // [xsp+28h] [xbp-28h]

  v4 = objc_retain(a3);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
    v6[0] = _NSConcreteStackBlock;
    v6[1] = 3254779904LL;
    v6[2] = sub_10001DD08;
    v6[3] = &unk_1000B91B0;
    v6[4] = self;
    v7 = objc_retain(v4);
    -[AMPDevicesClient deleteBackup:withReply:](v5, "deleteBackup:withReply:", v7, v6);
    objc_release(v5);
    objc_release(v7);
  }
  objc_release(v4);
}