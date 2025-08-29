-[DeviceUIServiceView .cxx_destruct]
void __cdecl -[DeviceUIServiceView .cxx_destruct](DeviceUIServiceView *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_heightConstraint);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_widthConstraint);
}