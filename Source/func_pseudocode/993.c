-[DeviceNotConfiguredViewController .cxx_destruct]
void __cdecl -[DeviceNotConfiguredViewController .cxx_destruct](DeviceNotConfiguredViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_openButton);
  objc_destroyWeak((id *)&self->_titleLabel);
  objc_destroyWeak((id *)&self->_label);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_deviceNotConfiguredView);
}