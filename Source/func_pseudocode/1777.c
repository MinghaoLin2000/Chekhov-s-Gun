-[DeviceOptionsIOSViewController clickPreferStandardDefVideosCheckBox:]
// attributes: thunk
void __cdecl -[DeviceOptionsIOSViewController clickPreferStandardDefVideosCheckBox:](
        DeviceOptionsIOSViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}