-[DeviceSettingsPhotosViewController cacheTabViewItems]
void __cdecl -[DeviceSettingsPhotosViewController cacheTabViewItems](DeviceSettingsPhotosViewController *self, SEL a2)
{
  void *v3; // x20
  NSTabView *v4; // x22
  NSArray *v5; // x21
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x25
  void *i; // x26
  void *v10; // x23
  void *v11; // x24
  __int128 v12; // [xsp+0h] [xbp-120h] BYREF
  __int128 v13; // [xsp+10h] [xbp-110h]
  __int128 v14; // [xsp+20h] [xbp-100h]
  __int128 v15; // [xsp+30h] [xbp-F0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-D8h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController tabView](self, "tabView", 0LL));
  v5 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItems](v4, "tabViewItems"));
  objc_release(v4);
  v6 = -[NSArray countByEnumeratingWithState:objects:count:](
         v5,
         "countByEnumeratingWithState:objects:count:",
         &v12,
         v16,
         16LL);
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
        v10 = *(void **)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)i);
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "identifier"));
        objc_msgSend(v3, "setObject:forKeyedSubscript:", v10, v11);
        objc_release(v11);
      }
      v7 = -[NSArray countByEnumeratingWithState:objects:count:](
             v5,
             "countByEnumeratingWithState:objects:count:",
             &v12,
             v16,
             16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  -[DeviceSettingsPhotosViewController setSavedTabViewItemsLookupDictionary:](
    self,
    "setSavedTabViewItemsLookupDictionary:",
    v3);
  objc_release(v3);
}