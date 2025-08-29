-[DeviceSettingsPhotosViewController isOptimizeStorageEnabled]
bool __cdecl -[DeviceSettingsPhotosViewController isOptimizeStorageEnabled](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  id v3; // x20
  void *v4; // x21
  unsigned int v5; // w19
  id v6; // x22
  void *v7; // x23
  void *v8; // x22
  unsigned int v9; // w19

  if ( (_os_feature_enabled_impl("AMPLibrary", "PhotoKitCloudDownload") & 1) == 0
    && -[DeviceSettingsPhotosViewController currentPhotoSyncSource](self, "currentPhotoSyncSource") == 6
    && -[DeviceSettingsPhotosViewController photosModelIsLoaded](self, "photosModelIsLoaded") )
  {
    v3 = objc_alloc_init((Class)&OBJC_CLASS___ACAccountStore);
    v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "aa_primaryAppleAccount"));
    v5 = (unsigned int)objc_msgSend(v4, "isEnabledForDataclass:", ACAccountDataclassCloudPhotos);
    v6 = objc_alloc((Class)&OBJC_CLASS___PHPhotoLibrary);
    v7 = objc_retainAutoreleasedReturnValue(+[PHPhotoLibrary systemPhotoLibraryURL](&OBJC_CLASS___PHPhotoLibrary, "systemPhotoLibraryURL"));
    v8 = objc_msgSend(v6, "initWithPhotoLibraryURL:", v7);
    objc_release(v7);
    v9 = v5 & ((unsigned int)objc_msgSend(v8, "isKeepOriginalsEnabled") ^ 1);
    objc_release(v8);
    objc_release(v4);
    objc_release(v3);
  }
  else
  {
    LOBYTE(v9) = 0;
  }
  return v9;
}