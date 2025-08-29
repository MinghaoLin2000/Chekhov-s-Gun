-[DeviceSettingsPhotosViewController clickIncludeFullResPhotosTextField:]
// attributes: thunk
void __cdecl -[DeviceSettingsPhotosViewController clickIncludeFullResPhotosTextField:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}