-[SFUZipEntry initFromCentralFileHeader:dataRepresentation:]
id __cdecl -[SFUZipEntry initFromCentralFileHeader:dataRepresentation:](
        SFUZipEntry *self,
        SEL a2,
        const char *a3,
        id a4)
{
  SFUZipEntry *v6; // x19

  v6 = -[SFUZipEntry init](self, "init");
  if ( v6 )
  {
    v6->mArchiveDataRepresentation = (SFUZipArchiveDataRepresentation *)objc_retain(a4);
    if ( (*((_WORD *)a3 + 2) & 1) != 0 )
      +[SFUZipException raise:format:](
        &OBJC_CLASS___SFUZipException,
        "raise:format:",
        CFSTR("SFUZipCentralFileHeaderError"),
        CFSTR("Encrypted files are not supported"));
    -[SFUZipEntry setCompressionFlags:](v6, "setCompressionFlags:", *((unsigned __int16 *)a3 + 3));
    v6->mCrc = *((_DWORD *)a3 + 3);
    v6->mCompressedSize = *((unsigned int *)a3 + 4);
    v6->mUncompressedSize = *((unsigned int *)a3 + 5);
    if ( *((_WORD *)a3 + 15) )
      +[SFUZipException raise:format:](
        &OBJC_CLASS___SFUZipException,
        "raise:format:",
        CFSTR("SFUZipCentralFileHeaderError"),
        CFSTR("No multi-disk support"));
    v6->mOffset = *(unsigned int *)(a3 + 38);
  }
  return v6;
}