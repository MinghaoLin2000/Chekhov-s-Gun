-[UARPUpdaterServiceDFU ioKitRuleMatched:]
void __cdecl -[UARPUpdaterServiceDFU ioKitRuleMatched:](UARPUpdaterServiceDFU *self, SEL a2, id a3)
{
  id v4; // x19
  OS_os_log *log; // x20
  void *v6; // x20
  void *v7; // x0
  const __CFDictionary *v8; // x0
  __int64 MatchingService; // x0
  io_object_t v10; // w22
  OS_os_log *v11; // x21
  OS_os_log *v12; // x21
  OS_os_log *v13; // x21
  OS_os_log *v14; // x20
  OS_os_log *v15; // x21
  int v16; // [xsp+0h] [xbp-50h] BYREF
  const char *v17; // [xsp+4h] [xbp-4Ch]

  v4 = objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
  {
    sub_100017634(log);
    if ( v4 )
      goto LABEL_3;
  }
  else if ( v4 )
  {
LABEL_3:
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
    if ( v6 )
    {
      v7 = objc_msgSend(v4, "registryEntryID");
      if ( v7 )
      {
        v8 = IORegistryEntryIDMatching((uint64_t)v7);
        if ( v8 )
        {
          MatchingService = IOServiceGetMatchingService(kIOMainPortDefault, v8);
          if ( (_DWORD)MatchingService )
          {
            v10 = MatchingService;
            -[UARPUpdaterServiceDFU matchingService:identifier:](
              self,
              "matchingService:identifier:",
              MatchingService,
              v6);
            IOObjectRelease(v10);
          }
          else
          {
            v15 = self->_log;
            if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
              sub_1000175BC(v15);
          }
        }
        else
        {
          v13 = self->_log;
          if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
            sub_100017544(v13);
        }
      }
      else
      {
        v12 = self->_log;
        if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
          sub_1000174CC(v12);
      }
    }
    else
    {
      v11 = self->_log;
      if ( os_log_type_enabled(v11, OS_LOG_TYPE_ERROR) )
        sub_100017454(v11);
    }
    objc_release(v6);
    goto LABEL_20;
  }
  v14 = self->_log;
  if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
  {
    v16 = 136315138;
    v17 = "-[UARPUpdaterServiceDFU ioKitRuleMatched:]";
    _os_log_impl((void *)&_mh_execute_header, v14, OS_LOG_TYPE_DEFAULT, "%s: No ioKitRule", (uint8_t *)&v16, 0xCu);
  }
LABEL_20:
  objc_release(v4);
}