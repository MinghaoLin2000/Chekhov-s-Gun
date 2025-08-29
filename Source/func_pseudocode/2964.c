-[DeviceOptionsShuffleViewController clickSoundCheckCheckBox:]
// attributes: thunk
void __cdecl -[DeviceOptionsShuffleViewController clickSoundCheckCheckBox:](
        DeviceOptionsShuffleViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}