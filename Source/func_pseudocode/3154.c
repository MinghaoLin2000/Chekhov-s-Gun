-[DeviceSettingsMusicViewController clickincludeDigitalBookletsCheckBox:]
// attributes: thunk
void __cdecl -[DeviceSettingsMusicViewController clickincludeDigitalBookletsCheckBox:](
        DeviceSettingsMusicViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}