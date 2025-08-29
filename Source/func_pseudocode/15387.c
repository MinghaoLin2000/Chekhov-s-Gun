-[UARPUpdaterDisplayControllerDelegate getUSBContainerID:]
id __cdecl -[UARPUpdaterDisplayControllerDelegate getUSBContainerID:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        unsigned __int64 a3)
{
  const __CFDictionary *v5; // x0
  io_service_t MatchingService; // w0
  io_object_t v7; // w22
  void *CFProperty; // x20
  id v9; // x0
  OS_os_log *log; // x20
  OS_os_log *v11; // x20
  OS_os_log *v12; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = IORegistryEntryIDMatching(a3);
  if ( !v5 )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_1000143B4(a3, log);
    goto LABEL_9;
  }
  MatchingService = IOServiceGetMatchingService(kIOMainPortDefault, v5);
  if ( !MatchingService )
  {
    v11 = self->_log;
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_ERROR) )
      sub_100014428(a3, v11);
LABEL_9:
    CFProperty = 0LL;
    goto LABEL_13;
  }
  v7 = MatchingService;
  CFProperty = (void *)IORegistryEntryCreateCFProperty(MatchingService, CFSTR("kUSBContainerID"), 0LL, 0);
  IOObjectRelease(v7);
  if ( CFProperty )
  {
    v9 = objc_retain(CFProperty);
  }
  else
  {
    v12 = self->_log;
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
      sub_10001449C(a3, v12);
  }
  objc_release(CFProperty);
LABEL_13:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(CFProperty);
}