-[DeviceSettingsViewController nodesDidChangeNotification:]
// attributes: thunk
void __cdecl -[DeviceSettingsViewController nodesDidChangeNotification:](
        DeviceSettingsViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}