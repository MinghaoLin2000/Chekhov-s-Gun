-[IPPSessionForStreaming initWithBundleIdentifier:clientID:]
// local variable allocation has failed, the output may be wrong!
IPPSessionForStreaming *__cdecl -[IPPSessionForStreaming initWithBundleIdentifier:clientID:](
        IPPSessionForStreaming *self,
        SEL a2,
        id a3,
        int a4)
{
  __int64 v4; // x20
  id v6; // x19
  IPPSessionForStreaming *v7; // x20
  __int64 v8; // x0
  OS_os_transaction *transaction; // x8
  objc_super v11; // [xsp+0h] [xbp-30h] BYREF

  v4 = *(_QWORD *)&a4;
  v6 = objc_retain(a3);
  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___IPPSessionForStreaming;
  v7 = -[IPPSession _initWithBundleIdentifier:clientID:completeConfiguraton:](
         &v11,
         "_initWithBundleIdentifier:clientID:completeConfiguraton:",
         v6,
         v4,
         &stru_100091028);
  if ( v7 )
  {
    v8 = os_transaction_create("com.apple.PrintKit.PrinterTool.Spooling");
    transaction = v7->_transaction;
    v7->_transaction = (OS_os_transaction *)v8;
    objc_release(transaction);
  }
  objc_release(v6);
  return v7;
}