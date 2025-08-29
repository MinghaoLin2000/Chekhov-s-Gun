-[SFUZipArchive readZip64EndOfCentralDirectoryFromInputStream:offset:]
SFUZipEndOfCentralDirectory *__cdecl -[SFUZipArchive readZip64EndOfCentralDirectoryFromInputStream:offset:](
        SFUZipEndOfCentralDirectory *__return_ptr retstr,
        SFUZipArchive *self,
        SEL a3,
        id a4,
        signed __int64 a5)
{
  SFUZipEndOfCentralDirectory *result; // x0
  SFUZipEndOfCentralDirectory *v7; // x20

  result = (SFUZipEndOfCentralDirectory *)objc_msgSend(a4, "dataAtOffset:size:end:", a5, 56LL, 0LL);
  v7 = result;
  if ( LODWORD(result->var0) != 101075792 )
    result = (SFUZipEndOfCentralDirectory *)+[SFUZipException raise:format:](
                                              &OBJC_CLASS___SFUZipException,
                                              "raise:format:",
                                              CFSTR("SFUZipEndOfCentralDirectoryError"),
                                              CFSTR("Zip64 end of central directory record signature not found"));
  if ( LODWORD(v7->var2) )
    result = (SFUZipEndOfCentralDirectory *)+[SFUZipException raise:format:](
                                              &OBJC_CLASS___SFUZipException,
                                              "raise:format:",
                                              CFSTR("SFUZipEndOfCentralDirectoryError"),
                                              CFSTR("No multi-disk support"));
  if ( HIDWORD(v7->var2) )
    result = (SFUZipEndOfCentralDirectory *)+[SFUZipException raise:format:](
                                              &OBJC_CLASS___SFUZipException,
                                              "raise:format:",
                                              CFSTR("SFUZipEndOfCentralDirectoryError"),
                                              CFSTR("No multi-disk support"));
  *(_OWORD *)&retstr->var0 = *(_OWORD *)&v7[1].var1;
  retstr->var2 = v7[2].var0;
  return result;
}