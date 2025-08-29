-[DeviceOptionsIPodViewController clickUseSystemVoiceCheckBox:]
// attributes: thunk
void __cdecl -[DeviceOptionsIPodViewController clickUseSystemVoiceCheckBox:](
        DeviceOptionsIPodViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}