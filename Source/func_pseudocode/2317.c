-[DeviceModeFinderViewController clickRevertButton:]
void __cdecl -[DeviceModeFinderViewController clickRevertButton:](DeviceModeFinderViewController *self, SEL a2, id a3)
{
  NSMutableSet *v4; // x20
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x22
  void *v8; // x23
  NSMutableSet *v9; // x20
  NSBundle *v10; // x20
  NSString *v11; // x21
  DeviceFooterViewController *v12; // x22
  DeviceFooterViewController *v13; // x19
  __int128 v14; // [xsp+0h] [xbp-100h] BYREF
  __int128 v15; // [xsp+10h] [xbp-F0h]
  __int128 v16; // [xsp+20h] [xbp-E0h]
  __int128 v17; // [xsp+30h] [xbp-D0h]
  _BYTE v18[128]; // [xsp+48h] [xbp-B8h] BYREF

  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController dirtyViewControllers](self, "dirtyViewControllers", a3, 0LL));
  v5 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
         v4,
         "countByEnumeratingWithState:objects:count:",
         &v14,
         v18,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v15;
    do
    {
      v8 = 0LL;
      do
      {
        if ( *(_QWORD *)v15 != v7 )
          objc_enumerationMutation(v4);
        objc_msgSend(*(id *)(*((_QWORD *)&v14 + 1) + 8LL * (_QWORD)v8), "revert");
        v8 = (char *)v8 + 1;
      }
      while ( v6 != v8 );
      v6 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
             v4,
             "countByEnumeratingWithState:objects:count:",
             &v14,
             v18,
             16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController dirtyViewControllers](self, "dirtyViewControllers"));
  -[NSMutableSet removeAllObjects](v9, "removeAllObjects");
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v11 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v10,
            "localizedStringForKey:value:table:",
            CFSTR("Sync"),
            &stru_1000BA220,
            0LL));
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setPrimaryButtonTitle:](v12, "setPrimaryButtonTitle:", v11);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setHiddenSecondaryButton:](v13, "setHiddenSecondaryButton:", 1LL);
  objc_release(v13);
}