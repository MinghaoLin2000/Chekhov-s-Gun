-[DeviceHeaderViewController updateDeviceDetailsMenu]
void __cdecl -[DeviceHeaderViewController updateDeviceDetailsMenu](DeviceHeaderViewController *self, SEL a2)
{
  DeviceAccessibleTextField *v3; // x21
  void *v4; // x19
  id v5; // x20
  void *v6; // x0
  void *v7; // x21
  __int64 v8; // x22
  void *v9; // x23
  __int128 v10; // [xsp+0h] [xbp-100h] BYREF
  __int128 v11; // [xsp+10h] [xbp-F0h]
  __int128 v12; // [xsp+20h] [xbp-E0h]
  __int128 v13; // [xsp+30h] [xbp-D0h]
  _BYTE v14[128]; // [xsp+48h] [xbp-B8h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceDetailsLabel](self, "deviceDetailsLabel"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceAccessibleTextField menu](v3, "menu"));
  objc_release(v3);
  objc_msgSend(v4, "removeAllItems");
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController currentDeviceDetailMenuItems](self, "currentDeviceDetailMenuItems"));
  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v10, v14, 16LL);
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
        objc_msgSend(v4, "addItem:", *(_QWORD *)(*((_QWORD *)&v10 + 1) + 8LL * (_QWORD)v9));
        v9 = (char *)v9 + 1;
      }
      while ( v7 != v9 );
      v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v10, v14, 16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  objc_release(v4);
}