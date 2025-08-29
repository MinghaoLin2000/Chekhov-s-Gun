-[DeviceSettingsPodcastsViewController loadPodcastModel]
void __cdecl -[DeviceSettingsPodcastsViewController loadPodcastModel](
        DeviceSettingsPodcastsViewController *self,
        SEL a2)
{
  NSMutableArray *v3; // x20
  NSMutableDictionary *v4; // x21
  NSMutableArray *v5; // x20
  NSMutableDictionary *v6; // x21
  NSMutableDictionary *v7; // x20
  NSMutableDictionary *v8; // x21
  NSMutableDictionary *v9; // x20
  NSMutableDictionary *v10; // x21
  NSMutableDictionary *v11; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  -[DeviceSettingsPodcastsViewController loadPodcastProperties](self, "loadPodcastProperties");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController podcastNodes](self, "podcastNodes"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v3, CFSTR("Podcasts"));
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController playlistNodes](self, "playlistNodes"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v6, "setObject:forKeyedSubscript:", v5, CFSTR("Playlists"));
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController podcastNodesLookup](self, "podcastNodesLookup"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v7, CFSTR("Podcasts"));
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController playlistNodesLookup](self, "playlistNodesLookup"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v10, "setObject:forKeyedSubscript:", v9, CFSTR("Playlists"));
  objc_release(v10);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController podcastEpisodes](self, "podcastEpisodes"));
  -[DeviceSettingsPodcastsViewController setDetailsModelDict:](self, "setDetailsModelDict:", v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v11);
}