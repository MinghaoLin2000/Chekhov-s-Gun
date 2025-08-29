-[DeviceSettingsCalendarsViewController didChangeSyncOnCheckBox]
// attributes: thunk
void __cdecl -[DeviceSettingsCalendarsViewController didChangeSyncOnCheckBox](
        DeviceSettingsCalendarsViewController *self,
        SEL a2)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}