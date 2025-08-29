-[iAUPServer supportedTargetProductIDCode]
unsigned int __cdecl -[iAUPServer supportedTargetProductIDCode](iAUPServer *self, SEL a2)
{
  return -[FirmwareBundle productIDCode](self->_firmwareBundle, "productIDCode");
}