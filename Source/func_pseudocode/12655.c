-[TSUZipFileArchive dealloc]
void __cdecl -[TSUZipFileArchive dealloc](TSUZipFileArchive *self, SEL a2)
{
  TSUZipFileDescriptorWrapper *fdWrapper; // x0
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  self->_archiveLength = 0LL;
  fdWrapper = self->_fdWrapper;
  self->_fdWrapper = 0LL;
  objc_release(fdWrapper);
  -[TSUZipFileArchive removeTemporaryDirectory](self, "removeTemporaryDirectory");
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___TSUZipFileArchive;
  -[TSUZipFileArchive dealloc](&v4, "dealloc");
}