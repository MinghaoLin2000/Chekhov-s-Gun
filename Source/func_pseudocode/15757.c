-[UARPUSBDFUAccessory setStagedFW:]
void __cdecl -[UARPUSBDFUAccessory setStagedFW:](UARPUSBDFUAccessory *self, SEL a2, UARPVersion a3)
{
  unsigned __int64 v3; // x20
  unsigned __int64 v4; // x21
  USBDFUUpdater *usbDfuAccessory; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = *(_QWORD *)&a3.release;
  v4 = *(_QWORD *)&a3.major;
  self->_stagedFW = a3;
  if ( -[USBDFUUpdater simulator](self->_usbDfuAccessory, "simulator")
    && -[USBDFUUpdater dfuSetVersionCmdMajor:minor:release:build:](
         self->_usbDfuAccessory,
         "dfuSetVersionCmdMajor:minor:release:build:",
         v4,
         HIDWORD(v4),
         v3,
         HIDWORD(v3)) )
  {
    usbDfuAccessory = self->_usbDfuAccessory;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[USBDFUUpdater closeDfuDevice](usbDfuAccessory, "closeDfuDevice");
  }
}