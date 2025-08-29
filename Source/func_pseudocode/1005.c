-[DeviceManageBackupsViewController selectDeleteMenuItem:]
void __cdecl -[DeviceManageBackupsViewController selectDeleteMenuItem:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3)
{
  NSTableView *v4; // x21
  NSInteger v5; // x20
  NSArray *v6; // x21
  id v7; // x20
  NSArray *v8; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController tableView](self, "tableView", a3));
  v5 = -[NSTableView clickedRow](v4, "clickedRow");
  objc_release(v4);
  if ( (v5 & 0x8000000000000000LL) == 0 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController backups](self, "backups"));
    v7 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v6, "objectAtIndexedSubscript:", v5));
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObject:](&OBJC_CLASS___NSArray, "arrayWithObject:", v7));
    -[DeviceManageBackupsViewController deleteBackups:](self, "deleteBackups:", v8);
    objc_release(v8);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v7);
  }
}