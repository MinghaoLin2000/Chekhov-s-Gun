-[DeviceSettingsMusicViewController loadMusicModel]
void __cdecl -[DeviceSettingsMusicViewController loadMusicModel](DeviceSettingsMusicViewController *self, SEL a2)
{
  NSMutableArray *v3; // x21
  NSMutableDictionary *v4; // x22
  NSMutableArray *v5; // x22
  NSMutableDictionary *v6; // x23
  NSMutableArray *v7; // x23
  NSMutableDictionary *v8; // x24
  NSMutableArray *v9; // x24
  NSMutableDictionary *v10; // x25
  NSMutableDictionary *v11; // x24
  NSMutableDictionary *v12; // x25
  NSMutableDictionary *v13; // x20
  NSMutableDictionary *v14; // x24
  NSMutableDictionary *v15; // x20
  NSMutableDictionary *v16; // x21
  NSMutableDictionary *v17; // x20
  NSMutableDictionary *v18; // x19
  __int64 vars8; // [xsp+48h] [xbp+8h]

  -[DeviceSettingsMusicViewController loadMusicProperties](self, "loadMusicProperties");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController artistNodes](self, "artistNodes"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v3, CFSTR("Artists"));
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController albumNodes](self, "albumNodes"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v6, "setObject:forKeyedSubscript:", v5, CFSTR("Albums"));
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController genreNodes](self, "genreNodes"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v7, CFSTR("Genres"));
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController playlistNodes](self, "playlistNodes"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v10, "setObject:forKeyedSubscript:", v9, CFSTR("Playlists"));
  objc_release(v10);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController artistNodesLookup](self, "artistNodesLookup"));
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v12, "setObject:forKeyedSubscript:", v11, CFSTR("Artists"));
  objc_release(v12);
  objc_release(v11);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController albumNodesLookup](self, "albumNodesLookup"));
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v14, "setObject:forKeyedSubscript:", v13, CFSTR("Albums"));
  objc_release(v14);
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController genreNodesLookup](self, "genreNodesLookup"));
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v16, "setObject:forKeyedSubscript:", v15, CFSTR("Genres"));
  objc_release(v16);
  objc_release(v15);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController playlistNodesLookup](self, "playlistNodesLookup"));
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v18, "setObject:forKeyedSubscript:", v17, CFSTR("Playlists"));
  objc_release(v18);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v17);
}