-[TBXPCService init]
TBXPCService *__cdecl -[TBXPCService init](TBXPCService *self, SEL a2)
{
  TBXPCService *v3; // x19
  dispatch_queue_t v4; // x0
  OS_dispatch_queue *processingQueue; // x8
  objc_super v7; // [xsp+10h] [xbp-20h] BYREF

  NSLog(&CFSTR("%s:").isa, a2, "-[TBXPCService init]");
  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___TBXPCService;
  v3 = -[TBXPCService init](&v7, "init");
  v4 = dispatch_queue_create(0LL, 0LL);
  processingQueue = v3->_processingQueue;
  v3->_processingQueue = (OS_dispatch_queue *)v4;
  objc_release(processingQueue);
  return v3;
}