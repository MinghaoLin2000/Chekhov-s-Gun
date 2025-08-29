-[DeviceSettingsContactsViewController .cxx_destruct]
void __cdecl -[DeviceSettingsContactsViewController .cxx_destruct](DeviceSettingsContactsViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_defaultGroupPopUpButton);
  objc_destroyWeak((id *)&self->_defaultGroupCheckBox);
  objc_destroyWeak((id *)&self->_tabView);
  objc_destroyWeak((id *)&self->_updateSelectedRadioButton);
  objc_destroyWeak((id *)&self->_allRadioButton);
  objc_destroyWeak((id *)&self->_syncOntoCheckBox);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_syncOntoTextField);
}