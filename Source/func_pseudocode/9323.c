-[TSPFilePackageConverter newWriteChannelAtPath:lastModificationDate:size:CRC:packageWriter:error:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[TSPFilePackageConverter newWriteChannelAtPath:lastModificationDate:size:CRC:packageWriter:error:](
        TSPFilePackageConverter *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        unsigned int a6,
        id a7,
        id *a8)
{
  __int64 v10; // x22
  id v14; // x19
  id v15; // x20
  id v16; // x21
  id v17; // x0
  void *v18; // x22
  objc_super v20; // [xsp+0h] [xbp-50h] BYREF

  v10 = *(_QWORD *)&a6;
  v14 = objc_retain(a3);
  v15 = objc_retain(a4);
  v16 = objc_retain(a7);
  if ( -[TSPPackageConverter isObjectArchivePath:](self, "isObjectArchivePath:", v14) )
  {
    v20.receiver = self;
    v20.super_class = (Class)&OBJC_CLASS___TSPFilePackageConverter;
    v17 = -[TSPPackageConverter newWriteChannelAtPath:lastModificationDate:size:CRC:packageWriter:error:](
            &v20,
            "newWriteChannelAtPath:lastModificationDate:size:CRC:packageWriter:error:",
            v14,
            v15,
            a5,
            v10,
            v16,
            a8);
  }
  else
  {
    v17 = objc_msgSend(
            v16,
            "newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculating"
            "SizeAndCRCForPreservingLastModificationDate:",
            v14,
            v15,
            a5,
            v10,
            0LL);
  }
  v18 = v17;
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  return v18;
}