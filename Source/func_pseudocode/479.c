-[DeviceSettingsTVShowsViewController setupDetailsCheckBoxesForTabViewItem:]
void __cdecl -[DeviceSettingsTVShowsViewController setupDetailsCheckBoxesForTabViewItem:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x20
  unsigned __int8 v6; // w21
  NSMutableDictionary *v7; // x21
  void *v8; // x23
  void *v9; // x20
  void *v10; // x21
  void *v11; // x0
  void *v12; // x23
  __int64 v13; // x24
  void *v14; // x25
  NSMutableSet *v15; // x22
  void *v16; // x0
  void *v17; // x23
  __int64 v18; // x25
  void *v19; // x26
  void *v20; // x24
  __int128 v21; // [xsp+0h] [xbp-1E0h] BYREF
  __int128 v22; // [xsp+10h] [xbp-1D0h]
  __int128 v23; // [xsp+20h] [xbp-1C0h]
  __int128 v24; // [xsp+30h] [xbp-1B0h]
  __int128 v25; // [xsp+40h] [xbp-1A0h] BYREF
  __int128 v26; // [xsp+50h] [xbp-190h]
  __int128 v27; // [xsp+60h] [xbp-180h]
  __int128 v28; // [xsp+70h] [xbp-170h]
  _BYTE v29[128]; // [xsp+88h] [xbp-158h] BYREF
  _BYTE v30[128]; // [xsp+108h] [xbp-D8h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  v6 = (unsigned __int8)objc_msgSend(v5, "isEqualToString:", CFSTR("Playlists"));
  objc_release(v5);
  if ( (v6 & 1) == 0 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
    v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v7, "objectForKeyedSubscript:", v8));
    objc_release(v8);
    objc_release(v7);
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "allValues"));
    v25 = 0u;
    v26 = 0u;
    v27 = 0u;
    v28 = 0u;
    v11 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v25, v30, 16LL);
    if ( v11 )
    {
      v12 = v11;
      v13 = *(_QWORD *)v26;
      do
      {
        v14 = 0LL;
        do
        {
          if ( *(_QWORD *)v26 != v13 )
            objc_enumerationMutation(v10);
          objc_msgSend(
            *(id *)(*((_QWORD *)&v25 + 1) + 8LL * (_QWORD)v14),
            "setState:setChildren:setAncestors:",
            0LL,
            1LL,
            1LL);
          v14 = (char *)v14 + 1;
        }
        while ( v12 != v14 );
        v12 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v25, v30, 16LL);
      }
      while ( v12 );
    }
    v23 = 0u;
    v24 = 0u;
    v21 = 0u;
    v22 = 0u;
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController detailsCheckedItems](self, "detailsCheckedItems", 0LL));
    v16 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
            v15,
            "countByEnumeratingWithState:objects:count:",
            &v21,
            v29,
            16LL);
    if ( v16 )
    {
      v17 = v16;
      v18 = *(_QWORD *)v22;
      do
      {
        v19 = 0LL;
        do
        {
          if ( *(_QWORD *)v22 != v18 )
            objc_enumerationMutation(v15);
          v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL * (_QWORD)v19)));
          if ( ((unsigned int)objc_msgSend(v20, "isFolder") & 1) == 0 )
            objc_msgSend(v20, "setState:setChildren:setAncestors:", 1LL, 1LL, 1LL);
          objc_release(v20);
          v19 = (char *)v19 + 1;
        }
        while ( v17 != v19 );
        v17 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
                v15,
                "countByEnumeratingWithState:objects:count:",
                &v21,
                v29,
                16LL);
      }
      while ( v17 );
    }
    objc_release(v15);
    objc_release(v10);
    objc_release(v9);
  }
  objc_release(v4);
}