-[DeviceSettingsPhotosViewController loadPhotoSyncPrefs:withSource:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsPhotosViewController loadPhotoSyncPrefs:withSource:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3,
        int a4)
{
  __int64 v4; // x20
  id v5; // x0
  void *v6; // x19
  void *v7; // x21
  void *v8; // x22
  __int64 v9; // x27
  void *v10; // x24
  void *v11; // x25
  void *v12; // x23
  void *v13; // x26
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = *(_QWORD *)&a4;
  v5 = objc_retain(a3);
  v6 = v5;
  if ( (_DWORD)v4 == 2 )
  {
    v7 = objc_msgSend(v5, "photosFolderSyncMode");
    v8 = objc_msgSend(v6, "photosFolderCopyOriginalPhotos");
    v13 = objc_msgSend(v6, "photosFolderSyncPhotoVideos");
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
  }
  else
  {
    if ( (_DWORD)v4 == 6 )
    {
      v7 = objc_msgSend(v5, "photosAppSyncMode");
      v8 = objc_msgSend(v6, "photosAppCopyOriginalPhotos");
      v9 = (__int64)objc_msgSend(v6, "photosAppEventCount");
      v10 = objc_msgSend(v6, "photosAppAutoIncludeEnabled");
      v11 = objc_msgSend(v6, "photosAppOnlyFavorites");
      v12 = objc_msgSend(v6, "photosAppSyncAllAlbums");
      objc_msgSend(v6, "photosAppSyncAllFaces");
      v13 = objc_msgSend(v6, "photosAppSyncPhotoVideos");
      goto LABEL_7;
    }
    v7 = 0LL;
    v8 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
  }
  v9 = 255LL;
LABEL_7:
  objc_msgSend(v6, "setPhotoSyncSource:", v4);
  objc_msgSend(v6, "setPhotoSyncMode:", v7);
  objc_msgSend(v6, "setCopyOriginalPhotos:", v8);
  objc_msgSend(v6, "setPhotoEventCount:", v9);
  objc_msgSend(v6, "setAutoIncludePhotosEnabled:", v10);
  objc_msgSend(v6, "setOnlyFavoritePhotos:", v11);
  objc_msgSend(v6, "setPhotoSyncAllAlbums:", v12);
  objc_msgSend(v6, "setPhotoSyncAllFaces:", v12);
  objc_msgSend(v6, "setPhotoSyncPhotoVideos:", v13);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}