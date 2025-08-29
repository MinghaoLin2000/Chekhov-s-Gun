-[TSPPackageWriterComponentWriteChannel initWithArchiveWriter:]
TSPPackageWriterComponentWriteChannel *__cdecl -[TSPPackageWriterComponentWriteChannel initWithArchiveWriter:](
        TSPPackageWriterComponentWriteChannel *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  TSPPackageWriterComponentWriteChannel *v6; // x0
  TSPPackageWriterComponentWriteChannel *v7; // x21
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___TSPPackageWriterComponentWriteChannel;
  v6 = -[TSPPackageWriterComponentWriteChannel init](&v9, "init");
  v7 = v6;
  if ( v6 )
    objc_storeStrong((id *)&v6->_archiveWriter, a3);
  objc_release(v5);
  return v7;
}