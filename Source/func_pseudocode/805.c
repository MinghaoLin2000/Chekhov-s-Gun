-[DeviceSettingsViewController setupTabView]
void __cdecl -[DeviceSettingsViewController setupTabView](DeviceSettingsViewController *self, SEL a2)
{
  NSTabView *v3; // x20
  NSArray *v4; // x21
  void *v5; // x22
  id v6; // x20
  void *v7; // x0
  void *v8; // x21
  __int64 v9; // x24
  void *i; // x25
  __int64 v11; // x22
  NSTabView *v12; // x23
  id v13; // x20
  void *v14; // x0
  void *v15; // x21
  __int64 v16; // x24
  void *j; // x25
  __int64 v18; // x22
  NSTabView *v19; // x23
  NSTabView *v20; // x19
  __int128 v21; // [xsp+0h] [xbp-1D0h] BYREF
  __int128 v22; // [xsp+10h] [xbp-1C0h]
  __int128 v23; // [xsp+20h] [xbp-1B0h]
  __int128 v24; // [xsp+30h] [xbp-1A0h]
  __int128 v25; // [xsp+40h] [xbp-190h] BYREF
  __int128 v26; // [xsp+50h] [xbp-180h]
  __int128 v27; // [xsp+60h] [xbp-170h]
  __int128 v28; // [xsp+70h] [xbp-160h]
  _BYTE v29[128]; // [xsp+88h] [xbp-148h] BYREF
  _BYTE v30[128]; // [xsp+108h] [xbp-C8h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController tabView](self, "tabView"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItems](v3, "tabViewItems"));
  v5 = -[NSArray copy](v4, "copy");
  objc_release(v4);
  objc_release(v3);
  v27 = 0u;
  v28 = 0u;
  v25 = 0u;
  v26 = 0u;
  v6 = objc_retain(v5);
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v25, v30, 16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v26;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v26 != v9 )
          objc_enumerationMutation(v6);
        v11 = *(_QWORD *)(*((_QWORD *)&v25 + 1) + 8LL * (_QWORD)i);
        v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController tabView](self, "tabView"));
        -[NSTabView removeTabViewItem:](v12, "removeTabViewItem:", v11);
        objc_release(v12);
      }
      v8 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v25, v30, 16LL);
    }
    while ( v8 );
  }
  objc_release(v6);
  v23 = 0u;
  v24 = 0u;
  v21 = 0u;
  v22 = 0u;
  v13 = objc_retain(v6);
  v14 = objc_msgSend(v13, "countByEnumeratingWithState:objects:count:", &v21, v29, 16LL);
  if ( v14 )
  {
    v15 = v14;
    v16 = *(_QWORD *)v22;
    do
    {
      for ( j = 0LL; j != v15; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v22 != v16 )
          objc_enumerationMutation(v13);
        v18 = *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL * (_QWORD)j);
        -[DeviceSettingsViewController loadViewControllerForTabViewItem:](
          self,
          "loadViewControllerForTabViewItem:",
          v18,
          (_QWORD)v21);
        -[DeviceSettingsViewController setupTabViewItem:](self, "setupTabViewItem:", v18);
        v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController tabView](self, "tabView"));
        -[NSTabView addTabViewItem:](v19, "addTabViewItem:", v18);
        objc_release(v19);
      }
      v15 = objc_msgSend(v13, "countByEnumeratingWithState:objects:count:", &v21, v29, 16LL);
    }
    while ( v15 );
  }
  objc_release(v13);
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController tabView](self, "tabView"));
  -[NSTabView selectTabViewItemAtIndex:](v20, "selectTabViewItemAtIndex:", 0LL);
  objc_release(v20);
  objc_release(v13);
}