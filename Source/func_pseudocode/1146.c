-[DeviceSettingsPhotosViewController sourceDidChange]
void __cdecl -[DeviceSettingsPhotosViewController sourceDidChange](DeviceSettingsPhotosViewController *self, SEL a2)
{
  NSPopUpButton *v3; // x20
  void *v4; // x21
  NSPopUpButton *v5; // x21
  __int64 v6; // x20
  AMPDeviceInfo *v7; // x21
  __int64 v8; // x22
  NSStackView *v9; // x23
  AMPPhotoSyncPrefs *v10; // x21
  AMPPhotoSyncPrefs *v11; // x21
  AMPPhotoSyncPrefs *v12; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSourcePopUpButton](self, "photoSourcePopUpButton"));
  v4 = -[NSPopUpButton selectedTag](v3, "selectedTag");
  objc_release(v3);
  if ( v4 == (void *)2 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsPhotosViewController promptForNewSource](self, "promptForNewSource");
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSourcePopUpButton](self, "photoSourcePopUpButton"));
    v6 = -[DeviceSettingsPhotosViewController sourceFromTag:](
           self,
           "sourceFromTag:",
           -[NSPopUpButton selectedTag](v5, "selectedTag"));
    objc_release(v5);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v8 = (unsigned int)-[AMPDeviceInfo supportsDiskMode](v7, "supportsDiskMode") ^ 1;
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController includeFullResPhotosStackView](self, "includeFullResPhotosStackView"));
    -[NSStackView setHidden:](v9, "setHidden:", v8);
    objc_release(v9);
    objc_release(v7);
    if ( -[DeviceSettingsPhotosViewController currentPhotoSyncSource](self, "currentPhotoSyncSource") )
    {
      v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
      -[DeviceSettingsPhotosViewController saveToPhotoSyncPrefs:](self, "saveToPhotoSyncPrefs:", v10);
      objc_release(v10);
    }
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
    -[DeviceSettingsPhotosViewController loadPhotoSyncPrefs:withSource:](
      self,
      "loadPhotoSyncPrefs:withSource:",
      v11,
      v6);
    objc_release(v11);
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
    -[DeviceSettingsPhotosViewController loadOptionsHalfViewFromPhotoSyncPrefs:](
      self,
      "loadOptionsHalfViewFromPhotoSyncPrefs:",
      v12);
    objc_release(v12);
    -[DeviceSettingsPhotosViewController loadTabViewForSource:](self, "loadTabViewForSource:", v6);
    -[DeviceSettingsPhotosViewController setCurrentPhotoSyncSource:](self, "setCurrentPhotoSyncSource:", v6);
    -[DeviceSettingsPhotosViewController updateTabView](self, "updateTabView");
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsPhotosViewController updateSourceExplanationStringIfOptimizeStorageEnabled](
      self,
      "updateSourceExplanationStringIfOptimizeStorageEnabled");
  }
}