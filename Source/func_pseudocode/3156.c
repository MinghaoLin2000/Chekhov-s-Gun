-[DeviceSettingsMusicViewController clickAutoFillFreeSpaceCheckBox:]
// attributes: thunk
void __cdecl -[DeviceSettingsMusicViewController clickAutoFillFreeSpaceCheckBox:](
        DeviceSettingsMusicViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}