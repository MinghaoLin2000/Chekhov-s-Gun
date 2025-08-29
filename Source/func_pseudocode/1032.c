-[DeviceStorageManagementViewController dealloc]
void __cdecl -[DeviceStorageManagementViewController dealloc](DeviceStorageManagementViewController *self, SEL a2)
{
  NSDistributedNotificationCenter *v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSDistributedNotificationCenter defaultCenter](
           &OBJC_CLASS___NSDistributedNotificationCenter,
           "defaultCenter"));
  -[NSDistributedNotificationCenter removeObserver:name:object:](
    v3,
    "removeObserver:name:object:",
    self,
    CFSTR("com.apple.AMPDevicesAgent.libraryChanged"),
    0LL);
  objc_release(v3);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceStorageManagementViewController;
  -[DeviceStorageManagementViewController dealloc](&v4, "dealloc");
}