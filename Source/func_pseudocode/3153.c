-[DeviceSettingsMusicViewController clickIncludeMusicVideosCheckBox:]
// attributes: thunk
void __cdecl -[DeviceSettingsMusicViewController clickIncludeMusicVideosCheckBox:](
        DeviceSettingsMusicViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}