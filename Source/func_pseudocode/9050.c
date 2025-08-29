-[TSPPackageWriter initWithURL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:]
TSPPackageWriter *__cdecl -[TSPPackageWriter initWithURL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:](
        TSPPackageWriter *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        unsigned __int8 a6,
        id a7,
        id a8,
        unsigned __int64 a9,
        signed __int64 a10,
        bool a11,
        id a12,
        id a13,
        id a14,
        id a15,
        id a16,
        id a17,
        id *a18)
{
  id v22; // x27
  id v23; // x0
  id v24; // x26
  TSPPackageWriter *v25; // x20
  NSURL *v26; // x0
  NSURL *URL; // x8
  NSURL *v28; // x0
  NSURL *documentTargetURL; // x8
  NSURL *v30; // x0
  NSURL *relativeURLForExternalData; // x8
  TSPPackage *v32; // x0
  TSPPackage *writtenPackage; // x8
  void *v34; // x0
  void *v35; // x26
  unsigned int v36; // w22
  id v37; // x21
  id v38; // x25
  id v39; // x28
  TSUZipFileWriter *v40; // x22
  id v41; // x27
  TSUZipFileWriter *zipArchiveWriter; // x0
  __int64 v43; // x21
  void *v44; // x22
  NSString *v45; // x21
  NSString *v46; // x23
  TSPPackageWriter *v47; // x20
  TSPPackageWriter *v48; // x21
  void *v49; // x25
  void *v50; // x21
  TSUZipFileWriter *v51; // x22
  dispatch_queue_attr_s *v52; // x21
  dispatch_queue_t v53; // x0
  OS_dispatch_queue *errorQueue; // x8
  void *v55; // x21
  objc_class *v57; // x0
  NSString *v58; // x22
  void *v59; // x23
  void *v60; // x19
  unsigned int v61; // w26
  void *v62; // x0
  void *v63; // x24
  const __CFString *v64; // x8
  bool v65; // zf
  objc_class *v66; // x0
  void *v67; // x19
  NSString *v68; // x21
  void *v69; // x22
  void *v70; // x24
  unsigned int v71; // w26
  void *v72; // x0
  void *v73; // x23
  const __CFString *v74; // x8
  unsigned int v75; // [xsp+10h] [xbp-150h]
  void *v76; // [xsp+10h] [xbp-150h]
  id v77; // [xsp+18h] [xbp-148h]
  id v78; // [xsp+20h] [xbp-140h]
  id v79; // [xsp+28h] [xbp-138h]
  id v80; // [xsp+30h] [xbp-130h]
  id v81; // [xsp+38h] [xbp-128h]
  id v83; // [xsp+48h] [xbp-118h]
  id v84; // [xsp+50h] [xbp-110h]
  id v85; // [xsp+58h] [xbp-108h]
  id v86; // [xsp+60h] [xbp-100h]
  id obj; // [xsp+68h] [xbp-F8h]
  id v88; // [xsp+78h] [xbp-E8h]
  id v89; // [xsp+80h] [xbp-E0h] BYREF
  id v90; // [xsp+88h] [xbp-D8h] BYREF
  id v91; // [xsp+90h] [xbp-D0h] BYREF
  id v92; // [xsp+98h] [xbp-C8h] BYREF
  objc_super v93; // [xsp+A0h] [xbp-C0h] BYREF
  uint8_t buf[4]; // [xsp+B0h] [xbp-B0h] BYREF
  void *v95; // [xsp+B4h] [xbp-ACh]
  __int16 v96; // [xsp+BCh] [xbp-A4h]
  NSString *v97; // [xsp+BEh] [xbp-A2h]
  __int16 v98; // [xsp+C6h] [xbp-9Ah]
  void *v99; // [xsp+C8h] [xbp-98h]
  __int16 v100; // [xsp+D0h] [xbp-90h]
  void *v101; // [xsp+D2h] [xbp-8Eh]
  __int16 v102; // [xsp+DAh] [xbp-86h]
  const __CFString *v103; // [xsp+DCh] [xbp-84h]
  __int16 v104; // [xsp+E4h] [xbp-7Ch]
  void *v105; // [xsp+E6h] [xbp-7Ah]
  __int16 v106; // [xsp+EEh] [xbp-72h]
  id v107; // [xsp+F0h] [xbp-70h]

  v75 = a6;
  v22 = objc_retain(a3);
  v84 = objc_retain(a4);
  v85 = objc_retain(a5);
  v23 = a7;
  v24 = a8;
  v83 = objc_retain(v23);
  v77 = objc_retain(a8);
  v78 = objc_retain(a12);
  v86 = objc_retain(a13);
  v79 = objc_retain(a14);
  v80 = objc_retain(a15);
  obj = objc_retain(a16);
  v81 = objc_retain(a17);
  v88 = v22;
  if ( ((unsigned __int8)objc_msgSend(v22, "isFileURL") & 1) != 0 )
  {
    v93.receiver = self;
    v93.super_class = (Class)&OBJC_CLASS___TSPPackageWriter;
    v25 = -[TSPPackageWriter init](&v93, "init");
    if ( !v25 )
    {
      v41 = 0LL;
LABEL_33:
      if ( a18 && !v25 )
        *a18 = objc_autorelease(objc_retainAutoreleasedReturnValue(+[NSError tsp_ensureSaveErrorWithError:](&OBJC_CLASS___NSError, "tsp_ensureSaveErrorWithError:", v41)));
      v47 = objc_retain(v25);
      objc_release(v41);
      v48 = v47;
      goto LABEL_37;
    }
    v26 = (NSURL *)objc_msgSend(v22, "copy");
    URL = v25->_URL;
    v25->_URL = v26;
    objc_release(URL);
    v28 = (NSURL *)objc_msgSend(v84, "copy");
    documentTargetURL = v25->_documentTargetURL;
    v25->_documentTargetURL = v28;
    objc_release(documentTargetURL);
    v30 = (NSURL *)objc_msgSend(v85, "copy");
    relativeURLForExternalData = v25->_relativeURLForExternalData;
    v25->_relativeURLForExternalData = v30;
    objc_release(relativeURLForExternalData);
    objc_storeStrong((id *)&v25->_documentMetadata, v24);
    objc_storeStrong((id *)&v25->_documentSaveValidationPolicy, a12);
    objc_storeStrong((id *)&v25->_encryptionKey, a13);
    objc_storeStrong((id *)&v25->_originalDocumentPackage, a14);
    objc_storeStrong((id *)&v25->_originalSupportPackage, a15);
    objc_storeWeak((id *)&v25->_fileCoordinatorDelegate, obj);
    v32 = -[TSPPackageWriter newPackageWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:](
            v25,
            "newPackageWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:",
            v75,
            v83,
            a9,
            v86,
            v25);
    writtenPackage = v25->_writtenPackage;
    v25->_writtenPackage = v32;
    objc_release(writtenPackage);
    v25->_updateType = a10;
    objc_storeStrong((id *)&v25->_progress, a17);
    v34 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(v25->_writtenPackage), "zipArchiveURLFromPackageURL:", v22));
    v35 = v34;
    if ( a11 )
    {
      v92 = 0LL;
      v36 = (unsigned int)objc_msgSend(v34, "checkResourceIsReachableAndReturnError:", &v92);
      v37 = objc_retain(v92);
      if ( !v36 )
      {
LABEL_25:
        v89 = 0LL;
        v51 = -[TSUZipFileWriter initWithURL:error:](
                objc_alloc(&OBJC_CLASS___TSUZipFileWriter),
                "initWithURL:error:",
                v35,
                &v89);
        v41 = objc_retain(v89);
        v38 = 0LL;
        zipArchiveWriter = v25->_zipArchiveWriter;
        v25->_zipArchiveWriter = v51;
        v39 = v37;
        goto LABEL_26;
      }
      v91 = v37;
      v38 = objc_retainAutoreleasedReturnValue(
              +[TSUZipFileArchive zipArchiveFromURL:options:error:](
                &OBJC_CLASS___TSUZipFileArchive,
                "zipArchiveFromURL:options:error:",
                v35,
                0LL,
                &v91));
      v39 = objc_retain(v91);
      objc_release(v37);
      if ( v38 )
      {
        v90 = 0LL;
        v40 = -[TSUZipFileWriter initWithZipFileArchive:error:](
                objc_alloc(&OBJC_CLASS___TSUZipFileWriter),
                "initWithZipFileArchive:error:",
                v38,
                &v90);
        v41 = objc_retain(v90);
        zipArchiveWriter = v25->_zipArchiveWriter;
        v25->_zipArchiveWriter = v40;
LABEL_26:
        objc_release(zipArchiveWriter);
        if ( v25->_zipArchiveWriter )
        {
          v52 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
          v53 = dispatch_queue_create("TSPPackageWriter.Error", v52);
          errorQueue = v25->_errorQueue;
          v25->_errorQueue = (OS_dispatch_queue *)v53;
          objc_release(errorQueue);
          objc_release(v52);
          v25->_isOpened = 1;
        }
        else
        {
          if ( UnsafePointer != -1 )
            dispatch_once(&UnsafePointer, &stru_1001D11E8);
          v55 = objc_retain(UnsafePointer);
          if ( os_log_type_enabled((os_log_t)v55, OS_LOG_TYPE_ERROR) )
          {
            v76 = v35;
            v57 = (objc_class *)objc_opt_class(v41);
            v58 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v57)));
            v59 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "domain"));
            v60 = objc_msgSend(v41, "code");
            v61 = (unsigned int)objc_msgSend(v41, "tsp_isRecoverable");
            v62 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "tsp_hintsDescription"));
            v63 = v62;
            v64 = &stru_1001DFAA0;
            *(_DWORD *)buf = 138413826;
            v95 = v76;
            v65 = v61 == 0;
            v35 = v76;
            v96 = 2114;
            if ( !v65 )
              v64 = CFSTR("recoverable=YES, ");
            v97 = v58;
            v98 = 2114;
            v99 = v59;
            v100 = 2048;
            v101 = v60;
            v102 = 2114;
            v103 = v64;
            v104 = 2114;
            v105 = v62;
            v106 = 2112;
            v107 = v41;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              (os_log_t)v55,
              OS_LOG_TYPE_ERROR,
              "Failed to create ZIP archive writer. zipArchiveURL=%@, error=errorClass=%{public}@, domain=%{public}@, cod"
              "e=%zd, %{public}@hints=%{public}@ (%@) ",
              buf,
              0x48u);
            objc_release(v63);
            objc_release(v59);
            objc_release(v58);
            objc_release(v58);
          }
          objc_release(v55);
          objc_release(v25);
          v25 = 0LL;
        }
        objc_release(v38);
        objc_release(v39);
        objc_release(v35);
        goto LABEL_33;
      }
      if ( v39 )
      {
        if ( UnsafePointer != -1 )
          dispatch_once(&UnsafePointer, &stru_1001D11C8);
        v49 = objc_retain(UnsafePointer);
        if ( os_log_type_enabled((os_log_t)v49, OS_LOG_TYPE_ERROR) )
        {
          v66 = (objc_class *)objc_opt_class(v39);
          v67 = v35;
          v68 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v66)));
          v69 = objc_retainAutoreleasedReturnValue(objc_msgSend(v39, "domain"));
          v70 = objc_msgSend(v39, "code");
          v71 = (unsigned int)objc_msgSend(v39, "tsp_isRecoverable");
          v72 = objc_retainAutoreleasedReturnValue(objc_msgSend(v39, "tsp_hintsDescription"));
          v73 = v72;
          v74 = &stru_1001DFAA0;
          *(_DWORD *)buf = 138413826;
          v95 = v67;
          v65 = v71 == 0;
          v35 = v67;
          v96 = 2114;
          if ( !v65 )
            v74 = CFSTR("recoverable=YES, ");
          v97 = v68;
          v98 = 2114;
          v99 = v69;
          v100 = 2048;
          v101 = v70;
          v102 = 2114;
          v103 = v74;
          v104 = 2114;
          v105 = v72;
          v106 = 2112;
          v107 = v39;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)v49,
            OS_LOG_TYPE_ERROR,
            "Error reading zip archive, zipArchiveURL=%@, errorClass=%{public}@, domain=%{public}@, code=%zd, %{public}@h"
            "ints=%{public}@ (%@) ",
            buf,
            0x48u);
          objc_release(v73);
          objc_release(v69);
          objc_release(v68);
          objc_release(v68);
        }
        objc_release(v49);
        v37 = v39;
        goto LABEL_25;
      }
      if ( UnsafePointer != -1 )
        dispatch_once(&UnsafePointer, &stru_1001D11A8);
      v50 = UnsafePointer;
      if ( os_log_type_enabled((os_log_t)UnsafePointer, OS_LOG_TYPE_ERROR) )
        sub_100168E30(v35, v50);
    }
    v37 = 0LL;
    goto LABEL_25;
  }
  v43 = +[TSUAssertionHandler _atomicIncrementAssertCount](
          &OBJC_CLASS___TSUAssertionHandler,
          "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001D1188);
  v44 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_100168EA8(v43, v44);
  v45 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[TSPPackageWriter initWithURL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProper"
            "ties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:orig"
            "inalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:]"));
  v46 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/src/TSPPackageWriter.mm"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v45,
    v46,
    156LL,
    0LL,
    "Don't support writing to non-file URLs");
  objc_release(v46);
  objc_release(v45);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  if ( a18 )
  {
    v47 = self;
    v48 = 0LL;
    *a18 = objc_autorelease(
             objc_retainAutoreleasedReturnValue(
               +[NSError tsp_saveDocumentErrorWithUserInfo:](
                 &OBJC_CLASS___NSError,
                 "tsp_saveDocumentErrorWithUserInfo:",
                 0LL)));
  }
  else
  {
    v48 = 0LL;
    v47 = self;
  }
LABEL_37:
  objc_release(v81);
  objc_release(obj);
  objc_release(v80);
  objc_release(v79);
  objc_release(v86);
  objc_release(v78);
  objc_release(v77);
  objc_release(v83);
  objc_release(v85);
  objc_release(v84);
  objc_release(v88);
  objc_release(v47);
  return v48;
}