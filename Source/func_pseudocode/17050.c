-[UARPUpdaterServiceAFU init]
UARPUpdaterServiceAFU *__cdecl -[UARPUpdaterServiceAFU init](UARPUpdaterServiceAFU *self, SEL a2)
{
  UARPUpdaterServiceAFU *v2; // x19
  os_log_t v3; // x0
  OS_os_log *log; // x8
  NSMutableArray *v5; // x0
  NSMutableArray *controllers; // x8
  dispatch_queue_attr_s *v7; // x21
  dispatch_queue_t v8; // x0
  OS_dispatch_queue *serialQueue; // x8
  objc_super v11; // [xsp+0h] [xbp-30h] BYREF

  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___UARPUpdaterServiceAFU;
  v2 = -[UARPUpdaterServiceAFU init](&v11, "init");
  if ( v2 )
  {
    v3 = os_log_create("com.apple.accessoryupdater.UARPUpdaterServiceAFU", "service");
    log = v2->_log;
    v2->_log = v3;
    objc_release(log);
    v5 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
    controllers = v2->_controllers;
    v2->_controllers = v5;
    objc_release(controllers);
    v7 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_qos_class(0LL, QOS_CLASS_USER_INTERACTIVE, -1));
    v8 = dispatch_queue_create("com.apple.accessoryupdater.UARPUpdaterServiceAFU", v7);
    serialQueue = v2->_serialQueue;
    v2->_serialQueue = (OS_dispatch_queue *)v8;
    objc_release(serialQueue);
    objc_release(v7);
  }
  return v2;
}