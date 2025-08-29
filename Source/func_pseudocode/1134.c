-[DeviceSettingsPhotosViewController updateTabView]
void __cdecl -[DeviceSettingsPhotosViewController updateTabView](DeviceSettingsPhotosViewController *self, SEL a2)
{
  NSButton *v3; // x21
  void *v4; // x19
  NSDictionary *v5; // x21
  NSArray *v6; // x20
  void *v7; // x0
  void *v8; // x21
  __int64 v9; // x24
  void *v10; // x25
  void *v11; // x23
  __int128 v12; // [xsp+0h] [xbp-110h] BYREF
  __int128 v13; // [xsp+10h] [xbp-100h]
  __int128 v14; // [xsp+20h] [xbp-F0h]
  __int128 v15; // [xsp+30h] [xbp-E0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-C8h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController allRadioButton](self, "allRadioButton"));
  v4 = -[NSButton state](v3, "state");
  objc_release(v3);
  v14 = 0u;
  v15 = 0u;
  v12 = 0u;
  v13 = 0u;
  v5 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsPhotosViewController savedTabViewItemsLookupDictionary](
           self,
           "savedTabViewItemsLookupDictionary",
           0LL));
  v6 = objc_retainAutoreleasedReturnValue(-[NSDictionary allValues](v5, "allValues"));
  objc_release(v5);
  v7 = -[NSArray countByEnumeratingWithState:objects:count:](
         v6,
         "countByEnumeratingWithState:objects:count:",
         &v12,
         v16,
         16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v13;
    do
    {
      v10 = 0LL;
      do
      {
        if ( *(_QWORD *)v13 != v9 )
          objc_enumerationMutation(v6);
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)v10), "viewController"));
        objc_msgSend(v11, "setDisableAndCheckAllItems:", v4 == (void *)1);
        objc_release(v11);
        v10 = (char *)v10 + 1;
      }
      while ( v8 != v10 );
      v8 = -[NSArray countByEnumeratingWithState:objects:count:](
             v6,
             "countByEnumeratingWithState:objects:count:",
             &v12,
             v16,
             16LL);
    }
    while ( v8 );
  }
  objc_release(v6);
}