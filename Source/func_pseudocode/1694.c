-[DeviceSettingsTabContentViewController reloadData]
void __cdecl -[DeviceSettingsTabContentViewController reloadData](DeviceSettingsTabContentViewController *self, SEL a2)
{
  DeviceSettingsTabContentOutlineView *v3; // x20
  DeviceSettingsTabContentOutlineView *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  -[DeviceSettingsTabContentOutlineView reloadData](v3, "reloadData");
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController allCheckBoxOutlineView](self, "allCheckBoxOutlineView"));
  -[DeviceSettingsTabContentOutlineView reloadData](v4, "reloadData");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}