-[DeviceSettingsViewController didChangeSyncOnCheckBox]
void __cdecl -[DeviceSettingsViewController didChangeSyncOnCheckBox](DeviceSettingsViewController *self, SEL a2)
{
  NSButton *v3; // x20
  _BOOL8 v4; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v4 = (void *)-[NSButton state](v3, "state") == (void *)1;
  objc_release(v3);
  -[DeviceViewController postDeviceViewSyncOnDidChangeNotificationWithSyncOn:](
    self,
    "postDeviceViewSyncOnDidChangeNotificationWithSyncOn:",
    v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}