-[DeviceFooterViewController secondaryButtonKeyEquivalent]
NSString *__cdecl -[DeviceFooterViewController secondaryButtonKeyEquivalent](DeviceFooterViewController *self, SEL a2)
{
  NSString *secondaryButtonKeyEquivalent; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  secondaryButtonKeyEquivalent = self->_secondaryButtonKeyEquivalent;
  if ( !secondaryButtonKeyEquivalent )
  {
    self->_secondaryButtonKeyEquivalent = (NSString *)&stru_1000BA220;
    objc_release(0LL);
    secondaryButtonKeyEquivalent = self->_secondaryButtonKeyEquivalent;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(secondaryButtonKeyEquivalent);
}