-[DeviceStorageManagementViewController reloadTrackListAfterDeviceLibraryChange]
void __cdecl -[DeviceStorageManagementViewController reloadTrackListAfterDeviceLibraryChange](
        DeviceStorageManagementViewController *self,
        SEL a2)
{
  ITLibrary *v3; // x20
  ITLibrary *v4; // x20
  DeviceMediaPickerViewController *v5; // x21
  DeviceMediaPickerViewController *v6; // x20
  MediaPickerNode *v7; // x21
  ITLibPlaylist *v8; // x20
  TrackListViewController *v9; // x22
  TrackListViewController *v10; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itDeviceLibrary](self, "itDeviceLibrary"));
  -[ITLibrary reloadData](v3, "reloadData");
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itDeviceLibrary](self, "itDeviceLibrary"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController mediaPickerViewController](self, "mediaPickerViewController"));
  -[DeviceMediaPickerViewController setItLibrary:](v5, "setItLibrary:", v4);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController mediaPickerViewController](self, "mediaPickerViewController"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController selectedNode](v6, "selectedNode"));
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[MediaPickerNode playlist](v7, "playlist"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
  -[TrackListViewController setPlaylist:](v9, "setPlaylist:", v8);
  objc_release(v9);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
  -[TrackListViewController sortAndReloadTable](v10, "sortAndReloadTable");
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}