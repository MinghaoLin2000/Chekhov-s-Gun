-[DeviceSettingsPhotosViewController deviceSettingsNodesWithAlbumGroups:parent:loadingNodesLookup:]
id __cdecl -[DeviceSettingsPhotosViewController deviceSettingsNodesWithAlbumGroups:parent:loadingNodesLookup:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x23
  id v9; // x22
  void *v10; // x21
  void *v11; // x0
  void *v12; // x25
  __int64 v13; // x24
  void *i; // x20
  void *v15; // x28
  id v16; // x27
  void *v17; // x26
  unsigned int v18; // w23
  void *v19; // x23
  unsigned int v20; // w26
  void *v21; // x23
  void *v22; // x23
  void *v23; // x26
  void *v24; // x23
  id v25; // x26
  id obj; // [xsp+0h] [xbp-130h]
  id v28; // [xsp+8h] [xbp-128h]
  __int128 v29; // [xsp+10h] [xbp-120h] BYREF
  __int128 v30; // [xsp+20h] [xbp-110h]
  __int128 v31; // [xsp+30h] [xbp-100h]
  __int128 v32; // [xsp+40h] [xbp-F0h]
  _BYTE v33[128]; // [xsp+50h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v8 = objc_retain(a3);
  v28 = objc_retain(a4);
  v9 = objc_retain(a5);
  v10 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v29 = 0u;
  v30 = 0u;
  v31 = 0u;
  v32 = 0u;
  obj = objc_retain(v8);
  v11 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v29, v33, 16LL);
  if ( v11 )
  {
    v12 = v11;
    v13 = *(_QWORD *)v30;
    do
    {
      for ( i = 0LL; i != v12; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v30 != v13 )
          objc_enumerationMutation(obj);
        v15 = *(void **)(*((_QWORD *)&v29 + 1) + 8LL * (_QWORD)i);
        v16 = objc_retainAutoreleasedReturnValue(
                -[DeviceSettingsPhotosViewController createDeviceSettingsNodeWithAMPPHMediaGroup:](
                  self,
                  "createDeviceSettingsNodeWithAMPPHMediaGroup:",
                  v15));
        v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "mediaLibraryTypeIdentifier"));
        v18 = (unsigned int)objc_msgSend(v17, "isEqualToString:", CFSTR("com.apple.Photos.Folder"));
        objc_release(v17);
        if ( v18 )
        {
          objc_msgSend(v16, "setIsFolder:", 1LL);
        }
        else
        {
          v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "mediaLibraryTypeIdentifier"));
          v20 = (unsigned int)objc_msgSend(v19, "isEqualToString:", CFSTR("com.apple.Photos.Album"));
          objc_release(v19);
          if ( v20 )
            objc_msgSend(v16, "setIsPlaylist:", 1LL);
          else
            objc_msgSend(v16, "setIsSmartPlaylist:", 1LL);
        }
        v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "persistentID"));
        objc_msgSend(v9, "setObject:forKeyedSubscript:", v16, v21);
        objc_release(v21);
        objc_msgSend(v16, "setParent:", v28);
        v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "childGroups"));
        v23 = objc_msgSend(v22, "count");
        objc_release(v22);
        if ( v23 )
        {
          v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "childGroups"));
          v25 = objc_retainAutoreleasedReturnValue(
                  -[DeviceSettingsPhotosViewController deviceSettingsNodesWithAlbumGroups:parent:loadingNodesLookup:](
                    self,
                    "deviceSettingsNodesWithAlbumGroups:parent:loadingNodesLookup:",
                    v24,
                    v16,
                    v9));
          objc_msgSend(v16, "setChildren:", v25);
          objc_release(v25);
          objc_release(v24);
        }
        objc_msgSend(v10, "addObject:", v16);
        objc_release(v16);
      }
      v12 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v29, v33, 16LL);
    }
    while ( v12 );
  }
  objc_release(obj);
  objc_release(v9);
  objc_release(v28);
  objc_release(obj);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}