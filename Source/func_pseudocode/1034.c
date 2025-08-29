-[DeviceStorageManagementViewController loadtrackListTableView]
void __cdecl -[DeviceStorageManagementViewController loadtrackListTableView](
        DeviceStorageManagementViewController *self,
        SEL a2)
{
  DeviceMediaPickerViewController *v3; // x21
  NSArray *v4; // x22
  id v5; // x19
  AMPDevicesClient *v6; // x21
  TrackListViewController *v7; // x22
  AMPDevice *v8; // x21
  TrackListViewController *v9; // x22
  TrackListViewController *v10; // x22
  NSArray *v11; // x23
  TrackListViewController *v12; // x22
  NSBundle *v13; // x23
  NSString *v14; // x24
  void *v15; // x21
  TrackListViewController *v16; // x22
  void *v17; // x21
  TrackListViewController *v18; // x22
  TrackListViewController *v19; // x21
  TrackListViewController *v20; // x22
  TrackListViewController *v21; // x20
  _QWORD v22[4]; // [xsp+8h] [xbp-B8h] BYREF
  id v23; // [xsp+28h] [xbp-98h] BYREF
  _QWORD v24[4]; // [xsp+30h] [xbp-90h] BYREF
  id v25; // [xsp+50h] [xbp-70h] BYREF
  id location; // [xsp+58h] [xbp-68h] BYREF
  _QWORD v27[3]; // [xsp+60h] [xbp-60h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController mediaPickerViewController](self, "mediaPickerViewController"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController mediaPickerNodes](v3, "mediaPickerNodes"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v4, "objectAtIndexedSubscript:", 0LL));
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
  -[TrackListViewController setDevicesClient:](v7, "setDevicesClient:", v6);
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
  -[TrackListViewController setDevice:](v9, "setDevice:", v8);
  objc_release(v9);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
  v27[0] = CFSTR("title");
  v27[1] = CFSTR("lastPlayed");
  v27[2] = CFSTR("size");
  v11 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v27, 3LL));
  -[TrackListViewController restrictedUseOnlyColumnsWithIdentifiers:](
    v10,
    "restrictedUseOnlyColumnsWithIdentifiers:",
    v11);
  objc_release(v11);
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
  v13 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v14 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v13,
            "localizedStringForKey:value:table:",
            CFSTR("Last Accessed"),
            &stru_1000BA220,
            0LL));
  -[TrackListViewController setTitle:forColumnWithIdentifier:](
    v12,
    "setTitle:forColumnWithIdentifier:",
    v14,
    CFSTR("lastPlayed"));
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "playlist"));
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
  -[TrackListViewController setPlaylist:](v16, "setPlaylist:", v15);
  objc_release(v16);
  objc_release(v15);
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "name"));
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
  -[TrackListViewController setAccessibilityTitle:](v18, "setAccessibilityTitle:", v17);
  objc_release(v18);
  objc_release(v17);
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
  -[TrackListViewController setAllowsMultipleSelection:](v19, "setAllowsMultipleSelection:", 1LL);
  objc_release(v19);
  objc_initWeak(&location, self);
  v24[0] = _NSConcreteStackBlock;
  v24[1] = 3254779904LL;
  v24[2] = sub_10001FB90;
  v24[3] = &unk_1000B9040;
  objc_copyWeak(&v25, &location);
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
  -[TrackListViewController setSelectionDidChangeAction:](v20, "setSelectionDidChangeAction:", v24);
  objc_release(v20);
  v22[0] = _NSConcreteStackBlock;
  v22[1] = 3254779904LL;
  v22[2] = sub_10001FC3C;
  v22[3] = &unk_1000B9040;
  objc_copyWeak(&v23, &location);
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
  -[TrackListViewController setDeleteKeyHitAction:](v21, "setDeleteKeyHitAction:", v22);
  objc_release(v21);
  objc_destroyWeak(&v23);
  objc_destroyWeak(&v25);
  objc_destroyWeak(&location);
  objc_release(v5);
}