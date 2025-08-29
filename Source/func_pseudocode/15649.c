-[USBDFUUpdater openDfuDevice]
int __cdecl -[USBDFUUpdater openDfuDevice](USBDFUUpdater *self, SEL a2)
{
  IOUSBDeviceStruct942 ***p_dev; // x20
  int v3; // w21
  const __CFDictionary *v5; // x19
  io_service_t MatchingService; // w0
  io_service_t v7; // w23
  const __CFUUID *v8; // x21
  const __CFUUID *v9; // x0
  kern_return_t v10; // w0
  OS_os_log *log; // x20
  const char *v12; // x3
  IOCFPlugInInterface **v13; // x21
  HRESULT (__cdecl *QueryInterface)(void *, REFIID, LPVOID *); // x23
  const __CFUUID *v15; // x0
  CFUUIDBytes v16; // kr00_16
  OS_os_log *v18; // x22
  IOCFPlugInInterface **theInterface; // [xsp+10h] [xbp-50h] BYREF
  SInt32 theScore; // [xsp+1Ch] [xbp-44h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-40h] BYREF
  int v22; // [xsp+24h] [xbp-3Ch]

  p_dev = &self->_dev;
  if ( !self->_dev )
  {
    v3 = -536870212;
    if ( !-[USBDFUUpdater dfuMode](self, "dfuMode") )
      return v3;
    v5 = (const __CFDictionary *)objc_retain(
                                   objc_retainAutoreleasedReturnValue(
                                     +[USBDFUUpdater matchingDictionaryForVendorID:productId:serialNumber:](
                                       &OBJC_CLASS___USBDFUUpdater,
                                       "matchingDictionaryForVendorID:productId:serialNumber:",
                                       self->_vid,
                                       self->_pid,
                                       self->_serialNumber)));
    MatchingService = IOServiceGetMatchingService(kIOMainPortDefault, v5);
    if ( MatchingService )
    {
      v7 = MatchingService;
      theScore = 0;
      theInterface = 0LL;
      v8 = CFUUIDGetConstantUUIDWithBytes(
             0LL,
             0x9Du,
             0xC7u,
             0xB7u,
             0x80u,
             0x9Eu,
             0xC0u,
             0x11u,
             0xD4u,
             0xA5u,
             0x4Fu,
             0,
             0xAu,
             0x27u,
             5u,
             0x28u,
             0x61u);
      v9 = CFUUIDGetConstantUUIDWithBytes(
             0LL,
             0xC2u,
             0x44u,
             0xE8u,
             0x58u,
             0x10u,
             0x9Cu,
             0x11u,
             0xD4u,
             0x91u,
             0xD4u,
             0,
             0x50u,
             0xE4u,
             0xC6u,
             0x42u,
             0x6Fu);
      v10 = IOCreatePlugInInterfaceForService(v7, v8, v9, &theInterface, &theScore);
      if ( v10 )
      {
        v3 = v10;
        log = self->_log;
        if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
        {
          *(_DWORD *)buf = 67109120;
          v22 = v3;
          v12 = "Unable to create an intermediate plug-in (%08x)";
LABEL_11:
          _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_INFO, v12, buf, 8u);
        }
      }
      else
      {
        v13 = theInterface;
        QueryInterface = (*theInterface)->QueryInterface;
        v15 = CFUUIDGetConstantUUIDWithBytes(
                0LL,
                0x5Cu,
                0x81u,
                0x87u,
                0xD0u,
                0x9Eu,
                0xF3u,
                0x11u,
                0xD4u,
                0x8Bu,
                0x45u,
                0,
                0xAu,
                0x27u,
                5u,
                0x28u,
                0x61u);
        v16 = CFUUIDGetUUIDBytes(v15);
        v3 = ((__int64 (__fastcall *)(IOCFPlugInInterface **, _QWORD, _QWORD, IOUSBDeviceStruct942 ***))QueryInterface)(
               v13,
               *(_QWORD *)&v16.byte0,
               *(_QWORD *)&v16.byte8,
               p_dev);
        ((void (__fastcall *)(IOCFPlugInInterface **))(*theInterface)->Release)(theInterface);
        if ( !v3 )
        {
          v3 = ((__int64 (__fastcall *)(IOUSBDeviceStruct942 **))(**p_dev)->USBDeviceOpen)(*p_dev);
          if ( v3 )
          {
            v18 = self->_log;
            if ( os_log_type_enabled(v18, OS_LOG_TYPE_INFO) )
            {
              *(_DWORD *)buf = 67109120;
              v22 = v3;
              _os_log_impl((void *)&_mh_execute_header, v18, OS_LOG_TYPE_INFO, "Unable to open device: %08x\n", buf, 8u);
            }
            ((void (__fastcall *)(IOUSBDeviceStruct942 **))(**p_dev)->Release)(*p_dev);
          }
          goto LABEL_12;
        }
        log = self->_log;
        if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
        {
          *(_DWORD *)buf = 67109120;
          v22 = v3;
          v12 = "Couldn’t create a device interface (%08x)";
          goto LABEL_11;
        }
      }
    }
LABEL_12:
    objc_release(v5);
    return v3;
  }
  return 0;
}