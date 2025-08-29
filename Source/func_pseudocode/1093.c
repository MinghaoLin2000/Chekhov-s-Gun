-[DeviceSettingsPhotosViewController saveToPhotoSyncPrefs:]
void __cdecl -[DeviceSettingsPhotosViewController saveToPhotoSyncPrefs:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSButton *v5; // x22
  NSPopUpButton *v6; // x23
  __int64 v7; // x28
  NSButton *v8; // x24
  void *v9; // x23
  NSButton *v10; // x25
  void *v11; // x21
  NSButton *v12; // x26
  void *v13; // x25
  NSButton *v14; // x27
  void *v15; // x26
  void *v16; // x27
  NSMutableDictionary *v17; // x21
  void *v18; // x28
  NSMutableDictionary *v19; // x21
  void *v20; // x28
  NSMutableDictionary *v21; // x21
  void *v22; // x22
  void *v23; // x28
  NSMutableDictionary *v24; // x21
  void *v25; // x22
  _BOOL8 v26; // x28
  NSURL *v27; // x21
  void *v28; // x21
  void *v29; // x22
  id v30; // x27
  void *v31; // x21
  id v32; // x21
  NSMutableDictionary *v33; // x21
  void *v34; // x22
  void *v35; // x24
  void *v36; // x21
  NSButton *v37; // x24
  void *v38; // [xsp+8h] [xbp-68h]
  unsigned int v39; // [xsp+10h] [xbp-60h]
  _BOOL4 v40; // [xsp+14h] [xbp-5Ch]
  id v41; // [xsp+18h] [xbp-58h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController allRadioButton](self, "allRadioButton"));
  v40 = (void *)-[NSButton state](v5, "state") != (void *)1;
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsPhotosViewController autoIncludePhotosFromPopUpButton](
           self,
           "autoIncludePhotosFromPopUpButton"));
  v7 = -[DeviceSettingsPhotosViewController eventCountFromTag:](
         self,
         "eventCountFromTag:",
         -[NSPopUpButton selectedTag](v6, "selectedTag"));
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController includeFullResPhotosCheckBox](self, "includeFullResPhotosCheckBox"));
  v9 = -[NSButton state](v8, "state");
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController autoIncludePhotosFromCheckBox](self, "autoIncludePhotosFromCheckBox"));
  v11 = -[NSButton state](v10, "state");
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController onlyFavoritesCheckBox](self, "onlyFavoritesCheckBox"));
  v13 = -[NSButton state](v12, "state");
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController includeVideosCheckBox](self, "includeVideosCheckBox"));
  v15 = -[NSButton state](v14, "state");
  objc_release(v14);
  v39 = v7;
  v38 = v11;
  if ( -[DeviceSettingsPhotosViewController currentPhotoSyncSource](self, "currentPhotoSyncSource") == 6 )
  {
    objc_msgSend(v4, "setPhotosAppSyncMode:", v40);
    objc_msgSend(v4, "setPhotosAppEventCount:", v7);
    objc_msgSend(v4, "setPhotosAppCopyOriginalPhotos:", v9 == (void *)1);
    objc_msgSend(v4, "setPhotosAppSyncPhotoVideos:", v15 == (void *)1);
    objc_msgSend(
      v4,
      "setPhotosAppSyncAllAlbums:",
      -[DeviceSettingsPhotosViewController photosAppSyncAllAlbums](self, "photosAppSyncAllAlbums"));
    objc_msgSend(
      v4,
      "setPhotosAppSyncAllFaces:",
      -[DeviceSettingsPhotosViewController photosAppSyncAllFaces](self, "photosAppSyncAllFaces"));
    objc_msgSend(v4, "setPhotosAppAutoIncludeEnabled:", v11 == (void *)1);
    objc_msgSend(v4, "setPhotosAppOnlyFavorites:", v13 == (void *)1);
    v16 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
    v18 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v17, "objectForKeyedSubscript:", CFSTR("Albums")));
    sub_1000232FC();
    objc_release(v18);
    objc_release(v17);
    v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
    v20 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v19, "objectForKeyedSubscript:", CFSTR("People")));
    sub_1000232FC();
    objc_release(v20);
    objc_release(v19);
    objc_msgSend(v4, "setPhotosAppAlbums:", v16);
    v21 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v22 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v21, "objectForKeyedSubscript:", CFSTR("Albums")));
    v23 = objc_msgSend(v22, "mutableCopy");
    objc_release(v22);
    objc_release(v21);
    v24 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v25 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v24, "objectForKeyedSubscript:", CFSTR("People")));
    objc_msgSend(v23, "unionSet:", v25);
    objc_release(v25);
    objc_release(v24);
    if ( v23 )
    {
      objc_msgSend(v4, "setPhotosAppSelectedAlbums:", v23);
    }
    else
    {
      v36 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
      objc_msgSend(v4, "setPhotosAppSelectedAlbums:", v36);
      objc_release(v36);
    }
    objc_release(v23);
    objc_release(v16);
    v26 = v40;
  }
  else
  {
    v26 = v40;
    objc_msgSend(v4, "setPhotosFolderSyncMode:", v40);
    objc_msgSend(v4, "setPhotosFolderCopyOriginalPhotos:", v9 == (void *)1);
    objc_msgSend(v4, "setPhotosFolderSyncPhotoVideos:", v15 == (void *)1);
    v27 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController folderURL](self, "folderURL"));
    objc_msgSend(v4, "setPhotosFolderURL:", v27);
    objc_release(v27);
    v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "photosFolderURL"));
    v41 = 0LL;
    v29 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v28,
              "bookmarkDataWithOptions:includingResourceValuesForKeys:relativeToURL:error:",
              2048LL,
              0LL,
              0LL,
              &v41));
    v30 = objc_retain(v41);
    objc_msgSend(v4, "setPhotosFolderBookmark:", v29);
    objc_release(v29);
    objc_release(v28);
    v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "photosFolderBookmark"));
    objc_release(v31);
    if ( !v31 )
      NSLog(&CFSTR("Failed to create bookmark for shared photos folder: %@").isa, v30);
    v32 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController createPhotosFolderNames](self, "createPhotosFolderNames"));
    objc_msgSend(v4, "setPhotosFolderNames:", v32);
    objc_release(v32);
    v33 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v34 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v33, "objectForKeyedSubscript:", CFSTR("Folders")));
    v35 = objc_msgSend(v34, "mutableCopy");
    objc_msgSend(v4, "setPhotosFolderSelectedNames:", v35);
    objc_release(v35);
    objc_release(v34);
    objc_release(v33);
    objc_release(v30);
  }
  v37 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  objc_msgSend(v4, "setSyncPhotos:", (void *)-[NSButton state](v37, "state") == (void *)1);
  objc_release(v37);
  objc_msgSend(
    v4,
    "setPhotoSyncSource:",
    -[DeviceSettingsPhotosViewController currentPhotoSyncSource](self, "currentPhotoSyncSource"));
  objc_msgSend(v4, "setPhotoSyncMode:", v26);
  objc_msgSend(v4, "setCopyOriginalPhotos:", v9 == (void *)1);
  objc_msgSend(v4, "setPhotoEventCount:", v39);
  objc_msgSend(v4, "setAutoIncludePhotosEnabled:", v38 == (void *)1);
  objc_msgSend(v4, "setOnlyFavoritePhotos:", v13 == (void *)1);
  objc_msgSend(v4, "setPhotoSyncAllAlbums:", objc_msgSend(v4, "photosAppSyncAllAlbums"));
  objc_msgSend(v4, "setPhotoSyncAllFaces:", objc_msgSend(v4, "photosAppSyncAllFaces"));
  objc_msgSend(v4, "setPhotoSyncPhotoVideos:", v15 == (void *)1);
  objc_release(v4);
}