-[DeviceFileSharingViewController refreshOutlineViewItem:]
void __cdecl -[DeviceFileSharingViewController refreshOutlineViewItem:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  NSOutlineView *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  -[DeviceFileSharingViewController setRefreshingListItem:](self, "setRefreshingListItem:", v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  -[NSOutlineView reloadItem:reloadChildren:](v5, "reloadItem:reloadChildren:", v4, 1LL);
  objc_release(v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceFileSharingViewController setRefreshingListItem:](self, "setRefreshingListItem:", 0LL);
}