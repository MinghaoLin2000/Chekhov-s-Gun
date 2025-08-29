-[TSPZipFileWriteChannel initWithArchiveWriter:]
TSPZipFileWriteChannel *__cdecl -[TSPZipFileWriteChannel initWithArchiveWriter:](
        TSPZipFileWriteChannel *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  TSPZipFileWriteChannel *v6; // x0
  TSPZipFileWriteChannel *v7; // x20
  dispatch_queue_attr_s *v8; // x21
  dispatch_queue_t v9; // x0
  OS_dispatch_queue *writerQueue; // x8
  objc_super v12; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___TSPZipFileWriteChannel;
  v6 = -[TSPZipFileWriteChannel init](&v12, "init");
  v7 = v6;
  if ( v6 )
  {
    objc_storeStrong((id *)&v6->_archiveWriter, a3);
    v8 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v9 = dispatch_queue_create("TSPZipFileWriteChannel.Writer", v8);
    writerQueue = v7->_writerQueue;
    v7->_writerQueue = (OS_dispatch_queue *)v9;
    objc_release(writerQueue);
    objc_release(v8);
  }
  objc_release(v5);
  return v7;
}