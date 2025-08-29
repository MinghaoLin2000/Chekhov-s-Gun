-[DeviceManageBackupsViewController numberOfRowsInTableView:]
signed __int64 __cdecl -[DeviceManageBackupsViewController numberOfRowsInTableView:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3)
{
  NSArray *v3; // x19
  NSUInteger v4; // x20

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController backups](self, "backups", a3));
  v4 = -[NSArray count](v3, "count");
  objc_release(v3);
  return v4;
}