-[DeviceSettingsMoviesViewController saveToDeviceSyncPrefs:]
void __cdecl -[DeviceSettingsMoviesViewController saveToDeviceSyncPrefs:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSMutableDictionary *v5; // x22
  void *v6; // x23
  NSSet *v7; // x21
  NSMutableDictionary *v8; // x22
  void *v9; // x23
  NSSet *v10; // x21
  NSButton *v11; // x21
  void *v12; // x22
  NSButton *v13; // x21
  void *v14; // x22
  NSPopUpButton *v15; // x21
  void *v16; // x22
  id v17; // x21
  id v18; // x22
  id v19; // x23
  id v20; // x24
  id v21; // x24
  id v22; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", CFSTR("Movies")));
  v7 = objc_retainAutoreleasedReturnValue(+[NSSet setWithSet:](&OBJC_CLASS___NSSet, "setWithSet:", v6));
  objc_msgSend(v4, "setSelectedMovieTrackIDs:", v7);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v8, "objectForKeyedSubscript:", CFSTR("Playlists")));
  v10 = objc_retainAutoreleasedReturnValue(+[NSSet setWithSet:](&OBJC_CLASS___NSSet, "setWithSet:", v9));
  objc_msgSend(v4, "setSelectedMoviePlaylistIDs:", v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v12 = -[NSButton state](v11, "state");
  objc_release(v11);
  if ( v12 == (void *)1 )
  {
    objc_msgSend(v4, "setUpdateMovies:", 1LL);
    objc_msgSend(v4, "setAutomaticUpdateMode:", 1LL);
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
    v14 = -[NSButton state](v13, "state");
    objc_release(v13);
    if ( v14 == (void *)1 )
    {
      v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
      v16 = -[NSPopUpButton selectedTag](v15, "selectedTag");
      objc_release(v15);
      objc_msgSend(
        v4,
        "setMovieUpdateMode:",
        -[DeviceSettingsMoviesViewController movieUpdateModeFromTag:](self, "movieUpdateModeFromTag:", v16));
      objc_msgSend(
        v4,
        "setMovieCount:",
        -[DeviceSettingsMoviesViewController movieUpdateCountFromTag:](self, "movieUpdateCountFromTag:", v16));
    }
    else
    {
      objc_msgSend(v4, "setMovieUpdateMode:", 2LL);
    }
    if ( (unsigned int)objc_msgSend(v4, "updateMovies")
      && -[DeviceSettingsMoviesViewController areAnyPlaylistsChecked](self, "areAnyPlaylistsChecked") )
    {
      objc_msgSend(v4, "setMovieUpdateMode:", (unsigned __int64)objc_msgSend(v4, "movieUpdateMode") | 0x10);
    }
  }
  else
  {
    objc_msgSend(v4, "setUpdateMovies:", 0LL);
  }
  if ( -[DeviceSettingsMoviesViewController validRentals](self, "validRentals") )
  {
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController rentalTransferToNodeSet](self, "rentalTransferToNodeSet"));
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController rentalTransferFromNodeSet](self, "rentalTransferFromNodeSet"));
    v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController rentalDeleteNodeSet](self, "rentalDeleteNodeSet"));
    v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController persistentIDsFromNodeSet:](self, "persistentIDsFromNodeSet:", v17));
    objc_msgSend(v4, "setRentalTransferToTrackIDs:", v20);
    objc_release(v20);
    v21 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController persistentIDsFromNodeSet:](self, "persistentIDsFromNodeSet:", v18));
    objc_msgSend(v4, "setRentalTransferFromTrackIDs:", v21);
    objc_release(v21);
    v22 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController persistentIDsFromNodeSet:](self, "persistentIDsFromNodeSet:", v19));
    objc_msgSend(v4, "setRentalDeleteTrackIDs:", v22);
    objc_release(v22);
    objc_release(v19);
    objc_release(v18);
    objc_release(v17);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}