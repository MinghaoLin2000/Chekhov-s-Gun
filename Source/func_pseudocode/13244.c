-[SFUZipArchive readZip64EndOfCentralDirectoryFromInputStream:eocdOffset:]
SFUZipEndOfCentralDirectory *__cdecl -[SFUZipArchive readZip64EndOfCentralDirectoryFromInputStream:eocdOffset:](
        SFUZipEndOfCentralDirectory *__return_ptr retstr,
        SFUZipArchive *self,
        SEL a3,
        id a4,
        signed __int64 a5)
{
  signed __int64 v8; // x23
  SFUZipEndOfCentralDirectory *result; // x0
  SFUZipEndOfCentralDirectory *v10; // x22
  signed __int64 var1; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = a5 - 20;
  if ( (unsigned __int64)a5 < 0x14 )
    +[SFUZipException raise:format:](
      &OBJC_CLASS___SFUZipException,
      "raise:format:",
      CFSTR("SFUZipEndOfCentralDirectoryError"),
      CFSTR("File isn't long enough for Zip64 locator"));
  result = (SFUZipEndOfCentralDirectory *)objc_msgSend(a4, "dataAtOffset:size:end:", v8, 20LL, 0LL);
  v10 = result;
  if ( LODWORD(result->var0) != 117853008 )
    result = (SFUZipEndOfCentralDirectory *)+[SFUZipException raise:format:](
                                              &OBJC_CLASS___SFUZipException,
                                              "raise:format:",
                                              CFSTR("SFUZipEndOfCentralDirectoryError"),
                                              CFSTR("Zip64 end of central directory locator record signature not found"));
  if ( HIDWORD(v10->var0) )
    result = (SFUZipEndOfCentralDirectory *)+[SFUZipException raise:format:](
                                              &OBJC_CLASS___SFUZipException,
                                              "raise:format:",
                                              CFSTR("SFUZipEndOfCentralDirectoryError"),
                                              CFSTR("No multi-disk support"));
  var1 = v10->var1;
  if ( LODWORD(v10->var2) != 1 )
    result = (SFUZipEndOfCentralDirectory *)+[SFUZipException raise:format:](
                                              &OBJC_CLASS___SFUZipException,
                                              "raise:format:",
                                              CFSTR("SFUZipEndOfCentralDirectoryError"),
                                              CFSTR("No multi-disk support"));
  if ( self )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return -[SFUZipArchive readZip64EndOfCentralDirectoryFromInputStream:offset:](
             self,
             "readZip64EndOfCentralDirectoryFromInputStream:offset:",
             a4,
             var1);
  }
  else
  {
    retstr->var0 = 0LL;
    retstr->var1 = 0LL;
    retstr->var2 = 0LL;
  }
  return result;
}