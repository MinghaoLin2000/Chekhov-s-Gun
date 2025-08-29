-[DocumentCompressor dealloc]
void __cdecl -[DocumentCompressor dealloc](DocumentCompressor *self, SEL a2)
{
  z_stream *stream; // x0
  objc_super v4; // [xsp+10h] [xbp-20h] BYREF

  stream = self->_stream;
  if ( stream )
  {
    deflateEnd(stream);
    free(self->_stream);
    self->_stream = 0LL;
  }
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DocumentCompressor;
  -[DocumentCompressor dealloc](&v4, "dealloc");
}