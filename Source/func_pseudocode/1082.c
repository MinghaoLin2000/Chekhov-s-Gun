-[DeviceSettingsPhotosViewController viewWillAppear]
void __cdecl -[DeviceSettingsPhotosViewController viewWillAppear](DeviceSettingsPhotosViewController *self, SEL a2)
{
  NSButton *v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceSettingsPhotosViewController;
  -[DeviceSettingsViewController viewWillAppear](&v4, "viewWillAppear");
  if ( -[DeviceSettingsPhotosViewController isSharing](self, "isSharing") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
    -[NSButton setState:](v3, "setState:", 1LL);
    objc_release(v3);
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  }
}