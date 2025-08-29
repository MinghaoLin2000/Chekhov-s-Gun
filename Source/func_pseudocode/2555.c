-[DeviceBackupChangePasswordViewController rememberPasswordCheckboxChanged:]
void __cdecl -[DeviceBackupChangePasswordViewController rememberPasswordCheckboxChanged:](
        DeviceBackupChangePasswordViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceBackupChangePasswordViewController rememberPasswordCheckbox](self, "rememberPasswordCheckbox", a3));
  -[DeviceBackupChangePasswordViewController setCheckBoxValue:](
    self,
    "setCheckBoxValue:",
    -[NSButton state](v4, "state") != 0);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}