-[DeviceSettingsRentalsTableCellView .cxx_destruct]
void __cdecl -[DeviceSettingsRentalsTableCellView .cxx_destruct](DeviceSettingsRentalsTableCellView *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_deleteButton);
  objc_destroyWeak((id *)&self->_moveButton);
  objc_destroyWeak((id *)&self->_expirationTimeTextField);
  objc_destroyWeak((id *)&self->_sizeTextField);
  objc_destroyWeak((id *)&self->_totalTimeTextField);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_titleTextField);
}