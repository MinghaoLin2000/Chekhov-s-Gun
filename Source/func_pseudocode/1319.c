-[DeviceModeMediaViewController playlistForTrackListView]
id __cdecl -[DeviceModeMediaViewController playlistForTrackListView](DeviceModeMediaViewController *self, SEL a2)
{
  AMPDeviceInfo *v3; // x20
  unsigned int v4; // w21
  ITLibrary *v5; // x19
  NSArray *v6; // x20
  ITLibrary *v7; // x19
  id v8; // x20
  __int64 v9; // x22
  void *i; // x23
  void *v11; // x21
  NSString *v12; // x20
  unsigned __int64 v13; // x21
  __int128 v15; // [xsp+0h] [xbp-100h] BYREF
  __int128 v16; // [xsp+10h] [xbp-F0h]
  __int128 v17; // [xsp+20h] [xbp-E0h]
  __int128 v18; // [xsp+30h] [xbp-D0h]
  _BYTE v19[128]; // [xsp+48h] [xbp-B8h] BYREF
  __int64 vars8; // [xsp+108h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v4 = (unsigned int)-[AMPDeviceInfo supportsFlashUIForShuffle](v3, "supportsFlashUIForShuffle");
  objc_release(v3);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itDeviceLibrary](self, "itDeviceLibrary"));
    v6 = objc_retainAutoreleasedReturnValue(-[ITLibrary allPlaylists](v5, "allPlaylists"));
    objc_release(v5);
    v17 = 0u;
    v18 = 0u;
    v15 = 0u;
    v16 = 0u;
    v7 = objc_retain(v6);
    v8 = -[ITLibrary countByEnumeratingWithState:objects:count:](
           v7,
           "countByEnumeratingWithState:objects:count:",
           &v15,
           v19,
           16LL);
    if ( v8 )
    {
      v9 = *(_QWORD *)v16;
      while ( 2 )
      {
        for ( i = 0LL; i != v8; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v16 != v9 )
            objc_enumerationMutation(v7);
          v11 = *(void **)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)i);
          if ( ((unsigned int)objc_msgSend(v11, "isPrimary", (_QWORD)v15) & 1) != 0 )
          {
            v8 = objc_retain(v11);
            goto LABEL_13;
          }
        }
        v8 = -[ITLibrary countByEnumeratingWithState:objects:count:](
               v7,
               "countByEnumeratingWithState:objects:count:",
               &v15,
               v19,
               16LL);
        if ( v8 )
          continue;
        break;
      }
    }
LABEL_13:
    objc_release(v7);
  }
  else
  {
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController viewMode](self, "viewMode"));
    v13 = -[DeviceModeMediaViewController distinguishedPlaylistKindFromViewMode:](
            self,
            "distinguishedPlaylistKindFromViewMode:",
            v12);
    objc_release(v12);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itDeviceLibrary](self, "itDeviceLibrary"));
    v8 = objc_retainAutoreleasedReturnValue(-[ITLibrary playlistWithDistinguishedKind:](v7, "playlistWithDistinguishedKind:", v13));
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}