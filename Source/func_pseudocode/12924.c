-[SFUZipEntry initWithDataRepresentation:compressionMethod:compressedSize:uncompressedSize:offset:crc:]
SFUZipEntry *__cdecl -[SFUZipEntry initWithDataRepresentation:compressionMethod:compressedSize:uncompressedSize:offset:crc:](
        SFUZipEntry *self,
        SEL a2,
        id a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int a8)
{
  SFUZipEntry *v14; // x22

  v14 = -[SFUZipEntry init](self, "init");
  if ( v14 )
  {
    v14->mArchiveDataRepresentation = (SFUZipArchiveDataRepresentation *)objc_retain(a3);
    v14->mCompressionMethod = a4;
    v14->mCompressedSize = a5;
    v14->mUncompressedSize = a6;
    v14->mOffset = a7;
    v14->mCrc = a8;
  }
  return v14;
}