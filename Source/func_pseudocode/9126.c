-[TSPDirectoryPackage copyComponent:toPackageURL:packageLocator:zipFileWriter:encryptionKey:canLink:completion:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[TSPDirectoryPackage copyComponent:toPackageURL:packageLocator:zipFileWriter:encryptionKey:canLink:completion:](
        TSPDirectoryPackage *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        bool a8,
        id a9)
{
  _BOOL8 v9; // x26
  id v15; // x19
  id v16; // x20
  id v17; // x21
  id v18; // x25
  id v19; // x23
  id v20; // x24
  __int64 v21; // x22
  void *v22; // x25
  NSString *v23; // x25
  NSString *v24; // x28
  TSPFileCoordinatorDelegate *v25; // x28
  id v26; // x22
  _QWORD *v27; // x0
  void *v28; // x25
  id v29; // [xsp+10h] [xbp-110h]
  id v30; // [xsp+18h] [xbp-108h]
  objc_super v31; // [xsp+20h] [xbp-100h] BYREF
  _QWORD v32[4]; // [xsp+30h] [xbp-F0h] BYREF
  id v33; // [xsp+50h] [xbp-D0h]
  id v34; // [xsp+58h] [xbp-C8h]
  id v35; // [xsp+60h] [xbp-C0h]
  TSPDirectoryPackage *v36; // [xsp+68h] [xbp-B8h]
  id v37; // [xsp+70h] [xbp-B0h]
  id v38; // [xsp+78h] [xbp-A8h]
  id v39; // [xsp+80h] [xbp-A0h]
  bool v40; // [xsp+88h] [xbp-98h]
  _QWORD v41[4]; // [xsp+90h] [xbp-90h] BYREF
  id v42; // [xsp+B0h] [xbp-70h]

  v9 = a8;
  v15 = objc_retain(a3);
  v16 = objc_retain(a4);
  v17 = objc_retain(a5);
  v18 = objc_retain(a6);
  v19 = objc_retain(a7);
  v20 = objc_retain(a9);
  if ( (unsigned int)objc_msgSend(v15, "isStoredOutsideObjectArchive") )
  {
    v29 = v18;
    v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "locator"));
    if ( !v30 )
    {
      v21 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D1850);
      v22 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100169B00(v21, v22);
      v23 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPDirectoryPackage copyComponent:toPackageURL:packageLocator:zipFileWriter:encryptionKey:canLink:completion:]"));
      v24 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPDirectoryPackage.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v23,
        v24,
        111LL,
        0LL,
        "invalid nil value for '%{public}s'",
        "packageLocator");
      objc_release(v24);
      objc_release(v23);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    v25 = objc_retainAutoreleasedReturnValue(-[TSPPackage fileCoordinatorDelegate](self, "fileCoordinatorDelegate"));
    v41[0] = _NSConcreteStackBlock;
    v41[1] = 3254779904LL;
    v41[2] = sub_10000F02C;
    v41[3] = &unk_1001D1890;
    v26 = objc_retain(v20);
    v42 = v26;
    v27 = objc_retainBlock(v41);
    v28 = v27;
    if ( v25 )
    {
      v32[0] = _NSConcreteStackBlock;
      v32[1] = 3254779904LL;
      v32[2] = sub_10000F1D8;
      v32[3] = &unk_1001D1900;
      v33 = objc_retain(v30);
      v34 = objc_retain(v16);
      v35 = objc_retain(v17);
      v36 = self;
      v37 = objc_retain(v19);
      v40 = v9;
      v38 = objc_retain(v26);
      v39 = objc_retain(v28);
      -[TSPFileCoordinatorDelegate performReadUsingAccessor:](v25, "performReadUsingAccessor:", v32);
      objc_release(v39);
      objc_release(v38);
      objc_release(v37);
      objc_release(v35);
      objc_release(v34);
      objc_release(v33);
    }
    else
    {
      ((void (__fastcall *)(_QWORD *))v27[2])(v27);
    }
    objc_release(v28);
    objc_release(v42);
    objc_release(v25);
    objc_release(v30);
    v18 = v29;
  }
  else
  {
    v31.receiver = self;
    v31.super_class = (Class)&OBJC_CLASS___TSPDirectoryPackage;
    -[TSPPackage copyComponent:toPackageURL:packageLocator:zipFileWriter:encryptionKey:canLink:completion:](
      &v31,
      "copyComponent:toPackageURL:packageLocator:zipFileWriter:encryptionKey:canLink:completion:",
      v15,
      v16,
      v17,
      v18,
      v19,
      v9,
      v20);
  }
  objc_release(v20);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
}