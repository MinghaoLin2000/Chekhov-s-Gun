-[TSUZipArchive readFileCommentFromBuffer:fileCommentLength:entry:dataSize:error:]
bool __cdecl -[TSUZipArchive readFileCommentFromBuffer:fileCommentLength:entry:dataSize:error:](
        TSUZipArchive *self,
        SEL a2,
        const void **a3,
        unsigned __int16 a4,
        id a5,
        unsigned __int64 *a6,
        id *a7)
{
  unsigned int v9; // w21
  id v11; // x19
  unsigned __int64 v12; // x24
  unsigned __int64 v13; // x25
  id v14; // x21
  NSDictionary *v15; // x22
  const __CFString *v17; // [xsp+8h] [xbp-58h] BYREF
  const __CFString *v18; // [xsp+10h] [xbp-50h] BYREF

  v9 = a4;
  v11 = objc_retain(a5);
  v12 = *a6;
  v13 = v9;
  if ( *a6 < v9 )
  {
    v17 = CFSTR("TSUZipArchiveErrorDescription");
    v18 = CFSTR("Central directory too short");
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v18,
              &v17,
              1LL));
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsu_fileReadCorruptedFileErrorWithUserInfo:",
              v15));
    objc_release(v15);
    if ( a7 )
    {
      v14 = objc_retainAutorelease(v14);
      *a7 = v14;
    }
  }
  else
  {
    v14 = 0LL;
    *a6 = v12 - v13;
    *a3 = (char *)*a3 + v13;
  }
  objc_release(v14);
  objc_release(v11);
  return v12 >= v13;
}