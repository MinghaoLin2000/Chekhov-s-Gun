-[DeviceFinderTabContainerViewController setDeviceSyncPrefs:]
void __cdecl -[DeviceFinderTabContainerViewController setDeviceSyncPrefs:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  id v5; // x21
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x23
  void *v9; // x24
  __int128 v10; // [xsp+0h] [xbp-120h] BYREF
  __int128 v11; // [xsp+10h] [xbp-110h]
  __int128 v12; // [xsp+20h] [xbp-100h]
  __int128 v13; // [xsp+30h] [xbp-F0h]
  objc_super v14; // [xsp+48h] [xbp-D8h] BYREF
  _BYTE v15[128]; // [xsp+58h] [xbp-C8h] BYREF

  v4 = objc_retain(a3);
  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___DeviceFinderTabContainerViewController;
  -[DeviceViewController setDeviceSyncPrefs:](&v14, "setDeviceSyncPrefs:", v4);
  if ( (unsigned int)-[DeviceFinderTabContainerViewController isViewLoaded](self, "isViewLoaded") )
  {
    v12 = 0u;
    v13 = 0u;
    v10 = 0u;
    v11 = 0u;
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController tabViewControllers](self, "tabViewControllers", 0LL));
    v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v10, v15, 16LL);
    if ( v6 )
    {
      v7 = v6;
      v8 = *(_QWORD *)v11;
      do
      {
        v9 = 0LL;
        do
        {
          if ( *(_QWORD *)v11 != v8 )
            objc_enumerationMutation(v5);
          objc_msgSend(*(id *)(*((_QWORD *)&v10 + 1) + 8LL * (_QWORD)v9), "setDeviceSyncPrefs:", v4);
          v9 = (char *)v9 + 1;
        }
        while ( v7 != v9 );
        v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v10, v15, 16LL);
      }
      while ( v7 );
    }
    objc_release(v5);
    -[DeviceFinderTabContainerViewController updateBarChoices:](self, "updateBarChoices:", 0LL);
  }
  objc_release(v4);
}