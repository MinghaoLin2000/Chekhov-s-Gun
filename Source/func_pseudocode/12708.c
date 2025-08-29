-[TSUZipFileWriter copyRemainingEntries:fromArchive:progress:completionHandler:]
void __cdecl -[TSUZipFileWriter copyRemainingEntries:fromArchive:progress:completionHandler:](
        TSUZipFileWriter *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x24
  id v13; // x22
  void *v14; // x23
  void *v15; // x28
  void *v16; // x26
  void *v17; // x27
  id v18; // x25
  __int64 v19; // x25
  void *v20; // x26
  NSString *v21; // x26
  NSString *v22; // x27
  unsigned int v23; // [xsp+14h] [xbp-ACh]
  void *v24; // [xsp+18h] [xbp-A8h]
  _QWORD v25[4]; // [xsp+20h] [xbp-A0h] BYREF
  id v26; // [xsp+40h] [xbp-80h]
  id v27; // [xsp+48h] [xbp-78h]
  TSUZipFileWriter *v28; // [xsp+50h] [xbp-70h]
  id v29; // [xsp+58h] [xbp-68h]
  id v30; // [xsp+60h] [xbp-60h]
  id v31; // [xsp+68h] [xbp-58h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = objc_retain(a6);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "firstObject"));
  if ( v14 )
  {
    objc_msgSend(v10, "removeObjectAtIndex:", 0LL);
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "streamReadChannelForEntry:", v14));
    if ( v15 )
    {
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "name"));
      v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "lastModificationDate"));
      v24 = objc_msgSend(v14, "size");
      v23 = (unsigned int)objc_msgSend(v14, "CRC");
      v25[0] = _NSConcreteStackBlock;
      v25[1] = 3254779904LL;
      v25[2] = sub_10012C788;
      v25[3] = &unk_1001DCCD8;
      v31 = objc_retain(v13);
      v26 = objc_retain(v12);
      v27 = objc_retain(v14);
      v28 = self;
      v29 = objc_retain(v10);
      v30 = objc_retain(v11);
      -[TSUZipWriter writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:completion:](
        self,
        "writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:completion:",
        v16,
        0LL,
        v17,
        v24,
        v23,
        v15,
        v25);
      objc_release(v17);
      objc_release(v16);
      objc_release(v30);
      objc_release(v29);
      objc_release(v27);
      objc_release(v26);
      v18 = v31;
    }
    else
    {
      v19 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DCCB8);
      v20 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016F060(v19, v20);
      v21 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSUZipFileWriter copyRemainingEntries:fromArchive:progress:completionHandler:]"));
      v22 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/utility/TSUZipFileWriter.m"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v21,
        v22,
        156LL,
        0LL,
        "invalid nil value for '%{public}s'",
        "channel");
      objc_release(v22);
      objc_release(v21);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      if ( !v13 )
        goto LABEL_13;
      v18 = objc_retainAutoreleasedReturnValue(
              +[NSError tsu_fileWriteUnknownErrorWithUserInfo:](
                &OBJC_CLASS___NSError,
                "tsu_fileWriteUnknownErrorWithUserInfo:",
                0LL));
      (*((void (__fastcall **)(id, id))v13 + 2))(v13, v18);
    }
    objc_release(v18);
LABEL_13:
    objc_release(v15);
    goto LABEL_14;
  }
  if ( v13 )
    (*((void (__fastcall **)(id, _QWORD))v13 + 2))(v13, 0LL);
LABEL_14:
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}