-[DeviceSettingsMoviesViewController areAnyPlaylistsChecked]
bool __cdecl -[DeviceSettingsMoviesViewController areAnyPlaylistsChecked](
        DeviceSettingsMoviesViewController *self,
        SEL a2)
{
  NSMutableDictionary *v2; // x19
  void *v3; // x20
  bool v4; // w21

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v2, "objectForKeyedSubscript:", CFSTR("Playlists")));
  v4 = objc_msgSend(v3, "count") != 0LL;
  objc_release(v3);
  objc_release(v2);
  return v4;
}