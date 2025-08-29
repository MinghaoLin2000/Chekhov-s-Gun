-[TrackListViewController sortAndReloadTable]
void __cdecl -[TrackListViewController sortAndReloadTable](TrackListViewController *self, SEL a2)
{
  NSMutableArray *v3; // x20
  TrackListTableView *v4; // x21
  void *v5; // x22
  TrackListTableView *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[TrackListViewController items](self, "items"));
  v4 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  v5 = objc_retainAutoreleasedReturnValue(-[TrackListTableView sortDescriptors](v4, "sortDescriptors"));
  -[NSMutableArray sortUsingDescriptors:](v3, "sortUsingDescriptors:", v5);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView reloadData](v6, "reloadData");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}