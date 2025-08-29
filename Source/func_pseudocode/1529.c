-[DeviceFooterViewController setDefaultPrimaryButton:]
void __cdecl -[DeviceFooterViewController setDefaultPrimaryButton:](DeviceFooterViewController *self, SEL a2, bool a3)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  self->_defaultPrimaryButton = a3;
  -[DeviceFooterViewController setPrimaryButtonKeyEquivalent:](self, "setPrimaryButtonKeyEquivalent:", CFSTR("\r"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceFooterViewController updateButtonsState](self, "updateButtonsState");
}