-[DeviceSettingsPhotosViewController createCheckedItemsSetWithNodesLookup:photosAppSelectedAlbums:]
id __cdecl -[DeviceSettingsPhotosViewController createCheckedItemsSetWithNodesLookup:photosAppSelectedAlbums:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  id v6; // x21
  void *v7; // x20
  id v8; // x21
  void *v9; // x0
  void *v10; // x22
  __int64 v11; // x25
  void *i; // x26
  __int64 v13; // x23
  void *v14; // x24
  __int128 v16; // [xsp+0h] [xbp-120h] BYREF
  __int128 v17; // [xsp+10h] [xbp-110h]
  __int128 v18; // [xsp+20h] [xbp-100h]
  __int128 v19; // [xsp+30h] [xbp-F0h]
  _BYTE v20[128]; // [xsp+48h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  v8 = objc_retain(v6);
  v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v16, v20, 16LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = *(_QWORD *)v17;
    do
    {
      for ( i = 0LL; i != v10; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v17 != v11 )
          objc_enumerationMutation(v8);
        v13 = *(_QWORD *)(*((_QWORD *)&v16 + 1) + 8LL * (_QWORD)i);
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", v13, (_QWORD)v16));
        objc_release(v14);
        if ( v14 )
          objc_msgSend(v7, "addObject:", v13);
      }
      v10 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v16, v20, 16LL);
    }
    while ( v10 );
  }
  objc_release(v8);
  objc_release(v8);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}