-[TrackListViewController hideColumnsWithIdentifiers:]
void __cdecl -[TrackListViewController hideColumnsWithIdentifiers:](TrackListViewController *self, SEL a2, id a3)
{
  id v4; // x20
  void *v5; // x0
  void *v6; // x22
  __int64 v7; // x26
  void *i; // x27
  void *v9; // x23
  unsigned int v10; // w24
  TrackListTableView *v11; // x25
  void *v12; // x23
  __int128 v13; // [xsp+0h] [xbp-120h] BYREF
  __int128 v14; // [xsp+10h] [xbp-110h]
  __int128 v15; // [xsp+20h] [xbp-100h]
  __int128 v16; // [xsp+30h] [xbp-F0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-D8h] BYREF

  v4 = objc_retain(a3);
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v5 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v14;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v14 != v7 )
          objc_enumerationMutation(v4);
        v9 = *(void **)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)i);
        v10 = (unsigned int)objc_msgSend(v9, "isEqualToString:", CFSTR("title"));
        v11 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
        v12 = objc_retainAutoreleasedReturnValue(-[TrackListTableView tableColumnWithIdentifier:](v11, "tableColumnWithIdentifier:", v9));
        objc_release(v11);
        objc_msgSend(v12, "setHidden:", v10 ^ 1);
        objc_release(v12);
      }
      v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
    }
    while ( v6 );
  }
  -[TrackListViewController installColumnMenu](self, "installColumnMenu");
  objc_release(v4);
}