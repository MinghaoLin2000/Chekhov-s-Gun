-[DeviceOptionsShuffleViewController clickVoiceOverLanguagePopUpButton:]
// attributes: thunk
void __cdecl -[DeviceOptionsShuffleViewController clickVoiceOverLanguagePopUpButton:](
        DeviceOptionsShuffleViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}