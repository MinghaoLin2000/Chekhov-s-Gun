-[TSPPackage newCompressionReadChannelWithReadChannel:compressionAlgorithm:]
id __cdecl -[TSPPackage newCompressionReadChannelWithReadChannel:compressionAlgorithm:](
        TSPPackage *self,
        SEL a2,
        id a3,
        signed __int64 a4)
{
  id v5; // x0
  void *v6; // x19
  TSPSnappyReadChannel *v7; // x0
  TSPSnappyReadChannel *v8; // x20
  TSUCompressionReadChannel *v9; // x0
  __int64 v10; // x3

  v5 = objc_retain(a3);
  v6 = v5;
  switch ( a4 )
  {
    case 0LL:
      v7 = -[TSPSnappyReadChannel initWithReadChannel:](
             objc_alloc(&OBJC_CLASS___TSPSnappyReadChannel),
             "initWithReadChannel:",
             v5);
      goto LABEL_10;
    case 1LL:
      v7 = (TSPSnappyReadChannel *)objc_retain(v5);
      goto LABEL_10;
    case 2LL:
      v9 = objc_alloc(&OBJC_CLASS___TSUCompressionReadChannel);
      v10 = 256LL;
      goto LABEL_9;
    case 3LL:
      v9 = objc_alloc(&OBJC_CLASS___TSUCompressionReadChannel);
      v10 = 517LL;
      goto LABEL_9;
    case 4LL:
      v9 = objc_alloc(&OBJC_CLASS___TSUCompressionReadChannel);
      v10 = 774LL;
      goto LABEL_9;
    case 5LL:
      v9 = objc_alloc(&OBJC_CLASS___TSUCompressionReadChannel);
      v10 = 2049LL;
LABEL_9:
      v7 = -[TSUCompressionReadChannel initWithReadChannel:compressionAlgorithm:operation:](
             v9,
             "initWithReadChannel:compressionAlgorithm:operation:",
             v6,
             v10,
             1LL);
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