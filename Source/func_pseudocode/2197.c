-[TrackListViewController installColumnMenu]
void __cdecl -[TrackListViewController installColumnMenu](TrackListViewController *self, SEL a2)
{
  void *v3; // x19
  NSFont *v4; // x21
  TrackListTableView *v5; // x22
  void *v6; // x20
  void *v7; // x0
  void *v8; // x23
  __int64 v9; // x28
  void *i; // x21
  void *v11; // x25
  void *v12; // x26
  const char *v13; // x27
  void *v14; // x26
  void *v15; // x27
  TrackListTableView *v16; // x20
  void *v17; // x21
  TrackListViewController *v18; // [xsp+0h] [xbp-130h]
  __int128 v19; // [xsp+10h] [xbp-120h] BYREF
  __int128 v20; // [xsp+20h] [xbp-110h]
  __int128 v21; // [xsp+30h] [xbp-100h]
  __int128 v22; // [xsp+40h] [xbp-F0h]
  _BYTE v23[128]; // [xsp+50h] [xbp-E0h] BYREF

  v3 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMenu), "initWithTitle:", &stru_1000BA220);
  +[NSFont smallSystemFontSize](&OBJC_CLASS___NSFont, "smallSystemFontSize");
  v4 = objc_retainAutoreleasedReturnValue(+[NSFont menuFontOfSize:](&OBJC_CLASS___NSFont, "menuFontOfSize:"));
  objc_msgSend(v3, "setFont:", v4);
  objc_release(v4);
  objc_msgSend(v3, "setShowsStateColumn:", 1LL);
  v21 = 0u;
  v22 = 0u;
  v19 = 0u;
  v20 = 0u;
  v18 = self;
  v5 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  v6 = objc_retainAutoreleasedReturnValue(-[TrackListTableView tableColumns](v5, "tableColumns"));
  objc_release(v5);
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v19, v23, 16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v20;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v20 != v9 )
          objc_enumerationMutation(v6);
        v11 = *(void **)(*((_QWORD *)&v19 + 1) + 8LL * (_QWORD)i);
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "identifier"));
        if ( (unsigned int)objc_msgSend(v12, "isEqualToString:", CFSTR("title")) )
          v13 = 0LL;
        else
          v13 = "toggleTableColumn:";
        objc_release(v12);
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "title"));
        v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "addItemWithTitle:action:keyEquivalent:", v14, v13, &stru_1000BA220));
        objc_release(v14);
        objc_msgSend(v15, "setState:", (unsigned int)objc_msgSend(v11, "isHidden") ^ 1);
        objc_msgSend(v15, "setRepresentedObject:", v11);
        objc_release(v15);
      }
      v8 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v19, v23, 16LL);
    }
    while ( v8 );
  }
  objc_release(v6);
  v16 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](v18, "tableView"));
  v17 = objc_retainAutoreleasedReturnValue(-[TrackListTableView headerView](v16, "headerView"));
  objc_msgSend(v17, "setMenu:", v3);
  objc_release(v17);
  objc_release(v16);
  objc_release(v3);
}