-[TSUZipArchive tsp_writeZipEntry:toURL:validateCRC:error:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[TSUZipArchive tsp_writeZipEntry:toURL:validateCRC:error:](
        TSUZipArchive *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id *a6)
{
  _BOOL8 v7; // x22
  id v10; // x19
  id v11; // x20
  id v12; // x22
  id v13; // x24
  id v14; // x23
  bool v15; // w25
  id v16; // x26
  id v17; // x0
  id v19; // [xsp+10h] [xbp-50h] BYREF
  id v20; // [xsp+18h] [xbp-48h] BYREF

  v7 = a5;
  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retainAutoreleasedReturnValue(
          -[TSUZipArchive streamReadChannelForEntry:validateCRC:](
            self,
            "streamReadChannelForEntry:validateCRC:",
            v10,
            v7));
  if ( !v12 )
  {
    v13 = 0LL;
    v14 = 0LL;
    goto LABEL_5;
  }
  v20 = 0LL;
  v13 = -[TSUFileIOChannel initForStreamWritingURL:error:](
          objc_alloc(&OBJC_CLASS___TSUFileIOChannel),
          "initForStreamWritingURL:error:",
          v11,
          &v20);
  v14 = objc_retain(v20);
  if ( !v13 )
  {
LABEL_5:
    v15 = 0;
    goto LABEL_6;
  }
  v19 = v14;
  v15 = +[TSPFileManager copyDataFromReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:encodedLength:error:](
          &OBJC_CLASS___TSPFileManager,
          "copyDataFromReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:encodedLength:error:",
          v12,
          0LL,
          objc_msgSend(v10, "size"),
          v13,
          0LL,
          0LL,
          &v19);
  v16 = objc_retain(v19);
  objc_release(v14);
  v14 = v16;
LABEL_6:
  objc_msgSend(v13, "close");
  objc_msgSend(v12, "close");
  if ( a6 && !v15 )
  {
    if ( v14 )
    {
      *a6 = objc_retainAutorelease(v14);
    }
    else
    {
      v17 = objc_retainAutorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsp_unknownReadErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsp_unknownReadErrorWithUserInfo:",
                  0LL)));
      *a6 = v17;
      objc_release(v17);
    }
  }
  objc_release(v13);
  objc_release(v12);
  objc_release(v14);
  objc_release(v11);
  objc_release(v10);
  return v15;
}