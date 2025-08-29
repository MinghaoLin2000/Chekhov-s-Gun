-[DeviceSettingsAudiobooksViewController loadAudiobookProperties]
void __cdecl -[DeviceSettingsAudiobooksViewController loadAudiobookProperties](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2)
{
  void *v3; // x22
  void *v4; // x23
  void *v5; // x0
  void *v6; // x26
  __int64 v7; // x25
  void *i; // x20
  void *v9; // x28
  void *v10; // x24
  void *v11; // x27
  void *v12; // x24
  void *v13; // x24
  void *v14; // x21
  void *v15; // x24
  void *v16; // x19
  void *v17; // x19
  id v18; // x19
  void *v19; // x19
  void *v20; // x21
  void *v21; // x24
  void *v22; // x21
  id v23; // x21
  id v24; // x26
  void *v25; // x27
  void *v26; // x0
  void *v27; // x28
  __int64 v28; // x20
  void *j; // x24
  void *v30; // x21
  ITLibrary *v31; // [xsp+8h] [xbp-208h]
  DeviceSettingsAudiobooksViewController *v32; // [xsp+10h] [xbp-200h]
  void *v33; // [xsp+18h] [xbp-1F8h]
  id obj; // [xsp+20h] [xbp-1F0h]
  void *v35; // [xsp+28h] [xbp-1E8h]
  __int128 v36; // [xsp+30h] [xbp-1E0h] BYREF
  __int128 v37; // [xsp+40h] [xbp-1D0h]
  __int128 v38; // [xsp+50h] [xbp-1C0h]
  __int128 v39; // [xsp+60h] [xbp-1B0h]
  __int128 v40; // [xsp+70h] [xbp-1A0h] BYREF
  __int128 v41; // [xsp+80h] [xbp-190h]
  __int128 v42; // [xsp+90h] [xbp-180h]
  __int128 v43; // [xsp+A0h] [xbp-170h]
  _BYTE v44[128]; // [xsp+B0h] [xbp-160h] BYREF
  _BYTE v45[128]; // [xsp+130h] [xbp-E0h] BYREF

  v33 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v35 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v32 = self;
  v31 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
  v40 = 0u;
  v41 = 0u;
  v42 = 0u;
  v43 = 0u;
  obj = objc_retainAutoreleasedReturnValue(
          -[ITLibrary allMediaItemsForMediaDomains:forMediaKinds:forDeviceCapabilities:](
            v31,
            "allMediaItemsForMediaDomains:forMediaKinds:forDeviceCapabilities:",
            8LL,
            8LL,
            -[DeviceSettingsViewController deviceCapabilities](self, "deviceCapabilities")));
  v5 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v40, v45, 16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v41;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v41 != v7 )
          objc_enumerationMutation(obj);
        v9 = *(void **)(*((_QWORD *)&v40 + 1) + 8LL * (_QWORD)i);
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "album"));
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "title"));
        objc_release(v10);
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", v11));
        objc_release(v12);
        if ( !v12 )
        {
          v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "album"));
          v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "deviceSettingsNode"));
          objc_release(v13);
          v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "album"));
          v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "deviceSettingsNode"));
          objc_msgSend(v4, "setObject:forKeyedSubscript:", v16, v11);
          objc_release(v16);
          objc_release(v15);
          objc_msgSend(v33, "addObject:", v14);
          objc_release(v14);
        }
        v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v11));
        objc_release(v17);
        if ( !v17 )
        {
          v18 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode rootNode](&OBJC_CLASS___DeviceSettingsNode, "rootNode"));
          objc_msgSend(v3, "setObject:forKeyedSubscript:", v18, v11);
          objc_release(v18);
        }
        v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "deviceSettingsNode"));
        v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v11));
        v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "children"));
        objc_msgSend(v21, "addObject:", v19);
        objc_release(v21);
        objc_release(v20);
        v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "persistentID"));
        objc_msgSend(v35, "setObject:forKeyedSubscript:", v19, v22);
        objc_release(v22);
        objc_release(v19);
        objc_release(v11);
      }
      v6 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v40, v45, 16LL);
    }
    while ( v6 );
  }
  v23 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode defaultNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "defaultNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v23,
    v33);
  objc_release(v23);
  v24 = objc_retainAutoreleasedReturnValue(
          +[DeviceSettingsNode audiobookPartNodeComparator](
            &OBJC_CLASS___DeviceSettingsNode,
            "audiobookPartNodeComparator"));
  v36 = 0u;
  v37 = 0u;
  v38 = 0u;
  v39 = 0u;
  v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "allValues"));
  v26 = objc_msgSend(v25, "countByEnumeratingWithState:objects:count:", &v36, v44, 16LL);
  if ( v26 )
  {
    v27 = v26;
    v28 = *(_QWORD *)v37;
    do
    {
      for ( j = 0LL; j != v27; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v37 != v28 )
          objc_enumerationMutation(v25);
        v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v36 + 1) + 8LL * (_QWORD)j), "children"));
        +[DeviceSettingsNode sortUsingComparator:nodes:](
          &OBJC_CLASS___DeviceSettingsNode,
          "sortUsingComparator:nodes:",
          v24,
          v30);
        objc_release(v30);
      }
      v27 = objc_msgSend(v25, "countByEnumeratingWithState:objects:count:", &v36, v44, 16LL);
    }
    while ( v27 );
  }
  objc_release(v25);
  -[DeviceSettingsAudiobooksViewController setAudiobookNodes:](v32, "setAudiobookNodes:", v33);
  -[DeviceSettingsAudiobooksViewController setAudiobookNodesLookup:](v32, "setAudiobookNodesLookup:", v35);
  -[DeviceSettingsAudiobooksViewController setAudiobookParts:](v32, "setAudiobookParts:", v3);
  -[DeviceSettingsAudiobooksViewController setAudiobookNameToNodeDictionary:](
    v32,
    "setAudiobookNameToNodeDictionary:",
    v4);
  objc_release(v24);
  objc_release(obj);
  objc_release(v31);
  objc_release(v4);
  objc_release(v3);
  objc_release(v35);
  objc_release(v33);
}