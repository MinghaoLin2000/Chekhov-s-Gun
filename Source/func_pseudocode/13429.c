-[SFUZipArchiveMemoryDataRepresentation initWithData:]
SFUZipArchiveMemoryDataRepresentation *__cdecl -[SFUZipArchiveMemoryDataRepresentation initWithData:](
        SFUZipArchiveMemoryDataRepresentation *self,
        SEL a2,
        id a3)
{
  SFUZipArchiveMemoryDataRepresentation *v4; // x20
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___SFUZipArchiveMemoryDataRepresentation;
  v4 = -[SFUZipArchiveMemoryDataRepresentation init](&v6, "init");
  if ( v4 )
    v4->mData = (NSData *)objc_msgSend(a3, "copy");
  return v4;
}