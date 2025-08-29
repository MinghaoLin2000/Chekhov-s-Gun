-[DeviceUIServiceViewController isMediaViewMode:]
bool __cdecl -[DeviceUIServiceViewController isMediaViewMode:](DeviceUIServiceViewController *self, SEL a2, id a3)
{
  id v3; // x21
  NSArray *v4; // x20
  NSSet *v5; // x22
  unsigned __int8 v6; // w19
  __int64 v8; // [xsp+0h] [xbp-60h] BYREF
  __int64 v9; // [xsp+8h] [xbp-58h]
  __int64 v10; // [xsp+10h] [xbp-50h]
  __int64 v11; // [xsp+18h] [xbp-48h]
  __int64 v12; // [xsp+20h] [xbp-40h]
  __int64 v13; // [xsp+28h] [xbp-38h]
  __int64 v14; // [xsp+30h] [xbp-30h]

  v8 = AMPDeviceViewModeMusic;
  v9 = AMPDeviceViewModeVideo;
  v10 = AMPDeviceViewModeMovies;
  v11 = AMPDeviceViewModeTVShows;
  v12 = AMPDeviceViewModePodcasts;
  v13 = AMPDeviceViewModeAudiobooks;
  v14 = AMPDeviceViewModeBooks;
  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v8, 7LL));
  v5 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v4, v8, v9, v10, v11, v12, v13, v14));
  objc_release(v4);
  v6 = -[NSSet containsObject:](v5, "containsObject:", v3);
  objc_release(v3);
  objc_release(v5);
  return v6;
}