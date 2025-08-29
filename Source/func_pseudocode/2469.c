-[DeviceSettingsAdvancedViewController .cxx_destruct]
void __cdecl -[DeviceSettingsAdvancedViewController .cxx_destruct](DeviceSettingsAdvancedViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_overwriteCalendarsCheckBox);
  objc_destroyWeak((id *)&self->_overwriteContactsCheckBox);
  objc_destroyWeak((id *)&self->_advancedSubtitleTextField);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_advancedTitleTextField);
}