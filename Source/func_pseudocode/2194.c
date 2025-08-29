-[TrackListViewController columnsNotWithIdentifiers:]
id __cdecl -[TrackListViewController columnsNotWithIdentifiers:](TrackListViewController *self, SEL a2, id a3)
{
  NSSet *v4; // x20
  void *v5; // x19
  TrackListTableView *v6; // x22
  void *v7; // x21
  void *v8; // x0
  void *v9; // x22
  __int64 v10; // x25
  void *i; // x26
  void *v12; // x24
  void *v13; // x23
  __int128 v15; // [xsp+0h] [xbp-120h] BYREF
  __int128 v16; // [xsp+10h] [xbp-110h]
  __int128 v17; // [xsp+20h] [xbp-100h]
  __int128 v18; // [xsp+30h] [xbp-F0h]
  _BYTE v19[128]; // [xsp+48h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", a3));
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v6 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView", 0LL));
  v7 = objc_retainAutoreleasedReturnValue(-[TrackListTableView tableColumns](v6, "tableColumns"));
  objc_release(v6);
  v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
  if ( v8 )
  {
    v9 = v8;
    v10 = *(_QWORD *)v16;
    do
    {
      for ( i = 0LL; i != v9; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v16 != v10 )
          objc_enumerationMutation(v7);
        v12 = *(void **)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)i);
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "identifier"));
        if ( !-[NSSet containsObject:](v4, "containsObject:", v13) )
          objc_msgSend(v5, "addObject:", v12);
        objc_release(v13);
      }
      v9 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
    }
    while ( v9 );
  }
  objc_release(v7);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}