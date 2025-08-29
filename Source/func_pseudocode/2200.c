-[TrackListViewController numberOfRowsInTableView:]
signed __int64 __cdecl -[TrackListViewController numberOfRowsInTableView:](
        TrackListViewController *self,
        SEL a2,
        id a3)
{
  NSMutableArray *v3; // x19
  void *v4; // x20

  v3 = objc_retainAutoreleasedReturnValue(-[TrackListViewController items](self, "items", a3));
  v4 = -[NSMutableArray count](v3, "count");
  objc_release(v3);
  return (signed __int64)v4;
}