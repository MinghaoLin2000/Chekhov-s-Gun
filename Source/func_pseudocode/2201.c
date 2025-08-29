-[TrackListViewController tableView:sortDescriptorsDidChange:]
// attributes: thunk
void __cdecl -[TrackListViewController tableView:sortDescriptorsDidChange:](
        TrackListViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  -[TrackListViewController sortAndReloadTable](self, "sortAndReloadTable", a3, a4);
}