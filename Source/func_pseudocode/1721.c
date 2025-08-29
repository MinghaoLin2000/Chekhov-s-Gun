-[DeviceSettingsTabContentViewController outlineView:sortDescriptorsDidChange:]
void __cdecl -[DeviceSettingsTabContentViewController outlineView:sortDescriptorsDidChange:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x20
  DeviceSettingsNode *v6; // x21
  void *v7; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "sortDescriptors"));
  objc_release(v5);
  -[DeviceSettingsNode sortUsingDescriptors:](v6, "sortUsingDescriptors:", v7);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsTabContentViewController reloadFilter](self, "reloadFilter");
}