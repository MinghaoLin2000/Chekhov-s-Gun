-[DeviceSettingsMoviesViewController loadMoviesProperties]
void __cdecl -[DeviceSettingsMoviesViewController loadMoviesProperties](
        DeviceSettingsMoviesViewController *self,
        SEL a2)
{
  void *v3; // x22
  void *v4; // x23
  ITLibrary *v5; // x19
  unsigned __int64 v6; // x26
  void *v7; // x25
  void *v8; // x0
  void *v9; // x27
  __int64 v10; // x24
  void *v11; // x19
  void *v12; // x28
  void *v13; // x20
  void *v14; // x26
  id v15; // x27
  id v16; // x27
  void *v17; // [xsp+8h] [xbp-138h]
  void *v18; // [xsp+10h] [xbp-130h]
  ITLibrary *v19; // [xsp+18h] [xbp-128h]
  __int128 v20; // [xsp+20h] [xbp-120h] BYREF
  __int128 v21; // [xsp+30h] [xbp-110h]
  __int128 v22; // [xsp+40h] [xbp-100h]
  __int128 v23; // [xsp+50h] [xbp-F0h]
  _BYTE v24[128]; // [xsp+60h] [xbp-E0h] BYREF

  v18 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v17 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
  v6 = -[DeviceSettingsViewController deviceCapabilities](self, "deviceCapabilities");
  v19 = v5;
  v7 = objc_retainAutoreleasedReturnValue(
         -[ITLibrary allMediaItemsForMediaDomains:forMediaKinds:forDeviceCapabilities:](
           v5,
           "allMediaItemsForMediaDomains:forMediaKinds:forDeviceCapabilities:",
           2LL,
           258LL,
           v6));
  v20 = 0u;
  v21 = 0u;
  v22 = 0u;
  v23 = 0u;
  v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v20, v24, 16LL);
  if ( v8 )
  {
    v9 = v8;
    v10 = *(_QWORD *)v21;
    do
    {
      v11 = 0LL;
      do
      {
        if ( *(_QWORD *)v21 != v10 )
          objc_enumerationMutation(v7);
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v20 + 1) + 8LL * (_QWORD)v11), "deviceSettingsNode"));
        objc_msgSend(v3, "addObject:", v12);
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "persistentID"));
        objc_msgSend(v4, "setObject:forKeyedSubscript:", v12, v13);
        objc_release(v13);
        objc_release(v12);
        v11 = (char *)v11 + 1;
      }
      while ( v9 != v11 );
      v9 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v20, v24, 16LL);
    }
    while ( v9 );
  }
  v14 = objc_retainAutoreleasedReturnValue(
          -[ITLibrary allPlaylistsForMediaDomains:forMediaKinds:forDeviceCapabilities:withItems:](
            v19,
            "allPlaylistsForMediaDomains:forMediaKinds:forDeviceCapabilities:withItems:",
            2LL,
            258LL,
            v6 | 8,
            0LL));
  -[DeviceSettingsViewController loadPlaylistNodes:playlistNodesLookup:forPlaylists:](
    self,
    "loadPlaylistNodes:playlistNodesLookup:forPlaylists:",
    v18,
    v17,
    v14);
  v15 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode playlistNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "playlistNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v15,
    v18);
  objc_release(v15);
  v16 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode defaultNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "defaultNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v16,
    v3);
  objc_release(v16);
  -[DeviceSettingsMoviesViewController setMovieNodes:](self, "setMovieNodes:", v3);
  -[DeviceSettingsMoviesViewController setPlaylistNodes:](self, "setPlaylistNodes:", v18);
  -[DeviceSettingsMoviesViewController setMovieNodesLookup:](self, "setMovieNodesLookup:", v4);
  -[DeviceSettingsMoviesViewController setPlaylistNodesLookup:](self, "setPlaylistNodesLookup:", v17);
  objc_release(v14);
  objc_release(v7);
  objc_release(v19);
  objc_release(v4);
  objc_release(v3);
  objc_release(v17);
  objc_release(v18);
}