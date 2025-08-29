-[DeviceSettingsPhotosViewController revert]
void __cdecl -[DeviceSettingsPhotosViewController revert](DeviceSettingsPhotosViewController *self, SEL a2)
{
  AMPPhotoSyncPrefs *v3; // x20
  NSMutableDictionary *v4; // x20
  void *v5; // x22
  NSMutableDictionary *v6; // x23
  void *v7; // x21
  NSMutableDictionary *v8; // x20
  void *v9; // x22
  NSMutableDictionary *v10; // x23
  void *v11; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController originalPhotoSyncPrefs](self, "originalPhotoSyncPrefs"));
  -[DeviceSettingsPhotosViewController setPhotoSyncPrefs:](self, "setPhotoSyncPrefs:", v3);
  objc_release(v3);
  if ( -[DeviceSettingsPhotosViewController photosModelIsLoaded](self, "photosModelIsLoaded") )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v5 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v4, "objectForKeyedSubscript:", CFSTR("Albums")));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController originalCheckedItems](self, "originalCheckedItems"));
    v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", CFSTR("Albums")));
    objc_msgSend(v5, "setSet:", v7);
    objc_release(v7);
    objc_release(v6);
    objc_release(v5);
    objc_release(v4);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v8, "objectForKeyedSubscript:", CFSTR("People")));
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController originalCheckedItems](self, "originalCheckedItems"));
    v11 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v10, "objectForKeyedSubscript:", CFSTR("People")));
    objc_msgSend(v9, "setSet:", v11);
    objc_release(v11);
    objc_release(v10);
    objc_release(v9);
    objc_release(v8);
  }
  if ( -[DeviceSettingsPhotosViewController folderModelIsLoaded](self, "folderModelIsLoaded") )
    -[DeviceSettingsPhotosViewController setFolderModelIsLoaded:](self, "setFolderModelIsLoaded:", 0LL);
  -[DeviceSettingsPhotosViewController setDeleteExistingPhotos:](self, "setDeleteExistingPhotos:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsPhotosViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}