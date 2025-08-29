-[UARPUSBDFUAccessory setDfuMode]
int __cdecl -[UARPUSBDFUAccessory setDfuMode](UARPUSBDFUAccessory *self, SEL a2)
{
  return -[USBDFUUpdater setDfuMode](self->_usbDfuAccessory, "setDfuMode");
}