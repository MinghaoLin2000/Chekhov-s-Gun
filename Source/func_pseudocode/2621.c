-[DeviceSettingsContactsViewController didChangeSyncOnCheckBox]
// attributes: thunk
void __cdecl -[DeviceSettingsContactsViewController didChangeSyncOnCheckBox](
        DeviceSettingsContactsViewController *self,
        SEL a2)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}