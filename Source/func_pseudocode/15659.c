-[USBDFUUpdater hvciAppDetachToDfuCmd]
int __cdecl -[USBDFUUpdater hvciAppDetachToDfuCmd](USBDFUUpdater *self, SEL a2)
{
  const __CFDictionary *v3; // x20
  __int64 MatchingService; // x0
  io_object_t v5; // w21
  int v6; // w19
  int v8; // [xsp+Ch] [xbp-24h] BYREF

  v3 = (const __CFDictionary *)objc_retain(
                                 objc_retainAutoreleasedReturnValue(
                                   +[USBDFUUpdater matchingDictionaryHIDForVendorID:productId:serialNumber:](
                                     &OBJC_CLASS___USBDFUUpdater,
                                     "matchingDictionaryHIDForVendorID:productId:serialNumber:",
                                     self->_vid,
                                     self->_pid,
                                     self->_serialNumber)));
  MatchingService = IOServiceGetMatchingService(kIOMainPortDefault, v3);
  if ( (_DWORD)MatchingService )
  {
    v5 = MatchingService;
    v8 = 1129054721;
    v6 = -[USBDFUUpdater sendHIDReport:reportID:report:length:](
           self,
           "sendHIDReport:reportID:report:length:",
           MatchingService,
           1LL,
           &v8,
           4LL);
    IOObjectRelease(v5);
  }
  else
  {
    v6 = -536870212;
  }
  objc_release(v3);
  return v6;
}