-[DeviceSettingsPhotosViewController createPhotosFolderNames]
id __cdecl -[DeviceSettingsPhotosViewController createPhotosFolderNames](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  void *v3; // x19
  NSMutableDictionary *v4; // x20
  void *v5; // x21
  id v6; // x20
  void *v7; // x0
  void *v8; // x21
  __int64 v9; // x23
  void *i; // x24
  void *v11; // x22
  __int128 v13; // [xsp+0h] [xbp-110h] BYREF
  __int128 v14; // [xsp+10h] [xbp-100h]
  __int128 v15; // [xsp+20h] [xbp-F0h]
  __int128 v16; // [xsp+30h] [xbp-E0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-C8h] BYREF
  __int64 vars8; // [xsp+118h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v4, "objectForKeyedSubscript:", CFSTR("Folders")));
  objc_release(v4);
  v15 = 0u;
  v16 = 0u;
  v13 = 0u;
  v14 = 0u;
  v6 = objc_retain(v5);
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v14;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v14 != v9 )
          objc_enumerationMutation(v6);
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)i), "name", (_QWORD)v13));
        objc_msgSend(v3, "addObject:", v11);
        objc_release(v11);
      }
      v8 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
    }
    while ( v8 );
  }
  objc_release(v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}