-[DeviceManageBackupsViewController tableViewSelectionDidChange:]
void __cdecl -[DeviceManageBackupsViewController tableViewSelectionDidChange:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3)
{
  NSTableView *v4; // x20
  _BOOL8 v5; // x21
  NSButton *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController tableView](self, "tableView", a3));
  v5 = -[NSTableView numberOfSelectedRows](v4, "numberOfSelectedRows") != 0;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController deleteButton](self, "deleteButton"));
  -[NSButton setEnabled:](v6, "setEnabled:", v5);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}