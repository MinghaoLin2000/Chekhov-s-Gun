-[DeviceSettingsPodcastsViewController loadCheckedItemsModel]
void __cdecl -[DeviceSettingsPodcastsViewController loadCheckedItemsModel](
        DeviceSettingsPodcastsViewController *self,
        SEL a2)
{
  void *v3; // x20
  NSMutableDictionary *v4; // x21
  void *v5; // x20
  void *v6; // x20
  NSMutableDictionary *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v3, CFSTR("Podcasts"));
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  -[DeviceSettingsPodcastsViewController setDetailsCheckedItems:](self, "setDetailsCheckedItems:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v6, CFSTR("Playlists"));
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsPodcastsViewController revertCheckedItemsModel](self, "revertCheckedItemsModel");
}