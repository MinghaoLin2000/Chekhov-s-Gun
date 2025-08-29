-[DeviceSettingsViewController updateSyncOntoText]
void __cdecl -[DeviceSettingsViewController updateSyncOntoText](DeviceSettingsViewController *self, SEL a2)
{
  NSString *v3; // x20
  NSString *v4; // x20
  NSString *v5; // x20
  NSString *v6; // x22
  NSString *v7; // x21
  NSButton *v8; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceName](self, "deviceName"));
  objc_release(v3);
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController syncOntoFormat](self, "syncOntoFormat"));
    objc_release(v4);
    if ( v4 )
    {
      v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController syncOntoFormat](self, "syncOntoFormat"));
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceName](self, "deviceName"));
      v7 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v5, v6));
      objc_release(v6);
      v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
      -[NSButton setTitle:](v8, "setTitle:", v7);
      objc_release(v8);
      objc_release(v7);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      objc_release(v5);
    }
  }
}