-[DeviceSettingsViewController syncOntoFormat]
NSString *__cdecl -[DeviceSettingsViewController syncOntoFormat](DeviceSettingsViewController *self, SEL a2)
{
  NSString *syncOntoFormat; // x0
  NSButton *v4; // x20
  NSString *v5; // x0
  NSString *v6; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  syncOntoFormat = self->_syncOntoFormat;
  if ( !syncOntoFormat )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
    v5 = objc_retainAutoreleasedReturnValue(-[NSButton title](v4, "title"));
    v6 = self->_syncOntoFormat;
    self->_syncOntoFormat = v5;
    objc_release(v6);
    objc_release(v4);
    syncOntoFormat = self->_syncOntoFormat;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(syncOntoFormat);
}