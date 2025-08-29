-[DeviceSetupViewController clickSetUpAsNewRadioButton:]
void __cdecl -[DeviceSetupViewController clickSetUpAsNewRadioButton:](DeviceSetupViewController *self, SEL a2, id a3)
{
  NSPopUpButton *v4; // x20
  NSButton *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController backupsListPopUpButton](self, "backupsListPopUpButton", a3));
  -[NSPopUpButton setEnabled:](v4, "setEnabled:", 0LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController restoreFromBackupButton](self, "restoreFromBackupButton"));
  -[NSButton setState:](v5, "setState:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}