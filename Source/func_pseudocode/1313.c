-[DeviceModeMediaViewController showTrackListView]
void __cdecl -[DeviceModeMediaViewController showTrackListView](DeviceModeMediaViewController *self, SEL a2)
{
  DeviceHeaderViewController *v3; // x20
  NSButton *v4; // x21
  id v5; // x20
  AMPDevice *v6; // x21
  dispatch_queue_global_s *v7; // x19
  _QWORD block[4]; // [xsp+8h] [xbp-88h] BYREF
  id v9; // [xsp+28h] [xbp-68h] BYREF
  _QWORD v10[4]; // [xsp+30h] [xbp-60h] BYREF
  id v11; // [xsp+50h] [xbp-40h] BYREF
  id location; // [xsp+58h] [xbp-38h] BYREF

  -[DeviceModeMediaViewController setAllowDevicesClientEventsUI:](self, "setAllowDevicesClientEventsUI:", 1LL);
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController headerViewController](self, "headerViewController"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController syncSettingsButton](v3, "syncSettingsButton"));
  -[NSButton setEnabled:](v4, "setEnabled:", 1LL);
  objc_release(v4);
  objc_release(v3);
  if ( -[DeviceModeMediaViewController shouldShowAutofillPlacard](self, "shouldShowAutofillPlacard") )
  {
    objc_initWeak(&location, self);
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController devicesClient](self, "devicesClient"));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v10[0] = _NSConcreteStackBlock;
    v10[1] = 3254779904LL;
    v10[2] = sub_10002AFF0;
    v10[3] = &unk_1000B9420;
    objc_copyWeak(&v11, &location);
    objc_msgSend(v5, "fetchAutoFillPrefsForDevice:withReply:", v6, v10);
    objc_release(v6);
    objc_release(v5);
    objc_destroyWeak(&v11);
    objc_destroyWeak(&location);
  }
  objc_initWeak(&location, self);
  v7 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(2LL, 0LL));
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10002B054;
  block[3] = &unk_1000B9040;
  objc_copyWeak(&v9, &location);
  dispatch_async(v7, block);
  objc_release(v7);
  objc_destroyWeak(&v9);
  objc_destroyWeak(&location);
}