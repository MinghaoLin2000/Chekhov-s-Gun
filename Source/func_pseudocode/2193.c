-[TrackListViewController reorderColumnsWithIdentifiers:]
void __cdecl -[TrackListViewController reorderColumnsWithIdentifiers:](TrackListViewController *self, SEL a2, id a3)
{
  id v4; // x20
  __int64 v5; // x0
  __int64 v6; // x21
  __int64 i; // x22
  void *v8; // x23
  TrackListTableView *v9; // x24
  void *v10; // x25
  TrackListTableView *v11; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = (__int64)objc_msgSend(v4, "count");
  if ( v5 >= 1 )
  {
    v6 = v5;
    for ( i = 0LL; i != v6; ++i )
    {
      v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectAtIndexedSubscript:", i));
      v9 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
      v10 = -[TrackListTableView columnWithIdentifier:](v9, "columnWithIdentifier:", v8);
      objc_release(v9);
      v11 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
      -[TrackListTableView moveColumn:toColumn:](v11, "moveColumn:toColumn:", v10, i);
      objc_release(v11);
      objc_release(v8);
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}