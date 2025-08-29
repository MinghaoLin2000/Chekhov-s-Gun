-[DeviceSettingsPhotosViewController saveToDeviceSyncPrefs:]
void __cdecl -[DeviceSettingsPhotosViewController saveToDeviceSyncPrefs:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  AMPPhotoSyncPrefs *v5; // x21
  AMPPhotoSyncPrefs *v6; // x21
  void *v7; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
  -[DeviceSettingsPhotosViewController saveToPhotoSyncPrefs:](self, "saveToPhotoSyncPrefs:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
  v7 = -[AMPPhotoSyncPrefs copy](v6, "copy");
  objc_msgSend(v4, "setPhotoSyncPrefs:", v7);
  objc_release(v7);
  objc_release(v6);
  objc_msgSend(
    v4,
    "setDeleteExistingPhotos:",
    -[DeviceSettingsPhotosViewController deleteExistingPhotos](self, "deleteExistingPhotos"));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsPhotosViewController updateOriginalPhotoSyncPrefs](self, "updateOriginalPhotoSyncPrefs");
}