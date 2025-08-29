-[DeviceSettingsNode playlistKind]
signed __int64 __cdecl -[DeviceSettingsNode playlistKind](DeviceSettingsNode *self, SEL a2)
{
  if ( -[DeviceSettingsNode isFolder](self, "isFolder") )
    return 4LL;
  if ( -[DeviceSettingsNode isGeniusPlaylist](self, "isGeniusPlaylist") )
    return 2LL;
  if ( -[DeviceSettingsNode isSmartPlaylist](self, "isSmartPlaylist") )
    return 1LL;
  return -[DeviceSettingsNode isPlaylist](self, "isPlaylist") - 1LL;
}