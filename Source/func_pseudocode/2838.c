-[DeviceOptionsViewController clickAutomaticallySyncCheckBox:]
// attributes: thunk
void __cdecl -[DeviceOptionsViewController clickAutomaticallySyncCheckBox:](
        DeviceOptionsViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}