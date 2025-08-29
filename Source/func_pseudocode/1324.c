-[DeviceModeMediaViewController distinguishedPlaylistKindFromViewMode:]
unsigned __int64 __cdecl -[DeviceModeMediaViewController distinguishedPlaylistKindFromViewMode:](
        DeviceModeMediaViewController *self,
        SEL a2,
        id a3)
{
  id v3; // x19
  NSNumber *v4; // x20
  NSNumber *v5; // x21
  NSNumber *v6; // x22
  NSNumber *v7; // x23
  NSNumber *v8; // x24
  NSNumber *v9; // x25
  NSNumber *v10; // x26
  NSDictionary *v11; // x27
  id v12; // x20
  void *v13; // x19
  _QWORD v15[7]; // [xsp+8h] [xbp-C8h] BYREF
  _QWORD v16[7]; // [xsp+40h] [xbp-90h] BYREF

  v15[0] = AMPDeviceViewModeMusic;
  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", 3LL));
  v16[0] = v4;
  v15[1] = AMPDeviceViewModeVideo;
  v5 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", 1002LL));
  v16[1] = v5;
  v15[2] = AMPDeviceViewModeMovies;
  v6 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", 1LL));
  v16[2] = v6;
  v15[3] = AMPDeviceViewModeTVShows;
  v7 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", 2LL));
  v16[3] = v7;
  v15[4] = AMPDeviceViewModePodcasts;
  v8 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", 7LL));
  v16[4] = v8;
  v15[5] = AMPDeviceViewModeAudiobooks;
  v9 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", 4LL));
  v16[5] = v9;
  v15[6] = AMPDeviceViewModeBooks;
  v10 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", 1001LL));
  v16[6] = v10;
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v16,
            v15,
            7LL));
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  v12 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v11, "objectForKeyedSubscript:", v3));
  objc_release(v3);
  v13 = objc_msgSend(v12, "unsignedIntegerValue");
  objc_release(v12);
  objc_release(v11);
  return (unsigned __int64)v13;
}