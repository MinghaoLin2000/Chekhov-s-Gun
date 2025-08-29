-[DeviceSettingsPhotosViewController save]
void __cdecl -[DeviceSettingsPhotosViewController save](DeviceSettingsPhotosViewController *self, SEL a2)
{
  AMPPhotoSyncPrefs *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsPhotosViewController setDeleteExistingPhotos:](self, "setDeleteExistingPhotos:", 0LL);
  if ( -[DeviceSettingsPhotosViewController isSharing](self, "isSharing") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
    -[DeviceSettingsPhotosViewController saveToPhotoSyncPrefs:](self, "saveToPhotoSyncPrefs:", v3);
  }
  else
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    -[DeviceSettingsPhotosViewController saveToDeviceSyncPrefs:](self, "saveToDeviceSyncPrefs:", v3);
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsPhotosViewController updateOriginalPhotoSyncPrefs](self, "updateOriginalPhotoSyncPrefs");
}