-[UARPUSBDFUAccessory serialNumber]
NSString *__cdecl -[UARPUSBDFUAccessory serialNumber](UARPUSBDFUAccessory *self, SEL a2)
{
  return (NSString *)-[UARPAccessory serialNumber](self->_uarpAccessory, "serialNumber");
}