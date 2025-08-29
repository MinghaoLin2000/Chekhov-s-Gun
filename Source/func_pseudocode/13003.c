-[TSUCompressionReadChannel initWithReadChannel:compressionAlgorithm:operation:]
// local variable allocation has failed, the output may be wrong!
TSUCompressionReadChannel *__cdecl -[TSUCompressionReadChannel initWithReadChannel:compressionAlgorithm:operation:](
        TSUCompressionReadChannel *self,
        SEL a2,
        id a3,
        int a4,
        int a5)
{
  __int64 v5; // x20
  __int64 v6; // x21
  id v9; // x19
  TSUCompressionReadChannel *v10; // x0
  TSUCompressionReadChannel *v11; // x22
  TSUStreamCompression *v12; // x0
  TSUStreamCompression *compressor; // x8
  objc_super v15; // [xsp+0h] [xbp-40h] BYREF

  v5 = *(_QWORD *)&a5;
  v6 = *(_QWORD *)&a4;
  v9 = objc_retain(a3);
  v15.receiver = self;
  v15.super_class = (Class)&OBJC_CLASS___TSUCompressionReadChannel;
  v10 = -[TSUCompressionReadChannel init](&v15, "init");
  v11 = v10;
  if ( v10 )
  {
    objc_storeStrong((id *)&v10->_readChannel, a3);
    v12 = -[TSUStreamCompression initWithAlgorithm:operation:](
            objc_alloc(&OBJC_CLASS___TSUStreamCompression),
            "initWithAlgorithm:operation:",
            v6,
            v5);
    compressor = v11->_compressor;
    v11->_compressor = v12;
    objc_release(compressor);
  }
  objc_release(v9);
  return v11;
}