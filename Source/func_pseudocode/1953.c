-[DeviceSettingsPodcastsViewController loadPodcastProperties]
void __cdecl -[DeviceSettingsPodcastsViewController loadPodcastProperties](
        DeviceSettingsPodcastsViewController *self,
        SEL a2)
{
  void *v3; // x24
  void *v4; // x25
  void *v5; // x0
  void *v6; // x20
  __int64 v7; // x27
  void *i; // x23
  void *v9; // x19
  NSNumber *v10; // x26
  void *v11; // x28
  void *v12; // x28
  void *v13; // x22
  void *v14; // x22
  id v15; // x22
  void *v16; // x19
  void *v17; // x22
  void *v18; // x28
  void *v19; // x22
  id v20; // x22
  id v21; // x22
  id v22; // x26
  void *v23; // x19
  void *v24; // x0
  void *v25; // x28
  __int64 v26; // x21
  void *j; // x23
  void *v28; // x20
  unsigned __int64 v29; // [xsp+0h] [xbp-220h]
  id v30; // [xsp+0h] [xbp-220h]
  void *v31; // [xsp+8h] [xbp-218h]
  ITLibrary *v32; // [xsp+10h] [xbp-210h]
  DeviceSettingsPodcastsViewController *v33; // [xsp+18h] [xbp-208h]
  void *v34; // [xsp+20h] [xbp-200h]
  void *v35; // [xsp+28h] [xbp-1F8h]
  id obj; // [xsp+30h] [xbp-1F0h]
  void *v37; // [xsp+38h] [xbp-1E8h]
  __int128 v38; // [xsp+40h] [xbp-1E0h] BYREF
  __int128 v39; // [xsp+50h] [xbp-1D0h]
  __int128 v40; // [xsp+60h] [xbp-1C0h]
  __int128 v41; // [xsp+70h] [xbp-1B0h]
  __int128 v42; // [xsp+80h] [xbp-1A0h] BYREF
  __int128 v43; // [xsp+90h] [xbp-190h]
  __int128 v44; // [xsp+A0h] [xbp-180h]
  __int128 v45; // [xsp+B0h] [xbp-170h]
  _BYTE v46[128]; // [xsp+C0h] [xbp-160h] BYREF
  _BYTE v47[128]; // [xsp+140h] [xbp-E0h] BYREF

  v31 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v34 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v35 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v37 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v33 = self;
  v32 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
  v29 = -[DeviceSettingsViewController deviceCapabilities](self, "deviceCapabilities");
  v42 = 0u;
  v43 = 0u;
  v44 = 0u;
  v45 = 0u;
  obj = objc_retainAutoreleasedReturnValue(
          -[ITLibrary allMediaItemsForMediaDomains:forMediaKinds:forDeviceCapabilities:](
            v32,
            "allMediaItemsForMediaDomains:forMediaKinds:forDeviceCapabilities:",
            4LL,
            16388LL));
  v5 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v42, v47, 16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v43;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v43 != v7 )
          objc_enumerationMutation(obj);
        v9 = *(void **)(*((_QWORD *)&v42 + 1) + 8LL * (_QWORD)i);
        v10 = objc_retainAutoreleasedReturnValue(
                +[NSNumber numberWithUnsignedLongLong:](
                  &OBJC_CLASS___NSNumber,
                  "numberWithUnsignedLongLong:",
                  objc_msgSend(v9, "podcastChannelID")));
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", v10));
        objc_release(v11);
        if ( !v11 )
        {
          v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "album"));
          v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "deviceSettingsNode"));
          objc_release(v12);
          objc_msgSend(v13, "setPersistentID:", v10);
          objc_msgSend(v4, "setObject:forKeyedSubscript:", v13, v10);
          objc_msgSend(v35, "addObject:", v13);
          objc_release(v13);
        }
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v10));
        objc_release(v14);
        if ( !v14 )
        {
          v15 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode rootNode](&OBJC_CLASS___DeviceSettingsNode, "rootNode"));
          objc_msgSend(v3, "setObject:forKeyedSubscript:", v15, v10);
          objc_release(v15);
        }
        v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "deviceSettingsNode"));
        v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v10));
        v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "children"));
        objc_msgSend(v18, "addObject:", v16);
        objc_release(v18);
        objc_release(v17);
        v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "persistentID"));
        objc_msgSend(v37, "setObject:forKeyedSubscript:", v16, v19);
        objc_release(v19);
        objc_release(v16);
        objc_release(v10);
      }
      v6 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v42, v47, 16LL);
    }
    while ( v6 );
  }
  v30 = objc_retainAutoreleasedReturnValue(
          -[ITLibrary allPlaylistsForMediaDomains:forMediaKinds:forDeviceCapabilities:withItems:](
            v32,
            "allPlaylistsForMediaDomains:forMediaKinds:forDeviceCapabilities:withItems:",
            4LL,
            16388LL,
            v29 | 8,
            0LL));
  -[DeviceSettingsViewController loadPlaylistNodes:playlistNodesLookup:forPlaylists:](
    self,
    "loadPlaylistNodes:playlistNodesLookup:forPlaylists:",
    v31,
    v34);
  v20 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode playlistNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "playlistNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v20,
    v31);
  objc_release(v20);
  v21 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode defaultNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "defaultNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v21,
    v35);
  objc_release(v21);
  v22 = objc_retainAutoreleasedReturnValue(
          +[DeviceSettingsNode mostRecentPodcastEpisodeNodeComparator](
            &OBJC_CLASS___DeviceSettingsNode,
            "mostRecentPodcastEpisodeNodeComparator"));
  v38 = 0u;
  v39 = 0u;
  v40 = 0u;
  v41 = 0u;
  v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "allValues"));
  v24 = objc_msgSend(v23, "countByEnumeratingWithState:objects:count:", &v38, v46, 16LL);
  if ( v24 )
  {
    v25 = v24;
    v26 = *(_QWORD *)v39;
    do
    {
      for ( j = 0LL; j != v25; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v39 != v26 )
          objc_enumerationMutation(v23);
        v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v38 + 1) + 8LL * (_QWORD)j), "children"));
        +[DeviceSettingsNode sortUsingComparator:nodes:](
          &OBJC_CLASS___DeviceSettingsNode,
          "sortUsingComparator:nodes:",
          v22,
          v28);
        objc_release(v28);
      }
      v25 = objc_msgSend(v23, "countByEnumeratingWithState:objects:count:", &v38, v46, 16LL);
    }
    while ( v25 );
  }
  objc_release(v23);
  -[DeviceSettingsPodcastsViewController setPodcastNodes:](v33, "setPodcastNodes:", v35);
  -[DeviceSettingsPodcastsViewController setPodcastNodesLookup:](v33, "setPodcastNodesLookup:", v37);
  -[DeviceSettingsPodcastsViewController setPlaylistNodes:](v33, "setPlaylistNodes:", v31);
  -[DeviceSettingsPodcastsViewController setPlaylistNodesLookup:](v33, "setPlaylistNodesLookup:", v34);
  -[DeviceSettingsPodcastsViewController setPodcastEpisodes:](v33, "setPodcastEpisodes:", v3);
  objc_release(v22);
  objc_release(v30);
  objc_release(obj);
  objc_release(v32);
  objc_release(v4);
  objc_release(v3);
  objc_release(v37);
  objc_release(v35);
  objc_release(v34);
  objc_release(v31);
}