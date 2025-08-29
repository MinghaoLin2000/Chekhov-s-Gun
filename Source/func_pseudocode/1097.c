-[DeviceSettingsPhotosViewController isDirty]
bool __cdecl -[DeviceSettingsPhotosViewController isDirty](DeviceSettingsPhotosViewController *self, SEL a2)
{
  NSButton *v3; // x20
  AMPPhotoSyncPrefs *v4; // x20
  AMPPhotoSyncPrefs *v5; // x20
  AMPPhotoSyncPrefs *v6; // x21
  unsigned int v7; // w19

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  objc_release(v3);
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
    -[DeviceSettingsPhotosViewController saveToPhotoSyncPrefs:](self, "saveToPhotoSyncPrefs:", v4);
    objc_release(v4);
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController originalPhotoSyncPrefs](self, "originalPhotoSyncPrefs"));
    v7 = (unsigned int)-[AMPPhotoSyncPrefs isEqual:](v5, "isEqual:", v6) ^ 1;
    objc_release(v6);
    objc_release(v5);
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  return v7;
}