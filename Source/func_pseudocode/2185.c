-[TrackListViewController setTitle:forColumnWithIdentifier:]
void __cdecl -[TrackListViewController setTitle:forColumnWithIdentifier:](
        TrackListViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x22
  TrackListTableView *v8; // x23
  void *v9; // x20
  void *v10; // x21
  TrackListTableView *v11; // x21
  TrackListTableView *v12; // x21
  void *v13; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  v9 = objc_retainAutoreleasedReturnValue(-[TrackListTableView tableColumnWithIdentifier:](v8, "tableColumnWithIdentifier:", v6));
  objc_release(v6);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "headerCell"));
  objc_msgSend(v10, "setStringValue:", v7);
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView setAccessibilityTitle:](v11, "setAccessibilityTitle:", v7);
  objc_release(v7);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  v13 = objc_retainAutoreleasedReturnValue(-[TrackListTableView headerView](v12, "headerView"));
  objc_msgSend(v13, "setNeedsLayout:", 1LL);
  objc_release(v13);
  objc_release(v12);
  -[TrackListViewController installColumnMenu](self, "installColumnMenu");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}