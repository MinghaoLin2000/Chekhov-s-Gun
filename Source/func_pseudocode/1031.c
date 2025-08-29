-[DeviceStorageManagementViewController viewDidLoad]
void __cdecl -[DeviceStorageManagementViewController viewDidLoad](DeviceStorageManagementViewController *self, SEL a2)
{
  void *v3; // x20
  NSDistributedNotificationCenter *v4; // x20
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___DeviceStorageManagementViewController;
  -[DeviceStorageManagementViewController viewDidLoad](&v5, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController view](self, "view"));
  objc_msgSend(v3, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
  objc_release(v3);
  -[DeviceStorageManagementViewController loadMediaPickerTableView](self, "loadMediaPickerTableView");
  -[DeviceStorageManagementViewController loadtrackListTableView](self, "loadtrackListTableView");
  -[DeviceStorageManagementViewController loadFooterViewController](self, "loadFooterViewController");
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSDistributedNotificationCenter defaultCenter](
           &OBJC_CLASS___NSDistributedNotificationCenter,
           "defaultCenter"));
  -[NSDistributedNotificationCenter addObserver:selector:name:object:](
    v4,
    "addObserver:selector:name:object:",
    self,
    "deviceLibraryChangedNotification:",
    CFSTR("com.apple.AMPDevicesAgent.libraryChanged"),
    0LL);
  objc_release(v4);
}