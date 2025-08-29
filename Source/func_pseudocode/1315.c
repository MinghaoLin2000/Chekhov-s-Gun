-[DeviceModeMediaViewController loadTrackListViewController]
void __cdecl -[DeviceModeMediaViewController loadTrackListViewController](DeviceModeMediaViewController *self, SEL a2)
{
  void *v3; // x19
  AMPDevice *v4; // x21
  id v5; // x21
  id v6; // x21
  void *v7; // x21
  NSArray *v8; // x21
  _QWORD v9[4]; // [xsp+8h] [xbp-68h] BYREF
  id v10; // [xsp+28h] [xbp-48h] BYREF
  id location; // [xsp+30h] [xbp-40h] BYREF
  _QWORD v12[2]; // [xsp+38h] [xbp-38h] BYREF

  v3 = (void *)objc_opt_new(&OBJC_CLASS___TrackListViewController, a2);
  -[DeviceModeMediaViewController setTrackListViewController:](self, "setTrackListViewController:", v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  objc_msgSend(v3, "setDevice:", v4);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController devicesClient](self, "devicesClient"));
  objc_msgSend(v3, "setDevicesClient:", v5);
  objc_release(v5);
  objc_msgSend(v3, "setAllowsMultipleSelection:", 1LL);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController playlistForTrackListView](self, "playlistForTrackListView"));
  objc_msgSend(v3, "setPlaylist:", v6);
  objc_release(v6);
  -[DeviceModeMediaViewController setContentController:](self, "setContentController:", v3);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "view"));
  -[DeviceModeMediaViewController setContentView:](self, "setContentView:", v7);
  objc_release(v7);
  objc_initWeak(&location, self);
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_10002B414;
  v9[3] = &unk_1000B9040;
  objc_copyWeak(&v10, &location);
  objc_msgSend(v3, "setDeleteKeyHitAction:", v9);
  v12[0] = CFSTR("size");
  v12[1] = CFSTR("lastPlayed");
  v8 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v12, 2LL));
  objc_msgSend(v3, "hideColumnsWithIdentifiers:", v8);
  objc_release(v8);
  objc_destroyWeak(&v10);
  objc_destroyWeak(&location);
  objc_release(v3);
}