-[DeviceBackUpSettingsViewController clickBackUpNowButton:]
// attributes: thunk
void __cdecl -[DeviceBackUpSettingsViewController clickBackUpNowButton:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceBackUpSettingsViewController backUpDevice](self, "backUpDevice", a3);
}