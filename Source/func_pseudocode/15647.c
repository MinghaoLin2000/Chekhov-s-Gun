-[USBDFUUpdater initWithVendorID:productID:serialNumber:dfuModeActive:simulator:]
USBDFUUpdater *__cdecl -[USBDFUUpdater initWithVendorID:productID:serialNumber:dfuModeActive:simulator:](
        USBDFUUpdater *self,
        SEL a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        id a5,
        bool a6,
        bool a7)
{
  _BOOL4 v8; // w21
  id v12; // x20
  USBDFUUpdater *v13; // x22
  os_log_t v14; // x0
  OS_os_log *log; // x8
  os_log_s *v16; // x25
  NSString *v17; // x0
  NSString *serialNumber; // x8
  objc_super v20; // [xsp+0h] [xbp-50h] BYREF

  v8 = a6;
  v12 = objc_retain(a5);
  v20.receiver = self;
  v20.super_class = (Class)&OBJC_CLASS___USBDFUUpdater;
  v13 = -[USBDFUUpdater init](&v20, "init");
  if ( v13 )
  {
    v14 = os_log_create("com.apple.accessoryupdater.uarp", "dfuUpdater");
    log = v13->_log;
    v13->_log = v14;
    objc_release(log);
    v16 = v13->_log;
    if ( os_log_type_enabled(v16, OS_LOG_TYPE_DEBUG) )
      sub_100017080(v16);
    v13->_dev = 0LL;
    v13->_vid = a3;
    v13->_pid = a4;
    v17 = (NSString *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithString:", v12);
    serialNumber = v13->_serialNumber;
    v13->_serialNumber = v17;
    objc_release(serialNumber);
    v13->_dfuMode = v8;
    if ( v8 )
      -[USBDFUUpdater initCurrentState](v13, "initCurrentState");
    v13->_simulator = a7;
  }
  objc_release(v12);
  return v13;
}