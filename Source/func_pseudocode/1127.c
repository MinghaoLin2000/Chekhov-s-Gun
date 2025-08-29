-[DeviceSettingsPhotosViewController clickAutoIncludePhotosFromPopUpButton:]
// attributes: thunk
void __cdecl -[DeviceSettingsPhotosViewController clickAutoIncludePhotosFromPopUpButton:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}