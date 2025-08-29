-[DeviceBackupChangePasswordViewController controlTextDidChange:]
void __cdecl -[DeviceBackupChangePasswordViewController controlTextDidChange:](
        DeviceBackupChangePasswordViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  NSSecureTextField *v5; // x21
  NSSecureTextField *v6; // x22
  NSSecureTextField *v7; // x20
  void *v8; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceBackupChangePasswordViewController oldPasswordEntry](self, "oldPasswordEntry"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "object"));
  objc_release(v4);
  objc_release(v6);
  objc_release(v5);
  if ( v5 == v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceBackupChangePasswordViewController oldPasswordEntry](self, "oldPasswordEntry"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSSecureTextField stringValue](v7, "stringValue"));
    -[DeviceBackupChangePasswordViewController setOldPassword:](self, "setOldPassword:", v8);
  }
  else
  {
    -[DeviceBackupChangePasswordViewController verifyPasswordEntry](self, "verifyPasswordEntry");
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceBackupChangePasswordViewController passwordEntry](self, "passwordEntry"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSSecureTextField stringValue](v7, "stringValue"));
    -[DeviceBackupChangePasswordViewController setPassword:](self, "setPassword:", v8);
  }
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}