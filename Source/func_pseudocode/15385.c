-[UARPUpdaterDisplayControllerDelegate getECID:]
unsigned __int64 __cdecl -[UARPUpdaterDisplayControllerDelegate getECID:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        unsigned __int64 a3)
{
  const __CFDictionary *v5; // x0
  io_service_t MatchingService; // w0
  io_object_t v7; // w22
  void *CFProperty; // x20
  unsigned __int64 v9; // x19
  OS_os_log *log; // x19
  OS_os_log *v11; // x20
  OS_os_log *v12; // x20
  OS_os_log *v13; // x21

  v5 = IORegistryEntryIDMatching(a3);
  if ( v5 )
  {
    MatchingService = IOServiceGetMatchingService(kIOMainPortDefault, v5);
    if ( MatchingService )
    {
      v7 = MatchingService;
      CFProperty = (void *)IORegistryEntryCreateCFProperty(MatchingService, CFSTR("kUSBSerialNumberString"), 0LL, 0);
      IOObjectRelease(v7);
      if ( CFProperty )
      {
        v9 = -[UARPUpdaterDisplayControllerDelegate extractECID:](self, "extractECID:", CFProperty);
        if ( v9 )
        {
LABEL_15:
          objc_release(CFProperty);
          return v9;
        }
        log = self->_log;
        if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
          sub_100014340(CFProperty, log);
      }
      else
      {
        v13 = self->_log;
        if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
          sub_1000142CC(a3, v13);
      }
      v9 = 0LL;
      goto LABEL_15;
    }
    v12 = self->_log;
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
      sub_100014258(a3, v12);
  }
  else
  {
    v11 = self->_log;
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_ERROR) )
      sub_1000141E4(a3, v11);
  }
  return 0LL;
}