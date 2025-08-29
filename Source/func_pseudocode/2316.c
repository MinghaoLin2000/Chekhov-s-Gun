-[DeviceModeFinderViewController clickSyncButton:]
void __cdecl -[DeviceModeFinderViewController clickSyncButton:](DeviceModeFinderViewController *self, SEL a2, id a3)
{
  DeviceFinderTabContainerViewController *v4; // x20
  NSMutableSet *v5; // x21
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x25
  void *v9; // x26
  void *v10; // x23
  AMPDeviceSyncPrefs *v11; // x24
  NSMutableSet *v12; // x21
  DeviceFooterViewController *v13; // x21
  AMPDeviceSyncPrefs *v14; // x21
  __int128 v15; // [xsp+0h] [xbp-120h] BYREF
  __int128 v16; // [xsp+10h] [xbp-110h]
  __int128 v17; // [xsp+20h] [xbp-100h]
  __int128 v18; // [xsp+30h] [xbp-F0h]
  _BYTE v19[128]; // [xsp+48h] [xbp-D8h] BYREF

  v4 = objc_retainAutoreleasedReturnValue(
         -[DeviceModeFinderViewController finderTabContainerViewController](
           self,
           "finderTabContainerViewController",
           a3));
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController dirtyViewControllers](self, "dirtyViewControllers", 0LL));
  v6 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
         v5,
         "countByEnumeratingWithState:objects:count:",
         &v15,
         v19,
         16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v16;
    do
    {
      v9 = 0LL;
      do
      {
        if ( *(_QWORD *)v16 != v8 )
          objc_enumerationMutation(v5);
        v10 = *(void **)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)v9);
        v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](v4, "deviceSyncPrefs"));
        objc_msgSend(v10, "saveToDeviceSyncPrefs:", v11);
        objc_release(v11);
        v9 = (char *)v9 + 1;
      }
      while ( v7 != v9 );
      v7 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
             v5,
             "countByEnumeratingWithState:objects:count:",
             &v15,
             v19,
             16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController dirtyViewControllers](self, "dirtyViewControllers"));
  -[NSMutableSet removeAllObjects](v12, "removeAllObjects");
  objc_release(v12);
  -[DeviceModeFinderViewController updateFooterButtons](self, "updateFooterButtons");
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setEnabledPrimaryButton:](v13, "setEnabledPrimaryButton:", 0LL);
  objc_release(v13);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](v4, "deviceSyncPrefs"));
  -[DeviceModeFinderViewController setDeviceSyncPrefs:](self, "setDeviceSyncPrefs:", v14);
  objc_release(v14);
  -[DeviceModeFinderViewController doStartSyncOrSetSyncPrefsAction](self, "doStartSyncOrSetSyncPrefsAction");
  objc_release(v4);
}