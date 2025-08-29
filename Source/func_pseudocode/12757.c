-[TSUZipArchive readFilenameFromBuffer:nameLength:entry:dataSize:error:]
bool __cdecl -[TSUZipArchive readFilenameFromBuffer:nameLength:entry:dataSize:error:](
        TSUZipArchive *self,
        SEL a2,
        const void **a3,
        unsigned __int16 a4,
        id a5,
        unsigned __int64 *a6,
        id *a7)
{
  unsigned int v9; // w21
  id v11; // x20
  NSDictionary *v12; // x21
  id v13; // x23
  __int64 v14; // x24
  bool v15; // w22
  NSDictionary *v16; // x24
  const __CFString *v18; // [xsp+8h] [xbp-58h] BYREF
  const __CFString *v19; // [xsp+10h] [xbp-50h] BYREF
  const __CFString *v20; // [xsp+18h] [xbp-48h] BYREF
  const __CFString *v21; // [xsp+20h] [xbp-40h] BYREF

  v9 = a4;
  v11 = objc_retain(a5);
  if ( *a6 < v9 )
  {
    v18 = CFSTR("TSUZipArchiveErrorDescription");
    v19 = CFSTR("Central directory too short");
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v19,
              &v18,
              1LL));
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsu_fileReadCorruptedFileErrorWithUserInfo:",
              v12));
LABEL_6:
    v15 = 0;
    goto LABEL_7;
  }
  v14 = v9;
  v12 = (NSDictionary *)objc_msgSend(
                          objc_alloc((Class)&OBJC_CLASS___NSString),
                          "initWithBytes:length:encoding:",
                          *a3,
                          v9,
                          4LL);
  objc_msgSend(v11, "setName:", v12);
  *a6 -= v14;
  *a3 = (char *)*a3 + v14;
  v15 = v12 != 0LL;
  if ( !v12 )
  {
    v20 = CFSTR("TSUZipArchiveErrorDescription");
    v21 = CFSTR("Couldn't read name");
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v21,
              &v20,
              1LL));
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsu_fileReadCorruptedFileErrorWithUserInfo:",
              v16));
    objc_release(v16);
    goto LABEL_6;
  }
  v13 = 0LL;
LABEL_7:
  objc_release(v12);
  if ( a7 && !v15 )
    *a7 = objc_retainAutorelease(v13);
  objc_release(v13);
  objc_release(v11);
  return v15;
}