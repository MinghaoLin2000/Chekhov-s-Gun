-[DeviceOptionsIOSViewController clickShowOnWiFiCheckBox:]
// attributes: thunk
void __cdecl -[DeviceOptionsIOSViewController clickShowOnWiFiCheckBox:](
        DeviceOptionsIOSViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}