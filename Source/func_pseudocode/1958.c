-[DeviceSettingsPodcastsViewController revertCheckBoxesForTabView]
void __cdecl -[DeviceSettingsPodcastsViewController revertCheckBoxesForTabView](
        DeviceSettingsPodcastsViewController *self,
        SEL a2)
{
  NSTabView *v3; // x21
  NSArray *v4; // x20
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x23
  void *i; // x24
  void *v9; // x22
  void *v10; // x22
  __int128 v11; // [xsp+0h] [xbp-110h] BYREF
  __int128 v12; // [xsp+10h] [xbp-100h]
  __int128 v13; // [xsp+20h] [xbp-F0h]
  __int128 v14; // [xsp+30h] [xbp-E0h]
  _BYTE v15[128]; // [xsp+48h] [xbp-C8h] BYREF

  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController tabView](self, "tabView", 0LL));
  v4 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItems](v3, "tabViewItems"));
  objc_release(v3);
  v5 = -[NSArray countByEnumeratingWithState:objects:count:](
         v4,
         "countByEnumeratingWithState:objects:count:",
         &v11,
         v15,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v12;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v12 != v7 )
          objc_enumerationMutation(v4);
        v9 = *(void **)(*((_QWORD *)&v11 + 1) + 8LL * (_QWORD)i);
        -[DeviceSettingsPodcastsViewController setupCheckBoxesForTabViewItem:](
          self,
          "setupCheckBoxesForTabViewItem:",
          v9);
        -[DeviceSettingsPodcastsViewController setupDetailsCheckBoxesForTabViewItem:](
          self,
          "setupDetailsCheckBoxesForTabViewItem:",
          v9);
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "viewController"));
        objc_msgSend(v10, "reloadData");
        objc_release(v10);
      }
      v6 = -[NSArray countByEnumeratingWithState:objects:count:](
             v4,
             "countByEnumeratingWithState:objects:count:",
             &v11,
             v15,
             16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
}