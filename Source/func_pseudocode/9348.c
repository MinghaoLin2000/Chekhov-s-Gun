-[TSPDirectoryPackageWriter newRawComponentWriteChannelWithPackageLocator:storeOutsideObjectArchive:]
id __cdecl -[TSPDirectoryPackageWriter newRawComponentWriteChannelWithPackageLocator:storeOutsideObjectArchive:](
        TSPDirectoryPackageWriter *self,
        SEL a2,
        id a3,
        bool a4)
{
  _BOOL4 v4; // w20
  id v6; // x0
  void *v7; // x19
  __int64 v8; // x20
  void *v9; // x21
  NSString *v10; // x20
  NSString *v11; // x23
  NSURL *v12; // x21
  id v13; // x20
  NSFileManager *v14; // x23
  void *v15; // x24
  unsigned int v16; // w25
  id v17; // x21
  TSPDirectoryPackageWriterComponentFileWriteChannel *v18; // x22
  void *v19; // x23
  objc_class *v21; // x0
  NSString *v22; // x24
  void *v23; // x22
  void *v24; // x0
  objc_super v25; // [xsp+10h] [xbp-C0h] BYREF
  _QWORD v26[5]; // [xsp+20h] [xbp-B0h] BYREF
  id v27; // [xsp+48h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+50h] [xbp-80h] BYREF
  void *v29; // [xsp+54h] [xbp-7Ch]
  __int16 v30; // [xsp+5Ch] [xbp-74h]
  NSString *v31; // [xsp+5Eh] [xbp-72h]
  __int16 v32; // [xsp+66h] [xbp-6Ah]
  void *v33; // [xsp+68h] [xbp-68h]
  __int16 v34; // [xsp+70h] [xbp-60h]
  void *v35; // [xsp+72h] [xbp-5Eh]
  __int16 v36; // [xsp+7Ah] [xbp-56h]
  id v37; // [xsp+7Ch] [xbp-54h]

  v4 = a4;
  v6 = objc_retain(a3);
  v7 = v6;
  if ( v4 )
  {
    if ( !v6 )
    {
      v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
             &OBJC_CLASS___TSUAssertionHandler,
             "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D2A98);
      v9 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016B8CC(v8, v9);
      v10 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPDirectoryPackageWriter newRawComponentWriteChannelWithPackageLocator:storeOutsideObjectArchive:]"));
      v11 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPDirectoryPackageWriter.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v10,
        v11,
        140LL,
        0LL,
        "invalid nil value for '%{public}s'",
        "packageLocator");
      objc_release(v11);
      objc_release(v10);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    v12 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter URL](self, "URL"));
    v13 = objc_retainAutoreleasedReturnValue(
            +[TSPDirectoryPackage componentFileURLForPackageURL:packageLocator:](
              &OBJC_CLASS___TSPDirectoryPackage,
              "componentFileURLForPackageURL:packageLocator:",
              v12,
              v7));
    objc_release(v12);
    v14 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "URLByDeletingLastPathComponent"));
    v27 = 0LL;
    v16 = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
            v14,
            "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
            v15,
            1LL,
            0LL,
            &v27);
    v17 = objc_retain(v27);
    objc_release(v15);
    objc_release(v14);
    if ( v16 )
    {
      v26[0] = _NSConcreteStackBlock;
      v26[1] = 3254779904LL;
      v26[2] = sub_1000264E4;
      v26[3] = &unk_1001D2AB8;
      v26[4] = self;
      v18 = -[TSPDirectoryPackageWriterComponentFileWriteChannel initWithURL:handler:](
              objc_alloc(&OBJC_CLASS___TSPDirectoryPackageWriterComponentFileWriteChannel),
              "initWithURL:handler:",
              v13,
              v26);
    }
    else
    {
      -[TSPPackageWriter setError:](self, "setError:", v17);
      if ( UnsafePointer != -1 )
        dispatch_once(&UnsafePointer, &stru_1001D2AE8);
      v19 = objc_retain(UnsafePointer);
      if ( os_log_type_enabled((os_log_t)v19, OS_LOG_TYPE_ERROR) )
      {
        v21 = (objc_class *)objc_opt_class(v17);
        v22 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v21)));
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "domain"));
        v24 = objc_msgSend(v17, "code");
        *(_DWORD *)buf = 138413314;
        v29 = v7;
        v30 = 2114;
        v31 = v22;
        v32 = 2114;
        v33 = v23;
        v34 = 2048;
        v35 = v24;
        v36 = 2112;
        v37 = v17;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v19,
          OS_LOG_TYPE_ERROR,
          "Failed to create intermediate directories for component file %@. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
          buf,
          0x34u);
        objc_release(v22);
        objc_release(v23);
        objc_release(v22);
      }
      objc_release(v19);
      v18 = 0LL;
    }
    objc_release(v17);
    objc_release(v13);
  }
  else
  {
    v25.receiver = self;
    v25.super_class = (Class)&OBJC_CLASS___TSPDirectoryPackageWriter;
    v18 = -[TSPPackageWriter newRawComponentWriteChannelWithPackageLocator:storeOutsideObjectArchive:](
            &v25,
            "newRawComponentWriteChannelWithPackageLocator:storeOutsideObjectArchive:",
            v6,
            0LL);
  }
  objc_release(v7);
  return v18;
}