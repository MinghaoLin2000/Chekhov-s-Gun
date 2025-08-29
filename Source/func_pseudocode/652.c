-[FileSharingListItem savePlaceholders]
void __cdecl -[FileSharingListItem savePlaceholders](FileSharingListItem *self, SEL a2)
{
  NSMutableArray *v3; // x20
  void *v4; // x0
  void *v5; // x21
  __int64 v6; // x24
  void *i; // x26
  void *v8; // x22
  NSMutableArray *v9; // x23
  void *v10; // x23
  NSMutableArray *v11; // x23
  __int128 v12; // [xsp+0h] [xbp-120h] BYREF
  __int128 v13; // [xsp+10h] [xbp-110h]
  __int128 v14; // [xsp+20h] [xbp-100h]
  __int128 v15; // [xsp+30h] [xbp-F0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-D8h] BYREF

  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v3 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children", 0LL));
  v4 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
         v3,
         "countByEnumeratingWithState:objects:count:",
         &v12,
         v16,
         16LL);
  if ( v4 )
  {
    v5 = v4;
    v6 = *(_QWORD *)v13;
    do
    {
      for ( i = 0LL; i != v5; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v13 != v6 )
          objc_enumerationMutation(v3);
        v8 = *(void **)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)i);
        if ( (unsigned int)objc_msgSend(v8, "isPlaceholder") )
        {
          v9 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem placeholders](self, "placeholders"));
          objc_release(v9);
          if ( !v9 )
          {
            v10 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
            -[FileSharingListItem setPlaceholders:](self, "setPlaceholders:", v10);
            objc_release(v10);
          }
          v11 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem placeholders](self, "placeholders"));
          -[NSMutableArray addObject:](v11, "addObject:", v8);
          objc_release(v11);
        }
      }
      v5 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
             v3,
             "countByEnumeratingWithState:objects:count:",
             &v12,
             v16,
             16LL);
    }
    while ( v5 );
  }
  objc_release(v3);
}