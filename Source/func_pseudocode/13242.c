-[SFUZipArchive readEndOfCentralDirectoryFromInputStream:]
SFUZipEndOfCentralDirectory *__cdecl -[SFUZipArchive readEndOfCentralDirectoryFromInputStream:](
        SFUZipEndOfCentralDirectory *__return_ptr retstr,
        SFUZipArchive *self,
        SEL a3,
        id a4)
{
  SFUZipEndOfCentralDirectory *result; // x0
  const char *v8; // x1
  SFUZipEndOfCentralDirectory *v9; // x22
  unsigned __int64 var0_high; // x8
  signed __int64 var1_low; // x9
  signed __int64 var1_high; // x10
  __int128 v15; // [xsp+0h] [xbp-40h] BYREF
  signed __int64 v16; // [xsp+10h] [xbp-30h]
  char *v17; // [xsp+18h] [xbp-28h] BYREF

  v17 = (char *)-[SFUZipArchiveDataRepresentation dataLength](self->mDataRepresentation, "dataLength") - 22;
  result = (SFUZipEndOfCentralDirectory *)objc_msgSend(a4, "dataAtOffset:size:end:");
  v9 = (SFUZipEndOfCentralDirectory *)((char *)&result->var0 + 4);
  if ( LODWORD(result->var0) != 101010256 )
  {
    result = -[SFUZipArchive searchForEndOfCentralDirectoryFromInputStream:offset:](
               self,
               "searchForEndOfCentralDirectoryFromInputStream:offset:",
               a4,
               &v17);
    v9 = result;
  }
  retstr->var0 = 0LL;
  retstr->var1 = 0LL;
  retstr->var2 = 0LL;
  if ( LOWORD(v9->var0) | WORD1(v9->var0) )
    result = (SFUZipEndOfCentralDirectory *)+[SFUZipException raise:format:](
                                              &OBJC_CLASS___SFUZipException,
                                              "raise:format:",
                                              CFSTR("SFUZipEndOfCentralDirectoryError"),
                                              CFSTR("No multi-disk support"));
  var0_high = HIWORD(v9->var0);
  retstr->var0 = var0_high;
  var1_low = LODWORD(v9->var1);
  retstr->var1 = var1_low;
  var1_high = HIDWORD(v9->var1);
  retstr->var2 = var1_high;
  if ( var0_high == 0xFFFF || (_DWORD)var1_low == -1 || (_DWORD)var1_high == -1 )
  {
    v15 = 0uLL;
    v16 = 0LL;
    result = (SFUZipEndOfCentralDirectory *)objc_msgSend_readZip64EndOfCentralDirectoryFromInputStream_eocdOffset_(
                                              &v15,
                                              self,
                                              v8,
                                              a4,
                                              v17);
    if ( *((_QWORD *)&v15 + 1) )
    {
      *(_OWORD *)&retstr->var0 = v15;
      retstr->var2 = v16;
    }
  }
  return result;
}