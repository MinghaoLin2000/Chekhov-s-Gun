-[DeviceChooseBackupViewController controlTextDidChange:]
void __cdecl -[DeviceChooseBackupViewController controlTextDidChange:](
        DeviceChooseBackupViewController *self,
        SEL a2,
        id a3)
{
  NSSecureTextField *v4; // x20
  void *v5; // x21
  _BOOL8 v6; // x20
  NSButton *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController passwordEntryTextField](self, "passwordEntryTextField", a3));
  v5 = objc_retainAutoreleasedReturnValue(-[NSSecureTextField stringValue](v4, "stringValue"));
  objc_release(v4);
  v6 = objc_msgSend(v5, "length") != 0LL;
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController restoreButton](self, "restoreButton"));
  -[NSButton setEnabled:](v7, "setEnabled:", v6);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}