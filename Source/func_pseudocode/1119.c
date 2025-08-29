-[DeviceSettingsPhotosViewController clickPhotosSourcePopUpButton:]
void __cdecl -[DeviceSettingsPhotosViewController clickPhotosSourcePopUpButton:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  NSPopUpButton *v4; // x20
  void *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSourcePopUpButton](self, "photoSourcePopUpButton", a3));
  v5 = -[NSPopUpButton selectedTag](v4, "selectedTag");
  objc_release(v4);
  if ( v5 != (void *)-[DeviceSettingsPhotosViewController tagWithSource:](
                       self,
                       "tagWithSource:",
                       -[DeviceSettingsPhotosViewController currentPhotoSyncSource](self, "currentPhotoSyncSource")) )
  {
    -[DeviceSettingsPhotosViewController sourceDidChange](self, "sourceDidChange");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
  }
}