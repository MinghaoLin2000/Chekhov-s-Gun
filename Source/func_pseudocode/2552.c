-[DeviceBackupChangePasswordViewController viewWillAppear]
void __cdecl -[DeviceBackupChangePasswordViewController viewWillAppear](
        DeviceBackupChangePasswordViewController *self,
        SEL a2)
{
  void *v3; // x20
  double v4; // d2
  double v5; // d3
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceBackupChangePasswordViewController view](self, "view"));
  objc_msgSend(v3, "frame");
  -[DeviceBackupChangePasswordViewController setPreferredContentSize:](self, "setPreferredContentSize:", v4, v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}