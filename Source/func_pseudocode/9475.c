-[TSPSnappyComponentWriteChannel writeBlock]
void __cdecl -[TSPSnappyComponentWriteChannel writeBlock](TSPSnappyComponentWriteChannel *self, SEL a2)
{
  unsigned __int64 *p_uncompressedLength; // x21
  __int64 v4; // x0
  char *v5; // x19
  unsigned __int64 v6; // x9
  int v7; // w0
  dispatch_data_t v8; // x19
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v10[3]; // [xsp+18h] [xbp-38h] BYREF

  p_uncompressedLength = &self->_uncompressedLength;
  v4 = snappy::MaxCompressedLength((snappy *)self->_uncompressedLength, (unsigned __int64)a2);
  v5 = (char *)malloc_type_malloc(v4 + 4, 0x75682831uLL);
  v6 = *p_uncompressedLength;
  v10[0] = off_1001DC108;
  v10[1] = self->_uncompressedBuffer;
  v10[2] = v6;
  v9[0] = off_1001DC158;
  v9[1] = v5 + 4;
  v7 = snappy::Compress(v10, v9);
  *v5 = 0;
  *(_WORD *)(v5 + 1) = v7;
  v5[3] = BYTE2(v7);
  v8 = dispatch_data_create(v5, (unsigned int)(v7 + 4), 0LL, _dispatch_data_destructor_free);
  objc_msgSend((id)p_uncompressedLength[1], "writeData:", v8);
  *p_uncompressedLength = 0LL;
  objc_release(v8);
  snappy::UncheckedByteArraySink::~UncheckedByteArraySink((snappy::UncheckedByteArraySink *)v9);
  snappy::ByteArraySource::~ByteArraySource((snappy::ByteArraySource *)v10);
}