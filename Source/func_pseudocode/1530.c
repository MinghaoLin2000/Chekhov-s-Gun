-[DeviceFooterViewController setDefaultSecondaryButton:]
void __cdecl -[DeviceFooterViewController setDefaultSecondaryButton:](
        DeviceFooterViewController *self,
        SEL a2,
        bool a3)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  self->_defaultSecondaryButton = a3;
  -[DeviceFooterViewController setSecondaryButtonKeyEquivalent:](self, "setSecondaryButtonKeyEquivalent:", CFSTR("\r"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceFooterViewController updateButtonsState](self, "updateButtonsState");
}