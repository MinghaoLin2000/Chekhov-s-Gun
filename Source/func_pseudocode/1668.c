-[DeviceFinderTabContainerViewController libraryChangedNotification:]
void __cdecl -[DeviceFinderTabContainerViewController libraryChangedNotification:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x20
  ITLibrary *v6; // x20
  NSTabView *v7; // x22
  NSTabViewItem *v8; // x23
  id v9; // x20
  NSMutableDictionary *v10; // x23
  void *v11; // x22
  id v12; // x21
  void *v13; // x0
  void *v14; // x23
  __int64 v15; // x24
  void *v16; // x25
  void *v17; // x0
  __int128 v18; // [xsp+0h] [xbp-120h] BYREF
  __int128 v19; // [xsp+10h] [xbp-110h]
  __int128 v20; // [xsp+20h] [xbp-100h]
  __int128 v21; // [xsp+30h] [xbp-F0h]
  uint8_t v22[128]; // [xsp+40h] [xbp-E0h] BYREF
  uint8_t buf[4]; // [xsp+C0h] [xbp-60h] BYREF
  void *v24; // [xsp+C4h] [xbp-5Ch]

  v4 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
    *(_DWORD *)buf = 138543362;
    v24 = v5;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "received %{public}@ notification",
      buf,
      0xCu);
    objc_release(v5);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
  -[ITLibrary reloadData](v6, "reloadData");
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController tabView](self, "tabView"));
  v8 = objc_retainAutoreleasedReturnValue(-[NSTabView selectedTabViewItem](v7, "selectedTabViewItem"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem identifier](v8, "identifier"));
  objc_release(v8);
  objc_release(v7);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController tabViewControllersDictionary](self, "tabViewControllersDictionary"));
  v11 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v10, "objectForKeyedSubscript:", v9));
  objc_release(v10);
  objc_msgSend(v11, "libraryChangedNotification:", v4);
  v20 = 0u;
  v21 = 0u;
  v18 = 0u;
  v19 = 0u;
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController tabViewControllers](self, "tabViewControllers", 0LL));
  v13 = objc_msgSend(v12, "countByEnumeratingWithState:objects:count:", &v18, v22, 16LL);
  if ( v13 )
  {
    v14 = v13;
    v15 = *(_QWORD *)v19;
    do
    {
      v16 = 0LL;
      do
      {
        if ( *(_QWORD *)v19 != v15 )
          objc_enumerationMutation(v12);
        v17 = *(void **)(*((_QWORD *)&v18 + 1) + 8LL * (_QWORD)v16);
        if ( v17 != v11 )
          objc_msgSend(v17, "libraryChangedNotification:", v4);
        v16 = (char *)v16 + 1;
      }
      while ( v14 != v16 );
      v14 = objc_msgSend(v12, "countByEnumeratingWithState:objects:count:", &v18, v22, 16LL);
    }
    while ( v14 );
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(v9);
  objc_release(v4);
}