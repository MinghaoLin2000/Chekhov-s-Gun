-[UARPDFUUpdater init]
UARPDFUUpdater *__cdecl -[UARPDFUUpdater init](UARPDFUUpdater *self, SEL a2)
{
  UARPDFUUpdater *v2; // x19
  os_log_t v3; // x0
  OS_os_log *log; // x8
  os_log_s *v5; // x20
  NSMutableArray *v6; // x0
  NSMutableArray *dfuOtpAccessories; // x8
  dispatch_queue_t v8; // x0
  OS_dispatch_queue *uarpMessageQueue; // x8
  dispatch_queue_t v10; // x0
  OS_dispatch_queue *accessoriesQueue; // x8
  dispatch_queue_t v12; // x0
  OS_dispatch_queue *delegateQueue; // x8
  UARPController *v14; // x0
  UARPController *uarpController; // x8
  objc_super v17; // [xsp+0h] [xbp-20h] BYREF

  v17.receiver = self;
  v17.super_class = (Class)&OBJC_CLASS___UARPDFUUpdater;
  v2 = -[UARPDFUUpdater init](&v17, "init");
  if ( v2 )
  {
    v3 = os_log_create("com.apple.accessoryupdater.uarp", "dfuUpdater");
    log = v2->_log;
    v2->_log = v3;
    objc_release(log);
    v5 = v2->_log;
    if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEBUG) )
      sub_100017DB8(v5);
    v6 = (NSMutableArray *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
    dfuOtpAccessories = v2->_dfuOtpAccessories;
    v2->_dfuOtpAccessories = v6;
    objc_release(dfuOtpAccessories);
    v8 = dispatch_queue_create("com.apple.accessoryupdater.uarpdfuotp.uarpMessage.queue", 0LL);
    uarpMessageQueue = v2->_uarpMessageQueue;
    v2->_uarpMessageQueue = (OS_dispatch_queue *)v8;
    objc_release(uarpMessageQueue);
    v10 = dispatch_queue_create("com.apple.accessoryupdater.uarpdfuotp.accry.queue", 0LL);
    accessoriesQueue = v2->_accessoriesQueue;
    v2->_accessoriesQueue = (OS_dispatch_queue *)v10;
    objc_release(accessoriesQueue);
    v12 = dispatch_queue_create("com.apple.accessoryupdater.uarpdfuotp.delegate.queue", 0LL);
    delegateQueue = v2->_delegateQueue;
    v2->_delegateQueue = (OS_dispatch_queue *)v12;
    objc_release(delegateQueue);
    v14 = (UARPController *)objc_alloc_init((Class)&OBJC_CLASS___UARPController);
    uarpController = v2->_uarpController;
    v2->_uarpController = v14;
    objc_release(uarpController);
    -[UARPController setDelegate:](v2->_uarpController, "setDelegate:", v2);
    v2->_powerAssertionID = 0;
  }
  return v2;
}