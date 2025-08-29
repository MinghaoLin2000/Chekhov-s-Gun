-[DeviceFinderTabContainerViewController dealloc]
void __cdecl -[DeviceFinderTabContainerViewController dealloc](DeviceFinderTabContainerViewController *self, SEL a2)
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
    kITLibraryDidChangeNotification,
    0LL);
  objc_release(v3);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceFinderTabContainerViewController;
  -[DeviceFinderTabContainerViewController dealloc](&v4, "dealloc");
}