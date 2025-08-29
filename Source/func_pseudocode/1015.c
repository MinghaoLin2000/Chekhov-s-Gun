-[DeviceManageBackupsViewController menuNeedsUpdate:]
void __cdecl -[DeviceManageBackupsViewController menuNeedsUpdate:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSTableView *v5; // x21
  NSInteger v6; // x22
  NSArray *v7; // x20
  void *v8; // x0
  void *v9; // x21
  __int64 v10; // x22
  void *v11; // x23
  __int128 v12; // [xsp+0h] [xbp-100h] BYREF
  __int128 v13; // [xsp+10h] [xbp-F0h]
  __int128 v14; // [xsp+20h] [xbp-E0h]
  __int128 v15; // [xsp+30h] [xbp-D0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-B8h] BYREF

  v4 = objc_retain(a3);
  objc_msgSend(v4, "removeAllItems");
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController tableView](self, "tableView"));
  v6 = -[NSTableView clickedRow](v5, "clickedRow");
  objc_release(v5);
  if ( (v6 & 0x8000000000000000LL) == 0 )
  {
    v14 = 0u;
    v15 = 0u;
    v12 = 0u;
    v13 = 0u;
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController contextualMenuItems](self, "contextualMenuItems", 0LL));
    v8 = -[NSArray countByEnumeratingWithState:objects:count:](
           v7,
           "countByEnumeratingWithState:objects:count:",
           &v12,
           v16,
           16LL);
    if ( v8 )
    {
      v9 = v8;
      v10 = *(_QWORD *)v13;
      do
      {
        v11 = 0LL;
        do
        {
          if ( *(_QWORD *)v13 != v10 )
            objc_enumerationMutation(v7);
          objc_msgSend(v4, "addItem:", *(_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)v11));
          v11 = (char *)v11 + 1;
        }
        while ( v9 != v11 );
        v9 = -[NSArray countByEnumeratingWithState:objects:count:](
               v7,
               "countByEnumeratingWithState:objects:count:",
               &v12,
               v16,
               16LL);
      }
      while ( v9 );
    }
    objc_release(v7);
  }
  objc_release(v4);
}