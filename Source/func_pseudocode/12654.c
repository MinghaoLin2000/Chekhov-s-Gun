-[TSUZipFileArchive initWithWriter:forReadingFromURL:options:error:]
TSUZipFileArchive *__cdecl -[TSUZipFileArchive initWithWriter:forReadingFromURL:options:error:](
        TSUZipFileArchive *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        id *a6)
{
  id v10; // x19
  id v11; // x20
  _QWORD *v12; // x0
  _QWORD *v13; // x21
  void *v14; // x22
  TSUZipFileArchive *v15; // x22
  unsigned int v16; // w22
  void *v17; // x23
  NSString *v18; // x23
  NSString *v19; // x24
  void *v20; // x25
  os_log_s *v22; // x23
  void *v23; // x24
  __int64 v24; // x28
  _QWORD v25[4]; // [xsp+18h] [xbp-C8h] BYREF
  id v26; // [xsp+38h] [xbp-A8h]
  uint8_t buf[4]; // [xsp+40h] [xbp-A0h] BYREF
  unsigned int v28; // [xsp+44h] [xbp-9Ch]
  __int16 v29; // [xsp+48h] [xbp-98h]
  const char *v30; // [xsp+4Ah] [xbp-96h]
  __int16 v31; // [xsp+52h] [xbp-8Eh]
  const char *v32; // [xsp+54h] [xbp-8Ch]
  __int16 v33; // [xsp+5Ch] [xbp-84h]
  int v34; // [xsp+5Eh] [xbp-82h]
  __int16 v35; // [xsp+62h] [xbp-7Eh]
  void *v36; // [xsp+64h] [xbp-7Ch]
  __int16 v37; // [xsp+6Ch] [xbp-74h]
  __int64 v38; // [xsp+6Eh] [xbp-72h]
  __int16 v39; // [xsp+76h] [xbp-6Ah]
  void *v40; // [xsp+78h] [xbp-68h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = -[TSUZipFileArchive initForReadingFromURL:options:error:](
          self,
          "initForReadingFromURL:options:error:",
          v11,
          a5,
          a6);
  if ( v12 )
  {
    v13 = v12;
    v14 = (void *)v12[6];
    if ( v14 == objc_msgSend(v10, "archiveLength") )
    {
      v25[0] = _NSConcreteStackBlock;
      v25[1] = 3254779904LL;
      v25[2] = sub_100128C34;
      v25[3] = &unk_1001DC928;
      v15 = objc_retain(v13);
      v26 = v15;
      objc_msgSend(v10, "enumerateEntriesUsingBlock:", v25);
      v13 = v26;
    }
    else
    {
      v16 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DC958);
      v17 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      {
        v22 = objc_retain(v17);
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "path"));
        v24 = v13[6];
        *(_DWORD *)buf = 67110658;
        v28 = v16;
        v29 = 2082;
        v30 = "-[TSUZipFileArchive initWithWriter:forReadingFromURL:options:error:]";
        v31 = 2082;
        v32 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipFileArchive.m";
        v33 = 1024;
        v34 = 253;
        v35 = 2112;
        v36 = v23;
        v37 = 2048;
        v38 = v24;
        v39 = 2048;
        v40 = objc_msgSend(v10, "archiveLength");
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v22,
          OS_LOG_TYPE_ERROR,
          "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Length of archive at %@ doesn't match archive leng"
          "th of writer. %llu != %llu",
          buf,
          0x40u);
        objc_release(v23);
        objc_release(v22);
      }
      v18 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSUZipFileArchive initWithWriter:forReadingFromURL:options:error:]"));
      v19 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/utility/TSUZipFileArchive.m"));
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "path"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v18,
        v19,
        253LL,
        0LL,
        "Length of archive at %@ doesn't match archive length of writer. %llu != %llu",
        v20,
        v13[6],
        objc_msgSend(v10, "archiveLength"));
      objc_release(v20);
      objc_release(v19);
      objc_release(v18);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      v15 = 0LL;
    }
    objc_release(v13);
  }
  else
  {
    v15 = 0LL;
  }
  objc_release(v11);
  objc_release(v10);
  return v15;
}