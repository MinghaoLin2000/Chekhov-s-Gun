-[DeviceSettingsCalendarsViewController clickSyncDaysLimitTrailingTextField:]
// attributes: thunk
void __cdecl -[DeviceSettingsCalendarsViewController clickSyncDaysLimitTrailingTextField:](
        DeviceSettingsCalendarsViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}