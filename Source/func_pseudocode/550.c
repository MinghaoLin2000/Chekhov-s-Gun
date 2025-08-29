-[DeviceSettingsDetailsTabContentViewController modelForOutlineView:]
id __cdecl -[DeviceSettingsDetailsTabContentViewController modelForOutlineView:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        id a3)
{
  DeviceSettingsTabContentOutlineView *v4; // x20
  DeviceSettingsTabContentOutlineView *v5; // x21
  DeviceSettingsNode *v6; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (DeviceSettingsTabContentOutlineView *)objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  objc_release(v4);
  objc_release(v5);
  if ( v5 == v4 )
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController detailsModel](self, "detailsModel"));
  else
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}