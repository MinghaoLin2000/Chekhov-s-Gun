-[DeviceSettingsBooksViewController updateTabView]
void __cdecl -[DeviceSettingsBooksViewController updateTabView](DeviceSettingsBooksViewController *self, SEL a2)
{
  NSTabView *v3; // x21
  NSArray *v4; // x20
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x25
  void *v8; // x26
  void *v9; // x22
  NSButton *v10; // x23
  _BOOL8 v11; // x24
  __int128 v12; // [xsp+0h] [xbp-120h] BYREF
  __int128 v13; // [xsp+10h] [xbp-110h]
  __int128 v14; // [xsp+20h] [xbp-100h]
  __int128 v15; // [xsp+30h] [xbp-F0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-D8h] BYREF

  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController tabView](self, "tabView", 0LL));
  v4 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItems](v3, "tabViewItems"));
  objc_release(v3);
  v5 = -[NSArray countByEnumeratingWithState:objects:count:](
         v4,
         "countByEnumeratingWithState:objects:count:",
         &v12,
         v16,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v13;
    do
    {
      v8 = 0LL;
      do
      {
        if ( *(_QWORD *)v13 != v7 )
          objc_enumerationMutation(v4);
        v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)v8), "viewController"));
        v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController allRadioButton](self, "allRadioButton"));
        v11 = (void *)-[NSButton state](v10, "state") == (void *)1;
        objc_release(v10);
        objc_msgSend(v9, "setDisableAndCheckAllItems:", v11);
        objc_release(v9);
        v8 = (char *)v8 + 1;
      }
      while ( v6 != v8 );
      v6 = -[NSArray countByEnumeratingWithState:objects:count:](
             v4,
             "countByEnumeratingWithState:objects:count:",
             &v12,
             v16,
             16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
}