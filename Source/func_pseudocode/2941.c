-[DeviceEnterCurrentPasswordViewController controlTextDidChange:]
void __cdecl -[DeviceEnterCurrentPasswordViewController controlTextDidChange:](
        DeviceEnterCurrentPasswordViewController *self,
        SEL a2,
        id a3)
{
  NSSecureTextField *v4; // x20
  void *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController passwordEntry](self, "passwordEntry", a3));
  v5 = objc_retainAutoreleasedReturnValue(-[NSSecureTextField stringValue](v4, "stringValue"));
  -[DeviceEnterCurrentPasswordViewController setPassword:](self, "setPassword:", v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}