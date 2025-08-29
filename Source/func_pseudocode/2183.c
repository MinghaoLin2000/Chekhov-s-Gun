-[TrackListViewController viewWillAppear]
void __cdecl -[TrackListViewController viewWillAppear](TrackListViewController *self, SEL a2)
{
  TrackListTableView *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView reloadData](v2, "reloadData");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}