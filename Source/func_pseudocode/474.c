-[DeviceSettingsTVShowsViewController loadTVShowsProperties]
void __cdecl -[DeviceSettingsTVShowsViewController loadTVShowsProperties](
        DeviceSettingsTVShowsViewController *self,
        SEL a2)
{
  void *v3; // x25
  ITLibrary *v4; // x20
  unsigned __int64 v5; // x21
  NSBundle *v6; // x19
  void *v7; // x0
  void *v8; // x27
  __int64 v9; // x26
  void *i; // x24
  void *v11; // x21
  void *v12; // x20
  void *v13; // x19
  void *v14; // x20
  DeviceSettingsNode *v15; // x20
  void *v16; // x20
  void *v17; // x20
  void *v18; // x22
  NSString *v19; // x20
  void *v20; // x22
  void *v21; // x28
  void *v22; // x22
  void *v23; // x28
  void *v24; // x22
  id v25; // x21
  void *v26; // x21
  void *v27; // x28
  void *v28; // x21
  void *v29; // x0
  void *v30; // x20
  __int64 v31; // x24
  void *j; // x19
  __int64 v33; // x21
  void *v34; // x22
  id v35; // x27
  id v36; // x28
  DeviceSettingsNode *v37; // x26
  void *v38; // x19
  id v39; // x21
  id v40; // x21
  unsigned __int64 v41; // [xsp+8h] [xbp-238h]
  ITLibrary *v42; // [xsp+10h] [xbp-230h]
  void *v43; // [xsp+18h] [xbp-228h]
  void *v44; // [xsp+20h] [xbp-220h]
  void *v45; // [xsp+28h] [xbp-218h]
  id v46; // [xsp+30h] [xbp-210h]
  id obj; // [xsp+38h] [xbp-208h]
  NSString *v48; // [xsp+40h] [xbp-200h]
  void *v49; // [xsp+48h] [xbp-1F8h]
  id v50; // [xsp+50h] [xbp-1F0h]
  void *v51; // [xsp+58h] [xbp-1E8h]
  __int128 v52; // [xsp+60h] [xbp-1E0h] BYREF
  __int128 v53; // [xsp+70h] [xbp-1D0h]
  __int128 v54; // [xsp+80h] [xbp-1C0h]
  __int128 v55; // [xsp+90h] [xbp-1B0h]
  __int128 v56; // [xsp+A0h] [xbp-1A0h] BYREF
  __int128 v57; // [xsp+B0h] [xbp-190h]
  __int128 v58; // [xsp+C0h] [xbp-180h]
  __int128 v59; // [xsp+D0h] [xbp-170h]
  _BYTE v60[128]; // [xsp+E0h] [xbp-160h] BYREF
  _BYTE v61[128]; // [xsp+160h] [xbp-E0h] BYREF

  v44 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v43 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v45 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v49 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v51 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v50 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
  v5 = -[DeviceSettingsViewController deviceCapabilities](self, "deviceCapabilities");
  v6 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v48 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v6,
            "localizedStringForKey:value:table:",
            CFSTR("Season %d"),
            &stru_1000BA220,
            0LL));
  objc_release(v6);
  v41 = v5;
  v42 = v4;
  v56 = 0u;
  v57 = 0u;
  v58 = 0u;
  v59 = 0u;
  obj = objc_retainAutoreleasedReturnValue(
          -[ITLibrary allMediaItemsForMediaDomains:forMediaKinds:forDeviceCapabilities:](
            v4,
            "allMediaItemsForMediaDomains:forMediaKinds:forDeviceCapabilities:",
            2LL,
            64LL,
            v5));
  v7 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v56, v61, 16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v57;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v57 != v9 )
          objc_enumerationMutation(obj);
        v11 = *(void **)(*((_QWORD *)&v56 + 1) + 8LL * (_QWORD)i);
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "videoInfo"));
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "series"));
        objc_release(v12);
        if ( v13 )
        {
          v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v50, "objectForKeyedSubscript:", v13));
          objc_release(v14);
          if ( !v14 )
          {
            v15 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode nodeWithName:](&OBJC_CLASS___DeviceSettingsNode, "nodeWithName:", v13));
            objc_msgSend(v50, "setObject:forKeyedSubscript:", v15, v13);
            objc_msgSend(v45, "addObject:", v15);
            objc_release(v15);
          }
          v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v13));
          objc_release(v16);
          if ( !v16 )
          {
            v17 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
            objc_msgSend(v3, "setObject:forKeyedSubscript:", v17, v13);
            objc_release(v17);
          }
          v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "videoInfo"));
          v19 = objc_retainAutoreleasedReturnValue(
                  +[NSString localizedStringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "localizedStringWithFormat:",
                    v48,
                    objc_msgSend(v18, "season")));
          objc_release(v18);
          v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v13));
          v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "objectForKeyedSubscript:", v19));
          objc_release(v21);
          objc_release(v20);
          if ( !v21 )
          {
            v22 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
            v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v13));
            objc_msgSend(v23, "setObject:forKeyedSubscript:", v22, v19);
            objc_release(v23);
            objc_release(v22);
          }
          v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "deviceSettingsNode"));
          v25 = objc_retainAutoreleasedReturnValue(
                  -[DeviceSettingsTVShowsViewController episodeTitleForMediaItem:](
                    self,
                    "episodeTitleForMediaItem:",
                    v11));
          objc_msgSend(v24, "setName:", v25);
          objc_release(v25);
          v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v13));
          v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v26, "objectForKeyedSubscript:", v19));
          objc_msgSend(v27, "addObject:", v24);
          objc_release(v27);
          objc_release(v26);
          v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "persistentID"));
          objc_msgSend(v49, "setObject:forKeyedSubscript:", v24, v28);
          objc_release(v28);
          objc_release(v24);
          objc_release(v19);
        }
        objc_release(v13);
      }
      v8 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v56, v61, 16LL);
    }
    while ( v8 );
  }
  v54 = 0u;
  v55 = 0u;
  v52 = 0u;
  v53 = 0u;
  v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "allKeys"));
  v29 = objc_msgSend(v46, "countByEnumeratingWithState:objects:count:", &v52, v60, 16LL);
  if ( v29 )
  {
    v30 = v29;
    v31 = *(_QWORD *)v53;
    do
    {
      for ( j = 0LL; j != v30; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v53 != v31 )
          objc_enumerationMutation(v46);
        v33 = *(_QWORD *)(*((_QWORD *)&v52 + 1) + 8LL * (_QWORD)j);
        v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v33));
        v35 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController sortSeasonsDictionary:](self, "sortSeasonsDictionary:", v34));
        v36 = objc_retainAutoreleasedReturnValue(
                -[DeviceSettingsTVShowsViewController seasonNodesWithSortedSeasonNames:seasonsDictionary:](
                  self,
                  "seasonNodesWithSortedSeasonNames:seasonsDictionary:",
                  v35,
                  v34));
        v37 = objc_retainAutoreleasedReturnValue(
                +[DeviceSettingsNode nodeWithName:children:](
                  &OBJC_CLASS___DeviceSettingsNode,
                  "nodeWithName:children:",
                  v33,
                  v36));
        objc_msgSend(v51, "setObject:forKeyedSubscript:", v37, v33);
        objc_release(v37);
        objc_release(v36);
        objc_release(v35);
        objc_release(v34);
      }
      v30 = objc_msgSend(v46, "countByEnumeratingWithState:objects:count:", &v52, v60, 16LL);
    }
    while ( v30 );
  }
  objc_release(v46);
  v38 = objc_retainAutoreleasedReturnValue(
          -[ITLibrary allPlaylistsForMediaDomains:forMediaKinds:forDeviceCapabilities:withItems:](
            v42,
            "allPlaylistsForMediaDomains:forMediaKinds:forDeviceCapabilities:withItems:",
            2LL,
            64LL,
            v41 | 8,
            0LL));
  -[DeviceSettingsViewController loadPlaylistNodes:playlistNodesLookup:forPlaylists:](
    self,
    "loadPlaylistNodes:playlistNodesLookup:forPlaylists:",
    v44,
    v43,
    v38);
  v39 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode playlistNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "playlistNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v39,
    v44);
  objc_release(v39);
  v40 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode defaultNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "defaultNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v40,
    v45);
  objc_release(v40);
  -[DeviceSettingsTVShowsViewController setShowNodes:](self, "setShowNodes:", v45);
  -[DeviceSettingsTVShowsViewController setPlaylistNodes:](self, "setPlaylistNodes:", v44);
  -[DeviceSettingsTVShowsViewController setShowNodesLookup:](self, "setShowNodesLookup:", v49);
  -[DeviceSettingsTVShowsViewController setPlaylistNodesLookup:](self, "setPlaylistNodesLookup:", v43);
  -[DeviceSettingsTVShowsViewController setShowNameToSeasonNodeDictionary:](
    self,
    "setShowNameToSeasonNodeDictionary:",
    v51);
  objc_release(v38);
  objc_release(obj);
  objc_release(v48);
  objc_release(v42);
  objc_release(v50);
  objc_release(v3);
  objc_release(v51);
  objc_release(v49);
  objc_release(v45);
  objc_release(v43);
  objc_release(v44);
}