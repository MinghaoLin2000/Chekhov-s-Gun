-[DeviceOptionsShuffleViewController maxVolumeSliderChanged:]
// attributes: thunk
void __cdecl -[DeviceOptionsShuffleViewController maxVolumeSliderChanged:](
        DeviceOptionsShuffleViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}