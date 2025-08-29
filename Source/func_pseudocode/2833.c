-[DeviceOptionsViewController viewDidLoad]
void __cdecl -[DeviceOptionsViewController viewDidLoad](DeviceOptionsViewController *self, SEL a2)
{
  NSNotificationCenter *v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceOptionsViewController;
  -[DeviceOptionsViewController viewDidLoad](&v4, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter addObserver:selector:name:object:](
    v3,
    "addObserver:selector:name:object:",
    self,
    "deviceViewSyncOnDidChangeNotification:",
    CFSTR("DeviceViewSyncOnDidChangeNotification"),
    0LL);
  -[DeviceOptionsViewController loadUIFromPrefs](self, "loadUIFromPrefs");
  objc_release(v3);
}