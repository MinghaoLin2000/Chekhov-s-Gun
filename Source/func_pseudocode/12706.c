-[TSUZipFileWriter initWithZipFileArchive:options:error:]
TSUZipFileWriter *__cdecl -[TSUZipFileWriter initWithZipFileArchive:options:error:](
        TSUZipFileWriter *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id *a5)
{
  id v8; // x19
  void *v9; // x20
  TSUZipFileWriter *v10; // x0
  TSUZipFileWriter *v11; // x22
  __int64 v12; // x23
  void *v13; // x24
  NSString *v14; // x23
  NSString *v15; // x25
  TSUFileIOChannel *v16; // x25
  id *v17; // x24
  TSURandomWriteChannel *v18; // x25
  TSURandomWriteChannel *writeChannel; // x0
  TSURandomWriteChannel *v20; // x0
  dispatch_semaphore_t v21; // x26
  TSURandomWriteChannel *v22; // x24
  void *v23; // x25
  dispatch_semaphore_s *v24; // x26
  TSUZipFileWriter *v25; // x21
  _QWORD v27[4]; // [xsp+0h] [xbp-130h] BYREF
  id v28; // [xsp+20h] [xbp-110h]
  __int64 *v29; // [xsp+28h] [xbp-108h]
  _QWORD v30[4]; // [xsp+30h] [xbp-100h] BYREF
  id v31; // [xsp+50h] [xbp-E0h] BYREF
  id obj; // [xsp+58h] [xbp-D8h] BYREF
  id location; // [xsp+60h] [xbp-D0h] BYREF
  _QWORD v34[4]; // [xsp+68h] [xbp-C8h] BYREF
  id v35; // [xsp+88h] [xbp-A8h]
  objc_super v36; // [xsp+90h] [xbp-A0h] BYREF
  __int64 v37; // [xsp+A0h] [xbp-90h] BYREF
  id *v38; // [xsp+A8h] [xbp-88h]
  __int64 v39; // [xsp+B0h] [xbp-80h]
  __int64 (__fastcall *v40)(); // [xsp+B8h] [xbp-78h]
  __int64 (__fastcall *v41)(); // [xsp+C0h] [xbp-70h]
  id v42; // [xsp+C8h] [xbp-68h]

  v8 = objc_retain(a3);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "URL"));
  v37 = 0LL;
  v38 = (id *)&v37;
  v39 = 0x3032000000LL;
  v40 = sub_10012BE18;
  v41 = sub_10012BE28;
  v42 = 0LL;
  v36.receiver = self;
  v36.super_class = (Class)&OBJC_CLASS___TSUZipFileWriter;
  v10 = -[TSUZipWriter initWithOptions:](&v36, "initWithOptions:", a4);
  if ( !v10 )
  {
    v11 = 0LL;
    if ( !a5 )
      goto LABEL_14;
    goto LABEL_13;
  }
  v34[0] = _NSConcreteStackBlock;
  v34[1] = 3254779904LL;
  v34[2] = sub_10012BE30;
  v34[3] = &unk_1001DCBA8;
  v11 = objc_retain(v10);
  v35 = v11;
  objc_msgSend(v8, "enumerateEntriesUsingBlock:", v34);
  if ( (__int64)objc_msgSend(v8, "endOfLastEntry") <= 0 )
  {
    v12 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DCBD8);
    v13 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016EF38(v12, v13);
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUZipFileWriter initWithZipFileArchive:options:error:]"));
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipFileWriter.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v14,
      v15,
      69LL,
      0LL,
      "Unexpected offset");
    objc_release(v15);
    objc_release(v14);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  -[TSUZipWriter setEntryInsertionOffset:](v11, "setEntryInsertionOffset:", objc_msgSend(v8, "endOfLastEntry"));
  objc_initWeak(&location, v11);
  v16 = objc_alloc(&OBJC_CLASS___TSUFileIOChannel);
  v17 = v38;
  obj = v38[5];
  v30[0] = _NSConcreteStackBlock;
  v30[1] = 3254779904LL;
  v30[2] = sub_10012BE84;
  v30[3] = &unk_1001DCB78;
  objc_copyWeak(&v31, &location);
  v18 = -[TSUFileIOChannel initForRandomReadingWritingURL:error:cleanupHandler:](
          v16,
          "initForRandomReadingWritingURL:error:cleanupHandler:",
          v9,
          &obj,
          v30);
  objc_storeStrong(v17 + 5, obj);
  writeChannel = v11->_writeChannel;
  v11->_writeChannel = v18;
  objc_release(writeChannel);
  v20 = v11->_writeChannel;
  if ( v20 )
  {
    -[TSURandomWriteChannel setLowWater:](v20, "setLowWater:", -1LL);
    v21 = dispatch_semaphore_create(0LL);
    v22 = v11->_writeChannel;
    v23 = objc_msgSend(v8, "endOfLastEntry");
    v27[0] = _NSConcreteStackBlock;
    v27[1] = 3254779904LL;
    v27[2] = sub_10012BEEC;
    v27[3] = &unk_1001DCBF8;
    v29 = &v37;
    v24 = objc_retain(v21);
    v28 = v24;
    -[TSURandomWriteChannel truncateToLength:completion:](v22, "truncateToLength:completion:", v23, v27);
    dispatch_semaphore_wait(v24, 0xFFFFFFFFFFFFFFFFLL);
    objc_release(v28);
    objc_release(v24);
  }
  if ( v38[5] )
  {
    objc_release(v11);
    v11 = 0LL;
  }
  objc_destroyWeak(&v31);
  objc_destroyWeak(&location);
  objc_release(v35);
  if ( a5 )
LABEL_13:
    *a5 = objc_retainAutorelease(v38[5]);
LABEL_14:
  v25 = objc_retain(v11);
  _Block_object_dispose(&v37, 8);
  objc_release(v42);
  objc_release(v25);
  objc_release(v9);
  objc_release(v8);
  return v25;
}