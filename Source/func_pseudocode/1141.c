-[DeviceSettingsPhotosViewController loadTabViewForSource:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsPhotosViewController loadTabViewForSource:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        int a3)
{
  __int64 v3; // x20
  NSBundle *v5; // x21
  NSString *v6; // x23
  NSButton *v7; // x24
  NSBundle *v8; // x0
  NSBundle *v9; // x21
  const __CFString *v10; // x2
  NSBundle *v11; // x21
  NSString *v12; // x23
  NSButton *v13; // x24
  NSString *v14; // x22
  NSButton *v15; // x23
  NSTabView *v16; // x21
  NSArray *v17; // x20
  void *v18; // x0
  void *v19; // x21
  __int64 v20; // x22
  void *i; // x23
  __int128 v22; // [xsp+0h] [xbp-110h] BYREF
  __int128 v23; // [xsp+10h] [xbp-100h]
  __int128 v24; // [xsp+20h] [xbp-F0h]
  __int128 v25; // [xsp+30h] [xbp-E0h]
  _BYTE v26[128]; // [xsp+48h] [xbp-C8h] BYREF

  v3 = *(_QWORD *)&a3;
  if ( a3 == 6 )
  {
    -[DeviceSettingsPhotosViewController removeAllTabViewItems](self, "removeAllTabViewItems");
    -[DeviceSettingsPhotosViewController loadTabViewItemWithIdentifier:](
      self,
      "loadTabViewItemWithIdentifier:",
      CFSTR("Albums"));
    -[DeviceSettingsPhotosViewController loadTabViewItemWithIdentifier:](
      self,
      "loadTabViewItemWithIdentifier:",
      CFSTR("People"));
    -[DeviceSettingsPhotosViewController selectTabViewItemWithIdentifier:](
      self,
      "selectTabViewItemWithIdentifier:",
      CFSTR("Albums"));
    v11 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v12 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v11,
              "localizedStringForKey:value:table:",
              CFSTR("All photos and albums"),
              &stru_1000BA220,
              0LL));
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController allRadioButton](self, "allRadioButton"));
    -[NSButton setTitle:](v13, "setTitle:", v12);
    objc_release(v13);
    objc_release(v12);
    objc_release(v11);
    v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v9 = v8;
    v10 = CFSTR("Selected albums");
  }
  else
  {
    if ( a3 != 2 )
      goto LABEL_6;
    -[DeviceSettingsPhotosViewController removeAllTabViewItems](self, "removeAllTabViewItems");
    -[DeviceSettingsPhotosViewController loadTabViewItemWithIdentifier:](
      self,
      "loadTabViewItemWithIdentifier:",
      CFSTR("Folders"));
    -[DeviceSettingsPhotosViewController selectTabViewItemWithIdentifier:](
      self,
      "selectTabViewItemWithIdentifier:",
      CFSTR("Folders"));
    v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v6 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v5,
             "localizedStringForKey:value:table:",
             CFSTR("All folders"),
             &stru_1000BA220,
             0LL));
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController allRadioButton](self, "allRadioButton"));
    -[NSButton setTitle:](v7, "setTitle:", v6);
    objc_release(v7);
    objc_release(v6);
    objc_release(v5);
    v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v9 = v8;
    v10 = CFSTR("Selected folders");
  }
  v14 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v8,
            "localizedStringForKey:value:table:",
            v10,
            &stru_1000BA220,
            0LL));
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController updateSelectedRadioButton](self, "updateSelectedRadioButton"));
  -[NSButton setTitle:](v15, "setTitle:", v14);
  objc_release(v15);
  objc_release(v14);
  objc_release(v9);
LABEL_6:
  if ( !-[DeviceSettingsPhotosViewController isModelLoadedForSource:](self, "isModelLoadedForSource:", v3) )
  {
    -[DeviceSettingsPhotosViewController loadModelForSource:](self, "loadModelForSource:", v3);
    v24 = 0u;
    v25 = 0u;
    v22 = 0u;
    v23 = 0u;
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController tabView](self, "tabView", 0LL));
    v17 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItems](v16, "tabViewItems"));
    objc_release(v16);
    v18 = -[NSArray countByEnumeratingWithState:objects:count:](
            v17,
            "countByEnumeratingWithState:objects:count:",
            &v22,
            v26,
            16LL);
    if ( v18 )
    {
      v19 = v18;
      v20 = *(_QWORD *)v23;
      do
      {
        for ( i = 0LL; i != v19; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v23 != v20 )
            objc_enumerationMutation(v17);
          -[DeviceSettingsPhotosViewController setupTabViewItem:](
            self,
            "setupTabViewItem:",
            *(_QWORD *)(*((_QWORD *)&v22 + 1) + 8LL * (_QWORD)i));
        }
        v19 = -[NSArray countByEnumeratingWithState:objects:count:](
                v17,
                "countByEnumeratingWithState:objects:count:",
                &v22,
                v26,
                16LL);
      }
      while ( v19 );
    }
    objc_release(v17);
  }
}