-[DeviceSettingsAdvancedViewController clickOverwriteContactsCheckBox:]
// attributes: thunk
void __cdecl -[DeviceSettingsAdvancedViewController clickOverwriteContactsCheckBox:](
        DeviceSettingsAdvancedViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}