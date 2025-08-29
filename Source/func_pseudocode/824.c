-[DeviceSettingsViewController setTabViewEnabled:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsViewController setTabViewEnabled:](DeviceSettingsViewController *self, SEL a2, bool a3)
{
  _BOOL8 v3; // x19
  NSTabView *v5; // x22
  NSTabViewItem *v6; // x20
  NSTabView *v7; // x23
  NSArray *v8; // x24
  NSEnumerator *v9; // x25
  NSArray *v10; // x22
  void *v11; // x0
  void *v12; // x23
  __int64 v13; // x24
  void *v14; // x25
  NSTabView *v15; // x21
  NSViewController *v16; // x21
  __int128 v17; // [xsp+0h] [xbp-110h] BYREF
  __int128 v18; // [xsp+10h] [xbp-100h]
  __int128 v19; // [xsp+20h] [xbp-F0h]
  __int128 v20; // [xsp+30h] [xbp-E0h]
  _BYTE v21[128]; // [xsp+48h] [xbp-C8h] BYREF

  v3 = a3;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController tabView](self, "tabView"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSTabView selectedTabViewItem](v5, "selectedTabViewItem"));
  objc_release(v5);
  v19 = 0u;
  v20 = 0u;
  v17 = 0u;
  v18 = 0u;
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController tabView](self, "tabView", 0LL));
  v8 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItems](v7, "tabViewItems"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSArray reverseObjectEnumerator](v8, "reverseObjectEnumerator"));
  v10 = objc_retainAutoreleasedReturnValue(-[NSEnumerator allObjects](v9, "allObjects"));
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  v11 = -[NSArray countByEnumeratingWithState:objects:count:](
          v10,
          "countByEnumeratingWithState:objects:count:",
          &v17,
          v21,
          16LL);
  if ( v11 )
  {
    v12 = v11;
    v13 = *(_QWORD *)v18;
    do
    {
      v14 = 0LL;
      do
      {
        if ( *(_QWORD *)v18 != v13 )
          objc_enumerationMutation(v10);
        objc_msgSend(*(id *)(*((_QWORD *)&v17 + 1) + 8LL * (_QWORD)v14), "_setTabEnabled:", v3);
        v14 = (char *)v14 + 1;
      }
      while ( v12 != v14 );
      v12 = -[NSArray countByEnumeratingWithState:objects:count:](
              v10,
              "countByEnumeratingWithState:objects:count:",
              &v17,
              v21,
              16LL);
    }
    while ( v12 );
  }
  objc_release(v10);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController tabView](self, "tabView"));
  -[NSTabView selectTabViewItem:](v15, "selectTabViewItem:", v6);
  objc_release(v15);
  v16 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem viewController](v6, "viewController"));
  -[NSViewController setEnabled:](v16, "setEnabled:", v3);
  objc_release(v16);
  objc_release(v6);
}