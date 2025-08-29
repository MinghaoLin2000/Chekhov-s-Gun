-[TrackListViewController selectedItems]
NSArray *__cdecl -[TrackListViewController selectedItems](TrackListViewController *self, SEL a2)
{
  NSMutableArray *v3; // x20
  TrackListTableView *v4; // x19
  void *v5; // x21
  void *v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[TrackListViewController items](self, "items"));
  v4 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  v5 = objc_retainAutoreleasedReturnValue(-[TrackListTableView selectedRowIndexes](v4, "selectedRowIndexes"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectsAtIndexes:](v3, "objectsAtIndexes:", v5));
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSArray *)objc_autoreleaseReturnValue(v6);
}