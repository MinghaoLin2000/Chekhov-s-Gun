-[DeviceSettingsTabContentViewController expandCheckedItems:]
void __cdecl -[DeviceSettingsTabContentViewController expandCheckedItems:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x24
  void *v8; // x25
  __int64 v9; // x22
  NSMutableDictionary *v10; // x23
  void *v11; // x22
  DeviceSettingsTabContentOutlineView *v12; // x23
  __int128 v13; // [xsp+0h] [xbp-110h] BYREF
  __int128 v14; // [xsp+10h] [xbp-100h]
  __int128 v15; // [xsp+20h] [xbp-F0h]
  __int128 v16; // [xsp+30h] [xbp-E0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-C8h] BYREF

  v4 = objc_retain(a3);
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v5 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v14;
    do
    {
      v8 = 0LL;
      do
      {
        if ( *(_QWORD *)v14 != v7 )
          objc_enumerationMutation(v4);
        v9 = *(_QWORD *)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)v8);
        v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController identifyingObjectToNodeMap](self, "identifyingObjectToNodeMap"));
        v11 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKey:](v10, "objectForKey:", v9));
        objc_release(v10);
        if ( (unsigned int)objc_msgSend(v11, "isFolder") )
        {
          v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
          -[DeviceSettingsTabContentOutlineView expandItem:expandChildren:](v12, "expandItem:expandChildren:", v11, 1LL);
          objc_release(v12);
        }
        objc_release(v11);
        v8 = (char *)v8 + 1;
      }
      while ( v6 != v8 );
      v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
}