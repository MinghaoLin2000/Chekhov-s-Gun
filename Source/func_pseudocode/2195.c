-[TrackListViewController restrictedUseOnlyColumnsWithIdentifiers:]
void __cdecl -[TrackListViewController restrictedUseOnlyColumnsWithIdentifiers:](
        TrackListViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  id v5; // x21
  void *v6; // x0
  void *v7; // x23
  __int64 v8; // x27
  void *i; // x28
  void *v10; // x24
  void *v11; // x25
  unsigned __int8 v12; // w26
  TrackListTableView *v13; // x25
  TrackListTableView *v14; // x20
  __int128 v15; // [xsp+0h] [xbp-120h] BYREF
  __int128 v16; // [xsp+10h] [xbp-110h]
  __int128 v17; // [xsp+20h] [xbp-100h]
  __int128 v18; // [xsp+30h] [xbp-F0h]
  _BYTE v19[128]; // [xsp+40h] [xbp-E0h] BYREF

  v4 = objc_retain(a3);
  -[TrackListViewController reorderColumnsWithIdentifiers:](self, "reorderColumnsWithIdentifiers:", v4);
  v5 = objc_retainAutoreleasedReturnValue(-[TrackListViewController columnsNotWithIdentifiers:](self, "columnsNotWithIdentifiers:", v4));
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v16;
    do
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v16 != v8 )
          objc_enumerationMutation(v5);
        v10 = *(void **)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)i);
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "identifier"));
        v12 = (unsigned __int8)objc_msgSend(v11, "isEqualToString:", CFSTR("title"));
        objc_release(v11);
        if ( (v12 & 1) == 0 )
        {
          v13 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
          -[TrackListTableView removeTableColumn:](v13, "removeTableColumn:", v10);
          objc_release(v13);
        }
      }
      v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
    }
    while ( v7 );
  }
  -[TrackListViewController installColumnMenu](self, "installColumnMenu");
  v14 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView sizeToFit](v14, "sizeToFit");
  objc_release(v14);
  objc_release(v5);
  objc_release(v4);
}