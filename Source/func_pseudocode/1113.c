-[DeviceSettingsPhotosViewController setupSourcePopUpButton]
void __cdecl -[DeviceSettingsPhotosViewController setupSourcePopUpButton](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  NSURL *v3; // x20
  NSPopUpButton *v4; // x21
  id v5; // x20
  NSFileManager *v6; // x22
  NSURL *v7; // x23
  NSString *v8; // x24
  NSString *v9; // x21
  NSURL *v10; // x22
  NSURL *v11; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photosAppURL](self, "photosAppURL"));
  -[DeviceSettingsPhotosViewController updateSourceMenuItemWithTag:withImageFromPath:](
    self,
    "updateSourceMenuItemWithTag:withImageFromPath:",
    1LL,
    v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSourcePopUpButton](self, "photoSourcePopUpButton"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController itemWithTag:forPopUpButton:](self, "itemWithTag:forPopUpButton:", 3LL, v4));
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController folderURL](self, "folderURL"));
  v8 = objc_retainAutoreleasedReturnValue(-[NSURL path](v7, "path"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSFileManager displayNameAtPath:](v6, "displayNameAtPath:", v8));
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  if ( !v9 )
  {
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController folderURL](self, "folderURL"));
    v9 = objc_retainAutoreleasedReturnValue(-[NSURL lastPathComponent](v10, "lastPathComponent"));
    objc_release(v10);
  }
  objc_msgSend(v5, "setTitle:", v9);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController folderURL](self, "folderURL"));
  -[DeviceSettingsPhotosViewController updateSourceMenuItemWithTag:withImageFromPath:](
    self,
    "updateSourceMenuItemWithTag:withImageFromPath:",
    3LL,
    v11);
  objc_release(v11);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}