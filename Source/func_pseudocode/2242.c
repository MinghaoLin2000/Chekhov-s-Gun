-[DeviceSettingsCalendarsViewController clickSyncDaysLimitTextField:]
// attributes: thunk
void __cdecl -[DeviceSettingsCalendarsViewController clickSyncDaysLimitTextField:](
        DeviceSettingsCalendarsViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
}