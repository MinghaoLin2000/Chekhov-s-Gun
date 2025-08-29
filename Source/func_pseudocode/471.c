-[DeviceSettingsTVShowsViewController seasonNodesWithSortedSeasonNames:seasonsDictionary:]
id __cdecl -[DeviceSettingsTVShowsViewController seasonNodesWithSortedSeasonNames:seasonsDictionary:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x22
  __int64 v6; // x19
  __int64 v7; // x24
  void *v8; // x26
  DeviceSettingsNode *v9; // x24
  NSMutableArray *v10; // x26
  NSMutableArray *v11; // x25
  void *v12; // x0
  void *v13; // x26
  __int64 v14; // x23
  void *i; // x20
  void *v16; // x27
  void *v17; // x28
  NSCharacterSet *v18; // x22
  void *v19; // x19
  id obj; // [xsp+8h] [xbp-218h]
  __int64 v22; // [xsp+10h] [xbp-210h]
  id v23; // [xsp+18h] [xbp-208h]
  id v24; // [xsp+20h] [xbp-200h]
  id v25; // [xsp+28h] [xbp-1F8h]
  void *v26; // [xsp+30h] [xbp-1F0h]
  __int64 v27; // [xsp+38h] [xbp-1E8h]
  __int128 v28; // [xsp+40h] [xbp-1E0h] BYREF
  __int128 v29; // [xsp+50h] [xbp-1D0h]
  __int128 v30; // [xsp+60h] [xbp-1C0h]
  __int128 v31; // [xsp+70h] [xbp-1B0h]
  __int128 v32; // [xsp+80h] [xbp-1A0h] BYREF
  __int128 v33; // [xsp+90h] [xbp-190h]
  __int128 v34; // [xsp+A0h] [xbp-180h]
  __int128 v35; // [xsp+B0h] [xbp-170h]
  _BYTE v36[128]; // [xsp+C0h] [xbp-160h] BYREF
  _BYTE v37[128]; // [xsp+140h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+228h] [xbp+8h]

  v5 = objc_retain(a3);
  v24 = objc_retain(a4);
  v25 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v23 = objc_retainAutoreleasedReturnValue(
          +[DeviceSettingsNode mostRecentTVShowEpisodeNodeComparator](
            &OBJC_CLASS___DeviceSettingsNode,
            "mostRecentTVShowEpisodeNodeComparator"));
  v32 = 0u;
  v33 = 0u;
  v34 = 0u;
  v35 = 0u;
  obj = objc_retain(v5);
  v26 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v32, v37, 16LL);
  if ( v26 )
  {
    v22 = *(_QWORD *)v33;
    do
    {
      v6 = 0LL;
      do
      {
        if ( *(_QWORD *)v33 != v22 )
          objc_enumerationMutation(obj);
        v27 = v6;
        v7 = *(_QWORD *)(*((_QWORD *)&v32 + 1) + 8 * v6);
        v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "objectForKeyedSubscript:", v7));
        v9 = objc_retainAutoreleasedReturnValue(
               +[DeviceSettingsNode nodeWithName:children:](
                 &OBJC_CLASS___DeviceSettingsNode,
                 "nodeWithName:children:",
                 v7,
                 v8));
        objc_release(v8);
        v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](v9, "children"));
        +[DeviceSettingsNode sortUsingComparator:nodes:](
          &OBJC_CLASS___DeviceSettingsNode,
          "sortUsingComparator:nodes:",
          v23,
          v10);
        objc_release(v10);
        v30 = 0u;
        v31 = 0u;
        v28 = 0u;
        v29 = 0u;
        v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](v9, "children"));
        v12 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
                v11,
                "countByEnumeratingWithState:objects:count:",
                &v28,
                v36,
                16LL);
        if ( v12 )
        {
          v13 = v12;
          v14 = *(_QWORD *)v29;
          do
          {
            for ( i = 0LL; i != v13; i = (char *)i + 1 )
            {
              if ( *(_QWORD *)v29 != v14 )
                objc_enumerationMutation(v11);
              v16 = *(void **)(*((_QWORD *)&v28 + 1) + 8LL * (_QWORD)i);
              v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "name"));
              v18 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet whitespaceCharacterSet](&OBJC_CLASS___NSCharacterSet, "whitespaceCharacterSet"));
              v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "stringByTrimmingCharactersInSet:", v18));
              objc_msgSend(v16, "setName:", v19);
              objc_release(v19);
              objc_release(v18);
              objc_release(v17);
              objc_msgSend(v16, "setParent:", v9);
            }
            v13 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
                    v11,
                    "countByEnumeratingWithState:objects:count:",
                    &v28,
                    v36,
                    16LL);
          }
          while ( v13 );
        }
        objc_release(v11);
        objc_msgSend(v25, "addObject:", v9);
        objc_release(v9);
        v6 = v27 + 1;
      }
      while ( (void *)(v27 + 1) != v26 );
      v26 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v32, v37, 16LL);
    }
    while ( v26 );
  }
  objc_release(obj);
  objc_release(v23);
  objc_release(v24);
  objc_release(obj);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v25);
}