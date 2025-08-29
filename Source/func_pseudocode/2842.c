-[DeviceOptionsViewController clickManualManageCheckBox:]
void __cdecl -[DeviceOptionsViewController clickManualManageCheckBox:](
        DeviceOptionsViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  _BOOL8 v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController manualManageCheckBox](self, "manualManageCheckBox", a3));
  v5 = (void *)-[NSButton state](v4, "state") == (void *)1;
  objc_release(v4);
  -[DeviceViewController postDeviceViewManualManageOptionDidChangeNotificationWithManualManage:](
    self,
    "postDeviceViewManualManageOptionDidChangeNotificationWithManualManage:",
    v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}