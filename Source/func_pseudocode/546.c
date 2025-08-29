-[DeviceSettingsDetailsTabContentViewController shouldAllowMixedStateForOutlineView:]
bool __cdecl -[DeviceSettingsDetailsTabContentViewController shouldAllowMixedStateForOutlineView:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        id a3)
{
  DeviceSettingsTabContentOutlineView *v4; // x20
  DeviceSettingsTabContentOutlineView *v5; // x21

  v4 = (DeviceSettingsTabContentOutlineView *)objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  objc_release(v4);
  objc_release(v5);
  if ( v5 == v4 )
    return !-[DeviceSettingsDetailsTabContentViewController leadingCheckBoxesNeverMixed](
              self,
              "leadingCheckBoxesNeverMixed");
  else
    return 1;
}