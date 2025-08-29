-[DeviceSettingsMoviesViewController rentalDeleteNodeSet]
id __cdecl -[DeviceSettingsMoviesViewController rentalDeleteNodeSet](DeviceSettingsMoviesViewController *self, SEL a2)
{
  NSMutableArray *v3; // x20
  NSArray *v4; // x21
  id v5; // x22
  void *v6; // x20
  id v7; // x21
  void *v8; // x0
  void *v9; // x22
  __int64 v10; // x26
  void *i; // x27
  __int64 v12; // x23
  NSMutableArray *v13; // x24
  unsigned __int8 v14; // w25
  __int128 v16; // [xsp+0h] [xbp-120h] BYREF
  __int128 v17; // [xsp+10h] [xbp-110h]
  __int128 v18; // [xsp+20h] [xbp-100h]
  __int128 v19; // [xsp+30h] [xbp-F0h]
  _BYTE v20[128]; // [xsp+48h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController deviceRentals](self, "deviceRentals"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController deviceLibraryRentals](self, "deviceLibraryRentals"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController updatesStartArray:endArray:](self, "updatesStartArray:endArray:", v3, v4));
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  v7 = objc_retain(v5);
  v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v16, v20, 16LL);
  if ( v8 )
  {
    v9 = v8;
    v10 = *(_QWORD *)v17;
    do
    {
      for ( i = 0LL; i != v9; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v17 != v10 )
          objc_enumerationMutation(v7);
        v12 = *(_QWORD *)(*((_QWORD *)&v16 + 1) + 8LL * (_QWORD)i);
        v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController localRentals](self, "localRentals", (_QWORD)v16));
        v14 = (unsigned __int8)-[NSMutableArray containsObject:](v13, "containsObject:", v12);
        objc_release(v13);
        if ( (v14 & 1) == 0 )
          objc_msgSend(v6, "addObject:", v12);
      }
      v9 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v16, v20, 16LL);
    }
    while ( v9 );
  }
  objc_release(v7);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}