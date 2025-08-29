-[SFUZipEntry readZip64ExtraField:size:]
void __cdecl -[SFUZipEntry readZip64ExtraField:size:](SFUZipEntry *self, SEL a2, const char *a3, unsigned __int64 a4)
{
  const char *v7; // x22
  const char *v8; // x20

  v7 = a3;
  if ( self->mUncompressedSize == 0xFFFFFFFF )
  {
    if ( (__int64)a4 <= 7 )
      +[SFUZipException raise:format:](
        &OBJC_CLASS___SFUZipException,
        "raise:format:",
        CFSTR("SFUZipCentralFileHeaderError"),
        CFSTR("Not enough room for Zip64 uncompressed size"));
    v7 = a3 + 8;
    self->mUncompressedSize = *(_QWORD *)a3;
  }
  v8 = &a3[a4];
  if ( self->mCompressedSize == 0xFFFFFFFF )
  {
    if ( v7 + 8 > v8 )
      +[SFUZipException raise:format:](
        &OBJC_CLASS___SFUZipException,
        "raise:format:",
        CFSTR("SFUZipCentralFileHeaderError"),
        CFSTR("Not enough room for Zip64 compressed size"));
    self->mCompressedSize = *(_QWORD *)v7;
    v7 += 8;
  }
  if ( self->mOffset == 0xFFFFFFFF )
  {
    if ( v7 + 8 > v8 )
      +[SFUZipException raise:format:](
        &OBJC_CLASS___SFUZipException,
        "raise:format:",
        CFSTR("SFUZipCentralFileHeaderError"),
        CFSTR("Not enough room for Zip64 offset"));
    self->mOffset = *(_QWORD *)v7;
  }
}