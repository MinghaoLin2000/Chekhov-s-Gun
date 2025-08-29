-[DeviceSettingsPhotosViewController updateOriginalPhotoSyncPrefs]
void __cdecl -[DeviceSettingsPhotosViewController updateOriginalPhotoSyncPrefs](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  AMPPhotoSyncPrefs *v3; // x20
  void *v4; // x21
  NSMutableDictionary *v5; // x20
  void *v6; // x22
  NSMutableDictionary *v7; // x23
  void *v8; // x21
  NSMutableDictionary *v9; // x20
  void *v10; // x22
  NSMutableDictionary *v11; // x19
  void *v12; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
  v4 = -[AMPPhotoSyncPrefs copy](v3, "copy");
  -[DeviceSettingsPhotosViewController setOriginalPhotoSyncPrefs:](self, "setOriginalPhotoSyncPrefs:", v4);
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController originalCheckedItems](self, "originalCheckedItems"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", CFSTR("Albums")));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v8 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v7, "objectForKeyedSubscript:", CFSTR("Albums")));
  objc_msgSend(v6, "setSet:", v8);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController originalCheckedItems](self, "originalCheckedItems"));
  v10 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v9, "objectForKeyedSubscript:", CFSTR("People")));
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v12 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v11, "objectForKeyedSubscript:", CFSTR("People")));
  objc_msgSend(v10, "setSet:", v12);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}