-[TSUZipFileDescriptorWrapper dealloc]
void __cdecl -[TSUZipFileDescriptorWrapper dealloc](TSUZipFileDescriptorWrapper *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[TSUReadChannel close](self->_readChannel, "close");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___TSUZipFileDescriptorWrapper;
  -[TSUZipFileDescriptorWrapper dealloc](&v3, "dealloc");
}