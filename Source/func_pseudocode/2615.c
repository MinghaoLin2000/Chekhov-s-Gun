-[DeviceSettingsContactsViewController updateDefaultContactGroupUI]
void __cdecl -[DeviceSettingsContactsViewController updateDefaultContactGroupUI](
        DeviceSettingsContactsViewController *self,
        SEL a2)
{
  _BOOL8 v3; // x20
  NSButton *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsContactsViewController loadDefaultContactGroupPopUpButton](self, "loadDefaultContactGroupPopUpButton");
  v3 = -[DeviceSettingsContactsViewController deviceDefaultContactGroup](self, "deviceDefaultContactGroup") != 0x7FFFFFFFFFFFFFFFLL;
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController defaultGroupCheckBox](self, "defaultGroupCheckBox"));
  -[NSButton setState:](v4, "setState:", v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}