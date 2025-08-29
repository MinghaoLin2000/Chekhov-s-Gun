-[TSPMemoryReadChannel initWithDispatchData:]
TSPMemoryReadChannel *__cdecl -[TSPMemoryReadChannel initWithDispatchData:](TSPMemoryReadChannel *self, SEL a2, id a3)
{
  id v5; // x19
  TSPMemoryReadChannel *v6; // x0
  TSPMemoryReadChannel *v7; // x20
  dispatch_queue_attr_s *v8; // x21
  dispatch_queue_t v9; // x0
  OS_dispatch_queue *readQueue; // x8
  objc_super v12; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___TSPMemoryReadChannel;
  v6 = -[TSPMemoryReadChannel init](&v12, "init");
  v7 = v6;
  if ( v6 )
  {
    objc_storeStrong((id *)&v6->_dispatchData, a3);
    v8 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v9 = dispatch_queue_create("TSPMemoryReadChannel.Read", v8);
    readQueue = v7->_readQueue;
    v7->_readQueue = (OS_dispatch_queue *)v9;
    objc_release(readQueue);
    objc_release(v8);
    dispatch_queue_set_specific((dispatch_queue_t)v7->_readQueue, off_1001F5320, off_1001F5320, 0LL);
  }
  objc_release(v5);
  return v7;
}