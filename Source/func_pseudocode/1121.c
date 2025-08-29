-[DeviceSettingsPhotosViewController clickSyncOntoCheckBox:]
void __cdecl -[DeviceSettingsPhotosViewController clickSyncOntoCheckBox:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  _QWORD v4[5]; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  -[DeviceSettingsPhotosViewController setDeleteExistingPhotos:](self, "setDeleteExistingPhotos:", 0LL);
  if ( -[DeviceSettingsPhotosViewController shouldWarnAboutRemove](self, "shouldWarnAboutRemove") )
  {
    v4[0] = _NSConcreteStackBlock;
    v4[1] = 3254779904LL;
    v4[2] = sub_1000250DC;
    v4[3] = &unk_1000B8FB0;
    v4[4] = self;
    -[DeviceSettingsPhotosViewController promptForRemoveWithCompletionHandler:](
      self,
      "promptForRemoveWithCompletionHandler:",
      v4);
  }
  else
  {
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
  }
}