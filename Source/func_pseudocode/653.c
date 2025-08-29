-[FileSharingListItem restorePlaceholders]
void __cdecl -[FileSharingListItem restorePlaceholders](FileSharingListItem *self, SEL a2)
{
  NSMutableArray *v3; // x20
  void *v4; // x0
  void *v5; // x21
  __int64 v6; // x22
  void *v7; // x23
  __int128 v8; // [xsp+0h] [xbp-100h] BYREF
  __int128 v9; // [xsp+10h] [xbp-F0h]
  __int128 v10; // [xsp+20h] [xbp-E0h]
  __int128 v11; // [xsp+30h] [xbp-D0h]
  _BYTE v12[128]; // [xsp+48h] [xbp-B8h] BYREF

  v8 = 0u;
  v9 = 0u;
  v10 = 0u;
  v11 = 0u;
  v3 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem placeholders](self, "placeholders", 0LL));
  v4 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
         v3,
         "countByEnumeratingWithState:objects:count:",
         &v8,
         v12,
         16LL);
  if ( v4 )
  {
    v5 = v4;
    v6 = *(_QWORD *)v9;
    do
    {
      v7 = 0LL;
      do
      {
        if ( *(_QWORD *)v9 != v6 )
          objc_enumerationMutation(v3);
        -[FileSharingListItem addChild:](self, "addChild:", *(_QWORD *)(*((_QWORD *)&v8 + 1) + 8LL * (_QWORD)v7));
        v7 = (char *)v7 + 1;
      }
      while ( v5 != v7 );
      v5 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
             v3,
             "countByEnumeratingWithState:objects:count:",
             &v8,
             v12,
             16LL);
    }
    while ( v5 );
  }
  objc_release(v3);
  -[FileSharingListItem setPlaceholders:](self, "setPlaceholders:", 0LL);
}