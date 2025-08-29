-[TSPFilePackageWriter zipArchiveWriter]
id __cdecl -[TSPFilePackageWriter zipArchiveWriter](TSPFilePackageWriter *self, SEL a2)
{
  TSUZipFileWriter *delayedZipArchiveWriter; // x8
  TSUZipFileWriter *v3; // x0
  TSUZipFileWriter *v4; // x0
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF
  objc_super v7; // [xsp+10h] [xbp-10h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( self->_onlyWriteToDelayedZipArchive )
  {
    delayedZipArchiveWriter = self->_delayedZipArchiveWriter;
    if ( delayedZipArchiveWriter )
    {
      v3 = objc_retain(delayedZipArchiveWriter);
      goto LABEL_7;
    }
    v4 = -[TSPPackageWriter zipArchiveWriter](
           &v7,
           "zipArchiveWriter",
           v6.receiver,
           v6.super_class,
           self,
           &OBJC_CLASS___TSPFilePackageWriter);
  }
  else
  {
    v4 = -[TSPPackageWriter zipArchiveWriter](
           &v6,
           "zipArchiveWriter",
           self,
           &OBJC_CLASS___TSPFilePackageWriter,
           v7.receiver,
           v7.super_class);
  }
  v3 = objc_retainAutoreleasedReturnValue(v4);
LABEL_7:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}