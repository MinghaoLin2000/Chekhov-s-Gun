-[DeviceSettingsViewController dealloc]
void __cdecl -[DeviceSettingsViewController dealloc](DeviceSettingsViewController *self, SEL a2)
{
  NSNotificationCenter *v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter removeObserver:name:object:](
    v3,
    "removeObserver:name:object:",
    self,
    CFSTR("DeviceViewManualManageOptionDidChangeNotification"),
    0LL);
  objc_release(v3);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceSettingsViewController;
  -[DeviceSettingsViewController dealloc](&v4, "dealloc");
}