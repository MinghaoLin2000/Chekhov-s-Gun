-[UARPUSBDFUAccessory simulator]
bool __cdecl -[UARPUSBDFUAccessory simulator](UARPUSBDFUAccessory *self, SEL a2)
{
  return -[USBDFUUpdater simulator](self->_usbDfuAccessory, "simulator");
}