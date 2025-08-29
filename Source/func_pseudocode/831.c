-[DeviceSettingsViewController nodeDidChangeNotification:]
// attributes: thunk
void __cdecl -[DeviceSettingsViewController nodeDidChangeNotification:](
        DeviceSettingsViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}