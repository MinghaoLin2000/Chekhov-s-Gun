+[DeviceSettingsNode sortUsingComparator:nodes:]
void __cdecl +[DeviceSettingsNode sortUsingComparator:nodes:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x21
  id v8; // x21
  void *v9; // x0
  void *v10; // x22
  __int64 v11; // x24
  void *v12; // x25
  void *v13; // x23
  __int128 v14; // [xsp+0h] [xbp-110h] BYREF
  __int128 v15; // [xsp+10h] [xbp-100h]
  __int128 v16; // [xsp+20h] [xbp-F0h]
  __int128 v17; // [xsp+30h] [xbp-E0h]
  _BYTE v18[128]; // [xsp+48h] [xbp-C8h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  objc_msgSend(v7, "sortUsingComparator:", v6);
  v16 = 0u;
  v17 = 0u;
  v14 = 0u;
  v15 = 0u;
  v8 = objc_retain(v7);
  v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v14, v18, 16LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = *(_QWORD *)v15;
    do
    {
      v12 = 0LL;
      do
      {
        if ( *(_QWORD *)v15 != v11 )
          objc_enumerationMutation(v8);
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v14 + 1) + 8LL * (_QWORD)v12), "children", (_QWORD)v14));
        if ( objc_msgSend(v13, "count") )
          objc_msgSend(a1, "sortUsingComparator:nodes:", v6, v13);
        objc_release(v13);
        v12 = (char *)v12 + 1;
      }
      while ( v10 != v12 );
      v10 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v14, v18, 16LL);
    }
    while ( v10 );
  }
  objc_release(v8);
  objc_release(v8);
  objc_release(v6);
}