-[TSUZipFileWriter copyEntriesFromZipFileWriter:readingFromURL:options:completionHandler:]
void __cdecl -[TSUZipFileWriter copyEntriesFromZipFileWriter:readingFromURL:options:completionHandler:](
        TSUZipFileWriter *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        id a6)
{
  id v10; // x19
  id v11; // x20
  void (__fastcall **v12)(id, id); // x21
  TSUZipFileArchive *v13; // x23
  id v14; // x0
  id v15; // x22
  void *v16; // x25
  NSProgress *v17; // x26
  __int64 v18; // x22
  void *v19; // x23
  NSString *v20; // x23
  NSString *v21; // x24
  id v22; // x24
  _QWORD v23[4]; // [xsp+8h] [xbp-98h] BYREF
  id v24; // [xsp+28h] [xbp-78h]
  __int64 *v25; // [xsp+30h] [xbp-70h]
  __int64 v26; // [xsp+38h] [xbp-68h] BYREF
  __int64 *v27; // [xsp+40h] [xbp-60h]
  __int64 v28; // [xsp+48h] [xbp-58h]
  __int64 v29; // [xsp+50h] [xbp-50h]
  id v30; // [xsp+58h] [xbp-48h] BYREF

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = (void (__fastcall **)(id, id))objc_retain(a6);
  if ( ((unsigned int)objc_msgSend(v10, "isClosed") & 1) != 0 )
  {
    v30 = 0LL;
    v13 = -[TSUZipFileArchive initWithWriter:forReadingFromURL:options:error:](
            objc_alloc(&OBJC_CLASS___TSUZipFileArchive),
            "initWithWriter:forReadingFromURL:options:error:",
            v10,
            v11,
            a5,
            &v30);
    v14 = objc_retain(v30);
    v15 = v14;
    if ( v13 )
    {
      v26 = 0LL;
      v27 = &v26;
      v28 = 0x2020000000LL;
      v29 = 0LL;
      v23[0] = _NSConcreteStackBlock;
      v23[1] = 3254779904LL;
      v23[2] = sub_10012C314;
      v23[3] = &unk_1001DCC48;
      v16 = objc_retain(
              objc_msgSend(
                objc_alloc((Class)&OBJC_CLASS___NSMutableArray),
                "initWithCapacity:",
                -[TSUZipArchive entriesCount](v13, "entriesCount")));
      v24 = v16;
      v25 = &v26;
      -[TSUZipArchive enumerateEntriesUsingBlock:](v13, "enumerateEntriesUsingBlock:", v23);
      objc_msgSend(v16, "sortUsingComparator:", &stru_1001DCC98);
      v17 = objc_retainAutoreleasedReturnValue(+[NSProgress progressWithTotalUnitCount:](&OBJC_CLASS___NSProgress, "progressWithTotalUnitCount:", v27[3]));
      -[TSUZipFileWriter copyRemainingEntries:fromArchive:progress:completionHandler:](
        self,
        "copyRemainingEntries:fromArchive:progress:completionHandler:",
        v16,
        v13,
        v17,
        v12);
      objc_release(v17);
      objc_release(v24);
      objc_release(v16);
      _Block_object_dispose(&v26, 8);
    }
    else if ( v12 )
    {
      if ( v14 )
      {
        v12[2](v12, v14);
      }
      else
      {
        v22 = objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileWriteUnknownErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileWriteUnknownErrorWithUserInfo:",
                  0LL));
        v12[2](v12, v22);
        objc_release(v22);
      }
    }
    objc_release(v13);
    goto LABEL_11;
  }
  v18 = +[TSUAssertionHandler _atomicIncrementAssertCount](
          &OBJC_CLASS___TSUAssertionHandler,
          "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DCC28);
  v19 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_10016EFCC(v18, v19);
  v20 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[TSUZipFileWriter copyEntriesFromZipFileWriter:readingFromURL:options:completionHandler:]"));
  v21 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/TSUZipFileWriter.m"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v20,
    v21,
    112LL,
    0LL,
    "Closed writer must be closed.");
  objc_release(v21);
  objc_release(v20);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  if ( v12 )
  {
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSError tsu_fileWriteUnknownErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsu_fileWriteUnknownErrorWithUserInfo:",
              0LL));
    v12[2](v12, v15);
LABEL_11:
    objc_release(v15);
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}