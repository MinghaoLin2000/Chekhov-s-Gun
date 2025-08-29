-[IPPSessionForStreaming dealloc]
void __cdecl -[IPPSessionForStreaming dealloc](IPPSessionForStreaming *self, SEL a2)
{
  OS_os_transaction *transaction; // x0
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  transaction = self->_transaction;
  self->_transaction = 0LL;
  objc_release(transaction);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___IPPSessionForStreaming;
  -[IPPSession dealloc](&v4, "dealloc");
}