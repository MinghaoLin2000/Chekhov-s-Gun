-[DeviceManageBackupsViewController setupTableViewContextualMenu]
void __cdecl -[DeviceManageBackupsViewController setupTableViewContextualMenu](
        DeviceManageBackupsViewController *self,
        SEL a2)
{
  id v3; // x20
  NSTableView *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_alloc_init((Class)&OBJC_CLASS___NSMenu);
  objc_msgSend(v3, "setDelegate:", self);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController tableView](self, "tableView"));
  -[NSTableView setMenu:](v4, "setMenu:", v3);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}