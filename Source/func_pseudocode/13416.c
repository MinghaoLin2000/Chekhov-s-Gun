-[TSUTemporaryDirectory _createDirectoryWithSignature:subdirectory:error:]
bool __cdecl -[TSUTemporaryDirectory _createDirectoryWithSignature:subdirectory:error:](
        TSUTemporaryDirectory *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  __CFString *v8; // x23
  id v9; // x20
  __CFString *v10; // x19
  void *v11; // x23
  void *v12; // x24
  char *v13; // x0
  NSString *v14; // x0
  NSString *v15; // x24
  NSString *v16; // x25
  NSString *v17; // x25
  NSFileManager *v18; // x28
  unsigned __int8 v19; // w26
  id v20; // x27
  id v21; // x0
  id v23; // [xsp+18h] [xbp-58h] BYREF

  v8 = (__CFString *)objc_retain(a3);
  v9 = objc_retain(a4);
  if ( v8 )
    v10 = v8;
  else
    v10 = &stru_1001DFAA0;
  if ( qword_1001F7FF0 != -1 )
    dispatch_once(&qword_1001F7FF0, &stru_1001DF0C8);
  v11 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            (id)qword_1001F7FE8,
            "stringByAppendingFormat:",
            CFSTR("_%@_%d_%d"),
            v10,
            (unsigned int)(int)CFAbsoluteTimeGetCurrent(),
            atomic_fetch_add(&dword_1001F7FF8, 1u) + 1));
  if ( (unsigned __int64)objc_msgSend(v11, "length") >= 0x100 )
  {
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "substringToIndex:", 255LL));
    objc_release(v11);
    v11 = v12;
  }
  v13 = getenv("CIRRUSEXPORTERTEMPDIR");
  if ( v13 )
    v14 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v13));
  else
    v14 = objc_retainAutoreleasedReturnValue(NSTemporaryDirectory());
  v15 = v14;
  if ( v9 )
  {
    v16 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v14, "stringByAppendingPathComponent:", v9));
    objc_release(v15);
    v15 = v16;
  }
  v17 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v15, "stringByAppendingPathComponent:", v11));
  v18 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v23 = 0LL;
  v19 = -[NSFileManager createDirectoryAtPath:withIntermediateDirectories:attributes:error:](
          v18,
          "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
          v17,
          1LL,
          0LL,
          &v23);
  v20 = objc_retain(v23);
  objc_release(v18);
  objc_storeStrong((id *)&self->_path, v17);
  if ( a5 && (v19 & 1) == 0 )
  {
    if ( v20 )
    {
      *a5 = objc_retainAutorelease(v20);
    }
    else
    {
      v21 = objc_retainAutorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileWriteUnknownErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileWriteUnknownErrorWithUserInfo:",
                  0LL)));
      *a5 = v21;
      objc_release(v21);
    }
  }
  objc_release(v20);
  objc_release(v17);
  objc_release(v15);
  objc_release(v11);
  objc_release(v9);
  objc_release(v10);
  return v19;
}