-[UARPUSBDFUAccessory dfuModeActive]
bool __cdecl -[UARPUSBDFUAccessory dfuModeActive](UARPUSBDFUAccessory *self, SEL a2)
{
  return -[USBDFUUpdater dfuMode](self->_usbDfuAccessory, "dfuMode");
}