-[DeviceSettingsAdvancedViewController clickOverwriteCalendarsCheckBox:]
// attributes: thunk
void __cdecl -[DeviceSettingsAdvancedViewController clickOverwriteCalendarsCheckBox:](
        DeviceSettingsAdvancedViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}