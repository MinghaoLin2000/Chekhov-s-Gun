-[DeviceSettingsViewController loadPlaylistNodes:playlistNodesLookup:forPlaylists:]
void __cdecl -[DeviceSettingsViewController loadPlaylistNodes:playlistNodesLookup:forPlaylists:](
        DeviceSettingsViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x26
  id v8; // x20
  id v9; // x21
  void *v10; // x0
  void *v11; // x22
  __int64 v12; // x25
  void *i; // x19
  void *v14; // x24
  void *v15; // x23
  void *v16; // x24
  void *v17; // x24
  void *v18; // x22
  void *v19; // x0
  void *v20; // x23
  __int64 v21; // x28
  void *j; // x19
  void *v23; // x25
  void *v24; // x24
  void *v25; // x26
  void *v26; // x27
  id v27; // [xsp+8h] [xbp-1E8h]
  __int128 v28; // [xsp+10h] [xbp-1E0h] BYREF
  __int128 v29; // [xsp+20h] [xbp-1D0h]
  __int128 v30; // [xsp+30h] [xbp-1C0h]
  __int128 v31; // [xsp+40h] [xbp-1B0h]
  __int128 v32; // [xsp+50h] [xbp-1A0h] BYREF
  __int128 v33; // [xsp+60h] [xbp-190h]
  __int128 v34; // [xsp+70h] [xbp-180h]
  __int128 v35; // [xsp+80h] [xbp-170h]
  _BYTE v36[128]; // [xsp+90h] [xbp-160h] BYREF
  _BYTE v37[128]; // [xsp+110h] [xbp-E0h] BYREF

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  v32 = 0u;
  v33 = 0u;
  v34 = 0u;
  v35 = 0u;
  v10 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v32, v37, 16LL);
  if ( v10 )
  {
    v11 = v10;
    v12 = *(_QWORD *)v33;
    do
    {
      for ( i = 0LL; i != v11; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v33 != v12 )
          objc_enumerationMutation(v9);
        v14 = *(void **)(*((_QWORD *)&v32 + 1) + 8LL * (_QWORD)i);
        v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "deviceSettingsNode"));
        v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "parentID"));
        objc_release(v16);
        if ( !v16 )
          objc_msgSend(v7, "addObject:", v15);
        v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "persistentID"));
        objc_msgSend(v8, "setObject:forKeyedSubscript:", v15, v17);
        objc_release(v17);
        objc_release(v15);
      }
      v11 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v32, v37, 16LL);
    }
    while ( v11 );
  }
  v27 = v7;
  v30 = 0u;
  v31 = 0u;
  v28 = 0u;
  v29 = 0u;
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "allValues"));
  v19 = objc_msgSend(v18, "countByEnumeratingWithState:objects:count:", &v28, v36, 16LL);
  if ( v19 )
  {
    v20 = v19;
    v21 = *(_QWORD *)v29;
    do
    {
      for ( j = 0LL; j != v20; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v29 != v21 )
          objc_enumerationMutation(v18);
        v23 = *(void **)(*((_QWORD *)&v28 + 1) + 8LL * (_QWORD)j);
        v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "parentID"));
        if ( objc_msgSend(v24, "unsignedLongLongValue") )
        {
          v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", v24));
          objc_msgSend(v23, "setParent:", v25);
          v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "children"));
          objc_msgSend(v26, "addObject:", v23);
          objc_release(v26);
          objc_release(v25);
        }
        objc_release(v24);
      }
      v20 = objc_msgSend(v18, "countByEnumeratingWithState:objects:count:", &v28, v36, 16LL);
    }
    while ( v20 );
  }
  objc_release(v18);
  objc_release(v9);
  objc_release(v8);
  objc_release(v27);
}