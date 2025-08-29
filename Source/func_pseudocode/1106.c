-[DeviceSettingsPhotosViewController reconcilePhotoSyncPrefsAgainstLocalMachine:]
void __cdecl -[DeviceSettingsPhotosViewController reconcilePhotoSyncPrefsAgainstLocalMachine:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  AMPPhotoSyncPrefs *v5; // x21
  void *v6; // x22
  id v7; // x21
  AMPPhotoSyncPrefs *v8; // x22
  void *v9; // x23
  void *v10; // x24
  id v11; // x21
  NSURL *v12; // x22
  NSURL *v13; // x22
  NSURL *v14; // x22
  NSURL *v15; // x21
  NSURL *v16; // x22
  id v17; // [xsp+8h] [xbp-38h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
  v6 = objc_retainAutoreleasedReturnValue(-[AMPPhotoSyncPrefs photosFolderBookmark](v5, "photosFolderBookmark"));
  objc_release(v6);
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_alloc((Class)&OBJC_CLASS___NSURL);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
    v9 = objc_retainAutoreleasedReturnValue(-[AMPPhotoSyncPrefs photosFolderBookmark](v8, "photosFolderBookmark"));
    v17 = 0LL;
    v10 = objc_msgSend(
            v7,
            "initByResolvingBookmarkData:options:relativeToURL:bookmarkDataIsStale:error:",
            v9,
            1280LL,
            0LL,
            0LL,
            &v17);
    v11 = objc_retain(v17);
    -[DeviceSettingsPhotosViewController setFromSecurityScopedBookmarkURL:](
      self,
      "setFromSecurityScopedBookmarkURL:",
      v10);
    objc_release(v10);
    objc_release(v9);
    objc_release(v8);
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController fromSecurityScopedBookmarkURL](self, "fromSecurityScopedBookmarkURL"));
    objc_release(v12);
    if ( v12 )
    {
      v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController fromSecurityScopedBookmarkURL](self, "fromSecurityScopedBookmarkURL"));
      -[NSURL startAccessingSecurityScopedResource](v13, "startAccessingSecurityScopedResource");
      objc_release(v13);
      v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController fromSecurityScopedBookmarkURL](self, "fromSecurityScopedBookmarkURL"));
      -[DeviceSettingsPhotosViewController setFolderURL:](self, "setFolderURL:", v14);
      objc_release(v14);
    }
    else
    {
      NSLog(&CFSTR("Failed to resolve photos folder URL from saved bookmark: %@").isa, v11);
    }
    objc_release(v11);
  }
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController folderURL](self, "folderURL"));
  objc_release(v15);
  if ( !v15 )
  {
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController picturesURL](self, "picturesURL"));
    -[DeviceSettingsPhotosViewController setFolderURL:](self, "setFolderURL:", v16);
    objc_release(v16);
  }
  if ( (unsigned int)objc_msgSend(v4, "photoSyncSource") != 2 && (unsigned int)objc_msgSend(v4, "photoSyncSource") != 6
    || (unsigned int)objc_msgSend(v4, "photoSyncSource") == 2 && !v15 )
  {
    objc_msgSend(v4, "setPhotoSyncSource:", 2LL);
    objc_msgSend(v4, "setSyncPhotos:", 0LL);
    objc_msgSend(v4, "setPhotoSyncMode:", 0LL);
    objc_msgSend(v4, "setOnlyFavoritePhotos:", 0LL);
    objc_msgSend(v4, "setCopyOriginalPhotos:", 0LL);
    objc_msgSend(v4, "setPhotoSyncPhotoVideos:", 0LL);
    objc_msgSend(v4, "setAutoIncludePhotosEnabled:", 0LL);
    objc_msgSend(v4, "setPhotoEventCount:", 255LL);
  }
  objc_release(v4);
}