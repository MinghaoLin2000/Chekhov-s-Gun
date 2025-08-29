-[DeviceSettingsPhotosViewController loadUIFromPrefs]
void __cdecl -[DeviceSettingsPhotosViewController loadUIFromPrefs](DeviceSettingsPhotosViewController *self, SEL a2)
{
  AMPPhotoSyncPrefs *v3; // x20
  AMPPhotoSyncPrefs *v4; // x20
  AMPPhotoSyncPrefs *v5; // x20
  AMPDeviceSyncPrefs *v6; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (unsigned int)-[DeviceSettingsPhotosViewController isViewLoaded](self, "isViewLoaded") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
    -[DeviceSettingsPhotosViewController loadOptionsHalfViewFromPhotoSyncPrefs:](
      self,
      "loadOptionsHalfViewFromPhotoSyncPrefs:",
      v3);
    objc_release(v3);
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
    -[DeviceSettingsPhotosViewController setPhotosAppSyncAllAlbums:](
      self,
      "setPhotosAppSyncAllAlbums:",
      -[AMPPhotoSyncPrefs photoSyncAllAlbums](v4, "photoSyncAllAlbums"));
    objc_release(v4);
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
    -[DeviceSettingsPhotosViewController setPhotosAppSyncAllFaces:](
      self,
      "setPhotosAppSyncAllFaces:",
      -[AMPPhotoSyncPrefs photoSyncAllFaces](v5, "photoSyncAllFaces"));
    objc_release(v5);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    -[DeviceSettingsPhotosViewController setDeleteExistingPhotos:](
      self,
      "setDeleteExistingPhotos:",
      -[AMPDeviceSyncPrefs deleteExistingPhotos](v6, "deleteExistingPhotos"));
    objc_release(v6);
    -[DeviceSettingsPhotosViewController setCurrentPhotoSyncSource:](self, "setCurrentPhotoSyncSource:", 0LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsPhotosViewController sourceDidChange](self, "sourceDidChange");
  }
}