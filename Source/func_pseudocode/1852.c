-[DeviceBackupEnterPasswordViewController verifyPasswordEntry]
void __cdecl -[DeviceBackupEnterPasswordViewController verifyPasswordEntry](
        DeviceBackupEnterPasswordViewController *self,
        SEL a2)
{
  NSTextField *v3; // x20
  unsigned __int8 v4; // w21
  NSSecureTextField *v5; // x21
  void *v6; // x20
  NSSecureTextField *v7; // x22
  void *v8; // x21
  void *v9; // x22
  NSButton *v10; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController passwordPromptSecondary](self, "passwordPromptSecondary"));
  v4 = (unsigned __int8)-[NSTextField isHidden](v3, "isHidden");
  objc_release(v3);
  if ( (v4 & 1) == 0 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController passwordEntry](self, "passwordEntry"));
    v6 = objc_retainAutoreleasedReturnValue(-[NSSecureTextField stringValue](v5, "stringValue"));
    objc_release(v5);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController passwordEntrySecondary](self, "passwordEntrySecondary"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSSecureTextField stringValue](v7, "stringValue"));
    objc_release(v7);
    v9 = 0LL;
    if ( v6 && v8 )
    {
      if ( objc_msgSend(v6, "length") )
        v9 = objc_msgSend(v6, "isEqualToString:", v8);
      else
        v9 = 0LL;
    }
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController okayButton](self, "okayButton"));
    -[NSButton setEnabled:](v10, "setEnabled:", v9);
    objc_release(v10);
    objc_release(v8);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v6);
  }
}