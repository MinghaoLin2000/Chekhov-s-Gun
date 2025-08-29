-[TBXPCService prune3BarsNetworks:]
void __cdecl -[TBXPCService prune3BarsNetworks:](TBXPCService *self, SEL a2, unsigned __int64 a3)
{
  OS_dispatch_queue *processingQueue; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-38h] BYREF

  NSLog(&CFSTR("%s:").isa, a2, "-[TBXPCService prune3BarsNetworks:]");
  processingQueue = self->_processingQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3221225472LL;
  block[2] = sub_100002A60;
  block[3] = &unk_100004158;
  block[4] = a3;
  dispatch_async((dispatch_queue_t)processingQueue, block);
}