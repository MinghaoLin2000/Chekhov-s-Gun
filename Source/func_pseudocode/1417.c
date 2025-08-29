-[DeviceSettingsMoviesViewController rentalsForLibrary:]
id __cdecl -[DeviceSettingsMoviesViewController rentalsForLibrary:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        id a3)
{
  ITLibrary *v4; // x21
  void *v5; // x19
  void *v6; // x22
  void *v7; // x0
  void *v8; // x23
  __int64 v9; // x26
  void *i; // x27
  void *v11; // x24
  ITLibrary *v12; // x0
  void *v13; // x25
  id v14; // x24
  ITLibrary *v15; // x25
  __int128 v17; // [xsp+0h] [xbp-120h] BYREF
  __int128 v18; // [xsp+10h] [xbp-110h]
  __int128 v19; // [xsp+20h] [xbp-100h]
  __int128 v20; // [xsp+30h] [xbp-F0h]
  _BYTE v21[128]; // [xsp+48h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v4 = (ITLibrary *)objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v6 = objc_retainAutoreleasedReturnValue(-[ITLibrary allMediaItemsForMediaKinds:](v4, "allMediaItemsForMediaKinds:", 1024LL));
  v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  v20 = 0u;
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v17, v21, 16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v18;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v18 != v9 )
          objc_enumerationMutation(v6);
        v11 = *(void **)(*((_QWORD *)&v17 + 1) + 8LL * (_QWORD)i);
        v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
        if ( v12 == v4 )
        {
          v13 = objc_msgSend(v11, "locationType");
          objc_release(v4);
          if ( v13 != (void *)1 )
            continue;
        }
        else
        {
          objc_release(v12);
        }
        v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController rentalNodeForItem:](self, "rentalNodeForItem:", v11));
        v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itDeviceLibrary](self, "itDeviceLibrary"));
        objc_release(v15);
        if ( v15 == v4 )
          objc_msgSend(v14, "setIsInDeviceLibrary:", 1LL);
        objc_msgSend(v5, "addObject:", v14);
        objc_release(v14);
      }
      v8 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v17, v21, 16LL);
    }
    while ( v8 );
  }
  objc_release(v6);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}