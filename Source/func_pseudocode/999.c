-[DeviceManageBackupsViewController viewDidLoad]
void __cdecl -[DeviceManageBackupsViewController viewDidLoad](DeviceManageBackupsViewController *self, SEL a2)
{
  NSButton *v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceManageBackupsViewController;
  -[DeviceManageBackupsViewController viewDidLoad](&v4, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController deleteButton](self, "deleteButton"));
  -[NSButton setEnabled:](v3, "setEnabled:", 0LL);
  objc_release(v3);
  -[DeviceManageBackupsViewController setupTableViewContextualMenu](self, "setupTableViewContextualMenu");
}