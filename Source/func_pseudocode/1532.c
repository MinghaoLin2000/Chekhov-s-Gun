-[DeviceFooterViewController primaryButtonKeyEquivalent]
NSString *__cdecl -[DeviceFooterViewController primaryButtonKeyEquivalent](DeviceFooterViewController *self, SEL a2)
{
  NSString *primaryButtonKeyEquivalent; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  primaryButtonKeyEquivalent = self->_primaryButtonKeyEquivalent;
  if ( !primaryButtonKeyEquivalent )
  {
    self->_primaryButtonKeyEquivalent = (NSString *)&stru_1000BA220;
    objc_release(0LL);
    primaryButtonKeyEquivalent = self->_primaryButtonKeyEquivalent;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(primaryButtonKeyEquivalent);
}