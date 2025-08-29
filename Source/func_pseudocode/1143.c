-[DeviceSettingsPhotosViewController loadOptionsHalfViewFromPhotoSyncPrefs:]
void __cdecl -[DeviceSettingsPhotosViewController loadOptionsHalfViewFromPhotoSyncPrefs:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  __int64 v5; // x21
  NSButton *v6; // x22
  unsigned int v7; // w0
  _BOOL8 v8; // x21
  _BOOL8 v9; // x22
  NSButton *v10; // x23
  NSButton *v11; // x22
  AMPPhotoSyncPrefs *v12; // x21
  _BOOL8 v13; // x22
  NSButton *v14; // x23
  __int64 v15; // x21
  NSButton *v16; // x22
  __int64 v17; // x21
  NSButton *v18; // x22
  AMPDeviceInfo *v19; // x21
  __int64 v20; // x22
  NSButton *v21; // x23
  __int64 v22; // x21
  NSButton *v23; // x22
  AMPPhotoSyncPrefs *v24; // x21
  _BOOL8 v25; // x22
  NSStackView *v26; // x23
  __int64 v27; // x21
  NSButton *v28; // x22
  NSPopUpButton *v29; // x21
  NSPopUpButton *v30; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = (unsigned int)objc_msgSend(v4, "syncPhotos");
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  -[NSButton setState:](v6, "setState:", v5);
  objc_release(v6);
  v7 = (unsigned int)objc_msgSend(v4, "photoSyncMode");
  v8 = v7 != 0;
  v9 = v7 == 0;
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController allRadioButton](self, "allRadioButton"));
  -[NSButton setState:](v10, "setState:", v9);
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController updateSelectedRadioButton](self, "updateSelectedRadioButton"));
  -[NSButton setState:](v11, "setState:", v8);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
  v13 = (unsigned int)-[AMPPhotoSyncPrefs photoSyncSource](v12, "photoSyncSource") == 2
     || -[DeviceSettingsPhotosViewController isSharing](self, "isSharing");
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController onlyFavoritesCheckBox](self, "onlyFavoritesCheckBox"));
  -[NSButton setHidden:](v14, "setHidden:", v13);
  objc_release(v14);
  objc_release(v12);
  v15 = (unsigned int)objc_msgSend(v4, "onlyFavoritePhotos");
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController onlyFavoritesCheckBox](self, "onlyFavoritesCheckBox"));
  -[NSButton setState:](v16, "setState:", v15);
  objc_release(v16);
  v17 = (unsigned int)objc_msgSend(v4, "copyOriginalPhotos");
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController includeFullResPhotosCheckBox](self, "includeFullResPhotosCheckBox"));
  -[NSButton setState:](v18, "setState:", v17);
  objc_release(v18);
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( ((unsigned int)-[AMPDeviceInfo supportsPhotoVideos](v19, "supportsPhotoVideos") & 1) != 0 )
    v20 = 0LL;
  else
    v20 = (unsigned int)-[DeviceSettingsPhotosViewController isSharing](self, "isSharing") ^ 1;
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController includeVideosCheckBox](self, "includeVideosCheckBox"));
  -[NSButton setHidden:](v21, "setHidden:", v20);
  objc_release(v21);
  objc_release(v19);
  v22 = (unsigned int)objc_msgSend(v4, "photoSyncPhotoVideos");
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController includeVideosCheckBox](self, "includeVideosCheckBox"));
  -[NSButton setState:](v23, "setState:", v22);
  objc_release(v23);
  v24 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
  v25 = (unsigned int)-[AMPPhotoSyncPrefs photoSyncSource](v24, "photoSyncSource") == 2
     || -[DeviceSettingsPhotosViewController isSharing](self, "isSharing");
  v26 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController autoIncludePhotosFromStackView](self, "autoIncludePhotosFromStackView"));
  -[NSStackView setHidden:](v26, "setHidden:", v25);
  objc_release(v26);
  objc_release(v24);
  v27 = (unsigned int)objc_msgSend(v4, "autoIncludePhotosEnabled");
  v28 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController autoIncludePhotosFromCheckBox](self, "autoIncludePhotosFromCheckBox"));
  -[NSButton setState:](v28, "setState:", v27);
  objc_release(v28);
  v29 = objc_retainAutoreleasedReturnValue(
          -[DeviceSettingsPhotosViewController autoIncludePhotosFromPopUpButton](
            self,
            "autoIncludePhotosFromPopUpButton"));
  -[NSPopUpButton selectItemWithTag:](
    v29,
    "selectItemWithTag:",
    -[DeviceSettingsPhotosViewController tagWithEventCount:](
      self,
      "tagWithEventCount:",
      objc_msgSend(v4, "photoEventCount")));
  objc_release(v29);
  v30 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSourcePopUpButton](self, "photoSourcePopUpButton"));
  -[NSPopUpButton selectItemWithTag:](
    v30,
    "selectItemWithTag:",
    -[DeviceSettingsPhotosViewController tagWithSource:](self, "tagWithSource:", objc_msgSend(v4, "photoSyncSource")));
  objc_release(v30);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}