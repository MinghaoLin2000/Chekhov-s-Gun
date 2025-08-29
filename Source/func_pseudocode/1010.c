-[DeviceManageBackupsViewController refreshBackups]
void __cdecl -[DeviceManageBackupsViewController refreshBackups](DeviceManageBackupsViewController *self, SEL a2)
{
  NSButton *v3; // x20
  AMPDevicesClient *v4; // x20
  _QWORD v5[5]; // [xsp+8h] [xbp-38h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController deleteButton](self, "deleteButton"));
  -[NSButton setEnabled:](v3, "setEnabled:", 0LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10001DEE4;
  v5[3] = &unk_1000B91E0;
  v5[4] = self;
  -[AMPDevicesClient fetchAllBackupsWithReply:](v4, "fetchAllBackupsWithReply:", v5);
  objc_release(v4);
}