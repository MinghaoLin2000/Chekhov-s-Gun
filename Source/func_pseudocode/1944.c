-[DeviceSettingsPodcastsViewController save]
void __cdecl -[DeviceSettingsPodcastsViewController save](DeviceSettingsPodcastsViewController *self, SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  -[DeviceSettingsPodcastsViewController saveToDeviceSyncPrefs:](self, "saveToDeviceSyncPrefs:", v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}