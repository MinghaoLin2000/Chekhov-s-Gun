-[DeviceStorageManagementViewController trackListViewController]
TrackListViewController *__cdecl -[DeviceStorageManagementViewController trackListViewController](
        DeviceStorageManagementViewController *self,
        SEL a2)
{
  TrackListViewController *trackListViewController; // x0
  TrackListViewController *v4; // x0
  TrackListViewController *v5; // x8
  TrackListViewController *v6; // x20
  void *v7; // x21
  NSView *v8; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  trackListViewController = self->_trackListViewController;
  if ( !trackListViewController )
  {
    v4 = (TrackListViewController *)objc_opt_new(&OBJC_CLASS___TrackListViewController, a2);
    v5 = self->_trackListViewController;
    self->_trackListViewController = v4;
    objc_release(v5);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
    v7 = objc_retainAutoreleasedReturnValue(-[TrackListViewController view](v6, "view"));
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewContainer](self, "trackListViewContainer"));
    sub_10002ABA4((int)v7, v8);
    objc_release(v8);
    objc_release(v7);
    objc_release(v6);
    trackListViewController = self->_trackListViewController;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(trackListViewController);
}