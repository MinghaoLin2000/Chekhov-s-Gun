-[UARPUpdaterServiceDFU init]
UARPUpdaterServiceDFU *__cdecl -[UARPUpdaterServiceDFU init](UARPUpdaterServiceDFU *self, SEL a2)
{
  UARPUpdaterServiceDFU *v2; // x19
  os_log_t v3; // x0
  OS_os_log *log; // x8
  UARPDFUUpdater *v5; // x0
  UARPDFUUpdater *dfuOtpUpdater; // x8
  os_log_s *v7; // x20
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___UARPUpdaterServiceDFU;
  v2 = -[UARPUpdaterServiceDFU init](&v9, "init");
  if ( v2 )
  {
    v3 = os_log_create("com.apple.accessoryupdater.uarp", "dfuUpdater");
    log = v2->_log;
    v2->_log = v3;
    objc_release(log);
    v5 = objc_retainAutoreleasedReturnValue(+[UARPDFUUpdater sharedInstance](&OBJC_CLASS___UARPDFUUpdater, "sharedInstance"));
    dfuOtpUpdater = v2->_dfuOtpUpdater;
    v2->_dfuOtpUpdater = v5;
    objc_release(dfuOtpUpdater);
    -[UARPDFUUpdater setGoldRestoreDelegate:](v2->_dfuOtpUpdater, "setGoldRestoreDelegate:", v2);
    -[UARPDFUUpdater setServiceInstance:](v2->_dfuOtpUpdater, "setServiceInstance:", 1LL);
    v7 = v2->_log;
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEBUG) )
      sub_1000172A4(v7);
  }
  return v2;
}