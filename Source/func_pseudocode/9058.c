-[TSPPackageWriter newCompressionComponentWriteChannelWithComponentWriteChannel:compressionAlgorithm:]
id __cdecl -[TSPPackageWriter newCompressionComponentWriteChannelWithComponentWriteChannel:compressionAlgorithm:](
        TSPPackageWriter *self,
        SEL a2,
        id a3,
        signed __int64 a4)
{
  id v5; // x0
  void *v6; // x19
  TSPSnappyComponentWriteChannel *v7; // x0
  TSPSnappyComponentWriteChannel *v8; // x20
  TSPCompressionComponentWriteChannel *v9; // x0
  __int64 v10; // x3

  v5 = objc_retain(a3);
  v6 = v5;
  switch ( a4 )
  {
    case 0LL:
      v7 = -[TSPSnappyComponentWriteChannel initWithWriteChannel:](
             objc_alloc(&OBJC_CLASS___TSPSnappyComponentWriteChannel),
             "initWithWriteChannel:",
             v5);
      goto LABEL_10;
    case 1LL:
      v7 = (TSPSnappyComponentWriteChannel *)objc_retain(v5);
      goto LABEL_10;
    case 2LL:
      v9 = objc_alloc(&OBJC_CLASS___TSPCompressionComponentWriteChannel);
      v10 = 256LL;
      goto LABEL_9;
    case 3LL:
      v9 = objc_alloc(&OBJC_CLASS___TSPCompressionComponentWriteChannel);
      v10 = 517LL;
      goto LABEL_9;
    case 4LL:
      v9 = objc_alloc(&OBJC_CLASS___TSPCompressionComponentWriteChannel);
      v10 = 774LL;
      goto LABEL_9;
    case 5LL:
      v9 = objc_alloc(&OBJC_CLASS___TSPCompressionComponentWriteChannel);
      v10 = 2049LL;
LABEL_9:
      v7 = -[TSPCompressionComponentWriteChannel initWithWriteChannel:compressionAlgorithm:operation:](
             v9,
             "initWithWriteChannel:compressionAlgorithm:operation:",
             v6,
             v10,
             0LL);
LABEL_10:
      v8 = v7;
      break;
    default:
      v8 = 0LL;
      break;
  }
  objc_release(v6);
  return v8;
}