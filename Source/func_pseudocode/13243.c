-[SFUZipArchive searchForEndOfCentralDirectoryFromInputStream:offset:]
const char *__cdecl -[SFUZipArchive searchForEndOfCentralDirectoryFromInputStream:offset:](
        SFUZipArchive *self,
        SEL a2,
        id a3,
        signed __int64 *a4)
{
  char *v6; // x0
  unsigned __int64 v7; // x22
  char *v8; // x20
  char *v9; // x0
  unsigned __int64 v10; // x8
  char *v11; // x22
  const char *v12; // x8
  char *v13; // x21
  __int64 v14; // x8
  unsigned __int64 v15; // x24
  char *v16; // x0
  void *v17; // x0
  _BYTE *v18; // x8

  v6 = (char *)-[SFUZipArchiveDataRepresentation dataLength](self->mDataRepresentation, "dataLength");
  if ( (unsigned __int64)v6 <= 0x10015 )
    v7 = (unsigned __int64)v6;
  else
    v7 = 65557LL;
  v8 = &v6[-v7];
  v9 = (char *)objc_msgSend(a3, "dataAtOffset:size:end:", &v6[-v7], v7, v6);
  v10 = v7 & 0x3FF | 0x400;
  if ( v10 >= v7 )
    v10 = v7;
  v11 = &v9[v7 - v10];
  if ( v11 >= v9 )
  {
    v13 = v9;
    v14 = v10 - 21;
    do
    {
      if ( v14 >= 1 )
      {
        v15 = (unsigned __int64)&v11[v14];
        v16 = v11;
        do
        {
          v17 = memchr(v16, 80, v15 - (_QWORD)v16);
          v18 = (_BYTE *)v15;
          if ( v17 )
          {
            if ( *((_BYTE *)v17 + 1) == 75 && *((_BYTE *)v17 + 2) == 5 )
            {
              v18 = v17;
              if ( *((_BYTE *)v17 + 3) == 6 )
              {
                v12 = (char *)v17 + 4;
                *a4 = &v8[(_QWORD)v17] - v13;
                return v12;
              }
            }
            else
            {
              v18 = v17;
            }
          }
          v16 = v18 + 4;
        }
        while ( (unsigned __int64)(v18 + 4) < v15 );
      }
      v11 -= 1024;
      v14 = 1024LL;
    }
    while ( v11 >= v13 );
  }
  +[SFUZipException raise:format:](
    &OBJC_CLASS___SFUZipException,
    "raise:format:",
    CFSTR("SFUZipEndOfCentralDirectoryError"),
    CFSTR("Could not find the end of central directory record"));
  return 0LL;
}