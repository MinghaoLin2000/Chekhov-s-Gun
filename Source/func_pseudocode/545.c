-[DeviceSettingsDetailsTabContentViewController shouldHitTestOnlyOnImageForOutlineView:]
bool __cdecl -[DeviceSettingsDetailsTabContentViewController shouldHitTestOnlyOnImageForOutlineView:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        id a3)
{
  DeviceSettingsTabContentOutlineView *v4; // x20
  DeviceSettingsTabContentOutlineView *v5; // x19

  v4 = (DeviceSettingsTabContentOutlineView *)objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  objc_release(v4);
  objc_release(v5);
  return v5 == v4;
}