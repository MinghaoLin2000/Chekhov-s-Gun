-[DeviceSettingsPhotosViewController deviceSettingsNodesWithPeopleGroup:loadingNodesLookup:]
id __cdecl -[DeviceSettingsPhotosViewController deviceSettingsNodesWithPeopleGroup:loadingNodesLookup:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x22
  void *v8; // x21
  void *v9; // x23
  void *v10; // x0
  void *v11; // x24
  __int64 v12; // x27
  void *i; // x28
  id v14; // x25
  void *v15; // x26
  __int128 v17; // [xsp+0h] [xbp-120h] BYREF
  __int128 v18; // [xsp+10h] [xbp-110h]
  __int128 v19; // [xsp+20h] [xbp-100h]
  __int128 v20; // [xsp+30h] [xbp-F0h]
  _BYTE v21[128]; // [xsp+40h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  v20 = 0u;
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "childGroups", 0LL));
  v10 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v17, v21, 16LL);
  if ( v10 )
  {
    v11 = v10;
    v12 = *(_QWORD *)v18;
    do
    {
      for ( i = 0LL; i != v11; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v18 != v12 )
          objc_enumerationMutation(v9);
        v14 = objc_retainAutoreleasedReturnValue(
                -[DeviceSettingsPhotosViewController createDeviceSettingsNodeWithAMPPHMediaGroup:](
                  self,
                  "createDeviceSettingsNodeWithAMPPHMediaGroup:",
                  *(_QWORD *)(*((_QWORD *)&v17 + 1) + 8LL * (_QWORD)i)));
        objc_msgSend(v14, "setIsPlaylist:", 1LL);
        v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "persistentID"));
        objc_msgSend(v7, "setObject:forKeyedSubscript:", v14, v15);
        objc_release(v15);
        objc_msgSend(v8, "addObject:", v14);
        objc_release(v14);
      }
      v11 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v17, v21, 16LL);
    }
    while ( v11 );
  }
  objc_release(v9);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}