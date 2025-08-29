-[DeviceChooseBackupViewController loadPopUpButton]
void __cdecl -[DeviceChooseBackupViewController loadPopUpButton](DeviceChooseBackupViewController *self, SEL a2)
{
  NSPopUpButton *v3; // x20
  NSArray *v4; // x20
  _QWORD v5[5]; // [xsp+8h] [xbp-38h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController backupsListPopUpButton](self, "backupsListPopUpButton"));
  -[NSPopUpButton removeAllItems](v3, "removeAllItems");
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController backups](self, "backups"));
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10006C000;
  v5[3] = &unk_1000BA078;
  v5[4] = self;
  -[NSArray enumerateObjectsUsingBlock:](v4, "enumerateObjectsUsingBlock:", v5);
  objc_release(v4);
}