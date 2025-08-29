-[DeviceManageBackupsViewController selectArchiveMenuItem:]
void __cdecl -[DeviceManageBackupsViewController selectArchiveMenuItem:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3)
{
  NSTableView *v4; // x21
  NSInteger v5; // x20
  NSArray *v6; // x21
  id v7; // x20
  AMPDevicesClient *v8; // x21
  _QWORD v9[5]; // [xsp+8h] [xbp-48h] BYREF

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController tableView](self, "tableView", a3));
  v5 = -[NSTableView clickedRow](v4, "clickedRow");
  objc_release(v4);
  if ( (v5 & 0x8000000000000000LL) == 0 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController backups](self, "backups"));
    v7 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v6, "objectAtIndexedSubscript:", v5));
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
    v9[0] = _NSConcreteStackBlock;
    v9[1] = 3254779904LL;
    v9[2] = sub_10001D884;
    v9[3] = &unk_1000B9180;
    v9[4] = self;
    -[AMPDevicesClient archiveBackup:withReply:](v8, "archiveBackup:withReply:", v7, v9);
    objc_release(v8);
    objc_release(v7);
  }
}