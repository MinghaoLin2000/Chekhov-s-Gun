-[UARPUpdaterServiceDFU matchingService:identifier:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[UARPUpdaterServiceDFU matchingService:identifier:](
        UARPUpdaterServiceDFU *self,
        SEL a2,
        unsigned int a3,
        id a4)
{
  __int64 v4; // x19
  id v6; // x20
  OS_os_log *log; // x22
  OS_os_log *v8; // x22
  CFMutableDictionaryRef properties; // [xsp+8h] [xbp-38h] BYREF

  v4 = *(_QWORD *)&a3;
  v6 = objc_retain(a4);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_100017738(log);
  properties = 0LL;
  IORegistryEntryCreateCFProperties(v4, &properties, kCFAllocatorDefault, 0);
  if ( properties )
  {
    v8 = self->_log;
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG) )
      sub_1000176AC((int)v6, (int)&properties, v8);
    CFRelease(properties);
  }
  -[UARPDFUUpdater matchingService:identifier:](self->_dfuOtpUpdater, "matchingService:identifier:", v4, v6);
  objc_release(v6);
}