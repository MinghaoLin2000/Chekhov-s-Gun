-[DeviceModeMediaViewController reloadTrackListViewController]
void __cdecl -[DeviceModeMediaViewController reloadTrackListViewController](
        DeviceModeMediaViewController *self,
        SEL a2)
{
  ITLibrary *v3; // x20
  id v4; // x20
  TrackListViewController *v5; // x21
  TrackListViewController *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itDeviceLibrary](self, "itDeviceLibrary"));
  -[ITLibrary reloadData](v3, "reloadData");
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController playlistForTrackListView](self, "playlistForTrackListView"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController trackListViewController](self, "trackListViewController"));
  -[TrackListViewController setPlaylist:](v5, "setPlaylist:", v4);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController trackListViewController](self, "trackListViewController"));
  -[TrackListViewController sortAndReloadTable](v6, "sortAndReloadTable");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}