-[TSUStreamCompression initWithAlgorithm:operation:]
TSUStreamCompression *__cdecl -[TSUStreamCompression initWithAlgorithm:operation:](
        TSUStreamCompression *self,
        SEL a2,
        int a3,
        int a4)
{
  char *v6; // x0
  TSUStreamCompression *v7; // x21
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___TSUStreamCompression;
  v6 = -[TSUStreamCompression init](&v9, "init");
  v7 = (TSUStreamCompression *)v6;
  if ( v6 )
  {
    compression_stream_init(
      (compression_stream *)(v6 + 16),
      (compression_stream_operation)a4,
      (compression_algorithm)a3);
    v7->_stream.dst_ptr = (char *)&unk_1001F7FFC;
    v7->_stream.dst_size = 0LL;
    v7->_stream.src_ptr = (char *)&unk_1001F7FFC;
    v7->_stream.src_size = 0LL;
    v7->_operation = a4;
    v7->_status = 0;
  }
  return v7;
}