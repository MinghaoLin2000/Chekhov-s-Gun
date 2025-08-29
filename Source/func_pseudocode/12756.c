-[TSUZipArchive readCentralFileHeaderWithBuffer:dataSize:error:]
bool __cdecl -[TSUZipArchive readCentralFileHeaderWithBuffer:dataSize:error:](
        TSUZipArchive *self,
        SEL a2,
        const void **a3,
        unsigned __int64 *a4,
        id *a5)
{
  TSUZipEntry *v9; // x0
  TSUZipEntry *v10; // x19
  unsigned __int16 *v11; // x27
  char *v12; // x9
  int v13; // w10
  const __CFString **v14; // x2
  const __CFString **v15; // x3
  NSDictionary *v16; // x21
  id v17; // x24
  bool v18; // w21
  int v20; // w8
  bool v21; // zf
  void *v22; // x24
  __int64 v23; // x3
  unsigned int v24; // w25
  id v25; // x0
  unsigned int v26; // w25
  id v27; // x26
  unsigned int v28; // w22
  id v29; // x23
  id v30; // [xsp+8h] [xbp-B8h]
  id v31; // [xsp+10h] [xbp-B0h] BYREF
  const __CFString *v32; // [xsp+18h] [xbp-A8h] BYREF
  const __CFString *v33; // [xsp+20h] [xbp-A0h] BYREF
  const __CFString *v34; // [xsp+28h] [xbp-98h] BYREF
  const __CFString *v35; // [xsp+30h] [xbp-90h] BYREF
  const __CFString *v36; // [xsp+38h] [xbp-88h] BYREF
  const __CFString *v37; // [xsp+40h] [xbp-80h] BYREF
  const __CFString *v38; // [xsp+48h] [xbp-78h] BYREF
  const __CFString *v39; // [xsp+50h] [xbp-70h] BYREF
  const __CFString *v40; // [xsp+58h] [xbp-68h] BYREF
  const __CFString *v41; // [xsp+60h] [xbp-60h] BYREF

  v9 = objc_alloc_init(&OBJC_CLASS___TSUZipEntry);
  v10 = v9;
  if ( *a4 <= 0x2D )
  {
    v40 = CFSTR("TSUZipArchiveErrorDescription");
    v41 = CFSTR("Central directory too short");
    v14 = &v41;
    v15 = &v40;
    goto LABEL_9;
  }
  v11 = (unsigned __int16 *)*a3;
  v12 = (char *)*a3 + 46;
  v13 = *(_DWORD *)*a3;
  *a4 -= 46LL;
  *a3 = v12;
  if ( v13 != 33639248 )
  {
    v38 = CFSTR("TSUZipArchiveErrorDescription");
    v39 = CFSTR("Central directory file header has bad signature");
    v14 = &v39;
    v15 = &v38;
    goto LABEL_9;
  }
  if ( (v11[4] & 1) != 0 )
  {
    v36 = CFSTR("TSUZipArchiveErrorDescription");
    v37 = CFSTR("Encrypted files are not supported");
    v14 = &v37;
    v15 = &v36;
    goto LABEL_9;
  }
  if ( v11[17] )
  {
    v34 = CFSTR("TSUZipArchiveErrorDescription");
    v35 = CFSTR("No multi-disk support");
    v14 = &v35;
    v15 = &v34;
LABEL_9:
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v14,
              v15,
              1LL));
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsu_fileReadCorruptedFileErrorWithUserInfo:",
              v16));
    objc_release(v16);
    goto LABEL_10;
  }
  v20 = v11[5];
  if ( v11[5] )
    v21 = v20 == (unsigned __int16)TSUZipDeflateCompressionMethod;
  else
    v21 = 1;
  if ( !v21 )
  {
    v32 = CFSTR("TSUZipArchiveErrorDescription");
    v33 = CFSTR("Unsupported compression method");
    v14 = &v33;
    v15 = &v32;
    goto LABEL_9;
  }
  -[TSUZipEntry setCompressed:](v9, "setCompressed:", v20 == (unsigned __int16)TSUZipDeflateCompressionMethod);
  v22 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSDate),
            "tsu_initWithDOSTime:",
            v11[7] | ((unsigned __int64)v11[6] << 16)));
  -[TSUZipEntry setLastModificationDate:](v10, "setLastModificationDate:", v22);
  objc_release(v22);
  -[TSUZipEntry setCRC:](v10, "setCRC:", *((unsigned int *)v11 + 4));
  -[TSUZipEntry setCompressedSize:](v10, "setCompressedSize:", *((unsigned int *)v11 + 5));
  -[TSUZipEntry setSize:](v10, "setSize:", *((unsigned int *)v11 + 6));
  -[TSUZipEntry setOffset:](v10, "setOffset:", *(unsigned int *)(v11 + 21));
  -[TSUZipEntry setNameLength:](v10, "setNameLength:", v11[14]);
  -[TSUZipEntry setExtraFieldsLength:](v10, "setExtraFieldsLength:", v11[15]);
  v23 = v11[14];
  v31 = 0LL;
  v24 = -[TSUZipArchive readFilenameFromBuffer:nameLength:entry:dataSize:error:](
          self,
          "readFilenameFromBuffer:nameLength:entry:dataSize:error:",
          a3,
          v23,
          v10,
          a4,
          &v31);
  v25 = objc_retain(v31);
  v17 = v25;
  if ( v24 )
  {
    if ( !v11[15]
      || (v30 = v25,
          v26 = -[TSUZipArchive readExtraFieldsFromBuffer:extraFieldsLength:entry:dataSize:error:](
                  self,
                  "readExtraFieldsFromBuffer:extraFieldsLength:entry:dataSize:error:",
                  a3),
          v27 = objc_retain(v30),
          objc_release(v17),
          v17 = v27,
          v26) )
    {
      if ( !v11[16]
        || (v28 = -[TSUZipArchive readFileCommentFromBuffer:fileCommentLength:entry:dataSize:error:](
                    self,
                    "readFileCommentFromBuffer:fileCommentLength:entry:dataSize:error:",
                    a3),
            v29 = objc_retain(v17),
            objc_release(v17),
            v17 = v29,
            v28) )
      {
        -[TSUZipArchive addEntry:](self, "addEntry:", v10);
        v18 = 1;
        goto LABEL_13;
      }
    }
  }
LABEL_10:
  if ( a5 )
  {
    v17 = objc_retainAutorelease(v17);
    v18 = 0;
    *a5 = v17;
  }
  else
  {
    v18 = 0;
  }
LABEL_13:
  objc_release(v10);
  objc_release(v17);
  return v18;
}