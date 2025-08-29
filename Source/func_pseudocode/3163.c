-[DeviceSettingsMusicViewController loadMusicProperties]
void __cdecl -[DeviceSettingsMusicViewController loadMusicProperties](DeviceSettingsMusicViewController *self, SEL a2)
{
  void *v3; // x25
  void *v4; // x21
  void *v5; // x26
  void *v6; // x20
  void *v7; // x27
  ITLibrary *v8; // x19
  void *v9; // x0
  void *v10; // x19
  __int64 v11; // x22
  void *v12; // x23
  void *v13; // x0
  void *v14; // x24
  void *v15; // x21
  void *v16; // x28
  void *v17; // x21
  void *v18; // x28
  void *v19; // x0
  void *v20; // x19
  __int64 v21; // x23
  void *v22; // x25
  void *v23; // x0
  void *v24; // x24
  void *v25; // x21
  void *v26; // x22
  void *v27; // x21
  void *v28; // x19
  void *v29; // x0
  void *v30; // x24
  __int64 v31; // x25
  void *v32; // x20
  DeviceSettingsNode *v33; // x21
  NSString *v34; // x22
  id v35; // x22
  id v36; // x22
  id v37; // x22
  id v38; // x22
  DeviceSettingsMusicViewController *v39; // [xsp+0h] [xbp-2F0h]
  void *v40; // [xsp+8h] [xbp-2E8h]
  void *v41; // [xsp+10h] [xbp-2E0h]
  void *v42; // [xsp+18h] [xbp-2D8h]
  void *v43; // [xsp+20h] [xbp-2D0h]
  unsigned __int64 v44; // [xsp+28h] [xbp-2C8h]
  id v45; // [xsp+28h] [xbp-2C8h]
  ITLibrary *v46; // [xsp+30h] [xbp-2C0h]
  void *v47; // [xsp+38h] [xbp-2B8h]
  void *v48; // [xsp+40h] [xbp-2B0h]
  id obj; // [xsp+48h] [xbp-2A8h]
  __int128 v50; // [xsp+50h] [xbp-2A0h] BYREF
  __int128 v51; // [xsp+60h] [xbp-290h]
  __int128 v52; // [xsp+70h] [xbp-280h]
  __int128 v53; // [xsp+80h] [xbp-270h]
  __int128 v54; // [xsp+90h] [xbp-260h] BYREF
  __int128 v55; // [xsp+A0h] [xbp-250h]
  __int128 v56; // [xsp+B0h] [xbp-240h]
  __int128 v57; // [xsp+C0h] [xbp-230h]
  __int128 v58; // [xsp+D0h] [xbp-220h] BYREF
  __int128 v59; // [xsp+E0h] [xbp-210h]
  __int128 v60; // [xsp+F0h] [xbp-200h]
  __int128 v61; // [xsp+100h] [xbp-1F0h]
  _BYTE v62[128]; // [xsp+110h] [xbp-1E0h] BYREF
  _BYTE v63[128]; // [xsp+190h] [xbp-160h] BYREF
  _BYTE v64[128]; // [xsp+210h] [xbp-E0h] BYREF

  v43 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v42 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v48 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v47 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v6 = v4;
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
  v39 = self;
  v44 = -[DeviceSettingsViewController deviceCapabilities](self, "deviceCapabilities");
  v46 = v8;
  v58 = 0u;
  v59 = 0u;
  v60 = 0u;
  v61 = 0u;
  obj = objc_retainAutoreleasedReturnValue(
          -[ITLibrary allArtistsForMediaDomains:forMediaKinds:forDeviceCapabilities:](
            v8,
            "allArtistsForMediaDomains:forMediaKinds:forDeviceCapabilities:",
            1LL,
            177LL,
            v44));
  v9 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v58, v64, 16LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = *(_QWORD *)v59;
    do
    {
      v12 = 0LL;
      do
      {
        if ( *(_QWORD *)v59 != v11 )
          objc_enumerationMutation(obj);
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v58 + 1) + 8LL * (_QWORD)v12), "deviceSettingsNode"));
        v14 = v13;
        if ( v13 )
        {
          v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "name"));
          v16 = objc_msgSend(v15, "length");
          objc_release(v15);
          if ( v16 )
          {
            objc_msgSend(v3, "addObject:", v14);
            v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "persistentID"));
            objc_msgSend(v6, "setObject:forKeyedSubscript:", v14, v17);
            objc_release(v17);
          }
        }
        objc_release(v14);
        v12 = (char *)v12 + 1;
      }
      while ( v10 != v12 );
      v10 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v58, v64, 16LL);
    }
    while ( v10 );
  }
  v41 = v3;
  v18 = objc_retainAutoreleasedReturnValue(
          -[ITLibrary allAlbumsForMediaDomains:forMediaKinds:forDeviceCapabilities:](
            v46,
            "allAlbumsForMediaDomains:forMediaKinds:forDeviceCapabilities:",
            1LL,
            177LL,
            v44));
  v54 = 0u;
  v55 = 0u;
  v56 = 0u;
  v57 = 0u;
  v19 = objc_msgSend(v18, "countByEnumeratingWithState:objects:count:", &v54, v63, 16LL);
  if ( v19 )
  {
    v20 = v19;
    v21 = *(_QWORD *)v55;
    do
    {
      v22 = 0LL;
      do
      {
        if ( *(_QWORD *)v55 != v21 )
          objc_enumerationMutation(v18);
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v54 + 1) + 8LL * (_QWORD)v22), "deviceSettingsNode"));
        v24 = v23;
        if ( v23 )
        {
          v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "name"));
          v26 = objc_msgSend(v25, "length");
          objc_release(v25);
          if ( v26 )
          {
            objc_msgSend(v48, "addObject:", v24);
            v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "persistentID"));
            objc_msgSend(v47, "setObject:forKeyedSubscript:", v24, v27);
            objc_release(v27);
          }
        }
        objc_release(v24);
        v22 = (char *)v22 + 1;
      }
      while ( v20 != v22 );
      v20 = objc_msgSend(v18, "countByEnumeratingWithState:objects:count:", &v54, v63, 16LL);
    }
    while ( v20 );
  }
  v40 = v6;
  v28 = objc_retainAutoreleasedReturnValue(
          -[ITLibrary allGenresForMediaDomains:forMediaKinds:forDeviceCapabilities:](
            v46,
            "allGenresForMediaDomains:forMediaKinds:forDeviceCapabilities:",
            1LL,
            177LL,
            v44));
  v50 = 0u;
  v51 = 0u;
  v52 = 0u;
  v53 = 0u;
  v29 = objc_msgSend(v28, "countByEnumeratingWithState:objects:count:", &v50, v62, 16LL);
  if ( v29 )
  {
    v30 = v29;
    v31 = *(_QWORD *)v51;
    do
    {
      v32 = 0LL;
      do
      {
        if ( *(_QWORD *)v51 != v31 )
          objc_enumerationMutation(v28);
        v33 = objc_retainAutoreleasedReturnValue(
                +[DeviceSettingsNode nodeWithName:](
                  &OBJC_CLASS___DeviceSettingsNode,
                  "nodeWithName:",
                  *(_QWORD *)(*((_QWORD *)&v50 + 1) + 8LL * (_QWORD)v32)));
        if ( v33 )
        {
          objc_msgSend(v5, "addObject:", v33);
          v34 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode name](v33, "name"));
          objc_msgSend(v7, "setObject:forKeyedSubscript:", v33, v34);
          objc_release(v34);
        }
        objc_release(v33);
        v32 = (char *)v32 + 1;
      }
      while ( v30 != v32 );
      v30 = objc_msgSend(v28, "countByEnumeratingWithState:objects:count:", &v50, v62, 16LL);
    }
    while ( v30 );
  }
  v45 = objc_retainAutoreleasedReturnValue(
          -[ITLibrary allPlaylistsForMediaDomains:forMediaKinds:forDeviceCapabilities:withItems:](
            v46,
            "allPlaylistsForMediaDomains:forMediaKinds:forDeviceCapabilities:withItems:",
            1LL,
            177LL,
            v44 | 8,
            0LL));
  -[DeviceSettingsViewController loadPlaylistNodes:playlistNodesLookup:forPlaylists:](
    v39,
    "loadPlaylistNodes:playlistNodesLookup:forPlaylists:",
    v43,
    v42,
    v45);
  v35 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode playlistNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "playlistNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v35,
    v43);
  objc_release(v35);
  v36 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode defaultNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "defaultNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v36,
    v41);
  objc_release(v36);
  v37 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode defaultNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "defaultNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v37,
    v48);
  objc_release(v37);
  v38 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode defaultNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "defaultNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v38,
    v5);
  objc_release(v38);
  -[DeviceSettingsMusicViewController setArtistNodes:](v39, "setArtistNodes:", v41);
  -[DeviceSettingsMusicViewController setAlbumNodes:](v39, "setAlbumNodes:", v48);
  -[DeviceSettingsMusicViewController setGenreNodes:](v39, "setGenreNodes:", v5);
  -[DeviceSettingsMusicViewController setPlaylistNodes:](v39, "setPlaylistNodes:", v43);
  -[DeviceSettingsMusicViewController setArtistNodesLookup:](v39, "setArtistNodesLookup:", v40);
  -[DeviceSettingsMusicViewController setAlbumNodesLookup:](v39, "setAlbumNodesLookup:", v47);
  -[DeviceSettingsMusicViewController setGenreNodesLookup:](v39, "setGenreNodesLookup:", v7);
  -[DeviceSettingsMusicViewController setPlaylistNodesLookup:](v39, "setPlaylistNodesLookup:", v42);
  objc_release(v45);
  objc_release(v28);
  objc_release(v18);
  objc_release(obj);
  objc_release(v46);
  objc_release(v7);
  objc_release(v5);
  objc_release(v47);
  objc_release(v48);
  objc_release(v40);
  objc_release(v41);
  objc_release(v42);
  objc_release(v43);
}