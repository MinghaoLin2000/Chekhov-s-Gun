+[TSPPackageWriter newPackageWriterWithPackageType:URL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:]
id __cdecl +[TSPPackageWriter newPackageWriterWithPackageType:URL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:](
        id a1,
        SEL a2,
        signed __int64 a3,
        id a4,
        id a5,
        id a6,
        unsigned __int8 a7,
        id a8,
        id a9,
        unsigned __int64 a10,
        signed __int64 a11,
        bool a12,
        id a13,
        id a14,
        id a15,
        id a16,
        id a17,
        id a18,
        id *a19)
{
  id v22; // x24
  id v23; // x25
  id v24; // x26
  id v25; // x28
  id v26; // x27
  id v27; // x19
  signed __int64 v28; // x20
  bool v29; // w22
  __int64 v30; // x21
  void *v31; // x22
  NSString *v32; // x21
  NSString *v33; // x23
  objc_class *v34; // x0
  void *v35; // x21
  void *v36; // x20
  __int64 v38; // [xsp+10h] [xbp-E0h]
  unsigned int v39; // [xsp+5Ch] [xbp-94h]
  id v41; // [xsp+70h] [xbp-80h]
  id v42; // [xsp+78h] [xbp-78h]
  id v43; // [xsp+80h] [xbp-70h]
  id v44; // [xsp+88h] [xbp-68h]
  id v45; // [xsp+90h] [xbp-60h]

  v39 = a7;
  v45 = objc_retain(a4);
  v44 = objc_retain(a5);
  v43 = objc_retain(a6);
  v42 = objc_retain(a8);
  v41 = objc_retain(a9);
  v22 = objc_retain(a13);
  v23 = objc_retain(a14);
  v24 = objc_retain(a15);
  v25 = objc_retain(a16);
  v26 = objc_retain(a17);
  v27 = objc_retain(a18);
  if ( a3 == 2 )
  {
    v28 = 2LL;
    v34 = (objc_class *)objc_opt_class(&OBJC_CLASS___TSPFilePackageWriter);
    v29 = a12;
LABEL_11:
    if ( v34 )
      goto LABEL_17;
    goto LABEL_12;
  }
  v28 = a3;
  v29 = a12;
  if ( a3 == 1 )
  {
LABEL_9:
    v34 = (objc_class *)objc_opt_class(&OBJC_CLASS___TSPDirectoryPackageWriter);
    v29 = 0;
    goto LABEL_11;
  }
  if ( !a3 )
  {
    v30 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1128);
    v31 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100168DA8(v30, v31);
    v32 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "+[TSPPackageWriter newPackageWriterWithPackageType:URL:documentTargetURL:relativeURLForExternalData:packag"
              "eIdentifier:documentProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidat"
              "ionPolicy:encryptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:]"));
    v33 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackageWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v32,
      v33,
      97LL,
      0LL,
      "Specify a package type other than TSPPackageTypeDefault for new package writer");
    objc_release(v33);
    objc_release(v32);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    goto LABEL_9;
  }
LABEL_12:
  if ( UnsafePointer != -1 )
    dispatch_once(&UnsafePointer, &stru_1001D1148);
  v35 = UnsafePointer;
  if ( os_log_type_enabled((os_log_t)UnsafePointer, OS_LOG_TYPE_ERROR) )
    sub_100168D30(v28, v35);
  v34 = 0LL;
LABEL_17:
  LOBYTE(v38) = v29;
  v36 = objc_msgSend(
          objc_alloc(v34),
          "initWithURL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata"
          ":fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:ori"
          "ginalSupportPackage:fileCoordinatorDelegate:progress:error:",
          v45,
          v44,
          v43,
          v39,
          v42,
          v41,
          a10,
          a11,
          v38,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          a19);
  objc_release(v27);
  objc_release(v26);
  objc_release(v25);
  objc_release(v24);
  objc_release(v23);
  objc_release(v22);
  objc_release(v41);
  objc_release(v42);
  objc_release(v43);
  objc_release(v44);
  objc_release(v45);
  return v36;
}