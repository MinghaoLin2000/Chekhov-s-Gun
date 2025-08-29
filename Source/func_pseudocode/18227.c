-[OSLogService init]
OSLogService *__cdecl -[OSLogService init](OSLogService *self, SEL a2)
{
  OSLogService *v2; // x19
  __int64 v3; // x0
  OS_os_transaction *transaction; // x8
  dispatch_queue_attr_s *v5; // x20
  dispatch_queue_t v6; // x0
  OS_dispatch_queue *serial_queue; // x8
  objc_super v9; // [xsp+0h] [xbp-20h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___OSLogService;
  v2 = -[OSLogService init](&v9, "init");
  if ( v2 )
  {
    v3 = os_transaction_create("com.apple.OSLogService");
    transaction = v2->_transaction;
    v2->_transaction = (OS_os_transaction *)v3;
    objc_release(transaction);
    v5 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v6 = dispatch_queue_create("com.apple.OSLogService.serial_queue", v5);
    serial_queue = v2->_serial_queue;
    v2->_serial_queue = (OS_dispatch_queue *)v6;
    objc_release(serial_queue);
    objc_release(v5);
    v2->_done = 0;
  }
  return v2;
}