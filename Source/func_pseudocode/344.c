-[DeviceSettingsRentalsTabContentViewController viewDidLoad]
void __cdecl -[DeviceSettingsRentalsTabContentViewController viewDidLoad](
        DeviceSettingsRentalsTabContentViewController *self,
        SEL a2)
{
  DeviceSettingsTabContentOutlineView *v3; // x20
  DeviceSettingsTabContentOutlineView *v4; // x20
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___DeviceSettingsRentalsTabContentViewController;
  -[DeviceSettingsTabContentViewController viewDidLoad](&v5, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  -[DeviceSettingsTabContentOutlineView setDelegate:](v3, "setDelegate:", self);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  -[DeviceSettingsTabContentOutlineView setDataSource:](v4, "setDataSource:", self);
  objc_release(v4);
}