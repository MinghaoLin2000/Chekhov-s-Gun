-[DeviceManageBackupsViewController selectShowInFinderMenuItem:]
void __cdecl -[DeviceManageBackupsViewController selectShowInFinderMenuItem:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3)
{
  NSTableView *v4; // x21
  NSInteger v5; // x20
  NSArray *v6; // x19
  id v7; // x20
  void *v8; // x19
  NSURL *v9; // x21
  NSWorkspace *v10; // x22
  NSArray *v11; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController tableView](self, "tableView", a3));
  v5 = -[NSTableView clickedRow](v4, "clickedRow");
  objc_release(v4);
  if ( (v5 & 0x8000000000000000LL) == 0 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController backups](self, "backups"));
    v7 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v6, "objectAtIndexedSubscript:", v5));
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", AMPDeviceBackupPathKey));
    v9 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v8));
    v10 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
    v11 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObject:](&OBJC_CLASS___NSArray, "arrayWithObject:", v9));
    -[NSWorkspace activateFileViewerSelectingURLs:](v10, "activateFileViewerSelectingURLs:", v11);
    objc_release(v11);
    objc_release(v10);
    objc_release(v9);
    objc_release(v8);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v7);
  }
}