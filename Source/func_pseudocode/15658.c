-[USBDFUUpdater sendHIDReport:reportID:report:length:]
int __cdecl -[USBDFUUpdater sendHIDReport:reportID:report:length:](
        USBDFUUpdater *self,
        SEL a2,
        unsigned int a3,
        int a4,
        char *a5,
        int a6)
{
  __IOHIDDevice *v9; // x0
  __IOHIDDevice *v10; // x19
  IOReturn v11; // w22

  v9 = IOHIDDeviceCreate(kCFAllocatorDefault, a3);
  if ( !v9 )
    return -536870212;
  v10 = v9;
  v11 = IOHIDDeviceOpen(v9, 0);
  if ( !v11 )
  {
    v11 = IOHIDDeviceSetReport(v10, kIOHIDReportTypeFeature, a4, (const uint8_t *)a5, a6);
    IOHIDDeviceClose(v10, 0);
  }
  CFRelease(v10);
  return v11;
}