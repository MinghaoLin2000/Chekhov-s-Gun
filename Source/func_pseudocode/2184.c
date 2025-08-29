-[TrackListViewController setPlaylist:]
void __cdecl -[TrackListViewController setPlaylist:](TrackListViewController *self, SEL a2, id a3)
{
  id v5; // x19
  NSArray *v6; // x21
  NSMutableArray *v7; // x22
  TrackListTableView *v8; // x22
  TrackListTableView *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  objc_storeStrong((id *)&self->_playlist, a3);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "items"));
  if ( !v6 )
    v6 = objc_retainAutoreleasedReturnValue(+[NSArray array](&OBJC_CLASS___NSArray, "array"));
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableArray arrayWithArray:](&OBJC_CLASS___NSMutableArray, "arrayWithArray:", v6));
  -[TrackListViewController setItems:](self, "setItems:", v7);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView reloadData](v8, "reloadData");
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView sizeToFit](v9, "sizeToFit");
  objc_release(v9);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}