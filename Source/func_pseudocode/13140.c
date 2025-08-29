-[TSUZipInflateReadChannel dealloc]
void __cdecl -[TSUZipInflateReadChannel dealloc](TSUZipInflateReadChannel *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[TSUZipInflateReadChannel close](self, "close");
  inflateEnd(&self->_stream);
  free(self->_outBuffer);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___TSUZipInflateReadChannel;
  -[TSUZipInflateReadChannel dealloc](&v3, "dealloc");
}