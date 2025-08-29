-[DeviceOptionsViewController clickSyncOnlyCheckedCheckBox:]
// attributes: thunk
void __cdecl -[DeviceOptionsViewController clickSyncOnlyCheckedCheckBox:](
        DeviceOptionsViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}