-[DeviceSettingsPhotosViewController photoSyncPrefs]
AMPPhotoSyncPrefs *__cdecl -[DeviceSettingsPhotosViewController photoSyncPrefs](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  AMPPhotoSyncPrefs *photoSyncPrefs; // x0
  AMPDeviceSyncPrefs *v4; // x20
  void *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  photoSyncPrefs = self->_photoSyncPrefs;
  if ( !photoSyncPrefs )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v5 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs photoSyncPrefs](v4, "photoSyncPrefs"));
    -[DeviceSettingsPhotosViewController setPhotoSyncPrefs:](self, "setPhotoSyncPrefs:", v5);
    objc_release(v5);
    objc_release(v4);
    photoSyncPrefs = self->_photoSyncPrefs;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(photoSyncPrefs);
}