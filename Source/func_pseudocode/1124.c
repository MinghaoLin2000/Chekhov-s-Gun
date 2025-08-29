-[DeviceSettingsPhotosViewController clickOnlyFavoritesCheckBox:]
// attributes: thunk
void __cdecl -[DeviceSettingsPhotosViewController clickOnlyFavoritesCheckBox:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}