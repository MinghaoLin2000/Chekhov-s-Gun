-[SFUZipInflateInputStream initWithOffset:end:uncompressedSize:crc:dataRepresentation:]
SFUZipInflateInputStream *__cdecl -[SFUZipInflateInputStream initWithOffset:end:uncompressedSize:crc:dataRepresentation:](
        SFUZipInflateInputStream *self,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        id a7)
{
  SFUZipInflateInputStream *v12; // x0
  SFUZipInflateInputStream *v13; // x19
  unsigned __int64 v14; // x8

  v12 = -[SFUZipInflateInputStream init](self, "init");
  v13 = v12;
  if ( v12 )
  {
    *(_WORD *)&v12->mReachedEnd = 256;
    v12->mOffset = a3;
    v12->mCheckCrc = a6;
    v12->mCalculatedCrc = crc32(0, 0LL, 0LL);
    v13->mInput = (SFUBufferedInputStream *)objc_retain(objc_msgSend(a7, "bufferedInputStreamWithOffset:length:", a3, a4 - a3));
    v14 = 0x40000LL;
    if ( a5 < 0x40000 )
      v14 = a5;
    v13->mOutBufferSize = v14;
    -[SFUZipInflateInputStream setupInflateStream](v13, "setupInflateStream");
  }
  return v13;
}