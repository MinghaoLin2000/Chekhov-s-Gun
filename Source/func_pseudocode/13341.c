-[TSUZipWriter writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:writeHandler:]
void __cdecl -[TSUZipWriter writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:writeHandler:](
        TSUZipWriter *self,
        SEL a2,
        id a3,
        bool a4,
        id a5,
        unsigned __int64 a6,
        unsigned int a7,
        id a8,
        id a9)
{
  id v15; // x19
  id v16; // x22
  id v17; // x25
  id v18; // x26
  __int64 v19; // x27
  void *v20; // x28
  NSString *v21; // x28
  NSString *v22; // x20
  dispatch_queue_s *writeQueue; // x20
  id v24; // x21
  id v25; // x23
  id v26; // x22
  id v27; // x19
  unsigned __int64 v28; // [xsp+10h] [xbp-B0h]
  _QWORD block[5]; // [xsp+18h] [xbp-A8h] BYREF
  id v30; // [xsp+40h] [xbp-80h]
  id v31; // [xsp+48h] [xbp-78h]
  id v32; // [xsp+50h] [xbp-70h]
  id v33; // [xsp+58h] [xbp-68h]
  unsigned __int64 v34; // [xsp+60h] [xbp-60h]
  unsigned int v35; // [xsp+68h] [xbp-58h]
  bool v36; // [xsp+6Ch] [xbp-54h]

  v15 = objc_retain(a3);
  v16 = objc_retain(a5);
  v17 = objc_retain(a8);
  v18 = objc_retain(a9);
  if ( !v17 )
  {
    v28 = a6;
    v19 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DED18);
    v20 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001738F4(v19, v20);
    v21 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUZipWriter writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:writeHandler:]"));
    v22 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipWriter.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v21,
      v22,
      365LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "readChannel");
    objc_release(v22);
    objc_release(v21);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    a6 = v28;
  }
  writeQueue = (dispatch_queue_s *)self->_writeQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100153D9C;
  block[3] = &unk_1001DED58;
  block[4] = self;
  v30 = v15;
  v36 = a4;
  v35 = a7;
  v31 = v16;
  v32 = v17;
  v33 = v18;
  v34 = a6;
  v24 = objc_retain(v18);
  v25 = objc_retain(v17);
  v26 = objc_retain(v16);
  v27 = objc_retain(v15);
  dispatch_async(writeQueue, block);
  objc_release(v33);
  objc_release(v32);
  objc_release(v31);
  objc_release(v30);
  objc_release(v24);
  objc_release(v25);
  objc_release(v26);
  objc_release(v27);
}