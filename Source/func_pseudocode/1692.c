-[DeviceSettingsTabContentViewController setDisableAndCheckAllItems:]
void __cdecl -[DeviceSettingsTabContentViewController setDisableAndCheckAllItems:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        bool a3)
{
  DeviceSettingsTabContentOutlineView *v4; // x20
  DeviceSettingsTabContentOutlineView *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  self->_disableAndCheckAllItems = a3;
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  -[DeviceSettingsTabContentOutlineView reloadData](v4, "reloadData");
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController allCheckBoxOutlineView](self, "allCheckBoxOutlineView"));
  -[DeviceSettingsTabContentOutlineView reloadData](v5, "reloadData");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}