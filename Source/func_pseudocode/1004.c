-[DeviceManageBackupsViewController clickDeleteButton:]
void __cdecl -[DeviceManageBackupsViewController clickDeleteButton:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3)
{
  NSArray *v4; // x20
  NSTableView *v5; // x21
  NSIndexSet *v6; // x22
  NSArray *v7; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController backups](self, "backups", a3));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController tableView](self, "tableView"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSTableView selectedRowIndexes](v5, "selectedRowIndexes"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSArray objectsAtIndexes:](v4, "objectsAtIndexes:", v6));
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  -[DeviceManageBackupsViewController deleteBackups:](self, "deleteBackups:", v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}