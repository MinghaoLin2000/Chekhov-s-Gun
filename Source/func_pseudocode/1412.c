-[DeviceSettingsMoviesViewController persistentIDsFromNodeSet:]
id __cdecl -[DeviceSettingsMoviesViewController persistentIDsFromNodeSet:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        id a3)
{
  id v3; // x20
  void *v4; // x19
  id v5; // x20
  void *v6; // x0
  void *v7; // x21
  __int64 v8; // x23
  void *i; // x24
  void *v10; // x22
  __int128 v12; // [xsp+0h] [xbp-110h] BYREF
  __int128 v13; // [xsp+10h] [xbp-100h]
  __int128 v14; // [xsp+20h] [xbp-F0h]
  __int128 v15; // [xsp+30h] [xbp-E0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-C8h] BYREF
  __int64 vars8; // [xsp+118h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v5 = objc_retain(v3);
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v12, v16, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v13;
    do
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v13 != v8 )
          objc_enumerationMutation(v5);
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)i), "persistentID", (_QWORD)v12));
        objc_msgSend(v4, "addObject:", v10);
        objc_release(v10);
      }
      v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v12, v16, 16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}