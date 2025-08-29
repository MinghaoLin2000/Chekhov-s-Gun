-[DeviceModeFinderViewController setDeviceSyncPrefs:]
void __cdecl -[DeviceModeFinderViewController setDeviceSyncPrefs:](DeviceModeFinderViewController *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x21
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x23
  void *v9; // x24
  _BOOL8 v10; // x21
  DeviceHeaderViewController *v11; // x20
  NSButton *v12; // x22
  __int128 v13; // [xsp+0h] [xbp-120h] BYREF
  __int128 v14; // [xsp+10h] [xbp-110h]
  __int128 v15; // [xsp+20h] [xbp-100h]
  __int128 v16; // [xsp+30h] [xbp-F0h]
  objc_super v17; // [xsp+48h] [xbp-D8h] BYREF
  _BYTE v18[128]; // [xsp+58h] [xbp-C8h] BYREF

  v4 = objc_retain(a3);
  v17.receiver = self;
  v17.super_class = (Class)&OBJC_CLASS___DeviceModeFinderViewController;
  -[DeviceViewController setDeviceSyncPrefs:](&v17, "setDeviceSyncPrefs:", v4);
  v15 = 0u;
  v16 = 0u;
  v13 = 0u;
  v14 = 0u;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController viewControllers](self, "viewControllers", 0LL));
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v13, v18, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v14;
    do
    {
      v9 = 0LL;
      do
      {
        if ( *(_QWORD *)v14 != v8 )
          objc_enumerationMutation(v5);
        objc_msgSend(*(id *)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)v9), "setDeviceSyncPrefs:", v4);
        v9 = (char *)v9 + 1;
      }
      while ( v7 != v9 );
      v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v13, v18, 16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  v10 = -[DeviceModeFinderViewController isManageStorageButtonHidden](self, "isManageStorageButtonHidden");
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController headerViewController](self, "headerViewController"));
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController manageStorageButton](v11, "manageStorageButton"));
  -[NSButton setHidden:](v12, "setHidden:", v10);
  objc_release(v12);
  objc_release(v11);
  objc_release(v4);
}