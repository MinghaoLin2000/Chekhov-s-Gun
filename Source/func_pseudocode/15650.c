-[USBDFUUpdater closeDfuDevice]
int __cdecl -[USBDFUUpdater closeDfuDevice](USBDFUUpdater *self, SEL a2)
{
  IOUSBDeviceStruct942 **dev; // x0

  dev = self->_dev;
  if ( dev )
  {
    ((void (__fastcall *)(IOUSBDeviceStruct942 **, SEL))(*dev)->USBDeviceClose)(dev, a2);
    ((void (__fastcall *)(IOUSBDeviceStruct942 **))(*self->_dev)->Release)(self->_dev);
    self->_dev = 0LL;
  }
  return 0;
}