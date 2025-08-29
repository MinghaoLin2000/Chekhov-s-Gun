-[DeviceOptionsShuffleViewController clickPreventChangesToVolumeLimitCheckBox:]
// attributes: thunk
void __cdecl -[DeviceOptionsShuffleViewController clickPreventChangesToVolumeLimitCheckBox:](
        DeviceOptionsShuffleViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}