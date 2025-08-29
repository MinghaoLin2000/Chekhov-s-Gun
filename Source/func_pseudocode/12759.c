-[TSUZipArchive readZip64ExtraFieldFromBuffer:dataLength:entry:error:]
bool __cdecl -[TSUZipArchive readZip64ExtraFieldFromBuffer:dataLength:entry:error:](
        TSUZipArchive *self,
        SEL a2,
        const void *a3,
        unsigned __int16 a4,
        id a5,
        id *a6)
{
  unsigned int v7; // w22
  id v9; // x19
  bool v10; // cf
  __int64 v11; // t1
  __int64 v12; // t1
  id v13; // x21
  bool v14; // w22
  const __CFString **v15; // x2
  const __CFString **v16; // x3
  NSDictionary *v17; // x22
  const __CFString *v19; // [xsp+8h] [xbp-58h] BYREF
  const __CFString *v20; // [xsp+10h] [xbp-50h] BYREF
  const __CFString *v21; // [xsp+18h] [xbp-48h] BYREF
  const __CFString *v22; // [xsp+20h] [xbp-40h] BYREF
  const __CFString *v23; // [xsp+28h] [xbp-38h] BYREF
  const __CFString *v24; // [xsp+30h] [xbp-30h] BYREF

  v7 = a4;
  v9 = objc_retain(a5);
  if ( objc_msgSend(v9, "size") == (void *)0xFFFFFFFFLL )
  {
    v10 = v7 >= 8;
    LOWORD(v7) = v7 - 8;
    if ( !v10 )
    {
      v23 = CFSTR("TSUZipArchiveErrorDescription");
      v24 = CFSTR("Not enough room for Zip64 uncompressed size");
      v15 = &v24;
      v16 = &v23;
      goto LABEL_14;
    }
    v11 = *(_QWORD *)a3;
    a3 = (char *)a3 + 8;
    objc_msgSend(v9, "setSize:", v11);
  }
  if ( objc_msgSend(v9, "compressedSize") == (void *)0xFFFFFFFFLL )
  {
    if ( (unsigned __int16)v7 < 8u )
    {
      v21 = CFSTR("TSUZipArchiveErrorDescription");
      v22 = CFSTR("Not enough room for Zip64 compressed size");
      v15 = &v22;
      v16 = &v21;
      goto LABEL_14;
    }
    v12 = *(_QWORD *)a3;
    a3 = (char *)a3 + 8;
    objc_msgSend(v9, "setCompressedSize:", v12);
    LOWORD(v7) = v7 - 8;
  }
  if ( objc_msgSend(v9, "offset") != (void *)0xFFFFFFFFLL )
  {
LABEL_11:
    v13 = 0LL;
    v14 = 1;
    goto LABEL_17;
  }
  if ( (unsigned __int16)v7 >= 8u )
  {
    objc_msgSend(v9, "setOffset:", *(_QWORD *)a3);
    goto LABEL_11;
  }
  v19 = CFSTR("TSUZipArchiveErrorDescription");
  v20 = CFSTR("Not enough room for Zip64 offset");
  v15 = &v20;
  v16 = &v19;
LABEL_14:
  v17 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v15,
            v16,
            1LL));
  v13 = objc_retainAutoreleasedReturnValue(
          +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
            &OBJC_CLASS___NSError,
            "tsu_fileReadCorruptedFileErrorWithUserInfo:",
            v17));
  objc_release(v17);
  if ( a6 )
  {
    v13 = objc_retainAutorelease(v13);
    v14 = 0;
    *a6 = v13;
  }
  else
  {
    v14 = 0;
  }
LABEL_17:
  objc_release(v13);
  objc_release(v9);
  return v14;
}