-[DeviceSettingsPodcastsViewController didChangeSyncOnCheckBox]
// attributes: thunk
void __cdecl -[DeviceSettingsPodcastsViewController didChangeSyncOnCheckBox](
        DeviceSettingsPodcastsViewController *self,
        SEL a2)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}