-[DeviceSettingsMoviesViewController isDirty]
bool __cdecl -[DeviceSettingsMoviesViewController isDirty](DeviceSettingsMoviesViewController *self, SEL a2)
{
  NSButton *v3; // x20
  int v4; // w22
  AMPDeviceSyncPrefs *v5; // x20
  unsigned int v6; // w21
  NSButton *v7; // x20
  void *v8; // x21
  NSPopUpButton *v9; // x20
  unsigned __int64 v10; // x21
  AMPDeviceSyncPrefs *v11; // x20
  void *v12; // x22
  NSPopUpButton *v13; // x20
  signed __int64 v14; // x21
  AMPDeviceSyncPrefs *v15; // x20
  void *v16; // x22
  char v17; // w19
  AMPDeviceSyncPrefs *v19; // x20
  void *v20; // x21
  NSMutableDictionary *v21; // x21
  void *v22; // x20
  AMPDeviceSyncPrefs *v23; // x21
  void *v24; // x22
  unsigned int v25; // w23
  NSMutableDictionary *v26; // x22
  void *v27; // x21
  AMPDeviceSyncPrefs *v28; // x22
  void *v29; // x23
  unsigned int v30; // w24
  NSArray *v31; // x23
  NSSet *v32; // x22
  NSMutableArray *v33; // x24
  NSSet *v34; // x23
  NSArray *v35; // x25
  NSSet *v36; // x24
  NSMutableArray *v37; // x19
  NSSet *v38; // x25

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v4 = (void *)-[NSButton state](v3, "state") != (void *)1;
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v6 = (unsigned int)-[AMPDeviceSyncPrefs updateMovies](v5, "updateMovies");
  objc_release(v5);
  if ( v4 == v6 )
    return 1;
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
  v8 = -[NSButton state](v7, "state");
  objc_release(v7);
  if ( v8 == (void *)1 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
    v10 = -[DeviceSettingsMoviesViewController movieUpdateModeFromTag:](
            self,
            "movieUpdateModeFromTag:",
            -[NSPopUpButton selectedTag](v9, "selectedTag"));
    objc_release(v9);
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v12 = -[AMPDeviceSyncPrefs movieUpdateMode](v11, "movieUpdateMode");
    objc_release(v11);
    if ( v12 != (void *)v10 )
      return 1;
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
    v14 = -[DeviceSettingsMoviesViewController movieUpdateCountFromTag:](
            self,
            "movieUpdateCountFromTag:",
            -[NSPopUpButton selectedTag](v13, "selectedTag"));
    objc_release(v13);
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v16 = -[AMPDeviceSyncPrefs movieCount](v15, "movieCount");
    objc_release(v15);
    if ( v16 != (void *)v14 )
      return 1;
  }
  else
  {
    v19 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v20 = -[AMPDeviceSyncPrefs movieUpdateMode](v19, "movieUpdateMode");
    objc_release(v19);
    if ( v20 != (void *)18 )
      return 1;
  }
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v22 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v21, "objectForKeyedSubscript:", CFSTR("Movies")));
  objc_release(v21);
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v24 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedMovieTrackIDs](v23, "selectedMovieTrackIDs"));
  v25 = (unsigned int)objc_msgSend(v24, "isEqualToSet:", v22);
  objc_release(v24);
  objc_release(v23);
  if ( v25 )
  {
    v26 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v27 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v26, "objectForKeyedSubscript:", CFSTR("Playlists")));
    objc_release(v26);
    v28 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v29 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedMoviePlaylistIDs](v28, "selectedMoviePlaylistIDs"));
    v30 = (unsigned int)objc_msgSend(v29, "isEqualToSet:", v27);
    objc_release(v29);
    objc_release(v28);
    if ( v30 )
    {
      if ( -[DeviceSettingsMoviesViewController validRentals](self, "validRentals") )
      {
        v31 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController libraryRentals](self, "libraryRentals"));
        v32 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v31));
        objc_release(v31);
        v33 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController localRentals](self, "localRentals"));
        v34 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v33));
        objc_release(v33);
        if ( -[NSSet isEqualToSet:](v32, "isEqualToSet:", v34) )
        {
          v35 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController deviceLibraryRentals](self, "deviceLibraryRentals"));
          v36 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v35));
          objc_release(v35);
          v37 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController deviceRentals](self, "deviceRentals"));
          v38 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v37));
          objc_release(v37);
          LOBYTE(v37) = -[NSSet isEqualToSet:](v36, "isEqualToSet:", v38);
          objc_release(v38);
          objc_release(v36);
          v17 = (unsigned __int8)v37 ^ 1;
        }
        else
        {
          v17 = 1;
        }
        objc_release(v34);
        objc_release(v32);
      }
      else
      {
        v17 = 0;
      }
    }
    else
    {
      v17 = 1;
    }
    objc_release(v27);
  }
  else
  {
    v17 = 1;
  }
  objc_release(v22);
  return v17;
}