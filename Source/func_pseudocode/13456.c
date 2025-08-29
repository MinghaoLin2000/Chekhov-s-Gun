-[TSUStreamCompression dealloc]
void __cdecl -[TSUStreamCompression dealloc](TSUStreamCompression *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  compression_stream_destroy((compression_stream *)&self->_stream);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___TSUStreamCompression;
  -[TSUStreamCompression dealloc](&v3, "dealloc");
}