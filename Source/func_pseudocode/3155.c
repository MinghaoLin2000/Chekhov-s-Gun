-[DeviceSettingsMusicViewController clickIncludeVoiceMemosCheckBox:]
// attributes: thunk
void __cdecl -[DeviceSettingsMusicViewController clickIncludeVoiceMemosCheckBox:](
        DeviceSettingsMusicViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}