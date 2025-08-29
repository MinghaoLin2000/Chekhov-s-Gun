-[DeviceSetupViewController showRestoreFromBackup]
void __cdecl -[DeviceSetupViewController showRestoreFromBackup](DeviceSetupViewController *self, SEL a2)
{
  id v3; // x20
  NSTextField *v4; // x21
  id v5; // x20
  NSTextField *v6; // x21
  NSView *v7; // x20
  NSArray *v8; // x20
  _BOOL8 v9; // x21
  NSButton *v10; // x22
  NSButton *v11; // x20
  NSView *v12; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[DeviceSetupViewController loadBackupsListPopupButton](self, "loadBackupsListPopupButton");
  -[DeviceSetupViewController popUpSelectionChanged:](self, "popUpSelectionChanged:", 0LL);
  v3 = objc_retainAutoreleasedReturnValue(
         -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("RestoreFromBackupTitle %@")));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController welcomeLabel](self, "welcomeLabel"));
  -[NSTextField setStringValue:](v4, "setStringValue:", v3);
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(
         -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("RestoreFromBackupMessage %@")));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController explanationLabel](self, "explanationLabel"));
  -[NSTextField setStringValue:](v6, "setStringValue:", v5);
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController backupOptionsContainerView](self, "backupOptionsContainerView"));
  -[NSView setHidden:](v7, "setHidden:", 0LL);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController backups](self, "backups"));
  v9 = -[NSArray count](v8, "count") != 0;
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController restoreFromBackupButton](self, "restoreFromBackupButton"));
  -[NSButton setState:](v10, "setState:", v9);
  objc_release(v10);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController cancelButton](self, "cancelButton"));
  -[NSButton setHidden:](v11, "setHidden:", 1LL);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController setupAssistantView](self, "setupAssistantView"));
  -[DeviceSetupViewController setContentView:](self, "setContentView:", v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v12);
}