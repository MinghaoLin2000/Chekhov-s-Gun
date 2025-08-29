-[TSPFilePackageWriter componentZipArchiveWriter]
id __cdecl -[TSPFilePackageWriter componentZipArchiveWriter](TSPFilePackageWriter *self, SEL a2)
{
  TSUZipFileWriter *delayedZipArchiveWriter; // x8
  TSUZipFileWriter *v3; // x0
  objc_super v5; // [xsp+0h] [xbp-10h] BYREF
  __int64 vars8; // [xsp+18h] [xbp+8h]

  delayedZipArchiveWriter = self->_delayedZipArchiveWriter;
  if ( delayedZipArchiveWriter )
  {
    v3 = objc_retain(delayedZipArchiveWriter);
  }
  else
  {
    v5.receiver = self;
    v5.super_class = (Class)&OBJC_CLASS___TSPFilePackageWriter;
    v3 = (TSUZipFileWriter *)objc_retainAutoreleasedReturnValue(-[TSPPackageWriter componentZipArchiveWriter](&v5, "componentZipArchiveWriter"));
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}