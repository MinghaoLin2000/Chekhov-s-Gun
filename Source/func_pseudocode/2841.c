-[DeviceOptionsViewController clickConvertHigherBitRateSongsToPopUpButton:]
// attributes: thunk
void __cdecl -[DeviceOptionsViewController clickConvertHigherBitRateSongsToPopUpButton:](
        DeviceOptionsViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}