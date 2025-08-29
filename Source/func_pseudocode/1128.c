-[DeviceSettingsPhotosViewController clickIncludeFullResPhotosCheckBox:]
// attributes: thunk
void __cdecl -[DeviceSettingsPhotosViewController clickIncludeFullResPhotosCheckBox:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}