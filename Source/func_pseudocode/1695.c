-[DeviceSettingsTabContentViewController extraImageForNode:]
id __cdecl -[DeviceSettingsTabContentViewController extraImageForNode:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSImage *v5; // x0
  NSImage *v6; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( -[DeviceSettingsTabContentViewController shouldPresentExtraImage](self, "shouldPresentExtraImage") )
  {
    if ( (unsigned int)objc_msgSend(v4, "isSmartPlaylist") )
    {
      v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController smartPlaylistImage](self, "smartPlaylistImage"));
LABEL_10:
      v6 = v5;
      goto LABEL_12;
    }
    if ( (unsigned int)objc_msgSend(v4, "isGeniusPlaylist") )
    {
      v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController geniusPlaylistImage](self, "geniusPlaylistImage"));
      goto LABEL_10;
    }
    if ( (unsigned int)objc_msgSend(v4, "isFolder") )
    {
      v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController folderImage](self, "folderImage"));
      goto LABEL_10;
    }
    if ( (unsigned int)objc_msgSend(v4, "isPlaylist") )
    {
      v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController playlistImage](self, "playlistImage"));
      goto LABEL_10;
    }
  }
  v6 = 0LL;
LABEL_12:
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}