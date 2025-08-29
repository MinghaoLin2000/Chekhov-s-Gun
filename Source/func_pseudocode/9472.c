-[TSPSnappyComponentWriteChannel initWithWriteChannel:]
TSPSnappyComponentWriteChannel *__cdecl -[TSPSnappyComponentWriteChannel initWithWriteChannel:](
        TSPSnappyComponentWriteChannel *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  TSPSnappyComponentWriteChannel *v6; // x21
  dispatch_queue_attr_s *v7; // x22
  dispatch_queue_t v8; // x0
  OS_dispatch_queue *writeQueue; // x8
  objc_super v11; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___TSPSnappyComponentWriteChannel;
  v6 = -[TSPSnappyComponentWriteChannel init](&v11, "init");
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v8 = dispatch_queue_create("TSPSnappyComponentWriteChannel.Write", v7);
    writeQueue = v6->_writeQueue;
    v6->_writeQueue = (OS_dispatch_queue *)v8;
    objc_release(writeQueue);
    objc_release(v7);
    objc_storeStrong((id *)&v6->_writeChannel, a3);
  }
  objc_release(v5);
  return v6;
}