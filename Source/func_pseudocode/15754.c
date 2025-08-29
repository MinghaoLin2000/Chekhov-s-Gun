-[UARPUSBDFUAccessory description]
id __cdecl -[UARPUSBDFUAccessory description](UARPUSBDFUAccessory *self, SEL a2)
{
  NSString *identifier; // x24
  unsigned int v4; // w21
  unsigned int v5; // w22
  NSString *v6; // x23
  const char *v7; // x25
  unsigned int v8; // w0
  const char *v9; // x8
  NSString *v10; // x19
  __int64 vars8; // [xsp+78h] [xbp+8h]

  identifier = self->_identifier;
  v4 = -[USBDFUUpdater vid](self->_usbDfuAccessory, "vid");
  v5 = -[USBDFUUpdater pid](self->_usbDfuAccessory, "pid");
  v6 = objc_retainAutoreleasedReturnValue(-[UARPUSBDFUAccessory serialNumber](self, "serialNumber"));
  if ( -[UARPUSBDFUAccessory dfuModeActive](self, "dfuModeActive") )
    v7 = "DFU";
  else
    v7 = "APP";
  v8 = -[UARPUSBDFUAccessory simulator](self, "simulator");
  v9 = "NO";
  if ( v8 )
    v9 = "YES";
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("<%@, vid=%d, pid=%d, %@, dfuMode=<%s> simulator=<%s>>"),
            identifier,
            v4,
            v5,
            v6,
            v7,
            v9));
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}