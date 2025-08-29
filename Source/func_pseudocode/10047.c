-[TSPCompressionComponentWriteChannel initWithWriteChannel:compressionAlgorithm:operation:]
// local variable allocation has failed, the output may be wrong!
TSPCompressionComponentWriteChannel *__cdecl -[TSPCompressionComponentWriteChannel initWithWriteChannel:compressionAlgorithm:operation:](
        TSPCompressionComponentWriteChannel *self,
        SEL a2,
        id a3,
        int a4,
        int a5)
{
  __int64 v5; // x20
  __int64 v6; // x21
  id v9; // x19
  TSPCompressionComponentWriteChannel *v10; // x22
  dispatch_queue_attr_s *v11; // x24
  dispatch_queue_t v12; // x0
  OS_dispatch_queue *writeQueue; // x8
  TSUStreamCompression *v14; // x0
  TSUStreamCompression *compressor; // x8
  objc_super v17; // [xsp+0h] [xbp-40h] BYREF

  v5 = *(_QWORD *)&a5;
  v6 = *(_QWORD *)&a4;
  v9 = objc_retain(a3);
  v17.receiver = self;
  v17.super_class = (Class)&OBJC_CLASS___TSPCompressionComponentWriteChannel;
  v10 = -[TSPCompressionComponentWriteChannel init](&v17, "init");
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v12 = dispatch_queue_create("TSPCompressionComponentWriteChannel.Write", v11);
    writeQueue = v10->_writeQueue;
    v10->_writeQueue = (OS_dispatch_queue *)v12;
    objc_release(writeQueue);
    objc_release(v11);
    objc_storeStrong((id *)&v10->_writeChannel, a3);
    v14 = -[TSUStreamCompression initWithAlgorithm:operation:](
            objc_alloc(&OBJC_CLASS___TSUStreamCompression),
            "initWithAlgorithm:operation:",
            v6,
            v5);
    compressor = v10->_compressor;
    v10->_compressor = v14;
    objc_release(compressor);
  }
  objc_release(v9);
  return v10;
}