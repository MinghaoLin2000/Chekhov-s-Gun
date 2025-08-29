-[DeviceSettingsViewController clickSyncOntoCheckBox:]
void __cdecl -[DeviceSettingsViewController clickSyncOntoCheckBox:](DeviceSettingsViewController *self, SEL a2, id a3)
{
  _QWORD v4[5]; // [xsp+0h] [xbp-60h] BYREF
  _QWORD v5[5]; // [xsp+28h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  if ( -[DeviceSettingsViewController warnedAutomaticUpdate](self, "warnedAutomaticUpdate", a3) )
    goto LABEL_7;
  if ( -[DeviceSettingsViewController shouldWarnAboutSwitchHomeLibrary](self, "shouldWarnAboutSwitchHomeLibrary") )
  {
    v5[0] = _NSConcreteStackBlock;
    v5[1] = 3254779904LL;
    v5[2] = sub_100016A40;
    v5[3] = &unk_1000B8FB0;
    v5[4] = self;
    -[DeviceSettingsViewController promptToSwitchHomeLibraryWithCompletionHandler:](
      self,
      "promptToSwitchHomeLibraryWithCompletionHandler:",
      v5);
    return;
  }
  if ( !-[DeviceSettingsViewController shouldWarnAboutRemove](self, "shouldWarnAboutRemove") )
  {
LABEL_7:
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsViewController didChangeSyncOnCheckBox](self, "didChangeSyncOnCheckBox");
  }
  else
  {
    v4[0] = _NSConcreteStackBlock;
    v4[1] = 3254779904LL;
    v4[2] = sub_100016B1C;
    v4[3] = &unk_1000B8FB0;
    v4[4] = self;
    -[DeviceSettingsViewController promptForRemoveWithCompletionHandler:](
      self,
      "promptForRemoveWithCompletionHandler:",
      v4);
  }
}