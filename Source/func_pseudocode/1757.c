-[DeviceOptionsIPodViewController clickEnableDiskUseCheckBox:]
// attributes: thunk
void __cdecl -[DeviceOptionsIPodViewController clickEnableDiskUseCheckBox:](
        DeviceOptionsIPodViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}