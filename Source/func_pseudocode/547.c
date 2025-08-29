-[DeviceSettingsDetailsTabContentViewController reloadData]
void __cdecl -[DeviceSettingsDetailsTabContentViewController reloadData](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2)
{
  DeviceSettingsTabContentOutlineView *v3; // x19
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceSettingsDetailsTabContentViewController;
  -[DeviceSettingsTabContentViewController reloadData](&v4, "reloadData");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  -[DeviceSettingsTabContentOutlineView reloadData](v3, "reloadData");
  objc_release(v3);
}