-[DeviceSettingsPhotosViewController viewWillDisappear]
void __cdecl -[DeviceSettingsPhotosViewController viewWillDisappear](DeviceSettingsPhotosViewController *self, SEL a2)
{
  NSNotificationCenter *v3; // x20
  NSURL *v4; // x20
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter removeObserver:](v3, "removeObserver:", self);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController fromSecurityScopedBookmarkURL](self, "fromSecurityScopedBookmarkURL"));
  -[NSURL stopAccessingSecurityScopedResource](v4, "stopAccessingSecurityScopedResource");
  objc_release(v4);
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___DeviceSettingsPhotosViewController;
  -[DeviceSettingsViewController viewWillDisappear](&v5, "viewWillDisappear");
}