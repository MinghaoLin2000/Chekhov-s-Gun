-[DeviceSettingsMoviesViewController setTabViewEnabled:]
void __cdecl -[DeviceSettingsMoviesViewController setTabViewEnabled:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        bool a3)
{
  _BOOL4 v3; // w19
  NSTabView *v5; // x20
  void *v6; // x22
  NSTabView *v7; // x23
  NSTabViewItem *v8; // x20
  NSTabView *v9; // x22
  NSArray *v10; // x23
  NSEnumerator *v11; // x24
  NSArray *v12; // x21
  void *v13; // x0
  void *v14; // x22
  __int64 v15; // x25
  void *i; // x26
  NSTabViewItem *v17; // x23
  NSViewController *v18; // x0
  NSViewController *v19; // x24
  __int64 v20; // x2
  __int128 v21; // [xsp+0h] [xbp-130h] BYREF
  __int128 v22; // [xsp+10h] [xbp-120h]
  __int128 v23; // [xsp+20h] [xbp-110h]
  __int128 v24; // [xsp+30h] [xbp-100h]
  objc_super v25; // [xsp+48h] [xbp-E8h] BYREF
  _BYTE v26[128]; // [xsp+58h] [xbp-D8h] BYREF

  v3 = a3;
  v25.receiver = self;
  v25.super_class = (Class)&OBJC_CLASS___DeviceSettingsMoviesViewController;
  -[DeviceSettingsViewController setTabViewEnabled:](&v25, "setTabViewEnabled:");
  if ( -[DeviceSettingsMoviesViewController validRentals](self, "validRentals") )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController tabView](self, "tabView"));
    v6 = -[NSTabView indexOfTabViewItemWithIdentifier:](v5, "indexOfTabViewItemWithIdentifier:", CFSTR("Rentals"));
    objc_release(v5);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController tabView](self, "tabView"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItemAtIndex:](v7, "tabViewItemAtIndex:", v6));
    objc_release(v7);
    -[NSTabViewItem _setTabEnabled:](v8, "_setTabEnabled:", 1LL);
  }
  else
  {
    v8 = 0LL;
  }
  v23 = 0u;
  v24 = 0u;
  v21 = 0u;
  v22 = 0u;
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController tabView](self, "tabView", 0LL));
  v10 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItems](v9, "tabViewItems"));
  v11 = objc_retainAutoreleasedReturnValue(-[NSArray reverseObjectEnumerator](v10, "reverseObjectEnumerator"));
  v12 = objc_retainAutoreleasedReturnValue(-[NSEnumerator allObjects](v11, "allObjects"));
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  v13 = -[NSArray countByEnumeratingWithState:objects:count:](
          v12,
          "countByEnumeratingWithState:objects:count:",
          &v21,
          v26,
          16LL);
  if ( v13 )
  {
    v14 = v13;
    v15 = *(_QWORD *)v22;
    do
    {
      for ( i = 0LL; i != v14; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v22 != v15 )
          objc_enumerationMutation(v12);
        v17 = *(NSTabViewItem **)(*((_QWORD *)&v21 + 1) + 8LL * (_QWORD)i);
        v18 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem viewController](v17, "viewController"));
        v19 = v18;
        v20 = v8 == v17 || v3;
        -[NSViewController setEnabled:](v18, "setEnabled:", v20);
        objc_release(v19);
      }
      v14 = -[NSArray countByEnumeratingWithState:objects:count:](
              v12,
              "countByEnumeratingWithState:objects:count:",
              &v21,
              v26,
              16LL);
    }
    while ( v14 );
  }
  objc_release(v12);
  objc_release(v8);
}