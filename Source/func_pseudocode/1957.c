-[DeviceSettingsPodcastsViewController setupCheckBoxesForTabViewItem:]
void __cdecl -[DeviceSettingsPodcastsViewController setupCheckBoxesForTabViewItem:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x21
  unsigned int v6; // w22
  NSMutableDictionary *v7; // x21
  void *v8; // x22
  void *v9; // x23
  NSMutableDictionary *v10; // x21
  void *v11; // x22
  void *v12; // x20
  id v13; // x21
  void *v14; // x0
  void *v15; // x22
  __int64 v16; // x26
  void *i; // x27
  void *v18; // x23
  void *v19; // x24
  __int64 v20; // x25
  objc_super v21; // [xsp+0h] [xbp-130h] BYREF
  __int128 v22; // [xsp+10h] [xbp-120h] BYREF
  __int128 v23; // [xsp+20h] [xbp-110h]
  __int128 v24; // [xsp+30h] [xbp-100h]
  __int128 v25; // [xsp+40h] [xbp-F0h]
  _BYTE v26[128]; // [xsp+58h] [xbp-D8h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("Podcasts"));
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
    v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v7, "objectForKeyedSubscript:", v8));
    objc_release(v8);
    objc_release(v7);
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
    v12 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v10, "objectForKeyedSubscript:", v11));
    objc_release(v11);
    objc_release(v10);
    v24 = 0u;
    v25 = 0u;
    v22 = 0u;
    v23 = 0u;
    v13 = objc_retain(v9);
    v14 = objc_msgSend(v13, "countByEnumeratingWithState:objects:count:", &v22, v26, 16LL);
    if ( v14 )
    {
      v15 = v14;
      v16 = *(_QWORD *)v23;
      do
      {
        for ( i = 0LL; i != v15; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v23 != v16 )
            objc_enumerationMutation(v13);
          v18 = *(void **)(*((_QWORD *)&v22 + 1) + 8LL * (_QWORD)i);
          v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "persistentID"));
          v20 = (unsigned int)objc_msgSend(v12, "containsObject:", v19);
          objc_release(v19);
          objc_msgSend(v18, "setState:setChildren:setAncestors:", v20, 0LL, 0LL);
        }
        v15 = objc_msgSend(v13, "countByEnumeratingWithState:objects:count:", &v22, v26, 16LL);
      }
      while ( v15 );
    }
    objc_release(v13);
    objc_release(v12);
    objc_release(v13);
  }
  else
  {
    v21.receiver = self;
    v21.super_class = (Class)&OBJC_CLASS___DeviceSettingsPodcastsViewController;
    -[DeviceSettingsViewController setupCheckBoxesForTabViewItem:](&v21, "setupCheckBoxesForTabViewItem:", v4);
  }
  objc_release(v4);
}